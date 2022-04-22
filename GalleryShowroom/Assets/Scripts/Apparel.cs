using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Apparel : MonoBehaviour
{

    public Button TryButton;//{ get; set; }
    public Texture2D MyTexture;// { get; set; }
    // Start is called before the first frame update
    void Start()
    {
        TryButton.onClick.AddListener(OnOufit);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnOufit()
    {
        CollabManager.Instance.ChangeMyAvatarShirt(MyTexture);
    }
}
