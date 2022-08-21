// using UnityEngine;

// namespace Microsoft.MixedReality.Toolkit.Utilities.Solvers
// {
//     public class PersonalRadialView : MonoBehaviour
//     {
//         public GameObject wristMenu;

//         [SerializeField]
//         [Tooltip("Min distance from eye to position element around, i.e. the sphere radius")]
//         private float minDistance = 1f;
//         public float value;

//         /// <summary>
//         /// Min distance from eye to position element around, i.e. the sphere radius.
//         /// </summary>
//         public float MinDistance
//         {
//             get => minDistance;
//             set => minDistance = value;
//         }

//         [SerializeField]
//         [Tooltip("Max distance from eye to element")]
//         private float maxDistance = 2f;

//         /// <summary>
//         /// Max distance from eye to element.
//         /// </summary>
//         public float MaxDistance
//         {
//             get => maxDistance;
//             set => maxDistance = value;
//         }
//     }
// }

using System.Collections;
using System.Collections.Generic;
using Microsoft.MixedReality.Toolkit.UI;
using UnityEngine;

public class PersonalRadialView : MonoBehaviour
{
    [SerializeField]
    public GameObject wristMenu;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void changeScale(float scaleSize)
    {
        Vector3 wristMenu = transform.localScale;
        transform.localScale = new Vector3(wristMenu.x*scaleSize,wristMenu.y*scaleSize, wristMenu.z*scaleSize );
    }
}
    // public void closerMenu(float delta)
    // {
    //     // access "radialsolver" and call 
    //     float valueIntial = GetComponent<solver>().maxDistance;
        
    //     wristMenu.RadialView
    //     go.get.solver.RadialView.maxDistance ;
    //     delta = set.solver.RadialView.maxDistance ;
    // } 

