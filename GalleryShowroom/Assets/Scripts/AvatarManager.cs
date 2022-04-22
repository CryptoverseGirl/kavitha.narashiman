//using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AvatarManager : MonoBehaviour
{
    public SkinnedMeshRenderer  Shirt_Mesh;// { get; set; }
    
    void Update()
    {
        
    }

    public void changeShirt(Texture2D tex)
    {
        Shirt_Mesh.material.mainTexture = tex;
    }
}
