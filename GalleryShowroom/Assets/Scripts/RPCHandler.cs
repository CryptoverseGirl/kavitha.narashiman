using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class RPCHandler : MonoBehaviourPun
{
    public static RPCHandler Instance;// MyProperty { get; set; }

    public delegate void OnApparalChange(int Apparel_index, int PlayerId);

    public OnApparalChange onapparelChangeObj;// { get; set; }
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

    public void RegisterForApparelChange(OnApparalChange newapparelobj)
    {
        onapparelChangeObj -= newapparelobj;
        onapparelChangeObj += newapparelobj;
    }

    public void SendApparelChangeEvent(int Apparel_index,int PlayerId)
    {
        this.photonView.RPC("ChangeApparelOverNetwork", RpcTarget.Others,Apparel_index, PlayerId);
    }

    [PunRPC]
    public void ChangeApparelOverNetwork(int Apparel_index, int PlayerId)
    {
        onapparelChangeObj(Apparel_index, PlayerId);
    }


}
