using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player
{
    public int PlayerId;// { get; set; }
    public string Name;// { get; set; }
    public GameObject Character;// { get; set; }
 
}

public class CollabManager : MonoBehaviour
{

    public static CollabManager Instance;// { get; set; }
    public GameObject MyCharacter;
    public Player MyPlayer; //{ get; set; }
    public Dictionary<int, Player> Playerdict = new Dictionary<int, Player>();
    // Start is called before the first frame update
    void Start()
    {
        if (Instance==null)
        {
            Instance = this;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ChangeMyAvatarShirt(Texture2D tex)
    {
        MyCharacter.GetComponent<AvatarManager>().changeShirt(tex);

        // Send Rpc event
    }


}
