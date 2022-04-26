using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ApparalManager: MonoBehaviour
{

    public static ApparalManager Instance;// { get; set; }


    [SerializeField]
    public List<Apparel> DemoApparelList;
    // Start is called before the first frame update
    private void Awake()
    {
        if (Instance==null)
        {
            Instance =this;
        }
        
    }

    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ChangeApparel()
    {

    }
}
