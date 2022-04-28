using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using RootMotion.FinalIK;
using RootMotion.Demos;
public class CustomPhotonAvatar : MonoBehaviour
{
    
    // Start is called before the first frame update
    void Start()
    {

        PhotonView photonView = this.GetComponent<PhotonView>();
        if (photonView.IsMine)
        {
            GameObject avatarParent = GameObject.FindGameObjectWithTag("AvatarParent");
            this.transform.parent = avatarParent.transform;
            this.transform.localPosition = new Vector3(0, 0, -0.106f);
            MapTransforms(avatarParent.GetComponent<OvrAvatarMapper>(), this.GetComponent<VRIK>());
            Player tempPlayer = new Player();
            tempPlayer.PlayerId = photonView.Owner.ActorNumber;
            tempPlayer.Character = this.gameObject;
            CollabManager.Instance.MyPlayer = tempPlayer;
            //Shirt_Material.mainTexture = tex;
            //Send Rpc To other users with photon view id
        }
        else
        {
            this.GetComponent<VRIK>().enabled = false;
            this.GetComponent<VRIKAvatarScaleCalibrationOculus>().enabled = false;
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
                CollabManager.Instance.Playerdict[tempPlayer.PlayerId] = tempPlayer;
            }
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }


    public void MapTransforms(OvrAvatarMapper AvatarMapObj, VRIK vrikObj)
    {
        
        vrikObj.solver.spine.headTarget = AvatarMapObj.HeadTrasnform;
        vrikObj.solver.leftArm.target = AvatarMapObj.LeftHandAnchor;
        vrikObj.solver.rightArm.target = AvatarMapObj.RightHandAnchor;
    }
}
