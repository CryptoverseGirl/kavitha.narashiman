using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExitGames.Demos.DemoPunVoice;

public class Player
{
    public int PlayerId;// { get; set; }
    public string Name;// { get; set; }
    public GameObject Character;// { get; set; }

}

public class CollabManager : MonoBehaviour
{

    public static CollabManager Instance;// { get; set; }

    public Player MyPlayer; //{ get; set; }
    public Dictionary<int, Player> Playerdict = new Dictionary<int, Player>();

    public GameObject PUN;// { get; set; }

    public int AvatarIndex;// { get; set; }
    // Start is called before the first frame update
    void Start()
    {
        if (Instance==null)
        {
            Instance = this;
        }
        //OnAvatarSelection(0);
        RPCHandler.Instance.RegisterForApparelChange(ApparelChangeOerNetwork);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ChangeMyAvatarShirt(Texture2D tex,Apparel apparelObj)
    {
        MyPlayer.Character.GetComponent<AvatarManager>().changeShirt(tex);


        // Send Rpc event
        int apparelindex = ApparalManager.Instance.DemoApparelList.IndexOf(apparelObj);
        RPCHandler.Instance.SendApparelChangeEvent(apparelindex, MyPlayer.PlayerId);

    }

    public void ApparelChangeOerNetwork(int Apparel_index, int player_Id)
    {
      
        Playerdict[player_Id].Character.GetComponent<AvatarManager>().changeShirt(ApparalManager.Instance.DemoApparelList[Apparel_index].MyTexture);
    }

    public void OnAvatarSelection(int index)
    {
        AvatarIndex = index;
        PUN.SetActive(true);
    }

}
