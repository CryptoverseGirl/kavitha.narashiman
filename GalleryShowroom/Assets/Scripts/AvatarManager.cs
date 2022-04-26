using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AvatarManager : MonoBehaviour
{
    public SkinnedMeshRenderer  Shirt_Mesh;// { get; set; }
    // Start is called before the first frame update
    void Start()
    {
        if (this.GetComponent<CustomPhotonAvatar>()!=null)
        {
            return;
        }
     
        PhotonView photonView = this.GetComponent<PhotonView>();
        if (photonView.IsMine)
        {
            GameObject OrthographicCamera = Camera.main.gameObject;
            if (OrthographicCamera.name == "OrthographicCamera")
            {
                OrthographicCamera.gameObject.SetActive(false);
            }
            Player tempPlayer = new Player();
            tempPlayer.PlayerId = photonView.Owner.ActorNumber;
            tempPlayer.Character = this.gameObject;
            CollabManager.Instance.MyPlayer = tempPlayer;
            //Shirt_Material.mainTexture = tex;
            //Send Rpc To other users with photon view id
        }
        else
        {
            if (!CollabManager.Instance.Playerdict.ContainsKey(photonView.Owner.ActorNumber))
            {
                Player tempPlayer = new Player();
                tempPlayer.PlayerId = photonView.Owner.ActorNumber;
                tempPlayer.Character = this.gameObject;
                CollabManager.Instance.Playerdict.Add(tempPlayer.PlayerId, tempPlayer);
            }
            else
            {
                Player tempPlayer = new Player();
                tempPlayer.PlayerId = photonView.Owner.ActorNumber;
                tempPlayer.Character = this.gameObject;
                CollabManager.Instance.Playerdict[tempPlayer.PlayerId]= tempPlayer;
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void changeShirt(Texture2D tex)
    {
        Shirt_Mesh.material.mainTexture = tex;
    }
}
