#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { &p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3*, T4*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4)
	{
		R ret;
		void* params[4] = { p1, &p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// LibTessDotNet.DefaultTypePool`1<System.Object>
struct DefaultTypePool_1_t21660DBAD98411D7DAB65F258E9433630904C28C;
// LibTessDotNet.DefaultTypePool`1<LibTessDotNet.MeshUtils/Edge>
struct DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC;
// LibTessDotNet.DefaultTypePool`1<LibTessDotNet.MeshUtils/Face>
struct DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2;
// LibTessDotNet.DefaultTypePool`1<LibTessDotNet.MeshUtils/Vertex>
struct DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797;
// LibTessDotNet.DefaultTypePool`1<LibTessDotNet.Tess/ActiveRegion>
struct DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4;
// LibTessDotNet.Dict`1<System.Object>
struct Dict_1_tB4EF350228E51A0C08B2A91EDA4DFA2B5C459971;
// LibTessDotNet.Dict`1<LibTessDotNet.Tess/ActiveRegion>
struct Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3;
// System.Collections.Generic.IDictionary`2<System.Type,LibTessDotNet.ITypePool>
struct IDictionary_2_t378E428EFD0077FCE9C551DB1EA9EA35B21079DD;
// System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>
struct IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D;
// LibTessDotNet.Dict`1/LessOrEqual<System.Object>
struct LessOrEqual_tD5C2576F19D2F54AAE5769D424704F1378625EF0;
// LibTessDotNet.PriorityHeap`1/LessOrEqual<System.Object>
struct LessOrEqual_tACCF8A4A6BCA3EF8A2CF760C7F6FF7EFDF874918;
// LibTessDotNet.PriorityHeap`1/LessOrEqual<LibTessDotNet.MeshUtils/Vertex>
struct LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00;
// LibTessDotNet.Dict`1/LessOrEqual<LibTessDotNet.Tess/ActiveRegion>
struct LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6;
// LibTessDotNet.Dict`1/Node<System.Object>
struct Node_t0AEE6C83E99DF1A68C017C4B2204AD846B874C62;
// LibTessDotNet.Dict`1/Node<LibTessDotNet.Tess/ActiveRegion>
struct Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C;
// LibTessDotNet.PriorityHeap`1<LibTessDotNet.MeshUtils/Vertex>
struct PriorityHeap_1_t398DFD3BBC195F75DD5945E4AEC8492BE85E9112;
// LibTessDotNet.PriorityQueue`1<System.Object>
struct PriorityQueue_1_t42E30E5548EA5BB6D15DE0703FBDDD4E46A7B60F;
// LibTessDotNet.PriorityQueue`1<LibTessDotNet.MeshUtils/Vertex>
struct PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29;
// System.Collections.Generic.Queue`1<LibTessDotNet.MeshUtils/Edge>
struct Queue_1_tD16569FEC985028AAF7AD07E944FCFFBE7567730;
// System.Collections.Generic.Queue`1<LibTessDotNet.MeshUtils/Face>
struct Queue_1_t0EF83785A32509AFAD1DECBB79B203F1F8428FFC;
// System.Collections.Generic.Queue`1<LibTessDotNet.MeshUtils/Vertex>
struct Queue_1_tFF89653FA4C031D1CC2D18DF7EE31A9F2DAD19FE;
// System.Collections.Generic.Queue`1<LibTessDotNet.Tess/ActiveRegion>
struct Queue_1_t8C81B5CA8ECFD8367AB4A971F48B5EFEE7966102;
// LibTessDotNet.ContourVertex[]
struct ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// LibTessDotNet.MeshUtils/Vertex[]
struct VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// LibTessDotNet.CombineCallback
struct CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300;
// LibTessDotNet.DefaultPool
struct DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// LibTessDotNet.IPool
struct IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// LibTessDotNet.Mesh
struct Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// LibTessDotNet.NullPool
struct NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// LibTessDotNet.Tess
struct Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// LibTessDotNet.MeshUtils/Edge
struct Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966;
// LibTessDotNet.MeshUtils/Face
struct Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF;
// LibTessDotNet.MeshUtils/Vertex
struct Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE;
// LibTessDotNet.Tess/ActiveRegion
struct ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47;

IL2CPP_EXTERN_C RuntimeClass* ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t8914FBB527D049FFD6FB295C98F49CBAF7B186A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral293D055F04D51798E7BDD8DFB0C6C9C093FD520C;
IL2CPP_EXTERN_C String_t* _stringLiteral82FF2E4A5CEA89085A6360163E86CB104CFC8CE8;
IL2CPP_EXTERN_C String_t* _stringLiteralB5998705EF12506344D61B653EA1DAE85B97BC9C;
IL2CPP_EXTERN_C String_t* _stringLiteralCBE43F3C9BFF18FB637B9A0C90F66040718CEC64;
IL2CPP_EXTERN_C String_t* _stringLiteralD195D0425B8FE98A04F1BE9F8F30B202B33C80ED;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_m43508E569160C2A3E7DA45E1F1D79E39FB284DA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_mACE98FC86076F9666446FDFABE8886B476CB355F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_mD0D7A1710066169ADDCAFEB0B216912C0DD413A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultTypePool_1__ctor_mDA80429C65AA20C2F3DB6E607E3A74FB000D1E1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_Find_mAF7B5CED2C433BD5E9EADDC6604B3A28BCE7CDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_InsertBefore_m6E4EB99BCD65F825FE9F1D3FF6EA413B8A1A2390_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_Insert_m76E76003906032D37BF3554CA41AAAFB38240615_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_Min_m733D0E65ECF2770E0BBF7268E415BC20E49A0A84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1_Remove_m90AD4E7F57974AB8886C9391C251C694CD9644C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dict_1__ctor_m427AF97AEE0D0E94038FF1767C2B9CC4826187B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Geom_IsWindingInside_m106D4C32D3416A550AB5EFF5F14D383CE1516187_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Geom_VertLeq_mE7BBC948CD971E64A0D22328A3CAAD4B2CE82342_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m0C9ECBA50066B4287A5C6AF8BDD616D679FACD68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mC3881C0DB54C1395F2AA8B02B199660E7A13CF69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_m51643A8B0CFF1C5F247F180DE113F73632C86394_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisMesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3_m1D44A8B041AE4181C7B292F16B2DA3AF32201ADB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Get_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mDCF83D1496BC5908C2927A7A4A16EAB4D0A7A83A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_mFA2E73AC4C38C33A3B82FFD67567F8B23126846D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mD253C242EE50DA3A963061B04B5C0F76174A7F16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mCBF8A3BE3FE8D567704098C7CE31463CB659E7AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Register_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m5CEFA21D8E4256C408CFD2BB3153FFE5533FA1AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m710088A37FD53E25E588FE38C58925E766A12636_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mA77008E61FBAF47FB130D63EA30E8AA4AAB285FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mEC2EBA4AAAC749589103B708D725DDE53E018172_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisMesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3_m004092468BAD1B30CA23F97F4F00ED69D37E7C01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Node_get_Key_m58310B9ADF76612AC49364C8C8EBFC7E9C61B74D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_ExtractMin_mA9DE27CCFA570258EA0038D5BFE479BD73407330_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Init_mB8A3092D595F065F1DBD85FD3BBC2034DEFB35FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Minimum_mBB08F7A95861A7EE0B1797475861279AAAC0CD86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Remove_mCE983D6C8585217615CAF8DFEE8401A32DEA7BCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1__ctor_m75EE6938A947B7F5F22DCD1E25CFBA4E8936D5EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess_CheckForIntersect_m6E3C5BACC9119C3B4E692F87207EC7BB1FDAC299_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess_ConnectLeftDegenerate_mCE3996479265A6D3BF1AA3A2B149CF90B05FDA44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess_EdgeLeq_m91CF47985D9D5E386D03C685E54E650DA722307A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tess_InitPriorityQ_m63D067CB8781EC6E25D43FEFFDD0DC407E2875EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t72340EDEA801D6F0C644242E26AA4B29BD6E99CC 
{
};

// LibTessDotNet.DefaultTypePool`1<LibTessDotNet.MeshUtils/Edge>
struct DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC  : public RuntimeObject
{
	// System.Collections.Generic.Queue`1<T> LibTessDotNet.DefaultTypePool`1::_pool
	Queue_1_tD16569FEC985028AAF7AD07E944FCFFBE7567730* ____pool_0;
};

// LibTessDotNet.DefaultTypePool`1<LibTessDotNet.MeshUtils/Face>
struct DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2  : public RuntimeObject
{
	// System.Collections.Generic.Queue`1<T> LibTessDotNet.DefaultTypePool`1::_pool
	Queue_1_t0EF83785A32509AFAD1DECBB79B203F1F8428FFC* ____pool_0;
};

// LibTessDotNet.DefaultTypePool`1<LibTessDotNet.MeshUtils/Vertex>
struct DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797  : public RuntimeObject
{
	// System.Collections.Generic.Queue`1<T> LibTessDotNet.DefaultTypePool`1::_pool
	Queue_1_tFF89653FA4C031D1CC2D18DF7EE31A9F2DAD19FE* ____pool_0;
};

// LibTessDotNet.DefaultTypePool`1<LibTessDotNet.Tess/ActiveRegion>
struct DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4  : public RuntimeObject
{
	// System.Collections.Generic.Queue`1<T> LibTessDotNet.DefaultTypePool`1::_pool
	Queue_1_t8C81B5CA8ECFD8367AB4A971F48B5EFEE7966102* ____pool_0;
};

// LibTessDotNet.Dict`1<LibTessDotNet.Tess/ActiveRegion>
struct Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3  : public RuntimeObject
{
	// LibTessDotNet.Dict`1/LessOrEqual<TValue> LibTessDotNet.Dict`1::_leq
	LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6* ____leq_0;
	// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1::_head
	Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* ____head_1;
};

// LibTessDotNet.Dict`1/Node<System.Object>
struct Node_t0AEE6C83E99DF1A68C017C4B2204AD846B874C62  : public RuntimeObject
{
	// TValue LibTessDotNet.Dict`1/Node::_key
	RuntimeObject* ____key_0;
	// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1/Node::_prev
	Node_t0AEE6C83E99DF1A68C017C4B2204AD846B874C62* ____prev_1;
	// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1/Node::_next
	Node_t0AEE6C83E99DF1A68C017C4B2204AD846B874C62* ____next_2;
};

// LibTessDotNet.Dict`1/Node<LibTessDotNet.Tess/ActiveRegion>
struct Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C  : public RuntimeObject
{
	// TValue LibTessDotNet.Dict`1/Node::_key
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ____key_0;
	// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1/Node::_prev
	Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* ____prev_1;
	// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1/Node::_next
	Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* ____next_2;
};

// LibTessDotNet.PriorityQueue`1<LibTessDotNet.MeshUtils/Vertex>
struct PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29  : public RuntimeObject
{
	// LibTessDotNet.PriorityHeap`1/LessOrEqual<TValue> LibTessDotNet.PriorityQueue`1::_leq
	LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00* ____leq_0;
	// LibTessDotNet.PriorityHeap`1<TValue> LibTessDotNet.PriorityQueue`1::_heap
	PriorityHeap_1_t398DFD3BBC195F75DD5945E4AEC8492BE85E9112* ____heap_1;
	// TValue[] LibTessDotNet.PriorityQueue`1::_keys
	VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* ____keys_2;
	// System.Int32[] LibTessDotNet.PriorityQueue`1::_order
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____order_3;
	// System.Int32 LibTessDotNet.PriorityQueue`1::_size
	int32_t ____size_4;
	// System.Int32 LibTessDotNet.PriorityQueue`1::_max
	int32_t ____max_5;
	// System.Boolean LibTessDotNet.PriorityQueue`1::_initialized
	bool ____initialized_6;
};
struct Il2CppArrayBounds;

// LibTessDotNet.Geom
struct Geom_t2AECC4CF177AE64EA77403838222CB0163C19CA7  : public RuntimeObject
{
};

// LibTessDotNet.IPool
struct IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90  : public RuntimeObject
{
};

// LibTessDotNet.Mesh
struct Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3  : public RuntimeObject
{
	// LibTessDotNet.MeshUtils/Vertex LibTessDotNet.Mesh::_vHead
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ____vHead_0;
	// LibTessDotNet.MeshUtils/Face LibTessDotNet.Mesh::_fHead
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ____fHead_1;
	// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Mesh::_eHead
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____eHead_2;
	// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Mesh::_eHeadSym
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____eHeadSym_3;
};

// LibTessDotNet.MeshUtils
struct MeshUtils_t1C2AEE8E7D579C135509E319DA5D1651345F049A  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// LibTessDotNet.MeshUtils/Face
struct Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF  : public RuntimeObject
{
	// LibTessDotNet.MeshUtils/Face LibTessDotNet.MeshUtils/Face::_prev
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ____prev_0;
	// LibTessDotNet.MeshUtils/Face LibTessDotNet.MeshUtils/Face::_next
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ____next_1;
	// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Face::_anEdge
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____anEdge_2;
	// LibTessDotNet.MeshUtils/Face LibTessDotNet.MeshUtils/Face::_trail
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ____trail_3;
	// System.Int32 LibTessDotNet.MeshUtils/Face::_n
	int32_t ____n_4;
	// System.Boolean LibTessDotNet.MeshUtils/Face::_marked
	bool ____marked_5;
	// System.Boolean LibTessDotNet.MeshUtils/Face::_inside
	bool ____inside_6;
};

// LibTessDotNet.Tess/ActiveRegion
struct ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47  : public RuntimeObject
{
	// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Tess/ActiveRegion::_eUp
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____eUp_0;
	// LibTessDotNet.Dict`1/Node<LibTessDotNet.Tess/ActiveRegion> LibTessDotNet.Tess/ActiveRegion::_nodeUp
	Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* ____nodeUp_1;
	// System.Int32 LibTessDotNet.Tess/ActiveRegion::_windingNumber
	int32_t ____windingNumber_2;
	// System.Boolean LibTessDotNet.Tess/ActiveRegion::_inside
	bool ____inside_3;
	// System.Boolean LibTessDotNet.Tess/ActiveRegion::_sentinel
	bool ____sentinel_4;
	// System.Boolean LibTessDotNet.Tess/ActiveRegion::_dirty
	bool ____dirty_5;
	// System.Boolean LibTessDotNet.Tess/ActiveRegion::_fixUpperEdge
	bool ____fixUpperEdge_6;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// LibTessDotNet.DefaultPool
struct DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04  : public IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90
{
	// System.Collections.Generic.IDictionary`2<System.Type,LibTessDotNet.ITypePool> LibTessDotNet.DefaultPool::_register
	RuntimeObject* ____register_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// LibTessDotNet.NullPool
struct NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D  : public IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90
{
};

// LibTessDotNet.PQHandle
struct PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 
{
	// System.Int32 LibTessDotNet.PQHandle::_handle
	int32_t ____handle_1;
};

struct PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_StaticFields
{
	// System.Int32 LibTessDotNet.PQHandle::Invalid
	int32_t ___Invalid_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// LibTessDotNet.Vec3
struct Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 
{
	// System.Single LibTessDotNet.Vec3::X
	float ___X_1;
	// System.Single LibTessDotNet.Vec3::Y
	float ___Y_2;
	// System.Single LibTessDotNet.Vec3::Z
	float ___Z_3;
};

struct Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_StaticFields
{
	// LibTessDotNet.Vec3 LibTessDotNet.Vec3::Zero
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___Zero_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// LibTessDotNet.MeshUtils/EdgePair
struct EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E 
{
	// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/EdgePair::_e
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____e_0;
	// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/EdgePair::_eSym
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____eSym_1;
};
// Native definition for P/Invoke marshalling of LibTessDotNet.MeshUtils/EdgePair
struct EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_pinvoke
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____e_0;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____eSym_1;
};
// Native definition for COM marshalling of LibTessDotNet.MeshUtils/EdgePair
struct EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_com
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____e_0;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____eSym_1;
};

// LibTessDotNet.ContourVertex
struct ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F 
{
	// LibTessDotNet.Vec3 LibTessDotNet.ContourVertex::Position
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___Position_0;
	// System.Int32 LibTessDotNet.ContourVertex::Data
	int32_t ___Data_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// LibTessDotNet.Tess
struct Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8  : public RuntimeObject
{
	// LibTessDotNet.IPool LibTessDotNet.Tess::_pool
	IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ____pool_0;
	// LibTessDotNet.Mesh LibTessDotNet.Tess::_mesh
	Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* ____mesh_1;
	// LibTessDotNet.Vec3 LibTessDotNet.Tess::_normal
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ____normal_2;
	// LibTessDotNet.Vec3 LibTessDotNet.Tess::_sUnit
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ____sUnit_3;
	// LibTessDotNet.Vec3 LibTessDotNet.Tess::_tUnit
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ____tUnit_4;
	// System.Single LibTessDotNet.Tess::_bminX
	float ____bminX_5;
	// System.Single LibTessDotNet.Tess::_bminY
	float ____bminY_6;
	// System.Single LibTessDotNet.Tess::_bmaxX
	float ____bmaxX_7;
	// System.Single LibTessDotNet.Tess::_bmaxY
	float ____bmaxY_8;
	// LibTessDotNet.WindingRule LibTessDotNet.Tess::_windingRule
	int32_t ____windingRule_9;
	// LibTessDotNet.Dict`1<LibTessDotNet.Tess/ActiveRegion> LibTessDotNet.Tess::_dict
	Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* ____dict_10;
	// LibTessDotNet.PriorityQueue`1<LibTessDotNet.MeshUtils/Vertex> LibTessDotNet.Tess::_pq
	PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* ____pq_11;
	// LibTessDotNet.MeshUtils/Vertex LibTessDotNet.Tess::_event
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ____event_12;
	// LibTessDotNet.CombineCallback LibTessDotNet.Tess::_combineCallback
	CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* ____combineCallback_13;
	// LibTessDotNet.ContourVertex[] LibTessDotNet.Tess::_vertices
	ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* ____vertices_14;
	// System.Int32 LibTessDotNet.Tess::_vertexCount
	int32_t ____vertexCount_15;
	// System.Int32[] LibTessDotNet.Tess::_elements
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____elements_16;
	// System.Int32 LibTessDotNet.Tess::_elementCount
	int32_t ____elementCount_17;
	// System.Single LibTessDotNet.Tess::SUnitX
	float ___SUnitX_19;
	// System.Single LibTessDotNet.Tess::SUnitY
	float ___SUnitY_20;
	// System.Single LibTessDotNet.Tess::SentinelCoord
	float ___SentinelCoord_21;
	// System.Boolean LibTessDotNet.Tess::NoEmptyPolygons
	bool ___NoEmptyPolygons_22;
	// System.Boolean LibTessDotNet.Tess::UsePooling
	bool ___UsePooling_23;
};

// LibTessDotNet.MeshUtils/Edge
struct Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966  : public RuntimeObject
{
	// LibTessDotNet.MeshUtils/EdgePair LibTessDotNet.MeshUtils/Edge::_pair
	EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E ____pair_0;
	// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::_next
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____next_1;
	// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::_Sym
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____Sym_2;
	// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::_Onext
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____Onext_3;
	// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::_Lnext
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____Lnext_4;
	// LibTessDotNet.MeshUtils/Vertex LibTessDotNet.MeshUtils/Edge::_Org
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ____Org_5;
	// LibTessDotNet.MeshUtils/Face LibTessDotNet.MeshUtils/Edge::_Lface
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ____Lface_6;
	// LibTessDotNet.Tess/ActiveRegion LibTessDotNet.MeshUtils/Edge::_activeRegion
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ____activeRegion_7;
	// System.Int32 LibTessDotNet.MeshUtils/Edge::_winding
	int32_t ____winding_8;
};

// LibTessDotNet.MeshUtils/Vertex
struct Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE  : public RuntimeObject
{
	// LibTessDotNet.MeshUtils/Vertex LibTessDotNet.MeshUtils/Vertex::_prev
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ____prev_0;
	// LibTessDotNet.MeshUtils/Vertex LibTessDotNet.MeshUtils/Vertex::_next
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ____next_1;
	// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Vertex::_anEdge
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ____anEdge_2;
	// LibTessDotNet.Vec3 LibTessDotNet.MeshUtils/Vertex::_coords
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ____coords_3;
	// System.Single LibTessDotNet.MeshUtils/Vertex::_s
	float ____s_4;
	// System.Single LibTessDotNet.MeshUtils/Vertex::_t
	float ____t_5;
	// LibTessDotNet.PQHandle LibTessDotNet.MeshUtils/Vertex::_pqHandle
	PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 ____pqHandle_6;
	// System.Int32 LibTessDotNet.MeshUtils/Vertex::_n
	int32_t ____n_7;
	// System.Int32 LibTessDotNet.MeshUtils/Vertex::_data
	int32_t ____data_8;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// LibTessDotNet.PriorityHeap`1/LessOrEqual<LibTessDotNet.MeshUtils/Vertex>
struct LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00  : public MulticastDelegate_t
{
};

// LibTessDotNet.Dict`1/LessOrEqual<LibTessDotNet.Tess/ActiveRegion>
struct LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// LibTessDotNet.CombineCallback
struct CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300  : public MulticastDelegate_t
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// LibTessDotNet.ContourVertex[]
struct ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF  : public RuntimeArray
{
	ALIGN_FIELD (8) ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F m_Items[1];

	inline ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F value)
	{
		m_Items[index] = value;
	}
};
// LibTessDotNet.MeshUtils/Vertex[]
struct VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362  : public RuntimeArray
{
	ALIGN_FIELD (8) Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* m_Items[1];

	inline Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void LibTessDotNet.DefaultTypePool`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultTypePool_1__ctor_mE6C73DA3C09AE80A82DBAC13B58687BAC64F3BF0_gshared (DefaultTypePool_1_t21660DBAD98411D7DAB65F258E9433630904C28C* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Dict`1<System.Object>::Remove(LibTessDotNet.Dict`1/Node<TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dict_1_Remove_m1ECF60568C517A776F7601E3FC80096503B38B24_gshared (Dict_1_tB4EF350228E51A0C08B2A91EDA4DFA2B5C459971* __this, Node_t0AEE6C83E99DF1A68C017C4B2204AD846B874C62* ___node0, const RuntimeMethod* method) ;
// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1<System.Object>::InsertBefore(LibTessDotNet.Dict`1/Node<TValue>,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t0AEE6C83E99DF1A68C017C4B2204AD846B874C62* Dict_1_InsertBefore_mC0A504DA48ED4EDE834676C75F5B374B8F871E72_gshared (Dict_1_tB4EF350228E51A0C08B2A91EDA4DFA2B5C459971* __this, Node_t0AEE6C83E99DF1A68C017C4B2204AD846B874C62* ___node0, RuntimeObject* ___key1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.PriorityQueue`1<System.Object>::Remove(LibTessDotNet.PQHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1_Remove_m200379F3FF5FAA8F71A8883350DB734E1B79877D_gshared (PriorityQueue_1_t42E30E5548EA5BB6D15DE0703FBDDD4E46A7B60F* __this, PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 ___handle0, const RuntimeMethod* method) ;
// LibTessDotNet.PQHandle LibTessDotNet.PriorityQueue`1<System.Object>::Insert(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 PriorityQueue_1_Insert_mE16B478F9ECD296053127A29F40B879A7C319D7B_gshared (PriorityQueue_1_t42E30E5548EA5BB6D15DE0703FBDDD4E46A7B60F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1<System.Object>::Find(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t0AEE6C83E99DF1A68C017C4B2204AD846B874C62* Dict_1_Find_m20EA586631ADA2B67D42BAC427E0362364B6FCC8_gshared (Dict_1_tB4EF350228E51A0C08B2A91EDA4DFA2B5C459971* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// TValue LibTessDotNet.Dict`1/Node<System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Node_get_Key_m7C2669092F4A0E59D5F38ADC148ADC476A3B15EE_gshared_inline (Node_t0AEE6C83E99DF1A68C017C4B2204AD846B874C62* __this, const RuntimeMethod* method) ;
// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1<System.Object>::Insert(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t0AEE6C83E99DF1A68C017C4B2204AD846B874C62* Dict_1_Insert_m8B82DB58FA4552C4915EF5A9A98DFD1DBE942FD8_gshared (Dict_1_tB4EF350228E51A0C08B2A91EDA4DFA2B5C459971* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Dict`1/LessOrEqual<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessOrEqual__ctor_m8C2D651B99415D1A29A1DF26A61FDC854060FE62_gshared (LessOrEqual_tD5C2576F19D2F54AAE5769D424704F1378625EF0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Dict`1<System.Object>::.ctor(LibTessDotNet.Dict`1/LessOrEqual<TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dict_1__ctor_m5A633CA25D0F151B8F3D2B1A1B1D6B646D331639_gshared (Dict_1_tB4EF350228E51A0C08B2A91EDA4DFA2B5C459971* __this, LessOrEqual_tD5C2576F19D2F54AAE5769D424704F1378625EF0* ___leq0, const RuntimeMethod* method) ;
// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1<System.Object>::Min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_t0AEE6C83E99DF1A68C017C4B2204AD846B874C62* Dict_1_Min_m9C4C6411D4A1EAE059F73DF889310FE968EE6536_gshared (Dict_1_tB4EF350228E51A0C08B2A91EDA4DFA2B5C459971* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.PriorityHeap`1/LessOrEqual<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LessOrEqual__ctor_mD0C7C7B0CAA7E57BE551C37CD673590934FD7462_gshared (LessOrEqual_tACCF8A4A6BCA3EF8A2CF760C7F6FF7EFDF874918* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.PriorityQueue`1<System.Object>::.ctor(System.Int32,LibTessDotNet.PriorityHeap`1/LessOrEqual<TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1__ctor_mE971438DA807EB747612C28B18E91E2C3997FFDA_gshared (PriorityQueue_1_t42E30E5548EA5BB6D15DE0703FBDDD4E46A7B60F* __this, int32_t ___initialSize0, LessOrEqual_tACCF8A4A6BCA3EF8A2CF760C7F6FF7EFDF874918* ___leq1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.PriorityQueue`1<System.Object>::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1_Init_mD3AB01D87573BC810FF540F1FD7D0D7890C21D2D_gshared (PriorityQueue_1_t42E30E5548EA5BB6D15DE0703FBDDD4E46A7B60F* __this, const RuntimeMethod* method) ;
// TValue LibTessDotNet.PriorityQueue`1<System.Object>::Minimum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PriorityQueue_1_Minimum_mC5489757AE11BE9308F890B98F117EB2E894ED35_gshared (PriorityQueue_1_t42E30E5548EA5BB6D15DE0703FBDDD4E46A7B60F* __this, const RuntimeMethod* method) ;
// TValue LibTessDotNet.PriorityQueue`1<System.Object>::ExtractMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PriorityQueue_1_ExtractMin_m89E64C99B02E621CD929E60183C36C0E8866E75E_gshared (PriorityQueue_1_t42E30E5548EA5BB6D15DE0703FBDDD4E46A7B60F* __this, const RuntimeMethod* method) ;

// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// LibTessDotNet.MeshUtils/Vertex LibTessDotNet.MeshUtils/Edge::get__Dst()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) ;
// System.Boolean LibTessDotNet.Geom::VertLeq(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertLeq_mE7BBC948CD971E64A0D22328A3CAAD4B2CE82342 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___lhs0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___rhs1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Geom::Swap(LibTessDotNet.MeshUtils/Vertex&,LibTessDotNet.MeshUtils/Vertex&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_Swap_mF1BF315BDD0CCE157F11D2325C6FB678A9DEE8C2 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** ___a0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** ___b1, const RuntimeMethod* method) ;
// System.Single LibTessDotNet.Geom::EdgeEval(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_EdgeEval_mB6C57DD6CD0D3BF013C0CD43FF261990DC6B2877 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___u0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___v1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___w2, const RuntimeMethod* method) ;
// System.Single LibTessDotNet.Geom::Interpolate(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_Interpolate_m462E865539490EC497238D37757D5B7612136EFE (float ___a0, float ___x1, float ___b2, float ___y3, const RuntimeMethod* method) ;
// System.Single LibTessDotNet.Geom::EdgeSign(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_EdgeSign_mB4FA2C46F053680D96F80EC78C1616104DDA7396 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___u0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___v1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___w2, const RuntimeMethod* method) ;
// System.Boolean LibTessDotNet.Geom::TransLeq(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_TransLeq_mD986638B504ED47D00C8DE53E8CE32F4302C8D27 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___lhs0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___rhs1, const RuntimeMethod* method) ;
// System.Single LibTessDotNet.Geom::TransEval(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_TransEval_m6C5AE3DD54B8068F892F51ED75DBA436E117616D (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___u0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___v1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___w2, const RuntimeMethod* method) ;
// System.Single LibTessDotNet.Geom::TransSign(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_TransSign_m2B513FE27DD49C99AAE8C43797BB03AA6ADF8FF1 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___u0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___v1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___w2, const RuntimeMethod* method) ;
// LibTessDotNet.MeshUtils/EdgePair LibTessDotNet.MeshUtils/EdgePair::Create(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E EdgePair_Create_m3F7AB1D97F9DF48F860105103A5C3D7123425BB5 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) ;
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils::MakeEdge(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* MeshUtils_MakeEdge_m1699F3B699E821E75175D17FE28526F043ADC0F8 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eNext1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.MeshUtils::MakeVertex(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_MakeVertex_m3655C1643604311C2F67F703838DA092D21C2396 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eOrig1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___vNext2, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.MeshUtils::MakeFace(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_MakeFace_m882D1B35A23EE5787A5645508629A26FA3399B5F (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eOrig1, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___fNext2, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.MeshUtils::KillVertex(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillVertex_mA2A67ECE8C48C9D70991F3DC52F939C4DC6290B7 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___vDel1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___newOrg2, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.MeshUtils::KillFace(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Face,LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillFace_m5CFE7B05BE7AE10BADCC541F082A53D0E1BB09DF (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___fDel1, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___newLFace2, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.MeshUtils::Splice(LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_Splice_m84F1345F121381EA1F7B81AFBDB804859C8151AC (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___a0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___b1, const RuntimeMethod* method) ;
// LibTessDotNet.MeshUtils/Face LibTessDotNet.MeshUtils/Edge::get__Rface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) ;
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::get__Oprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.MeshUtils::KillEdge(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillEdge_mD5B1B251756025E5FAE82F5D4D1B3909F561C542 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eDel1, const RuntimeMethod* method) ;
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Mesh::AddEdgeVertex(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_AddEdgeVertex_mBC2ECB3C7B23CEC78EB69BF83E3E49D215676054 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eOrg1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.MeshUtils/Edge::set__Dst(LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Dst_mFC8AB632C1CBED66AC767230468FC1E30DB1682E (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___value0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.MeshUtils/Edge::set__Rface(LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Rface_m9A4FEC09331777DF1DC569EE7C8759B96CBD7FBF (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___value0, const RuntimeMethod* method) ;
// System.Int32 LibTessDotNet.MeshUtils/Face::get_VertsCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Face_get_VertsCount_m0EB6E9229787A15369C28423410F895E7F211AC0 (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* __this, const RuntimeMethod* method) ;
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::get__Lprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) ;
// System.Boolean LibTessDotNet.Geom::VertCCW(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertCCW_mEA573613B7401C08853FB28CE752FC311FCE866C (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___u0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___v1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___w2, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Mesh::Delete(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eDel1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, const RuntimeMethod* method) ;
// System.Single LibTessDotNet.Vec3::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Vec3::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Vec3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3__ctor_m937D1DD303AF7D61662A455E5F208BDB81106B7C (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.String LibTessDotNet.Vec3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vec3_ToString_mA4CE6161CB8D3BC075B3E5D9B94AAFABCB0B2878 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.DefaultTypePool`1<LibTessDotNet.MeshUtils/Vertex>::.ctor()
inline void DefaultTypePool_1__ctor_m43508E569160C2A3E7DA45E1F1D79E39FB284DA4 (DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797*, const RuntimeMethod*))DefaultTypePool_1__ctor_mE6C73DA3C09AE80A82DBAC13B58687BAC64F3BF0_gshared)(__this, method);
}
// System.Void LibTessDotNet.DefaultTypePool`1<LibTessDotNet.MeshUtils/Face>::.ctor()
inline void DefaultTypePool_1__ctor_mD0D7A1710066169ADDCAFEB0B216912C0DD413A5 (DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2*, const RuntimeMethod*))DefaultTypePool_1__ctor_mE6C73DA3C09AE80A82DBAC13B58687BAC64F3BF0_gshared)(__this, method);
}
// System.Void LibTessDotNet.DefaultTypePool`1<LibTessDotNet.MeshUtils/Edge>::.ctor()
inline void DefaultTypePool_1__ctor_mACE98FC86076F9666446FDFABE8886B476CB355F (DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC*, const RuntimeMethod*))DefaultTypePool_1__ctor_mE6C73DA3C09AE80A82DBAC13B58687BAC64F3BF0_gshared)(__this, method);
}
// System.Void LibTessDotNet.DefaultTypePool`1<LibTessDotNet.Tess/ActiveRegion>::.ctor()
inline void DefaultTypePool_1__ctor_mDA80429C65AA20C2F3DB6E607E3A74FB000D1E1F (DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4*, const RuntimeMethod*))DefaultTypePool_1__ctor_mE6C73DA3C09AE80A82DBAC13B58687BAC64F3BF0_gshared)(__this, method);
}
// System.Void LibTessDotNet.IPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPool__ctor_m29B732D498A77485F01CFD88F4572DF3E3C57F41 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.MeshUtils/Edge::EnsureFirst(LibTessDotNet.MeshUtils/Edge&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_EnsureFirst_m0366E62FD8DF5FAA7049A7175F6E9391AE9DAFD7 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** ___e0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.MeshUtils/EdgePair::Reset(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EdgePair_Reset_mE735EE154A3C3F31761F1094EA0A5F0BC6072482 (EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) ;
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::get__Rprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Rprev_m7B1E8686D5C2FDE826371F597917BD4B5313D174 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Dict`1<LibTessDotNet.Tess/ActiveRegion>::Remove(LibTessDotNet.Dict`1/Node<TValue>)
inline void Dict_1_Remove_m90AD4E7F57974AB8886C9391C251C694CD9644C9 (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* __this, Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* ___node0, const RuntimeMethod* method)
{
	((  void (*) (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*, Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C*, const RuntimeMethod*))Dict_1_Remove_m1ECF60568C517A776F7601E3FC80096503B38B24_gshared)(__this, ___node0, method);
}
// LibTessDotNet.Tess/ActiveRegion LibTessDotNet.Tess::RegionAbove(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, const RuntimeMethod* method) ;
// LibTessDotNet.Tess/ActiveRegion LibTessDotNet.Tess::RegionBelow(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, const RuntimeMethod* method) ;
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Mesh::Connect(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eOrg1, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eDst2, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::FixUpperEdge(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_FixUpperEdge_m1E4236D65D3FB0321FA1FB71BAE30806B18D889B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___newEdge1, const RuntimeMethod* method) ;
// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1<LibTessDotNet.Tess/ActiveRegion>::InsertBefore(LibTessDotNet.Dict`1/Node<TValue>,TValue)
inline Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* Dict_1_InsertBefore_m6E4EB99BCD65F825FE9F1D3FF6EA413B8A1A2390 (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* __this, Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* ___node0, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___key1, const RuntimeMethod* method)
{
	return ((  Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* (*) (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*, Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C*, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*, const RuntimeMethod*))Dict_1_InsertBefore_mC0A504DA48ED4EDE834676C75F5B374B8F871E72_gshared)(__this, ___node0, ___key1, method);
}
// System.Boolean LibTessDotNet.Geom::IsWindingInside(LibTessDotNet.WindingRule,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_IsWindingInside_m106D4C32D3416A550AB5EFF5F14D383CE1516187 (int32_t ___rule0, int32_t ___n1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::DeleteRegion(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::FinishRegion(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_FinishRegion_m57A9A719924F3022E03232E2E94228DF7CB5E787 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Mesh::Splice(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eOrg1, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eDst2, const RuntimeMethod* method) ;
// LibTessDotNet.Tess/ActiveRegion LibTessDotNet.Tess::AddRegionBelow(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_AddRegionBelow_m0275D421E35EBBEFF2546E2DDEFBBB1061EC700D (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regAbove0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eNewUp1, const RuntimeMethod* method) ;
// System.Boolean LibTessDotNet.Tess::CheckForRightSplice(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForRightSplice_m73E6E5E3B926500479750597286CAEAA603E4F58 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regUp0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Geom::AddWinding(LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_AddWinding_m34E8125D7C665C3E4A86181F6C00198E5CECC458 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eDst0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eSrc1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::WalkDirtyRegions(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_WalkDirtyRegions_m5988A5D583346F08BC85EADEEF4D527752099025 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regUp0, const RuntimeMethod* method) ;
// System.Single LibTessDotNet.Geom::VertL1dist(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_VertL1dist_m227D6A93A82591E5BAC24F2182EE458419985B15 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___u0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___v1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::VertexWeights(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_VertexWeights_mF6D88112E28CC0EA4628811DCE8F19EEDAC3D66E (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___isect0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___org1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___dst2, float* ___w03, float* ___w14, const RuntimeMethod* method) ;
// System.Int32 LibTessDotNet.CombineCallback::Invoke(LibTessDotNet.Vec3,System.Int32[],System.Single[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CombineCallback_Invoke_m7500D256E412AE15988DD1BB818FFBEEDCA11357_inline (CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___position0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___data1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights2, const RuntimeMethod* method) ;
// System.Boolean LibTessDotNet.Geom::VertEq(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertEq_m1D35078974A61EB63BDFBEA3750713443FC0DB7D (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___lhs0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___rhs1, const RuntimeMethod* method) ;
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Mesh::SplitEdge(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eOrg1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.PriorityQueue`1<LibTessDotNet.MeshUtils/Vertex>::Remove(LibTessDotNet.PQHandle)
inline void PriorityQueue_1_Remove_mCE983D6C8585217615CAF8DFEE8401A32DEA7BCA (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* __this, PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 ___handle0, const RuntimeMethod* method)
{
	((  void (*) (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*, PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043, const RuntimeMethod*))PriorityQueue_1_Remove_m200379F3FF5FAA8F71A8883350DB734E1B79877D_gshared)(__this, ___handle0, method);
}
// System.Void LibTessDotNet.Tess::SpliceMergeVertices(LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SpliceMergeVertices_m3C1B73AB8A2F388421982B310359B74FE1F73290 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___e10, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___e21, const RuntimeMethod* method) ;
// System.Single System.Math::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Min_mB41DB89BB991289571A046270A924C0EEAA2C4BC (float ___val10, float ___val21, const RuntimeMethod* method) ;
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mB1131EAD9E03519D13D246CE96B599561C784957 (float ___val10, float ___val21, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Geom::EdgeIntersect(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_EdgeIntersect_m4B2487736018F6B130C380BFEDE17003F730DABE (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___o10, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___d11, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___o22, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___d23, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___v4, const RuntimeMethod* method) ;
// LibTessDotNet.Tess/ActiveRegion LibTessDotNet.Tess::TopLeftRegion(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_TopLeftRegion_m2FA0AA199DAE05530C04BFFE790A3CB8C83C7F86 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, const RuntimeMethod* method) ;
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Tess::FinishLeftRegions(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Tess_FinishLeftRegions_mF89D4A8EE348FDEEFC78715A74EE7029282EAE82 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regFirst0, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regLast1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::AddRightEdges(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regUp0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eFirst1, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eLast2, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eTopLeft3, bool ___cleanUp4, const RuntimeMethod* method) ;
// LibTessDotNet.Tess/ActiveRegion LibTessDotNet.Tess::TopRightRegion(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_TopRightRegion_m4D715D95F08BD411FFABF59F4DB4FBD0EDC2E1E7 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, const RuntimeMethod* method) ;
// LibTessDotNet.PQHandle LibTessDotNet.PriorityQueue`1<LibTessDotNet.MeshUtils/Vertex>::Insert(TValue)
inline PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___value0, const RuntimeMethod* method)
{
	return ((  PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 (*) (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*, const RuntimeMethod*))PriorityQueue_1_Insert_mE16B478F9ECD296053127A29F40B879A7C319D7B_gshared)(__this, ___value0, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::GetIntersectData(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_GetIntersectData_m1EF3ED6C6834CACC2C20DD246F414D854BBFF6CE (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___isect0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___orgUp1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___dstUp2, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___orgLo3, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___dstLo4, const RuntimeMethod* method) ;
// System.Boolean LibTessDotNet.Tess::CheckForLeftSplice(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForLeftSplice_m925CF548154D6A922CEDDDEE3B1662F409D874C2 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regUp0, const RuntimeMethod* method) ;
// System.Boolean LibTessDotNet.Tess::CheckForIntersect(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForIntersect_m6E3C5BACC9119C3B4E692F87207EC7BB1FDAC299 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regUp0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::SweepEvent(LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SweepEvent_mFF232770963565BD3D3DE22E97A67DCA3E749FED (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___vEvent0, const RuntimeMethod* method) ;
// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1<LibTessDotNet.Tess/ActiveRegion>::Find(TValue)
inline Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* Dict_1_Find_mAF7B5CED2C433BD5E9EADDC6604B3A28BCE7CDB4 (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___key0, const RuntimeMethod* method)
{
	return ((  Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* (*) (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*, const RuntimeMethod*))Dict_1_Find_m20EA586631ADA2B67D42BAC427E0362364B6FCC8_gshared)(__this, ___key0, method);
}
// TValue LibTessDotNet.Dict`1/Node<LibTessDotNet.Tess/ActiveRegion>::get_Key()
inline ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Node_get_Key_m58310B9ADF76612AC49364C8C8EBFC7E9C61B74D_inline (Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* __this, const RuntimeMethod* method)
{
	return ((  ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* (*) (Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C*, const RuntimeMethod*))Node_get_Key_m7C2669092F4A0E59D5F38ADC148ADC476A3B15EE_gshared_inline)(__this, method);
}
// System.Void LibTessDotNet.Tess::ConnectLeftDegenerate(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectLeftDegenerate_mCE3996479265A6D3BF1AA3A2B149CF90B05FDA44 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regUp0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___vEvent1, const RuntimeMethod* method) ;
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::get__Dnext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Dnext_m7E374925C354672842CF18197905942EA76DD7E7 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::ComputeWinding(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeWinding_m08BB6BDD14F5FD6820052F3833AE916DB6D05B50 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::ConnectLeftVertex(LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectLeftVertex_m7F52A092CDE293862BE3773D7ABA7BF7C6A3121B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___vEvent0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::ConnectRightVertex(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectRightVertex_m014FFD2EC782394218F750F2EA57A40F05E133C6 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regUp0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eBottomLeft1, const RuntimeMethod* method) ;
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Mesh::MakeEdge(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_MakeEdge_m885B759356861633DA4414A5DE88F5FDB0E8B8E7 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) ;
// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1<LibTessDotNet.Tess/ActiveRegion>::Insert(TValue)
inline Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* Dict_1_Insert_m76E76003906032D37BF3554CA41AAAFB38240615 (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___key0, const RuntimeMethod* method)
{
	return ((  Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* (*) (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*, const RuntimeMethod*))Dict_1_Insert_m8B82DB58FA4552C4915EF5A9A98DFD1DBE942FD8_gshared)(__this, ___key0, method);
}
// System.Void LibTessDotNet.Dict`1/LessOrEqual<LibTessDotNet.Tess/ActiveRegion>::.ctor(System.Object,System.IntPtr)
inline void LessOrEqual__ctor_m6556B77F3E07A00B7AFD15AD07B0EF86306BFF0C (LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6*, RuntimeObject*, intptr_t, const RuntimeMethod*))LessOrEqual__ctor_m8C2D651B99415D1A29A1DF26A61FDC854060FE62_gshared)(__this, ___object0, ___method1, method);
}
// System.Void LibTessDotNet.Dict`1<LibTessDotNet.Tess/ActiveRegion>::.ctor(LibTessDotNet.Dict`1/LessOrEqual<TValue>)
inline void Dict_1__ctor_m427AF97AEE0D0E94038FF1767C2B9CC4826187B7 (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* __this, LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6* ___leq0, const RuntimeMethod* method)
{
	((  void (*) (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*, LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6*, const RuntimeMethod*))Dict_1__ctor_m5A633CA25D0F151B8F3D2B1A1B1D6B646D331639_gshared)(__this, ___leq0, method);
}
// System.Void LibTessDotNet.Tess::AddSentinel(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddSentinel_m88FB52E7CF92ECB9C1FF491E64B3CC5E076413D3 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, float ___smin0, float ___smax1, float ___t2, const RuntimeMethod* method) ;
// LibTessDotNet.Dict`1/Node<TValue> LibTessDotNet.Dict`1<LibTessDotNet.Tess/ActiveRegion>::Min()
inline Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* Dict_1_Min_m733D0E65ECF2770E0BBF7268E415BC20E49A0A84 (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* __this, const RuntimeMethod* method)
{
	return ((  Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* (*) (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*, const RuntimeMethod*))Dict_1_Min_m9C4C6411D4A1EAE059F73DF889310FE968EE6536_gshared)(__this, method);
}
// System.Void LibTessDotNet.PriorityHeap`1/LessOrEqual<LibTessDotNet.MeshUtils/Vertex>::.ctor(System.Object,System.IntPtr)
inline void LessOrEqual__ctor_m354C7C326099DA31A5715796F9CCA76DE5067731 (LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00*, RuntimeObject*, intptr_t, const RuntimeMethod*))LessOrEqual__ctor_mD0C7C7B0CAA7E57BE551C37CD673590934FD7462_gshared)(__this, ___object0, ___method1, method);
}
// System.Void LibTessDotNet.PriorityQueue`1<LibTessDotNet.MeshUtils/Vertex>::.ctor(System.Int32,LibTessDotNet.PriorityHeap`1/LessOrEqual<TValue>)
inline void PriorityQueue_1__ctor_m75EE6938A947B7F5F22DCD1E25CFBA4E8936D5EF (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* __this, int32_t ___initialSize0, LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00* ___leq1, const RuntimeMethod* method)
{
	((  void (*) (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*, int32_t, LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00*, const RuntimeMethod*))PriorityQueue_1__ctor_mE971438DA807EB747612C28B18E91E2C3997FFDA_gshared)(__this, ___initialSize0, ___leq1, method);
}
// System.Void LibTessDotNet.PriorityQueue`1<LibTessDotNet.MeshUtils/Vertex>::Init()
inline void PriorityQueue_1_Init_mB8A3092D595F065F1DBD85FD3BBC2034DEFB35FF (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* __this, const RuntimeMethod* method)
{
	((  void (*) (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*, const RuntimeMethod*))PriorityQueue_1_Init_mD3AB01D87573BC810FF540F1FD7D0D7890C21D2D_gshared)(__this, method);
}
// System.Void LibTessDotNet.Tess::RemoveDegenerateEdges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_RemoveDegenerateEdges_m6F88AF680A0B3E2FF9A8E274FF475C1EDDF025CC (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::InitPriorityQ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_InitPriorityQ_m63D067CB8781EC6E25D43FEFFDD0DC407E2875EA (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::RemoveDegenerateFaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_RemoveDegenerateFaces_m48F4E1549170751BB553A45C7BB4E54351E15BB4 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::InitEdgeDict()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_InitEdgeDict_mEB38032A27EBED333E70337D99F8E0AC09C131A8 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
// TValue LibTessDotNet.PriorityQueue`1<LibTessDotNet.MeshUtils/Vertex>::Minimum()
inline Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* PriorityQueue_1_Minimum_mBB08F7A95861A7EE0B1797475861279AAAC0CD86 (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* __this, const RuntimeMethod* method)
{
	return ((  Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* (*) (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*, const RuntimeMethod*))PriorityQueue_1_Minimum_mC5489757AE11BE9308F890B98F117EB2E894ED35_gshared)(__this, method);
}
// TValue LibTessDotNet.PriorityQueue`1<LibTessDotNet.MeshUtils/Vertex>::ExtractMin()
inline Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* PriorityQueue_1_ExtractMin_mA9DE27CCFA570258EA0038D5BFE479BD73407330 (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* __this, const RuntimeMethod* method)
{
	return ((  Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* (*) (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*, const RuntimeMethod*))PriorityQueue_1_ExtractMin_m89E64C99B02E621CD929E60183C36C0E8866E75E_gshared)(__this, method);
}
// System.Void LibTessDotNet.Tess::DoneEdgeDict()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DoneEdgeDict_m35196774C9960C4A2D2ACCD938DB0453C43B9C9E (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::DonePriorityQ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DonePriorityQ_m34351749D862BF10E730498E5ED9D502CE00D784 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.DefaultPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPool__ctor_m8D4477214AEE206E11961F64854E616FD3530CFD (DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::.ctor(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess__ctor_mB2C19DD684CEED784DAD77FAD79561ABF4CADDAE (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.NullPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullPool__ctor_mA9794AE1C4917832E71637ADA7B763D44F1AADCA (NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Vec3::Sub(LibTessDotNet.Vec3&,LibTessDotNet.Vec3&,LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Sub_mAEFED9A4A944DF3B135130969858756B276D13B9 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___lhs0, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___rhs1, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___result2, const RuntimeMethod* method) ;
// System.Int32 LibTessDotNet.Vec3::LongAxis(LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vec3_LongAxis_m53C80DC4AF421775497E0380A929DE96F6F7B630 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___v0, const RuntimeMethod* method) ;
// System.Single LibTessDotNet.MeshUtils::FaceArea(LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MeshUtils_FaceArea_m198368582A4CEE00E33907F41C30CDFD5F6841C4 (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___f0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Vec3::Neg(LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Neg_m53588C86DA46DF9A1BDCCFD8BC4BC9DC247452FC (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___v0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::ComputeNormal(LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeNormal_m1DB2CFB644D7D35AA0F4495759B28458EA3A6907 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___norm0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Vec3::Dot(LibTessDotNet.Vec3&,LibTessDotNet.Vec3&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Dot_m647C7F8C0E0ECAF41BAC6A18C704BBBC70AFC94E (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___u0, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___v1, float* ___dot2, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::CheckOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_CheckOrientation_m78C0B1CA1B88D946FDA7CC447C44BA91BFFAF469 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
// System.Boolean LibTessDotNet.Geom::EdgeGoesLeft(LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_EdgeGoesLeft_m5E05BD16E96A711C609F88596B1A82738C75605F (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___e0, const RuntimeMethod* method) ;
// System.Boolean LibTessDotNet.Geom::EdgeGoesRight(LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_EdgeGoesRight_m4CC6F9D21B8B72CFA3FC7C772DC801973B774721 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___e0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::TessellateMonoRegion(LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_TessellateMonoRegion_m35381625E13B132270623B38CB8AFA019884D894 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___face0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Mesh::ZapFace(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_ZapFace_m40CB995646CB70A3A752001902CF3A1289CC54E7 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___fZap1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Mesh::MergeConvexFaces(LibTessDotNet.IPool,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_MergeConvexFaces_m2452DF609E5F2842DCB3645A91AE38474D00189C (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, int32_t ___maxVertsPerFace1, const RuntimeMethod* method) ;
// System.Int32 LibTessDotNet.Tess::GetNeighbourFace(LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tess_GetNeighbourFace_mDB66AF9ED49A800C6FD51072F7EC9E2DFFACFAA8 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___edge0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::AddContourInternal(System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>,LibTessDotNet.ContourOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContourInternal_mFA84BAC9BB6FA1F7C40B76E6ABC6C7884C666887 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, RuntimeObject* ___vertices0, int32_t ___forceOrientation1, const RuntimeMethod* method) ;
// System.Single LibTessDotNet.Tess::SignedArea(System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tess_SignedArea_m81A5A96E18FE237FDA733FE8D31601142341B841 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, RuntimeObject* ___vertices0, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::ProjectPolygon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ProjectPolygon_m22515E7F73F680B50FAC5ADD3BF5290A0FD719B2 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::ComputeInterior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeInterior_mFE484BBCF4AAC36E007A54416314B53790663CAD (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::SetWindingNumber(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SetWindingNumber_m67CAD83A0441F03AC00A0988396CC22DDD93FE6A (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, int32_t ___value0, bool ___keepOnlyBoundary1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::TessellateInterior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_TessellateInterior_mE0300B408C5AF3A1D2ED19A02BA39F5BC21DAD91 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::OutputContours()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_OutputContours_mB354AD2F98DCFE73A074C5443A000FDDCBBD0D83 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.Tess::OutputPolymesh(LibTessDotNet.ElementType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_OutputPolymesh_mD26B103CACD185034776B1CC6869212B40665B7B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, int32_t ___elementType0, int32_t ___polySize1, const RuntimeMethod* method) ;
// System.Void LibTessDotNet.ContourVertex::.ctor(LibTessDotNet.Vec3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContourVertex__ctor_mD7A2D36CB7A7980370FD0F66BF3B59325C1EC9EB (ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___position0, int32_t ___data1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String LibTessDotNet.ContourVertex::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContourVertex_ToString_m5C3892C4BC39F4D753E1B3B02B82242DD4FAD66A (ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean LibTessDotNet.Geom::IsWindingInside(LibTessDotNet.WindingRule,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_IsWindingInside_m106D4C32D3416A550AB5EFF5F14D383CE1516187 (int32_t ___rule0, int32_t ___n1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___rule0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_0023;
			}
			case 2:
			{
				goto IL_0028;
			}
			case 3:
			{
				goto IL_002d;
			}
			case 4:
			{
				goto IL_0032;
			}
		}
	}
	{
		goto IL_0041;
	}

IL_001c:
	{
		int32_t L_1 = ___n1;
		return (bool)((((int32_t)((int32_t)(L_1&1))) == ((int32_t)1))? 1 : 0);
	}

IL_0023:
	{
		int32_t L_2 = ___n1;
		return (bool)((!(((uint32_t)L_2) <= ((uint32_t)0)))? 1 : 0);
	}

IL_0028:
	{
		int32_t L_3 = ___n1;
		return (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
	}

IL_002d:
	{
		int32_t L_4 = ___n1;
		return (bool)((((int32_t)L_4) < ((int32_t)0))? 1 : 0);
	}

IL_0032:
	{
		int32_t L_5 = ___n1;
		if ((((int32_t)L_5) >= ((int32_t)2)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_6 = ___n1;
		return (bool)((((int32_t)((((int32_t)L_6) > ((int32_t)((int32_t)-2)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_003f:
	{
		return (bool)1;
	}

IL_0041:
	{
		Exception_t* L_7 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCBE43F3C9BFF18FB637B9A0C90F66040718CEC64)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Geom_IsWindingInside_m106D4C32D3416A550AB5EFF5F14D383CE1516187_RuntimeMethod_var)));
	}
}
// System.Boolean LibTessDotNet.Geom::VertCCW(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertCCW_mEA573613B7401C08853FB28CE752FC311FCE866C (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___u0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___v1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___w2, const RuntimeMethod* method) 
{
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___u0;
		NullCheck(L_0);
		float L_1 = L_0->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___v1;
		NullCheck(L_2);
		float L_3 = L_2->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___w2;
		NullCheck(L_4);
		float L_5 = L_4->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___v1;
		NullCheck(L_6);
		float L_7 = L_6->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = ___w2;
		NullCheck(L_8);
		float L_9 = L_8->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___u0;
		NullCheck(L_10);
		float L_11 = L_10->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = ___w2;
		NullCheck(L_12);
		float L_13 = L_12->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = ___u0;
		NullCheck(L_14);
		float L_15 = L_14->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = ___v1;
		NullCheck(L_16);
		float L_17 = L_16->____t_5;
		return (bool)((((int32_t)((!(((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, ((float)il2cpp_codegen_subtract(L_3, L_5)))), ((float)il2cpp_codegen_multiply(L_7, ((float)il2cpp_codegen_subtract(L_9, L_11)))))), ((float)il2cpp_codegen_multiply(L_13, ((float)il2cpp_codegen_subtract(L_15, L_17))))))) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean LibTessDotNet.Geom::VertEq(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertEq_m1D35078974A61EB63BDFBEA3750713443FC0DB7D (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___lhs0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___rhs1, const RuntimeMethod* method) 
{
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___lhs0;
		NullCheck(L_0);
		float L_1 = L_0->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___rhs1;
		NullCheck(L_2);
		float L_3 = L_2->____s_4;
		if ((!(((float)L_1) == ((float)L_3))))
		{
			goto IL_001d;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___lhs0;
		NullCheck(L_4);
		float L_5 = L_4->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___rhs1;
		NullCheck(L_6);
		float L_7 = L_6->____t_5;
		return (bool)((((float)L_5) == ((float)L_7))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
// System.Boolean LibTessDotNet.Geom::VertLeq(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_VertLeq_mE7BBC948CD971E64A0D22328A3CAAD4B2CE82342 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___lhs0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___rhs1, const RuntimeMethod* method) 
{
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___lhs0;
		NullCheck(L_0);
		float L_1 = L_0->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___rhs1;
		NullCheck(L_2);
		float L_3 = L_2->____s_4;
		if ((((float)L_1) < ((float)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___lhs0;
		NullCheck(L_4);
		float L_5 = L_4->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___rhs1;
		NullCheck(L_6);
		float L_7 = L_6->____s_4;
		if ((!(((float)L_5) == ((float)L_7))))
		{
			goto IL_002e;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = ___lhs0;
		NullCheck(L_8);
		float L_9 = L_8->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___rhs1;
		NullCheck(L_10);
		float L_11 = L_10->____t_5;
		return (bool)((((int32_t)((!(((float)L_9) <= ((float)L_11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_002e:
	{
		return (bool)0;
	}

IL_0030:
	{
		return (bool)1;
	}
}
// System.Single LibTessDotNet.Geom::EdgeEval(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_EdgeEval_mB6C57DD6CD0D3BF013C0CD43FF261990DC6B2877 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___u0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___v1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___w2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___v1;
		NullCheck(L_0);
		float L_1 = L_0->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___u0;
		NullCheck(L_2);
		float L_3 = L_2->____s_4;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___w2;
		NullCheck(L_4);
		float L_5 = L_4->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___v1;
		NullCheck(L_6);
		float L_7 = L_6->____s_4;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_1;
		if ((!(((float)((float)il2cpp_codegen_add(L_8, L_9))) > ((float)(0.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		float L_10 = V_0;
		float L_11 = V_1;
		if ((!(((float)L_10) < ((float)L_11))))
		{
			goto IL_004c;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = ___v1;
		NullCheck(L_12);
		float L_13 = L_12->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = ___u0;
		NullCheck(L_14);
		float L_15 = L_14->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = ___u0;
		NullCheck(L_16);
		float L_17 = L_16->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = ___w2;
		NullCheck(L_18);
		float L_19 = L_18->____t_5;
		float L_20 = V_0;
		float L_21 = V_0;
		float L_22 = V_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_13, L_15)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_17, L_19)), ((float)(L_20/((float)il2cpp_codegen_add(L_21, L_22))))))));
	}

IL_004c:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_23 = ___v1;
		NullCheck(L_23);
		float L_24 = L_23->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_25 = ___w2;
		NullCheck(L_25);
		float L_26 = L_25->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_27 = ___w2;
		NullCheck(L_27);
		float L_28 = L_27->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_29 = ___u0;
		NullCheck(L_29);
		float L_30 = L_29->____t_5;
		float L_31 = V_1;
		float L_32 = V_0;
		float L_33 = V_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_24, L_26)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_28, L_30)), ((float)(L_31/((float)il2cpp_codegen_add(L_32, L_33))))))));
	}

IL_006e:
	{
		return (0.0f);
	}
}
// System.Single LibTessDotNet.Geom::EdgeSign(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_EdgeSign_mB4FA2C46F053680D96F80EC78C1616104DDA7396 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___u0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___v1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___w2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___v1;
		NullCheck(L_0);
		float L_1 = L_0->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___u0;
		NullCheck(L_2);
		float L_3 = L_2->____s_4;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___w2;
		NullCheck(L_4);
		float L_5 = L_4->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___v1;
		NullCheck(L_6);
		float L_7 = L_6->____s_4;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_1;
		if ((!(((float)((float)il2cpp_codegen_add(L_8, L_9))) > ((float)(0.0f)))))
		{
			goto IL_0046;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___v1;
		NullCheck(L_10);
		float L_11 = L_10->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = ___w2;
		NullCheck(L_12);
		float L_13 = L_12->____t_5;
		float L_14 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = ___v1;
		NullCheck(L_15);
		float L_16 = L_15->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = ___u0;
		NullCheck(L_17);
		float L_18 = L_17->____t_5;
		float L_19 = V_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_11, L_13)), L_14)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_16, L_18)), L_19))));
	}

IL_0046:
	{
		return (0.0f);
	}
}
// System.Boolean LibTessDotNet.Geom::TransLeq(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_TransLeq_mD986638B504ED47D00C8DE53E8CE32F4302C8D27 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___lhs0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___rhs1, const RuntimeMethod* method) 
{
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___lhs0;
		NullCheck(L_0);
		float L_1 = L_0->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___rhs1;
		NullCheck(L_2);
		float L_3 = L_2->____t_5;
		if ((((float)L_1) < ((float)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___lhs0;
		NullCheck(L_4);
		float L_5 = L_4->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___rhs1;
		NullCheck(L_6);
		float L_7 = L_6->____t_5;
		if ((!(((float)L_5) == ((float)L_7))))
		{
			goto IL_002e;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = ___lhs0;
		NullCheck(L_8);
		float L_9 = L_8->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___rhs1;
		NullCheck(L_10);
		float L_11 = L_10->____s_4;
		return (bool)((((int32_t)((!(((float)L_9) <= ((float)L_11)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_002e:
	{
		return (bool)0;
	}

IL_0030:
	{
		return (bool)1;
	}
}
// System.Single LibTessDotNet.Geom::TransEval(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_TransEval_m6C5AE3DD54B8068F892F51ED75DBA436E117616D (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___u0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___v1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___w2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___v1;
		NullCheck(L_0);
		float L_1 = L_0->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___u0;
		NullCheck(L_2);
		float L_3 = L_2->____t_5;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___w2;
		NullCheck(L_4);
		float L_5 = L_4->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___v1;
		NullCheck(L_6);
		float L_7 = L_6->____t_5;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_1;
		if ((!(((float)((float)il2cpp_codegen_add(L_8, L_9))) > ((float)(0.0f)))))
		{
			goto IL_006e;
		}
	}
	{
		float L_10 = V_0;
		float L_11 = V_1;
		if ((!(((float)L_10) < ((float)L_11))))
		{
			goto IL_004c;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = ___v1;
		NullCheck(L_12);
		float L_13 = L_12->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = ___u0;
		NullCheck(L_14);
		float L_15 = L_14->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = ___u0;
		NullCheck(L_16);
		float L_17 = L_16->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = ___w2;
		NullCheck(L_18);
		float L_19 = L_18->____s_4;
		float L_20 = V_0;
		float L_21 = V_0;
		float L_22 = V_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_13, L_15)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_17, L_19)), ((float)(L_20/((float)il2cpp_codegen_add(L_21, L_22))))))));
	}

IL_004c:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_23 = ___v1;
		NullCheck(L_23);
		float L_24 = L_23->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_25 = ___w2;
		NullCheck(L_25);
		float L_26 = L_25->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_27 = ___w2;
		NullCheck(L_27);
		float L_28 = L_27->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_29 = ___u0;
		NullCheck(L_29);
		float L_30 = L_29->____s_4;
		float L_31 = V_1;
		float L_32 = V_0;
		float L_33 = V_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_24, L_26)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_28, L_30)), ((float)(L_31/((float)il2cpp_codegen_add(L_32, L_33))))))));
	}

IL_006e:
	{
		return (0.0f);
	}
}
// System.Single LibTessDotNet.Geom::TransSign(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_TransSign_m2B513FE27DD49C99AAE8C43797BB03AA6ADF8FF1 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___u0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___v1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___w2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___v1;
		NullCheck(L_0);
		float L_1 = L_0->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___u0;
		NullCheck(L_2);
		float L_3 = L_2->____t_5;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___w2;
		NullCheck(L_4);
		float L_5 = L_4->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___v1;
		NullCheck(L_6);
		float L_7 = L_6->____t_5;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_1;
		if ((!(((float)((float)il2cpp_codegen_add(L_8, L_9))) > ((float)(0.0f)))))
		{
			goto IL_0046;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___v1;
		NullCheck(L_10);
		float L_11 = L_10->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = ___w2;
		NullCheck(L_12);
		float L_13 = L_12->____s_4;
		float L_14 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = ___v1;
		NullCheck(L_15);
		float L_16 = L_15->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = ___u0;
		NullCheck(L_17);
		float L_18 = L_17->____s_4;
		float L_19 = V_1;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_11, L_13)), L_14)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_16, L_18)), L_19))));
	}

IL_0046:
	{
		return (0.0f);
	}
}
// System.Boolean LibTessDotNet.Geom::EdgeGoesLeft(LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_EdgeGoesLeft_m5E05BD16E96A711C609F88596B1A82738C75605F (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___e0, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___e0;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1;
		L_1 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_0, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = ___e0;
		NullCheck(L_2);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = L_2->____Org_5;
		bool L_4;
		L_4 = Geom_VertLeq_mE7BBC948CD971E64A0D22328A3CAAD4B2CE82342(L_1, L_3, NULL);
		return L_4;
	}
}
// System.Boolean LibTessDotNet.Geom::EdgeGoesRight(LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Geom_EdgeGoesRight_m4CC6F9D21B8B72CFA3FC7C772DC801973B774721 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___e0, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___e0;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = L_0->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = ___e0;
		NullCheck(L_2);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3;
		L_3 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_2, NULL);
		bool L_4;
		L_4 = Geom_VertLeq_mE7BBC948CD971E64A0D22328A3CAAD4B2CE82342(L_1, L_3, NULL);
		return L_4;
	}
}
// System.Single LibTessDotNet.Geom::VertL1dist(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_VertL1dist_m227D6A93A82591E5BAC24F2182EE458419985B15 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___u0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___v1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___u0;
		NullCheck(L_0);
		float L_1 = L_0->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___v1;
		NullCheck(L_2);
		float L_3 = L_2->____s_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = fabsf(((float)il2cpp_codegen_subtract(L_1, L_3)));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5 = ___u0;
		NullCheck(L_5);
		float L_6 = L_5->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = ___v1;
		NullCheck(L_7);
		float L_8 = L_7->____t_5;
		float L_9;
		L_9 = fabsf(((float)il2cpp_codegen_subtract(L_6, L_8)));
		return ((float)il2cpp_codegen_add(L_4, L_9));
	}
}
// System.Void LibTessDotNet.Geom::AddWinding(LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_AddWinding_m34E8125D7C665C3E4A86181F6C00198E5CECC458 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eDst0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eSrc1, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___eDst0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->____winding_8;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = ___eSrc1;
		NullCheck(L_3);
		int32_t L_4 = L_3->____winding_8;
		NullCheck(L_1);
		L_1->____winding_8 = ((int32_t)il2cpp_codegen_add(L_2, L_4));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = ___eDst0;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8 = L_7->____winding_8;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = ___eSrc1;
		NullCheck(L_9);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = L_9->____Sym_2;
		NullCheck(L_10);
		int32_t L_11 = L_10->____winding_8;
		NullCheck(L_7);
		L_7->____winding_8 = ((int32_t)il2cpp_codegen_add(L_8, L_11));
		return;
	}
}
// System.Single LibTessDotNet.Geom::Interpolate(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Geom_Interpolate_m462E865539490EC497238D37757D5B7612136EFE (float ___a0, float ___x1, float ___b2, float ___y3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___a0;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_000f;
		}
	}
	{
		___a0 = (0.0f);
	}

IL_000f:
	{
		float L_1 = ___b2;
		if ((!(((float)L_1) < ((float)(0.0f)))))
		{
			goto IL_001e;
		}
	}
	{
		___b2 = (0.0f);
	}

IL_001e:
	{
		float L_2 = ___a0;
		float L_3 = ___b2;
		if ((((float)L_2) <= ((float)L_3)))
		{
			goto IL_002e;
		}
	}
	{
		float L_4 = ___y3;
		float L_5 = ___x1;
		float L_6 = ___y3;
		float L_7 = ___b2;
		float L_8 = ___a0;
		float L_9 = ___b2;
		return ((float)il2cpp_codegen_add(L_4, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_6)), ((float)(L_7/((float)il2cpp_codegen_add(L_8, L_9))))))));
	}

IL_002e:
	{
		float L_10 = ___b2;
		if ((((float)L_10) == ((float)(0.0f))))
		{
			goto IL_0042;
		}
	}
	{
		float L_11 = ___x1;
		float L_12 = ___y3;
		float L_13 = ___x1;
		float L_14 = ___a0;
		float L_15 = ___a0;
		float L_16 = ___b2;
		return ((float)il2cpp_codegen_add(L_11, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_13)), ((float)(L_14/((float)il2cpp_codegen_add(L_15, L_16))))))));
	}

IL_0042:
	{
		float L_17 = ___x1;
		float L_18 = ___y3;
		return ((float)(((float)il2cpp_codegen_add(L_17, L_18))/(2.0f)));
	}
}
// System.Void LibTessDotNet.Geom::Swap(LibTessDotNet.MeshUtils/Vertex&,LibTessDotNet.MeshUtils/Vertex&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_Swap_mF1BF315BDD0CCE157F11D2325C6FB678A9DEE8C2 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** ___a0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** ___b1, const RuntimeMethod* method) 
{
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** L_0 = ___a0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = *((Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE**)L_0);
		V_0 = L_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** L_2 = ___a0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** L_3 = ___b1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = *((Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE**)L_3);
		*((RuntimeObject**)L_2) = (RuntimeObject*)L_4;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_4);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE** L_5 = ___b1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = V_0;
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_6);
		return;
	}
}
// System.Void LibTessDotNet.Geom::EdgeIntersect(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geom_EdgeIntersect_m4B2487736018F6B130C380BFEDE17003F730DABE (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___o10, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___d11, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___o22, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___d23, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___v4, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___o10;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = ___d11;
		bool L_2;
		L_2 = Geom_VertLeq_mE7BBC948CD971E64A0D22328A3CAAD4B2CE82342(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		Geom_Swap_mF1BF315BDD0CCE157F11D2325C6FB678A9DEE8C2((&___o10), (&___d11), NULL);
	}

IL_0012:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = ___o22;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___d23;
		bool L_5;
		L_5 = Geom_VertLeq_mE7BBC948CD971E64A0D22328A3CAAD4B2CE82342(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_0024;
		}
	}
	{
		Geom_Swap_mF1BF315BDD0CCE157F11D2325C6FB678A9DEE8C2((&___o22), (&___d23), NULL);
	}

IL_0024:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___o10;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = ___o22;
		bool L_8;
		L_8 = Geom_VertLeq_mE7BBC948CD971E64A0D22328A3CAAD4B2CE82342(L_6, L_7, NULL);
		if (L_8)
		{
			goto IL_003f;
		}
	}
	{
		Geom_Swap_mF1BF315BDD0CCE157F11D2325C6FB678A9DEE8C2((&___o10), (&___o22), NULL);
		Geom_Swap_mF1BF315BDD0CCE157F11D2325C6FB678A9DEE8C2((&___d11), (&___d23), NULL);
	}

IL_003f:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = ___o22;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___d11;
		bool L_11;
		L_11 = Geom_VertLeq_mE7BBC948CD971E64A0D22328A3CAAD4B2CE82342(L_9, L_10, NULL);
		if (L_11)
		{
			goto IL_0067;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = ___v4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13 = ___o22;
		NullCheck(L_13);
		float L_14 = L_13->____s_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = ___d11;
		NullCheck(L_15);
		float L_16 = L_15->____s_4;
		NullCheck(L_12);
		L_12->____s_4 = ((float)(((float)il2cpp_codegen_add(L_14, L_16))/(2.0f)));
		goto IL_00eb;
	}

IL_0067:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = ___d11;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = ___d23;
		bool L_19;
		L_19 = Geom_VertLeq_mE7BBC948CD971E64A0D22328A3CAAD4B2CE82342(L_17, L_18, NULL);
		if (!L_19)
		{
			goto IL_00ae;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_20 = ___o10;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = ___o22;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = ___d11;
		float L_23;
		L_23 = Geom_EdgeEval_mB6C57DD6CD0D3BF013C0CD43FF261990DC6B2877(L_20, L_21, L_22, NULL);
		V_0 = L_23;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_24 = ___o22;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_25 = ___d11;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_26 = ___d23;
		float L_27;
		L_27 = Geom_EdgeEval_mB6C57DD6CD0D3BF013C0CD43FF261990DC6B2877(L_24, L_25, L_26, NULL);
		V_1 = L_27;
		float L_28 = V_0;
		float L_29 = V_1;
		if ((!(((float)((float)il2cpp_codegen_add(L_28, L_29))) < ((float)(0.0f)))))
		{
			goto IL_0092;
		}
	}
	{
		float L_30 = V_0;
		V_0 = ((-L_30));
		float L_31 = V_1;
		V_1 = ((-L_31));
	}

IL_0092:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_32 = ___v4;
		float L_33 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_34 = ___o22;
		NullCheck(L_34);
		float L_35 = L_34->____s_4;
		float L_36 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_37 = ___d11;
		NullCheck(L_37);
		float L_38 = L_37->____s_4;
		float L_39;
		L_39 = Geom_Interpolate_m462E865539490EC497238D37757D5B7612136EFE(L_33, L_35, L_36, L_38, NULL);
		NullCheck(L_32);
		L_32->____s_4 = L_39;
		goto IL_00eb;
	}

IL_00ae:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_40 = ___o10;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_41 = ___o22;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_42 = ___d11;
		float L_43;
		L_43 = Geom_EdgeSign_mB4FA2C46F053680D96F80EC78C1616104DDA7396(L_40, L_41, L_42, NULL);
		V_2 = L_43;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_44 = ___o10;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_45 = ___d23;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_46 = ___d11;
		float L_47;
		L_47 = Geom_EdgeSign_mB4FA2C46F053680D96F80EC78C1616104DDA7396(L_44, L_45, L_46, NULL);
		V_3 = ((-L_47));
		float L_48 = V_2;
		float L_49 = V_3;
		if ((!(((float)((float)il2cpp_codegen_add(L_48, L_49))) < ((float)(0.0f)))))
		{
			goto IL_00d1;
		}
	}
	{
		float L_50 = V_2;
		V_2 = ((-L_50));
		float L_51 = V_3;
		V_3 = ((-L_51));
	}

IL_00d1:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_52 = ___v4;
		float L_53 = V_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_54 = ___o22;
		NullCheck(L_54);
		float L_55 = L_54->____s_4;
		float L_56 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_57 = ___d23;
		NullCheck(L_57);
		float L_58 = L_57->____s_4;
		float L_59;
		L_59 = Geom_Interpolate_m462E865539490EC497238D37757D5B7612136EFE(L_53, L_55, L_56, L_58, NULL);
		NullCheck(L_52);
		L_52->____s_4 = L_59;
	}

IL_00eb:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_60 = ___o10;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_61 = ___d11;
		bool L_62;
		L_62 = Geom_TransLeq_mD986638B504ED47D00C8DE53E8CE32F4302C8D27(L_60, L_61, NULL);
		if (L_62)
		{
			goto IL_00fd;
		}
	}
	{
		Geom_Swap_mF1BF315BDD0CCE157F11D2325C6FB678A9DEE8C2((&___o10), (&___d11), NULL);
	}

IL_00fd:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_63 = ___o22;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_64 = ___d23;
		bool L_65;
		L_65 = Geom_TransLeq_mD986638B504ED47D00C8DE53E8CE32F4302C8D27(L_63, L_64, NULL);
		if (L_65)
		{
			goto IL_010f;
		}
	}
	{
		Geom_Swap_mF1BF315BDD0CCE157F11D2325C6FB678A9DEE8C2((&___o22), (&___d23), NULL);
	}

IL_010f:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_66 = ___o10;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_67 = ___o22;
		bool L_68;
		L_68 = Geom_TransLeq_mD986638B504ED47D00C8DE53E8CE32F4302C8D27(L_66, L_67, NULL);
		if (L_68)
		{
			goto IL_012a;
		}
	}
	{
		Geom_Swap_mF1BF315BDD0CCE157F11D2325C6FB678A9DEE8C2((&___o10), (&___o22), NULL);
		Geom_Swap_mF1BF315BDD0CCE157F11D2325C6FB678A9DEE8C2((&___d11), (&___d23), NULL);
	}

IL_012a:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_69 = ___o22;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_70 = ___d11;
		bool L_71;
		L_71 = Geom_TransLeq_mD986638B504ED47D00C8DE53E8CE32F4302C8D27(L_69, L_70, NULL);
		if (L_71)
		{
			goto IL_014e;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_72 = ___v4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_73 = ___o22;
		NullCheck(L_73);
		float L_74 = L_73->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_75 = ___d11;
		NullCheck(L_75);
		float L_76 = L_75->____t_5;
		NullCheck(L_72);
		L_72->____t_5 = ((float)(((float)il2cpp_codegen_add(L_74, L_76))/(2.0f)));
		return;
	}

IL_014e:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_77 = ___d11;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_78 = ___d23;
		bool L_79;
		L_79 = Geom_TransLeq_mD986638B504ED47D00C8DE53E8CE32F4302C8D27(L_77, L_78, NULL);
		if (!L_79)
		{
			goto IL_019e;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_80 = ___o10;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_81 = ___o22;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_82 = ___d11;
		float L_83;
		L_83 = Geom_TransEval_m6C5AE3DD54B8068F892F51ED75DBA436E117616D(L_80, L_81, L_82, NULL);
		V_4 = L_83;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_84 = ___o22;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_85 = ___d11;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_86 = ___d23;
		float L_87;
		L_87 = Geom_TransEval_m6C5AE3DD54B8068F892F51ED75DBA436E117616D(L_84, L_85, L_86, NULL);
		V_5 = L_87;
		float L_88 = V_4;
		float L_89 = V_5;
		if ((!(((float)((float)il2cpp_codegen_add(L_88, L_89))) < ((float)(0.0f)))))
		{
			goto IL_0181;
		}
	}
	{
		float L_90 = V_4;
		V_4 = ((-L_90));
		float L_91 = V_5;
		V_5 = ((-L_91));
	}

IL_0181:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_92 = ___v4;
		float L_93 = V_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_94 = ___o22;
		NullCheck(L_94);
		float L_95 = L_94->____t_5;
		float L_96 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_97 = ___d11;
		NullCheck(L_97);
		float L_98 = L_97->____t_5;
		float L_99;
		L_99 = Geom_Interpolate_m462E865539490EC497238D37757D5B7612136EFE(L_93, L_95, L_96, L_98, NULL);
		NullCheck(L_92);
		L_92->____t_5 = L_99;
		return;
	}

IL_019e:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_100 = ___o10;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_101 = ___o22;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_102 = ___d11;
		float L_103;
		L_103 = Geom_TransSign_m2B513FE27DD49C99AAE8C43797BB03AA6ADF8FF1(L_100, L_101, L_102, NULL);
		V_6 = L_103;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_104 = ___o10;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_105 = ___d23;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_106 = ___d11;
		float L_107;
		L_107 = Geom_TransSign_m2B513FE27DD49C99AAE8C43797BB03AA6ADF8FF1(L_104, L_105, L_106, NULL);
		V_7 = ((-L_107));
		float L_108 = V_6;
		float L_109 = V_7;
		if ((!(((float)((float)il2cpp_codegen_add(L_108, L_109))) < ((float)(0.0f)))))
		{
			goto IL_01c9;
		}
	}
	{
		float L_110 = V_6;
		V_6 = ((-L_110));
		float L_111 = V_7;
		V_7 = ((-L_111));
	}

IL_01c9:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_112 = ___v4;
		float L_113 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_114 = ___o22;
		NullCheck(L_114);
		float L_115 = L_114->____t_5;
		float L_116 = V_7;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_117 = ___d23;
		NullCheck(L_117);
		float L_118 = L_117->____t_5;
		float L_119;
		L_119 = Geom_Interpolate_m462E865539490EC497238D37757D5B7612136EFE(L_113, L_115, L_116, L_118, NULL);
		NullCheck(L_112);
		L_112->____t_5 = L_119;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibTessDotNet.Mesh::Init(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Init_mD8243AFF3EE5E3F72571310BD8BB14459F946B80 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_m51643A8B0CFF1C5F247F180DE113F73632C86394_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mDCF83D1496BC5908C2927A7A4A16EAB4D0A7A83A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E V_1;
	memset((&V_1), 0, sizeof(V_1));
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_4 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_5 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_6 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___pool0;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1;
		L_1 = GenericVirtualFuncInvoker0< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Get_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mDCF83D1496BC5908C2927A7A4A16EAB4D0A7A83A_RuntimeMethod_var, L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = L_1;
		V_4 = L_2;
		__this->____vHead_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vHead_0), (void*)L_2);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = V_4;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_4 = ___pool0;
		NullCheck(L_4);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5;
		L_5 = GenericVirtualFuncInvoker0< Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* >::Invoke(IPool_Get_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_m51643A8B0CFF1C5F247F180DE113F73632C86394_RuntimeMethod_var, L_4);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_6 = L_5;
		V_5 = L_6;
		__this->____fHead_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fHead_1), (void*)L_6);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_7 = V_5;
		V_0 = L_7;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_8 = ___pool0;
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_9;
		L_9 = EdgePair_Create_m3F7AB1D97F9DF48F860105103A5C3D7123425BB5(L_8, NULL);
		V_1 = L_9;
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_10 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = L_10.____e_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = L_11;
		V_6 = L_12;
		__this->____eHead_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eHead_2), (void*)L_12);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_6;
		V_2 = L_13;
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_14 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = L_14.____eSym_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = L_15;
		V_6 = L_16;
		__this->____eHeadSym_3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eHeadSym_3), (void*)L_16);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_6;
		V_3 = L_17;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = L_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19 = L_18;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_20 = L_19;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = L_20;
		V_4 = L_21;
		NullCheck(L_20);
		L_20->____prev_0 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->____prev_0), (void*)L_21);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = V_4;
		NullCheck(L_19);
		L_19->____next_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->____next_1), (void*)L_22);
		NullCheck(L_18);
		L_18->____anEdge_2 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->____anEdge_2), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_23 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_24 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_25 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_26 = L_25;
		V_5 = L_26;
		NullCheck(L_24);
		L_24->____prev_0 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->____prev_0), (void*)L_26);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_27 = V_5;
		NullCheck(L_23);
		L_23->____next_1 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&L_23->____next_1), (void*)L_27);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_28 = V_0;
		NullCheck(L_28);
		L_28->____anEdge_2 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->____anEdge_2), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_29 = V_0;
		NullCheck(L_29);
		L_29->____trail_3 = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->____trail_3), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_30 = V_0;
		NullCheck(L_30);
		L_30->____marked_5 = (bool)0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_31 = V_0;
		NullCheck(L_31);
		L_31->____inside_6 = (bool)0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_2;
		NullCheck(L_32);
		L_32->____next_1 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->____next_1), (void*)L_33);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_3;
		NullCheck(L_34);
		L_34->____Sym_2 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&L_34->____Sym_2), (void*)L_35);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = V_2;
		NullCheck(L_36);
		L_36->____Onext_3 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_36->____Onext_3), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = V_2;
		NullCheck(L_37);
		L_37->____Lnext_4 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_37->____Lnext_4), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_2;
		NullCheck(L_38);
		L_38->____Org_5 = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->____Org_5), (void*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = V_2;
		NullCheck(L_39);
		L_39->____Lface_6 = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_39->____Lface_6), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40 = V_2;
		NullCheck(L_40);
		L_40->____winding_8 = 0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = V_2;
		NullCheck(L_41);
		L_41->____activeRegion_7 = (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_41->____activeRegion_7), (void*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_43 = V_3;
		NullCheck(L_42);
		L_42->____next_1 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&L_42->____next_1), (void*)L_43);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45 = V_2;
		NullCheck(L_44);
		L_44->____Sym_2 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&L_44->____Sym_2), (void*)L_45);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = V_3;
		NullCheck(L_46);
		L_46->____Onext_3 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_46->____Onext_3), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_47 = V_3;
		NullCheck(L_47);
		L_47->____Lnext_4 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_47->____Lnext_4), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = V_3;
		NullCheck(L_48);
		L_48->____Org_5 = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_48->____Org_5), (void*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_49 = V_3;
		NullCheck(L_49);
		L_49->____Lface_6 = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_49->____Lface_6), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_3;
		NullCheck(L_50);
		L_50->____winding_8 = 0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51 = V_3;
		NullCheck(L_51);
		L_51->____activeRegion_7 = (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_51->____activeRegion_7), (void*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL);
		return;
	}
}
// System.Void LibTessDotNet.Mesh::Reset(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Reset_m7D0904C1C1CFE59B8C52DBD2144FB4090E9187D3 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mA77008E61FBAF47FB130D63EA30E8AA4AAB285FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mEC2EBA4AAAC749589103B708D725DDE53E018172_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_2 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_3 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_4 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_5 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_6 = NULL;
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = __this->____fHead_1;
		V_0 = L_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = __this->____fHead_1;
		V_1 = L_1;
		goto IL_0020;
	}

IL_0010:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = V_0;
		NullCheck(L_2);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = L_2->____next_1;
		V_1 = L_3;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_4 = ___pool0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5 = V_0;
		NullCheck(L_4);
		GenericVirtualActionInvoker1< Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* >::Invoke(IPool_Return_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mEC2EBA4AAAC749589103B708D725DDE53E018172_RuntimeMethod_var, L_4, L_5);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_6 = V_1;
		V_0 = L_6;
	}

IL_0020:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_7 = V_0;
		NullCheck(L_7);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_8 = L_7->____next_1;
		if (L_8)
		{
			goto IL_0010;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = __this->____vHead_0;
		V_2 = L_9;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = __this->____vHead_0;
		V_3 = L_10;
		goto IL_0048;
	}

IL_0038:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11 = V_2;
		NullCheck(L_11);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = L_11->____next_1;
		V_3 = L_12;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_13 = ___pool0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = V_2;
		NullCheck(L_13);
		GenericVirtualActionInvoker1< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var, L_13, L_14);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = V_3;
		V_2 = L_15;
	}

IL_0048:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = V_2;
		NullCheck(L_16);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = L_16->____next_1;
		if (L_17)
		{
			goto IL_0038;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = __this->____eHead_2;
		V_4 = L_18;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = __this->____eHead_2;
		V_5 = L_19;
		goto IL_0084;
	}

IL_0062:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_4;
		NullCheck(L_20);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = L_20->____next_1;
		V_5 = L_21;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_22 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_4;
		NullCheck(L_23);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = L_23->____Sym_2;
		NullCheck(L_22);
		GenericVirtualActionInvoker1< Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* >::Invoke(IPool_Return_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mA77008E61FBAF47FB130D63EA30E8AA4AAB285FF_RuntimeMethod_var, L_22, L_24);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_25 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_4;
		NullCheck(L_25);
		GenericVirtualActionInvoker1< Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* >::Invoke(IPool_Return_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mA77008E61FBAF47FB130D63EA30E8AA4AAB285FF_RuntimeMethod_var, L_25, L_26);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = V_5;
		V_4 = L_27;
	}

IL_0084:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = V_4;
		NullCheck(L_28);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = L_28->____next_1;
		if (L_29)
		{
			goto IL_0062;
		}
	}
	{
		__this->____vHead_0 = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vHead_0), (void*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL);
		__this->____fHead_1 = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fHead_1), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		V_6 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		__this->____eHeadSym_3 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eHeadSym_3), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_6;
		__this->____eHead_2 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eHead_2), (void*)L_30);
		return;
	}
}
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Mesh::MakeEdge(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_MakeEdge_m885B759356861633DA4414A5DE88F5FDB0E8B8E7 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = __this->____eHead_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2;
		L_2 = MeshUtils_MakeEdge_m1699F3B699E821E75175D17FE28526F043ADC0F8(L_0, L_1, NULL);
		V_0 = L_2;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_3 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5 = __this->____vHead_0;
		MeshUtils_MakeVertex_m3655C1643604311C2F67F703838DA092D21C2396(L_3, L_4, L_5, NULL);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_6 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_0;
		NullCheck(L_7);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = L_7->____Sym_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = __this->____vHead_0;
		MeshUtils_MakeVertex_m3655C1643604311C2F67F703838DA092D21C2396(L_6, L_8, L_9, NULL);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_10 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_12 = __this->____fHead_1;
		MeshUtils_MakeFace_m882D1B35A23EE5787A5645508629A26FA3399B5F(L_10, L_11, L_12, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		return L_13;
	}
}
// System.Void LibTessDotNet.Mesh::Splice(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eOrg1, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eDst2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___eOrg1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___eDst2;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_0) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_1))))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}

IL_0005:
	{
		V_0 = (bool)0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = ___eDst2;
		NullCheck(L_2);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = L_2->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = ___eOrg1;
		NullCheck(L_4);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5 = L_4->____Org_5;
		if ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_3) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		V_0 = (bool)1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_6 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = ___eDst2;
		NullCheck(L_7);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = L_7->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = ___eOrg1;
		NullCheck(L_9);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = L_9->____Org_5;
		MeshUtils_KillVertex_mA2A67ECE8C48C9D70991F3DC52F939C4DC6290B7(L_6, L_8, L_10, NULL);
	}

IL_0029:
	{
		V_1 = (bool)0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = ___eDst2;
		NullCheck(L_11);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_12 = L_11->____Lface_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = ___eOrg1;
		NullCheck(L_13);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_14 = L_13->____Lface_6;
		if ((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_12) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_14)))
		{
			goto IL_004d;
		}
	}
	{
		V_1 = (bool)1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_15 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = ___eDst2;
		NullCheck(L_16);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_17 = L_16->____Lface_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = ___eOrg1;
		NullCheck(L_18);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_19 = L_18->____Lface_6;
		MeshUtils_KillFace_m5CFE7B05BE7AE10BADCC541F082A53D0E1BB09DF(L_15, L_17, L_19, NULL);
	}

IL_004d:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = ___eDst2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = ___eOrg1;
		MeshUtils_Splice_m84F1345F121381EA1F7B81AFBDB804859C8151AC(L_20, L_21, NULL);
		bool L_22 = V_0;
		if (L_22)
		{
			goto IL_0070;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_23 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = ___eDst2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = ___eOrg1;
		NullCheck(L_25);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_26 = L_25->____Org_5;
		MeshUtils_MakeVertex_m3655C1643604311C2F67F703838DA092D21C2396(L_23, L_24, L_26, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = ___eOrg1;
		NullCheck(L_27);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_28 = L_27->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = ___eOrg1;
		NullCheck(L_28);
		L_28->____anEdge_2 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->____anEdge_2), (void*)L_29);
	}

IL_0070:
	{
		bool L_30 = V_1;
		if (L_30)
		{
			goto IL_008c;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_31 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = ___eDst2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = ___eOrg1;
		NullCheck(L_33);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_34 = L_33->____Lface_6;
		MeshUtils_MakeFace_m882D1B35A23EE5787A5645508629A26FA3399B5F(L_31, L_32, L_34, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = ___eOrg1;
		NullCheck(L_35);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_36 = L_35->____Lface_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = ___eOrg1;
		NullCheck(L_36);
		L_36->____anEdge_2 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&L_36->____anEdge_2), (void*)L_37);
	}

IL_008c:
	{
		return;
	}
}
// System.Void LibTessDotNet.Mesh::Delete(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eDel1, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	bool V_1 = false;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___eDel1;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Sym_2;
		V_0 = L_1;
		V_1 = (bool)0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = ___eDel1;
		NullCheck(L_2);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = L_2->____Lface_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = ___eDel1;
		NullCheck(L_4);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5;
		L_5 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_4, NULL);
		if ((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_3) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_5)))
		{
			goto IL_002b;
		}
	}
	{
		V_1 = (bool)1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_6 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = ___eDel1;
		NullCheck(L_7);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_8 = L_7->____Lface_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = ___eDel1;
		NullCheck(L_9);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_10;
		L_10 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_9, NULL);
		MeshUtils_KillFace_m5CFE7B05BE7AE10BADCC541F082A53D0E1BB09DF(L_6, L_8, L_10, NULL);
	}

IL_002b:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = ___eDel1;
		NullCheck(L_11);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = L_11->____Onext_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = ___eDel1;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_12) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_13))))
		{
			goto IL_0043;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_14 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = ___eDel1;
		NullCheck(L_15);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = L_15->____Org_5;
		MeshUtils_KillVertex_mA2A67ECE8C48C9D70991F3DC52F939C4DC6290B7(L_14, L_16, (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL, NULL);
		goto IL_0081;
	}

IL_0043:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = ___eDel1;
		NullCheck(L_17);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_18;
		L_18 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_17, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = ___eDel1;
		NullCheck(L_19);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20;
		L_20 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_19, NULL);
		NullCheck(L_18);
		L_18->____anEdge_2 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->____anEdge_2), (void*)L_20);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = ___eDel1;
		NullCheck(L_21);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = L_21->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = ___eDel1;
		NullCheck(L_23);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = L_23->____Onext_3;
		NullCheck(L_22);
		L_22->____anEdge_2 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->____anEdge_2), (void*)L_24);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = ___eDel1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = ___eDel1;
		NullCheck(L_26);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27;
		L_27 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_26, NULL);
		MeshUtils_Splice_m84F1345F121381EA1F7B81AFBDB804859C8151AC(L_25, L_27, NULL);
		bool L_28 = V_1;
		if (L_28)
		{
			goto IL_0081;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_29 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = ___eDel1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = ___eDel1;
		NullCheck(L_31);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_32 = L_31->____Lface_6;
		MeshUtils_MakeFace_m882D1B35A23EE5787A5645508629A26FA3399B5F(L_29, L_30, L_32, NULL);
	}

IL_0081:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_0;
		NullCheck(L_33);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = L_33->____Onext_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_0;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_34) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_35))))
		{
			goto IL_00a6;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_36 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = V_0;
		NullCheck(L_37);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_38 = L_37->____Org_5;
		MeshUtils_KillVertex_mA2A67ECE8C48C9D70991F3DC52F939C4DC6290B7(L_36, L_38, (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL, NULL);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_39 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40 = V_0;
		NullCheck(L_40);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_41 = L_40->____Lface_6;
		MeshUtils_KillFace_m5CFE7B05BE7AE10BADCC541F082A53D0E1BB09DF(L_39, L_41, (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL, NULL);
		goto IL_00d4;
	}

IL_00a6:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = ___eDel1;
		NullCheck(L_42);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_43 = L_42->____Lface_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = V_0;
		NullCheck(L_44);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45;
		L_45 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_44, NULL);
		NullCheck(L_43);
		L_43->____anEdge_2 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&L_43->____anEdge_2), (void*)L_45);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = V_0;
		NullCheck(L_46);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_47 = L_46->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = V_0;
		NullCheck(L_48);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_49 = L_48->____Onext_3;
		NullCheck(L_47);
		L_47->____anEdge_2 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&L_47->____anEdge_2), (void*)L_49);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51 = V_0;
		NullCheck(L_51);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_52;
		L_52 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_51, NULL);
		MeshUtils_Splice_m84F1345F121381EA1F7B81AFBDB804859C8151AC(L_50, L_52, NULL);
	}

IL_00d4:
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_53 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_54 = ___eDel1;
		MeshUtils_KillEdge_mD5B1B251756025E5FAE82F5D4D1B3909F561C542(L_53, L_54, NULL);
		return;
	}
}
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Mesh::AddEdgeVertex(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_AddEdgeVertex_mBC2ECB3C7B23CEC78EB69BF83E3E49D215676054 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eOrg1, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_2 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___eOrg1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2;
		L_2 = MeshUtils_MakeEdge_m1699F3B699E821E75175D17FE28526F043ADC0F8(L_0, L_1, NULL);
		V_0 = L_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_0;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____Sym_2;
		V_1 = L_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = ___eOrg1;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____Lnext_4;
		MeshUtils_Splice_m84F1345F121381EA1F7B81AFBDB804859C8151AC(L_5, L_7, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = ___eOrg1;
		NullCheck(L_9);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10;
		L_10 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_9, NULL);
		NullCheck(L_8);
		L_8->____Org_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____Org_5), (void*)L_10);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_11 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		NullCheck(L_13);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = L_13->____Org_5;
		MeshUtils_MakeVertex_m3655C1643604311C2F67F703838DA092D21C2396(L_11, L_12, L_14, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = ___eOrg1;
		NullCheck(L_17);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_18 = L_17->____Lface_6;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_19 = L_18;
		V_2 = L_19;
		NullCheck(L_16);
		L_16->____Lface_6 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->____Lface_6), (void*)L_19);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_20 = V_2;
		NullCheck(L_15);
		L_15->____Lface_6 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->____Lface_6), (void*)L_20);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = V_0;
		return L_21;
	}
}
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Mesh::SplitEdge(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eOrg1, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___eOrg1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2;
		L_2 = Mesh_AddEdgeVertex_mBC2ECB3C7B23CEC78EB69BF83E3E49D215676054(__this, L_0, L_1, NULL);
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____Sym_2;
		V_0 = L_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = ___eOrg1;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = ___eOrg1;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____Sym_2;
		NullCheck(L_7);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8;
		L_8 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_7, NULL);
		MeshUtils_Splice_m84F1345F121381EA1F7B81AFBDB804859C8151AC(L_5, L_8, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = ___eOrg1;
		NullCheck(L_9);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = L_9->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_0;
		MeshUtils_Splice_m84F1345F121381EA1F7B81AFBDB804859C8151AC(L_10, L_11, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = ___eOrg1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		NullCheck(L_13);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = L_13->____Org_5;
		NullCheck(L_12);
		Edge_set__Dst_mFC8AB632C1CBED66AC767230468FC1E30DB1682E(L_12, L_14, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_0;
		NullCheck(L_15);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16;
		L_16 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_15, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_0;
		NullCheck(L_17);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = L_17->____Sym_2;
		NullCheck(L_16);
		L_16->____anEdge_2 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->____anEdge_2), (void*)L_18);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = ___eOrg1;
		NullCheck(L_20);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_21;
		L_21 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_20, NULL);
		NullCheck(L_19);
		Edge_set__Rface_m9A4FEC09331777DF1DC569EE7C8759B96CBD7FBF(L_19, L_21, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = ___eOrg1;
		NullCheck(L_23);
		int32_t L_24 = L_23->____winding_8;
		NullCheck(L_22);
		L_22->____winding_8 = L_24;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_0;
		NullCheck(L_25);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = L_25->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = ___eOrg1;
		NullCheck(L_27);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = L_27->____Sym_2;
		NullCheck(L_28);
		int32_t L_29 = L_28->____winding_8;
		NullCheck(L_26);
		L_26->____winding_8 = L_29;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_0;
		return L_30;
	}
}
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Mesh::Connect(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eOrg1, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eDst2, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	bool V_2 = false;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_3 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___eOrg1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2;
		L_2 = MeshUtils_MakeEdge_m1699F3B699E821E75175D17FE28526F043ADC0F8(L_0, L_1, NULL);
		V_0 = L_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_0;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____Sym_2;
		V_1 = L_4;
		V_2 = (bool)0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = ___eDst2;
		NullCheck(L_5);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_6 = L_5->____Lface_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = ___eOrg1;
		NullCheck(L_7);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_8 = L_7->____Lface_6;
		if ((((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_6) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_8)))
		{
			goto IL_0033;
		}
	}
	{
		V_2 = (bool)1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_9 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = ___eDst2;
		NullCheck(L_10);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_11 = L_10->____Lface_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = ___eOrg1;
		NullCheck(L_12);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_13 = L_12->____Lface_6;
		MeshUtils_KillFace_m5CFE7B05BE7AE10BADCC541F082A53D0E1BB09DF(L_9, L_11, L_13, NULL);
	}

IL_0033:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = ___eOrg1;
		NullCheck(L_15);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = L_15->____Lnext_4;
		MeshUtils_Splice_m84F1345F121381EA1F7B81AFBDB804859C8151AC(L_14, L_16, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = ___eDst2;
		MeshUtils_Splice_m84F1345F121381EA1F7B81AFBDB804859C8151AC(L_17, L_18, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = ___eOrg1;
		NullCheck(L_20);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21;
		L_21 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_20, NULL);
		NullCheck(L_19);
		L_19->____Org_5 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->____Org_5), (void*)L_21);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = ___eDst2;
		NullCheck(L_23);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_24 = L_23->____Org_5;
		NullCheck(L_22);
		L_22->____Org_5 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->____Org_5), (void*)L_24);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = ___eOrg1;
		NullCheck(L_27);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_28 = L_27->____Lface_6;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_29 = L_28;
		V_3 = L_29;
		NullCheck(L_26);
		L_26->____Lface_6 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->____Lface_6), (void*)L_29);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_30 = V_3;
		NullCheck(L_25);
		L_25->____Lface_6 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->____Lface_6), (void*)L_30);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = ___eOrg1;
		NullCheck(L_31);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_32 = L_31->____Lface_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_1;
		NullCheck(L_32);
		L_32->____anEdge_2 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->____anEdge_2), (void*)L_33);
		bool L_34 = V_2;
		if (L_34)
		{
			goto IL_008f;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_35 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = ___eOrg1;
		NullCheck(L_37);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_38 = L_37->____Lface_6;
		MeshUtils_MakeFace_m882D1B35A23EE5787A5645508629A26FA3399B5F(L_35, L_36, L_38, NULL);
	}

IL_008f:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = V_0;
		return L_39;
	}
}
// System.Void LibTessDotNet.Mesh::ZapFace(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_ZapFace_m40CB995646CB70A3A752001902CF3A1289CC54E7 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___fZap1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mEC2EBA4AAAC749589103B708D725DDE53E018172_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_4 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_5 = NULL;
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = ___fZap1;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____anEdge_2;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____Lnext_4;
		V_1 = L_3;
	}

IL_000e:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_1;
		V_2 = L_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_2;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____Lnext_4;
		V_1 = L_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_2;
		NullCheck(L_7);
		L_7->____Lface_6 = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->____Lface_6), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_2;
		NullCheck(L_8);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_9;
		L_9 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_8, NULL);
		if (L_9)
		{
			goto IL_009e;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_2;
		NullCheck(L_10);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = L_10->____Onext_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_2;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_11) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_12))))
		{
			goto IL_003e;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_13 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = V_2;
		NullCheck(L_14);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = L_14->____Org_5;
		MeshUtils_KillVertex_mA2A67ECE8C48C9D70991F3DC52F939C4DC6290B7(L_13, L_15, (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL, NULL);
		goto IL_005b;
	}

IL_003e:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = V_2;
		NullCheck(L_16);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = L_16->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = V_2;
		NullCheck(L_18);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = L_18->____Onext_3;
		NullCheck(L_17);
		L_17->____anEdge_2 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_17->____anEdge_2), (void*)L_19);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = V_2;
		NullCheck(L_21);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22;
		L_22 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_21, NULL);
		MeshUtils_Splice_m84F1345F121381EA1F7B81AFBDB804859C8151AC(L_20, L_22, NULL);
	}

IL_005b:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_2;
		NullCheck(L_23);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = L_23->____Sym_2;
		V_3 = L_24;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_3;
		NullCheck(L_25);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = L_25->____Onext_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = V_3;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_26) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_27))))
		{
			goto IL_007a;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_28 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = V_3;
		NullCheck(L_29);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_30 = L_29->____Org_5;
		MeshUtils_KillVertex_mA2A67ECE8C48C9D70991F3DC52F939C4DC6290B7(L_28, L_30, (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL, NULL);
		goto IL_0097;
	}

IL_007a:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = V_3;
		NullCheck(L_31);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_32 = L_31->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_3;
		NullCheck(L_33);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = L_33->____Onext_3;
		NullCheck(L_32);
		L_32->____anEdge_2 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->____anEdge_2), (void*)L_34);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = V_3;
		NullCheck(L_36);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37;
		L_37 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_36, NULL);
		MeshUtils_Splice_m84F1345F121381EA1F7B81AFBDB804859C8151AC(L_35, L_37, NULL);
	}

IL_0097:
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_38 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = V_2;
		MeshUtils_KillEdge_mD5B1B251756025E5FAE82F5D4D1B3909F561C542(L_38, L_39, NULL);
	}

IL_009e:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = V_0;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_40) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_41))))
		{
			goto IL_000e;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_42 = ___fZap1;
		NullCheck(L_42);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_43 = L_42->____prev_0;
		V_4 = L_43;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_44 = ___fZap1;
		NullCheck(L_44);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_45 = L_44->____next_1;
		V_5 = L_45;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_46 = V_5;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_47 = V_4;
		NullCheck(L_46);
		L_46->____prev_0 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&L_46->____prev_0), (void*)L_47);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_48 = V_4;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_49 = V_5;
		NullCheck(L_48);
		L_48->____next_1 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&L_48->____next_1), (void*)L_49);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_50 = ___pool0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_51 = ___fZap1;
		NullCheck(L_50);
		GenericVirtualActionInvoker1< Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* >::Invoke(IPool_Return_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mEC2EBA4AAAC749589103B708D725DDE53E018172_RuntimeMethod_var, L_50, L_51);
		return;
	}
}
// System.Void LibTessDotNet.Mesh::MergeConvexFaces(LibTessDotNet.IPool,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_MergeConvexFaces_m2452DF609E5F2842DCB3645A91AE38474D00189C (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, int32_t ___maxVertsPerFace1, const RuntimeMethod* method) 
{
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = __this->____fHead_1;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = L_0->____next_1;
		V_0 = L_1;
		goto IL_00fe;
	}

IL_0011:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = L_2->____inside_6;
		if (!L_3)
		{
			goto IL_00f7;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_4 = V_0;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____anEdge_2;
		V_1 = L_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_1;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = L_6->____Org_5;
		V_2 = L_7;
	}

IL_002a:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_1;
		NullCheck(L_8);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = L_8->____Lnext_4;
		V_3 = L_9;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_1;
		NullCheck(L_10);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = L_10->____Sym_2;
		V_4 = L_11;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_4;
		if (!L_12)
		{
			goto IL_00df;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_4;
		NullCheck(L_13);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_14 = L_13->____Lface_6;
		if (!L_14)
		{
			goto IL_00df;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_4;
		NullCheck(L_15);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_16 = L_15->____Lface_6;
		NullCheck(L_16);
		bool L_17 = L_16->____inside_6;
		if (!L_17)
		{
			goto IL_00df;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = Face_get_VertsCount_m0EB6E9229787A15369C28423410F895E7F211AC0(L_18, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_4;
		NullCheck(L_20);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_21 = L_20->____Lface_6;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = Face_get_VertsCount_m0EB6E9229787A15369C28423410F895E7F211AC0(L_21, NULL);
		V_5 = L_22;
		int32_t L_23 = V_5;
		int32_t L_24 = ___maxVertsPerFace1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_19, L_23)), 2))) > ((int32_t)L_24)))
		{
			goto IL_00df;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_1;
		NullCheck(L_25);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26;
		L_26 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_25, NULL);
		NullCheck(L_26);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_27 = L_26->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = V_1;
		NullCheck(L_28);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_29 = L_28->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_4;
		NullCheck(L_30);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = L_30->____Lnext_4;
		NullCheck(L_31);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = L_31->____Lnext_4;
		NullCheck(L_32);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_33 = L_32->____Org_5;
		bool L_34;
		L_34 = Geom_VertCCW_mEA573613B7401C08853FB28CE752FC311FCE866C(L_27, L_29, L_33, NULL);
		if (!L_34)
		{
			goto IL_00df;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_4;
		NullCheck(L_35);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36;
		L_36 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_35, NULL);
		NullCheck(L_36);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_37 = L_36->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_4;
		NullCheck(L_38);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_39 = L_38->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40 = V_1;
		NullCheck(L_40);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = L_40->____Lnext_4;
		NullCheck(L_41);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = L_41->____Lnext_4;
		NullCheck(L_42);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_43 = L_42->____Org_5;
		bool L_44;
		L_44 = Geom_VertCCW_mEA573613B7401C08853FB28CE752FC311FCE866C(L_37, L_39, L_43, NULL);
		if (!L_44)
		{
			goto IL_00df;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45 = V_4;
		NullCheck(L_45);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = L_45->____Lnext_4;
		V_3 = L_46;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_47 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = V_4;
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(__this, L_47, L_48, NULL);
		V_1 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
	}

IL_00df:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_49 = V_1;
		if (!L_49)
		{
			goto IL_00f0;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_1;
		NullCheck(L_50);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51 = L_50->____Lnext_4;
		NullCheck(L_51);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_52 = L_51->____Org_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_53 = V_2;
		if ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_52) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_53)))
		{
			goto IL_00f7;
		}
	}

IL_00f0:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_54 = V_3;
		V_1 = L_54;
		goto IL_002a;
	}

IL_00f7:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_55 = V_0;
		NullCheck(L_55);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_56 = L_55->____next_1;
		V_0 = L_56;
	}

IL_00fe:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_57 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_58 = __this->____fHead_1;
		if ((!(((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_57) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_58))))
		{
			goto IL_0011;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.Mesh::Check()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Check_m60A4227D366A3F601EC5B8D95D672862D9BC8146 (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_2 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_3 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_4 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_5 = NULL;
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = __this->____fHead_1;
		V_1 = L_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = __this->____fHead_1;
		V_1 = L_1;
		goto IL_0029;
	}

IL_0010:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = V_2;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____anEdge_2;
		V_0 = L_3;
	}

IL_0017:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_0;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____Lnext_4;
		V_0 = L_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_7 = V_2;
		NullCheck(L_7);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = L_7->____anEdge_2;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_6) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_8))))
		{
			goto IL_0017;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_9 = V_2;
		V_1 = L_9;
	}

IL_0029:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_10 = V_1;
		NullCheck(L_10);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_11 = L_10->____next_1;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_12 = L_11;
		V_2 = L_12;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_13 = __this->____fHead_1;
		if ((!(((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_12) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_13))))
		{
			goto IL_0010;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = __this->____vHead_0;
		V_3 = L_14;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = __this->____vHead_0;
		V_3 = L_15;
		goto IL_0065;
	}

IL_0049:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = V_4;
		NullCheck(L_16);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = L_16->____anEdge_2;
		V_0 = L_17;
	}

IL_0051:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = V_0;
		NullCheck(L_18);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = L_18->____Onext_3;
		V_0 = L_19;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = V_4;
		NullCheck(L_21);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = L_21->____anEdge_2;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_20) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_22))))
		{
			goto IL_0051;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_23 = V_4;
		V_3 = L_23;
	}

IL_0065:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_24 = V_3;
		NullCheck(L_24);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_25 = L_24->____next_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_26 = L_25;
		V_4 = L_26;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_27 = __this->____vHead_0;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_26) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_27))))
		{
			goto IL_0049;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = __this->____eHead_2;
		V_5 = L_28;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = __this->____eHead_2;
		V_5 = L_29;
		goto IL_008b;
	}

IL_0088:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_0;
		V_5 = L_30;
	}

IL_008b:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = V_5;
		NullCheck(L_31);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = L_31->____next_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = L_32;
		V_0 = L_33;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = __this->____eHead_2;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_33) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_34))))
		{
			goto IL_0088;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m8BF4E325A856B4818EBD72204EC256BF74D7D6EF (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single LibTessDotNet.Vec3::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		float L_1 = __this->___X_1;
		return L_1;
	}

IL_000a:
	{
		int32_t L_2 = ___index0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		float L_3 = __this->___Y_2;
		return L_3;
	}

IL_0015:
	{
		int32_t L_4 = ___index0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0020;
		}
	}
	{
		float L_5 = __this->___Z_3;
		return L_5;
	}

IL_0020:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  float Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, const RuntimeMethod* method)
{
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*>(__this + _offset);
	float _returnValue;
	_returnValue = Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318(_thisAdjusted, ___index0, method);
	return _returnValue;
}
// System.Void LibTessDotNet.Vec3::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		float L_1 = ___value1;
		__this->___X_1 = L_1;
		return;
	}

IL_000b:
	{
		int32_t L_2 = ___index0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		float L_3 = ___value1;
		__this->___Y_2 = L_3;
		return;
	}

IL_0017:
	{
		int32_t L_4 = ___index0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0023;
		}
	}
	{
		float L_5 = ___value1;
		__this->___Z_3 = L_5;
		return;
	}

IL_0023:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		IndexOutOfRangeException__ctor_m270ED9671475CE680EEA8C62A7A43308AE4188EF(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  void Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857_AdjustorThunk (RuntimeObject* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method)
{
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*>(__this + _offset);
	Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(_thisAdjusted, ___index0, ___value1, method);
}
// System.Void LibTessDotNet.Vec3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3__ctor_m937D1DD303AF7D61662A455E5F208BDB81106B7C (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___X_1 = L_0;
		float L_1 = ___y1;
		__this->___Y_2 = L_1;
		float L_2 = ___z2;
		__this->___Z_3 = L_2;
		return;
	}
}
IL2CPP_EXTERN_C  void Vec3__ctor_m937D1DD303AF7D61662A455E5F208BDB81106B7C_AdjustorThunk (RuntimeObject* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*>(__this + _offset);
	Vec3__ctor_m937D1DD303AF7D61662A455E5F208BDB81106B7C(_thisAdjusted, ___x0, ___y1, ___z2, method);
}
// System.Void LibTessDotNet.Vec3::Sub(LibTessDotNet.Vec3&,LibTessDotNet.Vec3&,LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Sub_mAEFED9A4A944DF3B135130969858756B276D13B9 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___lhs0, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___rhs1, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___result2, const RuntimeMethod* method) 
{
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_0 = ___result2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_1 = ___lhs0;
		float L_2 = L_1->___X_1;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_3 = ___rhs1;
		float L_4 = L_3->___X_1;
		L_0->___X_1 = ((float)il2cpp_codegen_subtract(L_2, L_4));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_5 = ___result2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_6 = ___lhs0;
		float L_7 = L_6->___Y_2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_8 = ___rhs1;
		float L_9 = L_8->___Y_2;
		L_5->___Y_2 = ((float)il2cpp_codegen_subtract(L_7, L_9));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_10 = ___result2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_11 = ___lhs0;
		float L_12 = L_11->___Z_3;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_13 = ___rhs1;
		float L_14 = L_13->___Z_3;
		L_10->___Z_3 = ((float)il2cpp_codegen_subtract(L_12, L_14));
		return;
	}
}
// System.Void LibTessDotNet.Vec3::Neg(LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Neg_m53588C86DA46DF9A1BDCCFD8BC4BC9DC247452FC (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___v0, const RuntimeMethod* method) 
{
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_0 = ___v0;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_1 = ___v0;
		float L_2 = L_1->___X_1;
		L_0->___X_1 = ((-L_2));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_3 = ___v0;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_4 = ___v0;
		float L_5 = L_4->___Y_2;
		L_3->___Y_2 = ((-L_5));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_6 = ___v0;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_7 = ___v0;
		float L_8 = L_7->___Z_3;
		L_6->___Z_3 = ((-L_8));
		return;
	}
}
// System.Void LibTessDotNet.Vec3::Dot(LibTessDotNet.Vec3&,LibTessDotNet.Vec3&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Dot_m647C7F8C0E0ECAF41BAC6A18C704BBBC70AFC94E (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___u0, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___v1, float* ___dot2, const RuntimeMethod* method) 
{
	{
		float* L_0 = ___dot2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_1 = ___u0;
		float L_2 = L_1->___X_1;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_3 = ___v1;
		float L_4 = L_3->___X_1;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_5 = ___u0;
		float L_6 = L_5->___Y_2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_7 = ___v1;
		float L_8 = L_7->___Y_2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_9 = ___u0;
		float L_10 = L_9->___Z_3;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_11 = ___v1;
		float L_12 = L_11->___Z_3;
		*((float*)L_0) = (float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_2, L_4)), ((float)il2cpp_codegen_multiply(L_6, L_8)))), ((float)il2cpp_codegen_multiply(L_10, L_12))));
		return;
	}
}
// System.Void LibTessDotNet.Vec3::Normalize(LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3_Normalize_m9234D8A1DB22DB8AB4BD9B60185E1672071F7516 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___v0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_0 = ___v0;
		float L_1 = L_0->___X_1;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_2 = ___v0;
		float L_3 = L_2->___X_1;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_4 = ___v0;
		float L_5 = L_4->___Y_2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_6 = ___v0;
		float L_7 = L_6->___Y_2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_8 = ___v0;
		float L_9 = L_8->___Z_3;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_10 = ___v0;
		float L_11 = L_10->___Z_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		float L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_13;
		L_13 = sqrt(((double)L_12));
		V_0 = ((float)((1.0f)/((float)L_13)));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_14 = ___v0;
		float* L_15 = (&L_14->___X_1);
		float* L_16 = L_15;
		float L_17 = *((float*)L_16);
		float L_18 = V_0;
		*((float*)L_16) = (float)((float)il2cpp_codegen_multiply(L_17, L_18));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_19 = ___v0;
		float* L_20 = (&L_19->___Y_2);
		float* L_21 = L_20;
		float L_22 = *((float*)L_21);
		float L_23 = V_0;
		*((float*)L_21) = (float)((float)il2cpp_codegen_multiply(L_22, L_23));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_24 = ___v0;
		float* L_25 = (&L_24->___Z_3);
		float* L_26 = L_25;
		float L_27 = *((float*)L_26);
		float L_28 = V_0;
		*((float*)L_26) = (float)((float)il2cpp_codegen_multiply(L_27, L_28));
		return;
	}
}
// System.Int32 LibTessDotNet.Vec3::LongAxis(LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vec3_LongAxis_m53C80DC4AF421775497E0380A929DE96F6F7B630 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___v0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float G_B4_0 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	{
		V_0 = 0;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_0 = ___v0;
		float L_1 = L_0->___Y_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = fabsf(L_1);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_3 = ___v0;
		float L_4 = L_3->___X_1;
		float L_5;
		L_5 = fabsf(L_4);
		if ((!(((float)L_2) > ((float)L_5))))
		{
			goto IL_001c;
		}
	}
	{
		V_0 = 1;
	}

IL_001c:
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_6 = ___v0;
		float L_7 = L_6->___Z_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_8;
		L_8 = fabsf(L_7);
		int32_t L_9 = V_0;
		G_B3_0 = L_8;
		if (!L_9)
		{
			G_B4_0 = L_8;
			goto IL_0032;
		}
	}
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_10 = ___v0;
		float L_11 = L_10->___Y_2;
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		goto IL_0038;
	}

IL_0032:
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_12 = ___v0;
		float L_13 = L_12->___X_1;
		G_B5_0 = L_13;
		G_B5_1 = G_B4_0;
	}

IL_0038:
	{
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_14;
		L_14 = fabsf(G_B5_0);
		if ((!(((float)G_B5_1) > ((float)L_14))))
		{
			goto IL_0041;
		}
	}
	{
		V_0 = 2;
	}

IL_0041:
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.String LibTessDotNet.Vec3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vec3_ToString_mA4CE6161CB8D3BC075B3E5D9B94AAFABCB0B2878 (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82FF2E4A5CEA89085A6360163E86CB104CFC8CE8);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->___X_1;
		float L_1 = L_0;
		RuntimeObject* L_2 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_1);
		float L_3 = __this->___Y_2;
		float L_4 = L_3;
		RuntimeObject* L_5 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_4);
		float L_6 = __this->___Z_3;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral82FF2E4A5CEA89085A6360163E86CB104CFC8CE8, L_2, L_5, L_8, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C  String_t* Vec3_ToString_mA4CE6161CB8D3BC075B3E5D9B94AAFABCB0B2878_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vec3_ToString_mA4CE6161CB8D3BC075B3E5D9B94AAFABCB0B2878(_thisAdjusted, method);
	return _returnValue;
}
// System.Void LibTessDotNet.Vec3::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vec3__cctor_mBD58E369074B021C26A7832FEB55306F1751A490 (const RuntimeMethod* method) 
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibTessDotNet.IPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPool__ctor_m29B732D498A77485F01CFD88F4572DF3E3C57F41 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1__ctor_m43508E569160C2A3E7DA45E1F1D79E39FB284DA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1__ctor_mACE98FC86076F9666446FDFABE8886B476CB355F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1__ctor_mD0D7A1710066169ADDCAFEB0B216912C0DD413A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1__ctor_mDA80429C65AA20C2F3DB6E607E3A74FB000D1E1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Register_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_mFA2E73AC4C38C33A3B82FFD67567F8B23126846D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Register_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mD253C242EE50DA3A963061B04B5C0F76174A7F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Register_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mCBF8A3BE3FE8D567704098C7CE31463CB659E7AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Register_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m5CEFA21D8E4256C408CFD2BB3153FFE5533FA1AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797* L_0 = (DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797*)il2cpp_codegen_object_new(DefaultTypePool_1_t398EF07437F98BB1969A1B454F8DEDF4DD7E8797_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DefaultTypePool_1__ctor_m43508E569160C2A3E7DA45E1F1D79E39FB284DA4(L_0, DefaultTypePool_1__ctor_m43508E569160C2A3E7DA45E1F1D79E39FB284DA4_RuntimeMethod_var);
		GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m5CEFA21D8E4256C408CFD2BB3153FFE5533FA1AA_RuntimeMethod_var, __this, L_0);
		DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2* L_1 = (DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2*)il2cpp_codegen_object_new(DefaultTypePool_1_tB793A80F69EC4647E0C0326E7AA790E4B26315C2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DefaultTypePool_1__ctor_mD0D7A1710066169ADDCAFEB0B216912C0DD413A5(L_1, DefaultTypePool_1__ctor_mD0D7A1710066169ADDCAFEB0B216912C0DD413A5_RuntimeMethod_var);
		GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mCBF8A3BE3FE8D567704098C7CE31463CB659E7AF_RuntimeMethod_var, __this, L_1);
		DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC* L_2 = (DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC*)il2cpp_codegen_object_new(DefaultTypePool_1_t8FBBC7ADA7BF5C8F1D56C5B07CA196490DDEE9CC_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DefaultTypePool_1__ctor_mACE98FC86076F9666446FDFABE8886B476CB355F(L_2, DefaultTypePool_1__ctor_mACE98FC86076F9666446FDFABE8886B476CB355F_RuntimeMethod_var);
		GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mD253C242EE50DA3A963061B04B5C0F76174A7F16_RuntimeMethod_var, __this, L_2);
		DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4* L_3 = (DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4*)il2cpp_codegen_object_new(DefaultTypePool_1_t3B25A6D8582B5C7D84F1981FCC7B5686B1EADDC4_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		DefaultTypePool_1__ctor_mDA80429C65AA20C2F3DB6E607E3A74FB000D1E1F(L_3, DefaultTypePool_1__ctor_mDA80429C65AA20C2F3DB6E607E3A74FB000D1E1F_RuntimeMethod_var);
		GenericVirtualActionInvoker1< RuntimeObject* >::Invoke(IPool_Register_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_mFA2E73AC4C38C33A3B82FFD67567F8B23126846D_RuntimeMethod_var, __this, L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibTessDotNet.NullPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullPool__ctor_mA9794AE1C4917832E71637ADA7B763D44F1AADCA (NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D* __this, const RuntimeMethod* method) 
{
	{
		IPool__ctor_m29B732D498A77485F01CFD88F4572DF3E3C57F41(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibTessDotNet.DefaultPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPool__ctor_m8D4477214AEE206E11961F64854E616FD3530CFD (DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04* __this, const RuntimeMethod* method) 
{
	{
		IPool__ctor_m29B732D498A77485F01CFD88F4572DF3E3C57F41(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibTessDotNet.MeshUtils::Splice(LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_Splice_m84F1345F121381EA1F7B81AFBDB804859C8151AC (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___a0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___b1, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___a0;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Onext_3;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = ___b1;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____Onext_3;
		V_1 = L_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_0;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = ___b1;
		NullCheck(L_5);
		L_5->____Lnext_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->____Lnext_4), (void*)L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_1;
		NullCheck(L_7);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = L_7->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = ___a0;
		NullCheck(L_8);
		L_8->____Lnext_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____Lnext_4), (void*)L_9);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = ___a0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_1;
		NullCheck(L_10);
		L_10->____Onext_3 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->____Onext_3), (void*)L_11);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = ___b1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		NullCheck(L_12);
		L_12->____Onext_3 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->____Onext_3), (void*)L_13);
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils::MakeVertex(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_MakeVertex_m3655C1643604311C2F67F703838DA092D21C2396 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eOrig1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___vNext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mDCF83D1496BC5908C2927A7A4A16EAB4D0A7A83A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___pool0;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1;
		L_1 = GenericVirtualFuncInvoker0< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Get_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mDCF83D1496BC5908C2927A7A4A16EAB4D0A7A83A_RuntimeMethod_var, L_0);
		V_0 = L_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___vNext2;
		NullCheck(L_2);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = L_2->____prev_0;
		V_1 = L_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5 = V_1;
		NullCheck(L_4);
		L_4->____prev_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____prev_0), (void*)L_5);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = V_0;
		NullCheck(L_6);
		L_6->____next_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->____next_1), (void*)L_7);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = ___vNext2;
		NullCheck(L_8);
		L_8->____next_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____next_1), (void*)L_9);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = ___vNext2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11 = V_0;
		NullCheck(L_10);
		L_10->____prev_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->____prev_0), (void*)L_11);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = ___eOrig1;
		NullCheck(L_12);
		L_12->____anEdge_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->____anEdge_2), (void*)L_13);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = ___eOrig1;
		V_2 = L_14;
	}

IL_0033:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = V_0;
		NullCheck(L_15);
		L_15->____Org_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->____Org_5), (void*)L_16);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_2;
		NullCheck(L_17);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = L_17->____Onext_3;
		V_2 = L_18;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = ___eOrig1;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_19) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_20))))
		{
			goto IL_0033;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils::MakeFace(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_MakeFace_m882D1B35A23EE5787A5645508629A26FA3399B5F (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eOrig1, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___fNext2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_m51643A8B0CFF1C5F247F180DE113F73632C86394_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___pool0;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1;
		L_1 = GenericVirtualFuncInvoker0< Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* >::Invoke(IPool_Get_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_m51643A8B0CFF1C5F247F180DE113F73632C86394_RuntimeMethod_var, L_0);
		V_0 = L_1;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = ___fNext2;
		NullCheck(L_2);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = L_2->____prev_0;
		V_1 = L_3;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_4 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5 = V_1;
		NullCheck(L_4);
		L_4->____prev_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____prev_0), (void*)L_5);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_6 = V_1;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_7 = V_0;
		NullCheck(L_6);
		L_6->____next_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->____next_1), (void*)L_7);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_8 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_9 = ___fNext2;
		NullCheck(L_8);
		L_8->____next_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____next_1), (void*)L_9);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_10 = ___fNext2;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_11 = V_0;
		NullCheck(L_10);
		L_10->____prev_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->____prev_0), (void*)L_11);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_12 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = ___eOrig1;
		NullCheck(L_12);
		L_12->____anEdge_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->____anEdge_2), (void*)L_13);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_14 = V_0;
		NullCheck(L_14);
		L_14->____trail_3 = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->____trail_3), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_15 = V_0;
		NullCheck(L_15);
		L_15->____marked_5 = (bool)0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_16 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_17 = ___fNext2;
		NullCheck(L_17);
		bool L_18 = L_17->____inside_6;
		NullCheck(L_16);
		L_16->____inside_6 = L_18;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = ___eOrig1;
		V_2 = L_19;
	}

IL_004d:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_2;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_21 = V_0;
		NullCheck(L_20);
		L_20->____Lface_6 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->____Lface_6), (void*)L_21);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_2;
		NullCheck(L_22);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = L_22->____Lnext_4;
		V_2 = L_23;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = ___eOrig1;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_24) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_25))))
		{
			goto IL_004d;
		}
	}
	{
		return;
	}
}
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils::MakeEdge(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* MeshUtils_MakeEdge_m1699F3B699E821E75175D17FE28526F043ADC0F8 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eNext1, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___pool0;
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_1;
		L_1 = EdgePair_Create_m3F7AB1D97F9DF48F860105103A5C3D7123425BB5(L_0, NULL);
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_2 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2.____e_0;
		V_0 = L_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_2.____eSym_1;
		V_1 = L_4;
		Edge_EnsureFirst_m0366E62FD8DF5FAA7049A7175F6E9391AE9DAFD7((&___eNext1), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = ___eNext1;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____Sym_2;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____next_1;
		V_2 = L_7;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = V_2;
		NullCheck(L_8);
		L_8->____next_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____next_1), (void*)L_9);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_2;
		NullCheck(L_10);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = L_10->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_0;
		NullCheck(L_11);
		L_11->____next_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->____next_1), (void*)L_12);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = ___eNext1;
		NullCheck(L_13);
		L_13->____next_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->____next_1), (void*)L_14);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = ___eNext1;
		NullCheck(L_15);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = L_15->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_1;
		NullCheck(L_16);
		L_16->____next_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->____next_1), (void*)L_17);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_1;
		NullCheck(L_18);
		L_18->____Sym_2 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->____Sym_2), (void*)L_19);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = V_0;
		NullCheck(L_20);
		L_20->____Onext_3 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->____Onext_3), (void*)L_21);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_1;
		NullCheck(L_22);
		L_22->____Lnext_4 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&L_22->____Lnext_4), (void*)L_23);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_0;
		NullCheck(L_24);
		L_24->____Org_5 = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_24->____Org_5), (void*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_0;
		NullCheck(L_25);
		L_25->____Lface_6 = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_25->____Lface_6), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_0;
		NullCheck(L_26);
		L_26->____winding_8 = 0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = V_0;
		NullCheck(L_27);
		L_27->____activeRegion_7 = (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_27->____activeRegion_7), (void*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = V_0;
		NullCheck(L_28);
		L_28->____Sym_2 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->____Sym_2), (void*)L_29);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = V_1;
		NullCheck(L_30);
		L_30->____Onext_3 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&L_30->____Onext_3), (void*)L_31);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_0;
		NullCheck(L_32);
		L_32->____Lnext_4 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&L_32->____Lnext_4), (void*)L_33);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = V_1;
		NullCheck(L_34);
		L_34->____Org_5 = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_34->____Org_5), (void*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_1;
		NullCheck(L_35);
		L_35->____Lface_6 = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_35->____Lface_6), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = V_1;
		NullCheck(L_36);
		L_36->____winding_8 = 0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = V_1;
		NullCheck(L_37);
		L_37->____activeRegion_7 = (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_37->____activeRegion_7), (void*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_0;
		return L_38;
	}
}
// System.Void LibTessDotNet.MeshUtils::KillEdge(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillEdge_mD5B1B251756025E5FAE82F5D4D1B3909F561C542 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eDel1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mA77008E61FBAF47FB130D63EA30E8AA4AAB285FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	{
		Edge_EnsureFirst_m0366E62FD8DF5FAA7049A7175F6E9391AE9DAFD7((&___eDel1), NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___eDel1;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____next_1;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = ___eDel1;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____Sym_2;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____next_1;
		V_1 = L_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_0;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_1;
		NullCheck(L_6);
		L_6->____next_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->____next_1), (void*)L_7);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_1;
		NullCheck(L_8);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = L_8->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_0;
		NullCheck(L_9);
		L_9->____next_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->____next_1), (void*)L_10);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_11 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = ___eDel1;
		NullCheck(L_12);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = L_12->____Sym_2;
		NullCheck(L_11);
		GenericVirtualActionInvoker1< Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* >::Invoke(IPool_Return_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mA77008E61FBAF47FB130D63EA30E8AA4AAB285FF_RuntimeMethod_var, L_11, L_13);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_14 = ___pool0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = ___eDel1;
		NullCheck(L_14);
		GenericVirtualActionInvoker1< Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* >::Invoke(IPool_Return_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mA77008E61FBAF47FB130D63EA30E8AA4AAB285FF_RuntimeMethod_var, L_14, L_15);
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils::KillVertex(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillVertex_mA2A67ECE8C48C9D70991F3DC52F939C4DC6290B7 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___vDel1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___newOrg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_2 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_3 = NULL;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___vDel1;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____anEdge_2;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		V_1 = L_2;
	}

IL_0009:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___newOrg2;
		NullCheck(L_3);
		L_3->____Org_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->____Org_5), (void*)L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_1;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____Onext_3;
		V_1 = L_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_0;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_7) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_8))))
		{
			goto IL_0009;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = ___vDel1;
		NullCheck(L_9);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = L_9->____prev_0;
		V_2 = L_10;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11 = ___vDel1;
		NullCheck(L_11);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = L_11->____next_1;
		V_3 = L_12;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = V_2;
		NullCheck(L_13);
		L_13->____prev_0 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->____prev_0), (void*)L_14);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = V_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = V_3;
		NullCheck(L_15);
		L_15->____next_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->____next_1), (void*)L_16);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_17 = ___pool0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = ___vDel1;
		NullCheck(L_17);
		GenericVirtualActionInvoker1< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var, L_17, L_18);
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils::KillFace(LibTessDotNet.IPool,LibTessDotNet.MeshUtils/Face,LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshUtils_KillFace_m5CFE7B05BE7AE10BADCC541F082A53D0E1BB09DF (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___fDel1, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___newLFace2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mEC2EBA4AAAC749589103B708D725DDE53E018172_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_2 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_3 = NULL;
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = ___fDel1;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____anEdge_2;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		V_1 = L_2;
	}

IL_0009:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_1;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_4 = ___newLFace2;
		NullCheck(L_3);
		L_3->____Lface_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->____Lface_6), (void*)L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_1;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____Lnext_4;
		V_1 = L_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_0;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_7) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_8))))
		{
			goto IL_0009;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_9 = ___fDel1;
		NullCheck(L_9);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_10 = L_9->____prev_0;
		V_2 = L_10;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_11 = ___fDel1;
		NullCheck(L_11);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_12 = L_11->____next_1;
		V_3 = L_12;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_13 = V_3;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_14 = V_2;
		NullCheck(L_13);
		L_13->____prev_0 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->____prev_0), (void*)L_14);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_15 = V_2;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_16 = V_3;
		NullCheck(L_15);
		L_15->____next_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->____next_1), (void*)L_16);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_17 = ___pool0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_18 = ___fDel1;
		NullCheck(L_17);
		GenericVirtualActionInvoker1< Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* >::Invoke(IPool_Return_TisFace_t4523029054D66AC2FA8B5BB361B53C040AA990EF_mEC2EBA4AAAC749589103B708D725DDE53E018172_RuntimeMethod_var, L_17, L_18);
		return;
	}
}
// System.Single LibTessDotNet.MeshUtils::FaceArea(LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MeshUtils_FaceArea_m198368582A4CEE00E33907F41C30CDFD5F6841C4 (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	{
		V_0 = (0.0f);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = ___f0;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____anEdge_2;
		V_1 = L_1;
	}

IL_000d:
	{
		float L_2 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_1;
		NullCheck(L_3);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = L_3->____Org_5;
		NullCheck(L_4);
		float L_5 = L_4->____s_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_1;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7;
		L_7 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_6, NULL);
		NullCheck(L_7);
		float L_8 = L_7->____s_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = V_1;
		NullCheck(L_9);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = L_9->____Org_5;
		NullCheck(L_10);
		float L_11 = L_10->____t_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_1;
		NullCheck(L_12);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13;
		L_13 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_12, NULL);
		NullCheck(L_13);
		float L_14 = L_13->____t_5;
		V_0 = ((float)il2cpp_codegen_add(L_2, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_8)), ((float)il2cpp_codegen_add(L_11, L_14))))));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_1;
		NullCheck(L_15);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = L_15->____Lnext_4;
		V_1 = L_16;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_1;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_18 = ___f0;
		NullCheck(L_18);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = L_18->____anEdge_2;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_17) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_19))))
		{
			goto IL_000d;
		}
	}
	{
		float L_20 = V_0;
		return L_20;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibTessDotNet.MeshUtils/Vertex::Init(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex_Init_m3BBE75E5B051EE36FEC84AB7A343878D8A31125E (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils/Vertex::Reset(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex_Reset_mA465348BA96A189842668A660718EA65A96F3F79 (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	{
		V_0 = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		__this->____next_1 = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____next_1), (void*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = V_0;
		__this->____prev_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____prev_0), (void*)L_0);
		__this->____anEdge_2 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____anEdge_2), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		il2cpp_codegen_runtime_class_init_inline(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_1 = ((Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var))->___Zero_0;
		__this->____coords_3 = L_1;
		__this->____s_4 = (0.0f);
		__this->____t_5 = (0.0f);
		PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043* L_2 = (&__this->____pqHandle_6);
		il2cpp_codegen_initobj(L_2, sizeof(PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043));
		__this->____n_7 = 0;
		__this->____data_8 = (-1);
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils/Vertex::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_mF0524539C2A7708D255C415B73D6253EAF2CBF3C (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 LibTessDotNet.MeshUtils/Face::get_VertsCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Face_get_VertsCount_m0EB6E9229787A15369C28423410F895E7F211AC0 (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	{
		V_0 = 0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____anEdge_2;
		V_1 = L_0;
	}

IL_0009:
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_1;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____Lnext_4;
		V_1 = L_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = __this->____anEdge_2;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_4) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_5))))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Void LibTessDotNet.MeshUtils/Face::Init(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Face_Init_m03F7722EFAFCD37C885A8C161DD89CDFD2245847 (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils/Face::Reset(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Face_Reset_mCE1993AB18C22B85935F5CF6E60AD07A63D97B02 (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) 
{
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	{
		V_0 = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		__this->____next_1 = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____next_1), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = V_0;
		__this->____prev_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____prev_0), (void*)L_0);
		__this->____anEdge_2 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____anEdge_2), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		__this->____trail_3 = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____trail_3), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		__this->____n_4 = 0;
		__this->____marked_5 = (bool)0;
		__this->____inside_6 = (bool)0;
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils/Face::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Face__ctor_mC2E2FBE2A1C7557E01D2324B38344BE5C0825E57 (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: LibTessDotNet.MeshUtils/EdgePair
IL2CPP_EXTERN_C void EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshal_pinvoke(const EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E& unmarshaled, EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_pinvoke& marshaled)
{
	Exception_t* ____e_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_e' of type 'EdgePair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____e_0Exception, NULL);
}
IL2CPP_EXTERN_C void EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshal_pinvoke_back(const EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_pinvoke& marshaled, EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E& unmarshaled)
{
	Exception_t* ____e_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_e' of type 'EdgePair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____e_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LibTessDotNet.MeshUtils/EdgePair
IL2CPP_EXTERN_C void EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshal_pinvoke_cleanup(EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LibTessDotNet.MeshUtils/EdgePair
IL2CPP_EXTERN_C void EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshal_com(const EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E& unmarshaled, EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_com& marshaled)
{
	Exception_t* ____e_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_e' of type 'EdgePair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____e_0Exception, NULL);
}
IL2CPP_EXTERN_C void EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshal_com_back(const EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_com& marshaled, EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E& unmarshaled)
{
	Exception_t* ____e_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_e' of type 'EdgePair': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____e_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LibTessDotNet.MeshUtils/EdgePair
IL2CPP_EXTERN_C void EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshal_com_cleanup(EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E_marshaled_com& marshaled)
{
}
// LibTessDotNet.MeshUtils/EdgePair LibTessDotNet.MeshUtils/EdgePair::Create(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E EdgePair_Create_m3F7AB1D97F9DF48F860105103A5C3D7123425BB5 (IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mC3881C0DB54C1395F2AA8B02B199660E7A13CF69_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = ___pool0;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1;
		L_1 = GenericVirtualFuncInvoker0< Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* >::Invoke(IPool_Get_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mC3881C0DB54C1395F2AA8B02B199660E7A13CF69_RuntimeMethod_var, L_0);
		V_0 = L_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_2 = ___pool0;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3;
		L_3 = GenericVirtualFuncInvoker0< Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* >::Invoke(IPool_Get_TisEdge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966_mC3881C0DB54C1395F2AA8B02B199660E7A13CF69_RuntimeMethod_var, L_2);
		V_1 = L_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_0;
		NullCheck(L_4);
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E* L_5 = (&L_4->____pair_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_0;
		L_5->____e_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->____e_0), (void*)L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_0;
		NullCheck(L_7);
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E* L_8 = (&L_7->____pair_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = V_1;
		L_8->____eSym_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->____eSym_1), (void*)L_9);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_0;
		NullCheck(L_11);
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_12 = L_11->____pair_0;
		NullCheck(L_10);
		L_10->____pair_0 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_10->____pair_0))->____e_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_10->____pair_0))->____eSym_1), (void*)NULL);
		#endif
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		NullCheck(L_13);
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E L_14 = L_13->____pair_0;
		return L_14;
	}
}
// System.Void LibTessDotNet.MeshUtils/EdgePair::Reset(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EdgePair_Reset_mE735EE154A3C3F31761F1094EA0A5F0BC6072482 (EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	{
		V_0 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		__this->____eSym_1 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eSym_1), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = V_0;
		__this->____e_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____e_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void EdgePair_Reset_mE735EE154A3C3F31761F1094EA0A5F0BC6072482_AdjustorThunk (RuntimeObject* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method)
{
	EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E*>(__this + _offset);
	EdgePair_Reset_mE735EE154A3C3F31761F1094EA0A5F0BC6072482(_thisAdjusted, ___pool0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// LibTessDotNet.MeshUtils/Face LibTessDotNet.MeshUtils/Edge::get__Rface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym_2;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = L_0->____Lface_6;
		return L_1;
	}
}
// System.Void LibTessDotNet.MeshUtils/Edge::set__Rface(LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Rface_m9A4FEC09331777DF1DC569EE7C8759B96CBD7FBF (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___value0, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym_2;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = ___value0;
		NullCheck(L_0);
		L_0->____Lface_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Lface_6), (void*)L_1);
		return;
	}
}
// LibTessDotNet.MeshUtils/Vertex LibTessDotNet.MeshUtils/Edge::get__Dst()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym_2;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = L_0->____Org_5;
		return L_1;
	}
}
// System.Void LibTessDotNet.MeshUtils/Edge::set__Dst(LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Dst_mFC8AB632C1CBED66AC767230468FC1E30DB1682E (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___value0, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = ___value0;
		NullCheck(L_0);
		L_0->____Org_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Org_5), (void*)L_1);
		return;
	}
}
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::get__Oprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym_2;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Lnext_4;
		return L_1;
	}
}
// System.Void LibTessDotNet.MeshUtils/Edge::set__Oprev(LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Oprev_m8546D649B9C09D86BCC5409860FF7C1B52B654DE (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___value0, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___value0;
		NullCheck(L_0);
		L_0->____Lnext_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Lnext_4), (void*)L_1);
		return;
	}
}
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::get__Lprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Onext_3;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Sym_2;
		return L_1;
	}
}
// System.Void LibTessDotNet.MeshUtils/Edge::set__Lprev(LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Lprev_mD73100E86177F935996719708235E5EC89E68CBB (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___value0, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Onext_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___value0;
		NullCheck(L_0);
		L_0->____Sym_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Sym_2), (void*)L_1);
		return;
	}
}
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::get__Dprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Dprev_mD7DD853008B25880C3033A655BD3E24587330CBE (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Lnext_4;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Sym_2;
		return L_1;
	}
}
// System.Void LibTessDotNet.MeshUtils/Edge::set__Dprev(LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Dprev_m910CB7AD7C0830726F21D6B5A23DEAFDB8854067 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___value0, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___value0;
		NullCheck(L_0);
		L_0->____Sym_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Sym_2), (void*)L_1);
		return;
	}
}
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::get__Rprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Rprev_m7B1E8686D5C2FDE826371F597917BD4B5313D174 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym_2;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Onext_3;
		return L_1;
	}
}
// System.Void LibTessDotNet.MeshUtils/Edge::set__Rprev(LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Rprev_m1210B35EEBF501A907DDEBFCE242289816D2C394 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___value0, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = __this->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___value0;
		NullCheck(L_0);
		L_0->____Onext_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Onext_3), (void*)L_1);
		return;
	}
}
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::get__Dnext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Dnext_m7E374925C354672842CF18197905942EA76DD7E7 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0;
		L_0 = Edge_get__Rprev_m7B1E8686D5C2FDE826371F597917BD4B5313D174(__this, NULL);
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Sym_2;
		return L_1;
	}
}
// System.Void LibTessDotNet.MeshUtils/Edge::set__Dnext(LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Dnext_mBCF18FEE0F52593B49287BE89CCF4046B267E048 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___value0, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0;
		L_0 = Edge_get__Rprev_m7B1E8686D5C2FDE826371F597917BD4B5313D174(__this, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___value0;
		NullCheck(L_0);
		L_0->____Sym_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Sym_2), (void*)L_1);
		return;
	}
}
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.MeshUtils/Edge::get__Rnext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Edge_get__Rnext_mC55A8695BDDE88F2AE4DD7701208A4C3AF207698 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0;
		L_0 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(__this, NULL);
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Sym_2;
		return L_1;
	}
}
// System.Void LibTessDotNet.MeshUtils/Edge::set__Rnext(LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_set__Rnext_m5FDD1F90616E9DFF623FBDA9CDD7538DBEFB8253 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___value0, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0;
		L_0 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(__this, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = ___value0;
		NullCheck(L_0);
		L_0->____Sym_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->____Sym_2), (void*)L_1);
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils/Edge::EnsureFirst(LibTessDotNet.MeshUtils/Edge&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_EnsureFirst_m0366E62FD8DF5FAA7049A7175F6E9391AE9DAFD7 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** ___e0, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** L_0 = ___e0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = *((Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966**)L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** L_2 = ___e0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = *((Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966**)L_2);
		NullCheck(L_3);
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E* L_4 = (&L_3->____pair_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____eSym_1;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_1) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_5))))
		{
			goto IL_0019;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** L_6 = ___e0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966** L_7 = ___e0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = *((Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966**)L_7);
		NullCheck(L_8);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = L_8->____Sym_2;
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_9);
	}

IL_0019:
	{
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils/Edge::Init(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_Init_mAA9EFDE3C5AC0F238629D2134D72F372337BA0B7 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils/Edge::Reset(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge_Reset_m5660C4D534CBBF59F2E32F423E56517E41042542 (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	{
		EdgePair_tEBCE8A4B4EF825BD3A89DBD0DA9B057C4243564E* L_0 = (&__this->____pair_0);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_1 = ___pool0;
		EdgePair_Reset_mE735EE154A3C3F31761F1094EA0A5F0BC6072482(L_0, L_1, NULL);
		V_0 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		__this->____Lnext_4 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Lnext_4), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2;
		V_0 = L_3;
		__this->____Onext_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Onext_3), (void*)L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4;
		V_0 = L_5;
		__this->____Sym_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Sym_2), (void*)L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_0;
		__this->____next_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____next_1), (void*)L_6);
		__this->____Org_5 = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Org_5), (void*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL);
		__this->____Lface_6 = (Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Lface_6), (void*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)NULL);
		__this->____activeRegion_7 = (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeRegion_7), (void*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL);
		__this->____winding_8 = 0;
		return;
	}
}
// System.Void LibTessDotNet.MeshUtils/Edge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge__ctor_m349424407337EC75E8156A48AFE20702CFF727DE (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibTessDotNet.PQHandle::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PQHandle__cctor_mB8414CCFA63CBA5CA81982D4C817F624604D9439 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_StaticFields*)il2cpp_codegen_static_fields_for(PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var))->___Invalid_0 = ((int32_t)268435455);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// LibTessDotNet.Tess/ActiveRegion LibTessDotNet.Tess::RegionBelow(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, const RuntimeMethod* method) 
{
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___reg0;
		NullCheck(L_0);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_1 = L_0->____nodeUp_1;
		NullCheck(L_1);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_2 = L_1->____prev_1;
		NullCheck(L_2);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3 = L_2->____key_0;
		return L_3;
	}
}
// LibTessDotNet.Tess/ActiveRegion LibTessDotNet.Tess::RegionAbove(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, const RuntimeMethod* method) 
{
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___reg0;
		NullCheck(L_0);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_1 = L_0->____nodeUp_1;
		NullCheck(L_1);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_2 = L_1->____next_2;
		NullCheck(L_2);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3 = L_2->____key_0;
		return L_3;
	}
}
// System.Boolean LibTessDotNet.Tess::EdgeLeq(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_EdgeLeq_m91CF47985D9D5E386D03C685E54E650DA722307A (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg10, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg21, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	float V_2 = 0.0f;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___reg10;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____eUp_0;
		V_0 = L_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = ___reg21;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____eUp_0;
		V_1 = L_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_0;
		NullCheck(L_4);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5;
		L_5 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_4, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = __this->____event_12;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_5) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_6))))
		{
			goto IL_00a6;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_1;
		NullCheck(L_7);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8;
		L_8 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_7, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = __this->____event_12;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_8) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_9))))
		{
			goto IL_0084;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_0;
		NullCheck(L_10);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11 = L_10->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_1;
		NullCheck(L_12);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13 = L_12->____Org_5;
		bool L_14;
		L_14 = Geom_VertLeq_mE7BBC948CD971E64A0D22328A3CAAD4B2CE82342(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0062;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_1;
		NullCheck(L_15);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16;
		L_16 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_15, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_0;
		NullCheck(L_17);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = L_17->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_1;
		NullCheck(L_19);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_20 = L_19->____Org_5;
		float L_21;
		L_21 = Geom_EdgeSign_mB4FA2C46F053680D96F80EC78C1616104DDA7396(L_16, L_18, L_20, NULL);
		return (bool)((((int32_t)((!(((float)L_21) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0062:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_0;
		NullCheck(L_22);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_23;
		L_23 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_22, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_1;
		NullCheck(L_24);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_25 = L_24->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_0;
		NullCheck(L_26);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_27 = L_26->____Org_5;
		float L_28;
		L_28 = Geom_EdgeSign_mB4FA2C46F053680D96F80EC78C1616104DDA7396(L_23, L_25, L_27, NULL);
		return (bool)((((int32_t)((!(((float)L_28) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0084:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = V_1;
		NullCheck(L_29);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_30;
		L_30 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_29, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_31 = __this->____event_12;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_1;
		NullCheck(L_32);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_33 = L_32->____Org_5;
		float L_34;
		L_34 = Geom_EdgeSign_mB4FA2C46F053680D96F80EC78C1616104DDA7396(L_30, L_31, L_33, NULL);
		return (bool)((((int32_t)((!(((float)L_34) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00a6:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_1;
		NullCheck(L_35);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_36;
		L_36 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_35, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_37 = __this->____event_12;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_36) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_37))))
		{
			goto IL_00d6;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_0;
		NullCheck(L_38);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_39;
		L_39 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_38, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_40 = __this->____event_12;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = V_0;
		NullCheck(L_41);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_42 = L_41->____Org_5;
		float L_43;
		L_43 = Geom_EdgeSign_mB4FA2C46F053680D96F80EC78C1616104DDA7396(L_39, L_40, L_42, NULL);
		return (bool)((((int32_t)((!(((float)L_43) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00d6:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = V_0;
		NullCheck(L_44);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_45;
		L_45 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_44, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_46 = __this->____event_12;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_47 = V_0;
		NullCheck(L_47);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_48 = L_47->____Org_5;
		float L_49;
		L_49 = Geom_EdgeEval_mB6C57DD6CD0D3BF013C0CD43FF261990DC6B2877(L_45, L_46, L_48, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_1;
		NullCheck(L_50);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_51;
		L_51 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_50, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_52 = __this->____event_12;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_53 = V_1;
		NullCheck(L_53);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_54 = L_53->____Org_5;
		float L_55;
		L_55 = Geom_EdgeEval_mB6C57DD6CD0D3BF013C0CD43FF261990DC6B2877(L_51, L_52, L_54, NULL);
		V_2 = L_55;
		float L_56 = V_2;
		return (bool)((((int32_t)((!(((float)L_49) >= ((float)L_56)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void LibTessDotNet.Tess::DeleteRegion(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_Remove_m90AD4E7F57974AB8886C9391C251C694CD9644C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m710088A37FD53E25E588FE38C58925E766A12636_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___reg0;
		NullCheck(L_0);
		bool L_1 = L_0->____fixUpperEdge_6;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = ___reg0;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____eUp_0;
		NullCheck(L_3);
		L_3->____activeRegion_7 = (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->____activeRegion_7), (void*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL);
		Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* L_4 = __this->____dict_10;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_5 = ___reg0;
		NullCheck(L_5);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_6 = L_5->____nodeUp_1;
		NullCheck(L_4);
		Dict_1_Remove_m90AD4E7F57974AB8886C9391C251C694CD9644C9(L_4, L_6, Dict_1_Remove_m90AD4E7F57974AB8886C9391C251C694CD9644C9_RuntimeMethod_var);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_7 = __this->____pool_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_8 = ___reg0;
		NullCheck(L_7);
		GenericVirtualActionInvoker1< ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* >::Invoke(IPool_Return_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m710088A37FD53E25E588FE38C58925E766A12636_RuntimeMethod_var, L_7, L_8);
		return;
	}
}
// System.Void LibTessDotNet.Tess::FixUpperEdge(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_FixUpperEdge_m1E4236D65D3FB0321FA1FB71BAE30806B18D889B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___newEdge1, const RuntimeMethod* method) 
{
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_1 = __this->____pool_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = ___reg0;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____eUp_0;
		NullCheck(L_0);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_0, L_1, L_3, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = ___reg0;
		NullCheck(L_4);
		L_4->____fixUpperEdge_6 = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_5 = ___reg0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = ___newEdge1;
		NullCheck(L_5);
		L_5->____eUp_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->____eUp_0), (void*)L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = ___newEdge1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_8 = ___reg0;
		NullCheck(L_7);
		L_7->____activeRegion_7 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->____activeRegion_7), (void*)L_8);
		return;
	}
}
// LibTessDotNet.Tess/ActiveRegion LibTessDotNet.Tess::TopLeftRegion(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_TopLeftRegion_m2FA0AA199DAE05530C04BFFE790A3CB8C83C7F86 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, const RuntimeMethod* method) 
{
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___reg0;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____eUp_0;
		NullCheck(L_1);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = L_1->____Org_5;
		V_0 = L_2;
	}

IL_000c:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3 = ___reg0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4;
		L_4 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_3, NULL);
		___reg0 = L_4;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_5 = ___reg0;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____eUp_0;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = L_6->____Org_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = V_0;
		if ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_7) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_8)))
		{
			goto IL_000c;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_9 = ___reg0;
		NullCheck(L_9);
		bool L_10 = L_9->____fixUpperEdge_6;
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_11 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_12 = __this->____pool_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_13 = ___reg0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_14;
		L_14 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_13, NULL);
		NullCheck(L_14);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = L_14->____eUp_0;
		NullCheck(L_15);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = L_15->____Sym_2;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_17 = ___reg0;
		NullCheck(L_17);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = L_17->____eUp_0;
		NullCheck(L_18);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = L_18->____Lnext_4;
		NullCheck(L_11);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20;
		L_20 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_11, L_12, L_16, L_19, NULL);
		V_1 = L_20;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_21 = ___reg0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_1;
		Tess_FixUpperEdge_m1E4236D65D3FB0321FA1FB71BAE30806B18D889B(__this, L_21, L_22, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_23 = ___reg0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_24;
		L_24 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_23, NULL);
		___reg0 = L_24;
	}

IL_006a:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_25 = ___reg0;
		return L_25;
	}
}
// LibTessDotNet.Tess/ActiveRegion LibTessDotNet.Tess::TopRightRegion(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_TopRightRegion_m4D715D95F08BD411FFABF59F4DB4FBD0EDC2E1E7 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, const RuntimeMethod* method) 
{
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___reg0;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____eUp_0;
		NullCheck(L_1);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2;
		L_2 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_1, NULL);
		V_0 = L_2;
	}

IL_000c:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3 = ___reg0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4;
		L_4 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_3, NULL);
		___reg0 = L_4;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_5 = ___reg0;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____eUp_0;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7;
		L_7 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_6, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = V_0;
		if ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_7) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_8)))
		{
			goto IL_000c;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_9 = ___reg0;
		return L_9;
	}
}
// LibTessDotNet.Tess/ActiveRegion LibTessDotNet.Tess::AddRegionBelow(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* Tess_AddRegionBelow_m0275D421E35EBBEFF2546E2DDEFBBB1061EC700D (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regAbove0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eNewUp1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_InsertBefore_m6E4EB99BCD65F825FE9F1D3FF6EA413B8A1A2390_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m0C9ECBA50066B4287A5C6AF8BDD616D679FACD68_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = __this->____pool_0;
		NullCheck(L_0);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1;
		L_1 = GenericVirtualFuncInvoker0< ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* >::Invoke(IPool_Get_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m0C9ECBA50066B4287A5C6AF8BDD616D679FACD68_RuntimeMethod_var, L_0);
		V_0 = L_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = ___eNewUp1;
		NullCheck(L_2);
		L_2->____eUp_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____eUp_0), (void*)L_3);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = V_0;
		Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* L_5 = __this->____dict_10;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_6 = ___regAbove0;
		NullCheck(L_6);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_7 = L_6->____nodeUp_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_8 = V_0;
		NullCheck(L_5);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_9;
		L_9 = Dict_1_InsertBefore_m6E4EB99BCD65F825FE9F1D3FF6EA413B8A1A2390(L_5, L_7, L_8, Dict_1_InsertBefore_m6E4EB99BCD65F825FE9F1D3FF6EA413B8A1A2390_RuntimeMethod_var);
		NullCheck(L_4);
		L_4->____nodeUp_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____nodeUp_1), (void*)L_9);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_10 = V_0;
		NullCheck(L_10);
		L_10->____fixUpperEdge_6 = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_11 = V_0;
		NullCheck(L_11);
		L_11->____sentinel_4 = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_12 = V_0;
		NullCheck(L_12);
		L_12->____dirty_5 = (bool)0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = ___eNewUp1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_14 = V_0;
		NullCheck(L_13);
		L_13->____activeRegion_7 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->____activeRegion_7), (void*)L_14);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_15 = V_0;
		return L_15;
	}
}
// System.Void LibTessDotNet.Tess::ComputeWinding(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeWinding_m08BB6BDD14F5FD6820052F3833AE916DB6D05B50 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, const RuntimeMethod* method) 
{
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___reg0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1 = ___reg0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2;
		L_2 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_1, NULL);
		NullCheck(L_2);
		int32_t L_3 = L_2->____windingNumber_2;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = ___reg0;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____eUp_0;
		NullCheck(L_5);
		int32_t L_6 = L_5->____winding_8;
		NullCheck(L_0);
		L_0->____windingNumber_2 = ((int32_t)il2cpp_codegen_add(L_3, L_6));
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_7 = ___reg0;
		int32_t L_8 = __this->____windingRule_9;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_9 = ___reg0;
		NullCheck(L_9);
		int32_t L_10 = L_9->____windingNumber_2;
		bool L_11;
		L_11 = Geom_IsWindingInside_m106D4C32D3416A550AB5EFF5F14D383CE1516187(L_8, L_10, NULL);
		NullCheck(L_7);
		L_7->____inside_3 = L_11;
		return;
	}
}
// System.Void LibTessDotNet.Tess::FinishRegion(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_FinishRegion_m57A9A719924F3022E03232E2E94228DF7CB5E787 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___reg0, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___reg0;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____eUp_0;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		NullCheck(L_2);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = L_2->____Lface_6;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_4 = L_3;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_5 = ___reg0;
		NullCheck(L_5);
		bool L_6 = L_5->____inside_3;
		NullCheck(L_4);
		L_4->____inside_6 = L_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_0;
		NullCheck(L_4);
		L_4->____anEdge_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->____anEdge_2), (void*)L_7);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_8 = ___reg0;
		Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C(__this, L_8, NULL);
		return;
	}
}
// LibTessDotNet.MeshUtils/Edge LibTessDotNet.Tess::FinishLeftRegions(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* Tess_FinishLeftRegions_mF89D4A8EE348FDEEFC78715A74EE7029282EAE82 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regFirst0, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regLast1, const RuntimeMethod* method) 
{
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___regFirst0;
		V_0 = L_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1 = ___regFirst0;
		NullCheck(L_1);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = L_1->____eUp_0;
		V_1 = L_2;
		goto IL_00ad;
	}

IL_000e:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3 = V_0;
		NullCheck(L_3);
		L_3->____fixUpperEdge_6 = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = V_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_5;
		L_5 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_4, NULL);
		V_2 = L_5;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_6 = V_2;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____eUp_0;
		V_3 = L_7;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_3;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = L_8->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_1;
		NullCheck(L_10);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11 = L_10->____Org_5;
		if ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_9) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_11)))
		{
			goto IL_0069;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_12 = V_2;
		NullCheck(L_12);
		bool L_13 = L_12->____fixUpperEdge_6;
		if (L_13)
		{
			goto IL_0043;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_14 = V_0;
		Tess_FinishRegion_m57A9A719924F3022E03232E2E94228DF7CB5E787(__this, L_14, NULL);
		goto IL_00b4;
	}

IL_0043:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_15 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_16 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_1;
		NullCheck(L_17);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18;
		L_18 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_17, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_3;
		NullCheck(L_19);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = L_19->____Sym_2;
		NullCheck(L_15);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21;
		L_21 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_15, L_16, L_18, L_20, NULL);
		V_3 = L_21;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_22 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_3;
		Tess_FixUpperEdge_m1E4236D65D3FB0321FA1FB71BAE30806B18D889B(__this, L_22, L_23, NULL);
	}

IL_0069:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_1;
		NullCheck(L_24);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = L_24->____Onext_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_3;
		if ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_25) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_26)))
		{
			goto IL_009d;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_27 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_28 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = V_3;
		NullCheck(L_29);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30;
		L_30 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_29, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = V_3;
		NullCheck(L_27);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_27, L_28, L_30, L_31, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_32 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_33 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_3;
		NullCheck(L_32);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_32, L_33, L_34, L_35, NULL);
	}

IL_009d:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_36 = V_0;
		Tess_FinishRegion_m57A9A719924F3022E03232E2E94228DF7CB5E787(__this, L_36, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_37 = V_2;
		NullCheck(L_37);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = L_37->____eUp_0;
		V_1 = L_38;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_39 = V_2;
		V_0 = L_39;
	}

IL_00ad:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_40 = V_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_41 = ___regLast1;
		if ((!(((RuntimeObject*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)L_40) == ((RuntimeObject*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)L_41))))
		{
			goto IL_000e;
		}
	}

IL_00b4:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_1;
		return L_42;
	}
}
// System.Void LibTessDotNet.Tess::AddRightEdges(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regUp0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eFirst1, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eLast2, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eTopLeft3, bool ___cleanUp4, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_2 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_3 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_4 = NULL;
	{
		V_0 = (bool)1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___eFirst1;
		V_1 = L_0;
	}

IL_0004:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1 = ___regUp0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_1;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____Sym_2;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4;
		L_4 = Tess_AddRegionBelow_m0275D421E35EBBEFF2546E2DDEFBBB1061EC700D(__this, L_1, L_3, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_1;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____Onext_3;
		V_1 = L_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = ___eLast2;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_7) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_8))))
		{
			goto IL_0004;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = ___eTopLeft3;
		if (L_9)
		{
			goto IL_0034;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_10 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_11;
		L_11 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_10, NULL);
		NullCheck(L_11);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = L_11->____eUp_0;
		NullCheck(L_12);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13;
		L_13 = Edge_get__Rprev_m7B1E8686D5C2FDE826371F597917BD4B5313D174(L_12, NULL);
		___eTopLeft3 = L_13;
	}

IL_0034:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_14 = ___regUp0;
		V_2 = L_14;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = ___eTopLeft3;
		V_4 = L_15;
	}

IL_003a:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_16 = V_2;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_17;
		L_17 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_16, NULL);
		V_3 = L_17;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_18 = V_3;
		NullCheck(L_18);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = L_18->____eUp_0;
		NullCheck(L_19);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = L_19->____Sym_2;
		V_1 = L_20;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = V_1;
		NullCheck(L_21);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = L_21->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_4;
		NullCheck(L_23);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_24 = L_23->____Org_5;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_22) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_24))))
		{
			goto IL_0106;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_1;
		NullCheck(L_25);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = L_25->____Onext_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = V_4;
		if ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_26) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_27)))
		{
			goto IL_009b;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_28 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_29 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_1;
		NullCheck(L_30);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31;
		L_31 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_30, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_1;
		NullCheck(L_28);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_28, L_29, L_31, L_32, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_33 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_34 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_4;
		NullCheck(L_35);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36;
		L_36 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_35, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = V_1;
		NullCheck(L_33);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_33, L_34, L_36, L_37, NULL);
	}

IL_009b:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_38 = V_3;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_39 = V_2;
		NullCheck(L_39);
		int32_t L_40 = L_39->____windingNumber_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = V_1;
		NullCheck(L_41);
		int32_t L_42 = L_41->____winding_8;
		NullCheck(L_38);
		L_38->____windingNumber_2 = ((int32_t)il2cpp_codegen_subtract(L_40, L_42));
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_43 = V_3;
		int32_t L_44 = __this->____windingRule_9;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_45 = V_3;
		NullCheck(L_45);
		int32_t L_46 = L_45->____windingNumber_2;
		bool L_47;
		L_47 = Geom_IsWindingInside_m106D4C32D3416A550AB5EFF5F14D383CE1516187(L_44, L_46, NULL);
		NullCheck(L_43);
		L_43->____inside_3 = L_47;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_48 = V_2;
		NullCheck(L_48);
		L_48->____dirty_5 = (bool)1;
		bool L_49 = V_0;
		if (L_49)
		{
			goto IL_00fa;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_50 = V_2;
		bool L_51;
		L_51 = Tess_CheckForRightSplice_m73E6E5E3B926500479750597286CAEAA603E4F58(__this, L_50, NULL);
		if (!L_51)
		{
			goto IL_00fa;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_52 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_53 = V_4;
		Geom_AddWinding_m34E8125D7C665C3E4A86181F6C00198E5CECC458(L_52, L_53, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_54 = V_2;
		Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C(__this, L_54, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_55 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_56 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_57 = V_4;
		NullCheck(L_55);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_55, L_56, L_57, NULL);
	}

IL_00fa:
	{
		V_0 = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_58 = V_3;
		V_2 = L_58;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_59 = V_1;
		V_4 = L_59;
		goto IL_003a;
	}

IL_0106:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_60 = V_2;
		NullCheck(L_60);
		L_60->____dirty_5 = (bool)1;
		bool L_61 = ___cleanUp4;
		if (!L_61)
		{
			goto IL_0118;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_62 = V_2;
		Tess_WalkDirtyRegions_m5988A5D583346F08BC85EADEEF4D527752099025(__this, L_62, NULL);
	}

IL_0118:
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::SpliceMergeVertices(LibTessDotNet.MeshUtils/Edge,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SpliceMergeVertices_m3C1B73AB8A2F388421982B310359B74FE1F73290 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___e10, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___e21, const RuntimeMethod* method) 
{
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_1 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = ___e10;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = ___e21;
		NullCheck(L_0);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void LibTessDotNet.Tess::VertexWeights(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_VertexWeights_mF6D88112E28CC0EA4628811DCE8F19EEDAC3D66E (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___isect0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___org1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___dst2, float* ___w03, float* ___w14, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___org1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = ___isect0;
		float L_2;
		L_2 = Geom_VertL1dist_m227D6A93A82591E5BAC24F2182EE458419985B15(L_0, L_1, NULL);
		V_0 = L_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = ___dst2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___isect0;
		float L_5;
		L_5 = Geom_VertL1dist_m227D6A93A82591E5BAC24F2182EE458419985B15(L_3, L_4, NULL);
		V_1 = L_5;
		float* L_6 = ___w03;
		float L_7 = V_1;
		float L_8 = V_0;
		float L_9 = V_1;
		*((float*)L_6) = (float)((float)(((float)(L_7/((float)il2cpp_codegen_add(L_8, L_9))))/(2.0f)));
		float* L_10 = ___w14;
		float L_11 = V_0;
		float L_12 = V_0;
		float L_13 = V_1;
		*((float*)L_10) = (float)((float)(((float)(L_11/((float)il2cpp_codegen_add(L_12, L_13))))/(2.0f)));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = ___isect0;
		NullCheck(L_14);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_15 = (&L_14->____coords_3);
		float* L_16 = (&L_15->___X_1);
		float* L_17 = L_16;
		float L_18 = *((float*)L_17);
		float* L_19 = ___w03;
		float L_20 = *((float*)L_19);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = ___org1;
		NullCheck(L_21);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_22 = (&L_21->____coords_3);
		float L_23 = L_22->___X_1;
		float* L_24 = ___w14;
		float L_25 = *((float*)L_24);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_26 = ___dst2;
		NullCheck(L_26);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_27 = (&L_26->____coords_3);
		float L_28 = L_27->___X_1;
		*((float*)L_17) = (float)((float)il2cpp_codegen_add(L_18, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_20, L_23)), ((float)il2cpp_codegen_multiply(L_25, L_28))))));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_29 = ___isect0;
		NullCheck(L_29);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_30 = (&L_29->____coords_3);
		float* L_31 = (&L_30->___Y_2);
		float* L_32 = L_31;
		float L_33 = *((float*)L_32);
		float* L_34 = ___w03;
		float L_35 = *((float*)L_34);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_36 = ___org1;
		NullCheck(L_36);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_37 = (&L_36->____coords_3);
		float L_38 = L_37->___Y_2;
		float* L_39 = ___w14;
		float L_40 = *((float*)L_39);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_41 = ___dst2;
		NullCheck(L_41);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_42 = (&L_41->____coords_3);
		float L_43 = L_42->___Y_2;
		*((float*)L_32) = (float)((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_35, L_38)), ((float)il2cpp_codegen_multiply(L_40, L_43))))));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_44 = ___isect0;
		NullCheck(L_44);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_45 = (&L_44->____coords_3);
		float* L_46 = (&L_45->___Z_3);
		float* L_47 = L_46;
		float L_48 = *((float*)L_47);
		float* L_49 = ___w03;
		float L_50 = *((float*)L_49);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_51 = ___org1;
		NullCheck(L_51);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_52 = (&L_51->____coords_3);
		float L_53 = L_52->___Z_3;
		float* L_54 = ___w14;
		float L_55 = *((float*)L_54);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_56 = ___dst2;
		NullCheck(L_56);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_57 = (&L_56->____coords_3);
		float L_58 = L_57->___Z_3;
		*((float*)L_47) = (float)((float)il2cpp_codegen_add(L_48, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_50, L_53)), ((float)il2cpp_codegen_multiply(L_55, L_58))))));
		return;
	}
}
// System.Void LibTessDotNet.Tess::GetIntersectData(LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_GetIntersectData_m1EF3ED6C6834CACC2C20DD246F414D854BBFF6CE (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___isect0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___orgUp1, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___dstUp2, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___orgLo3, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___dstLo4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___isect0;
		il2cpp_codegen_runtime_class_init_inline(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_1 = ((Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var))->___Zero_0;
		NullCheck(L_0);
		L_0->____coords_3 = L_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = ___isect0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = ___orgUp1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___dstUp2;
		Tess_VertexWeights_mF6D88112E28CC0EA4628811DCE8F19EEDAC3D66E(__this, L_2, L_3, L_4, (&V_0), (&V_1), NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5 = ___isect0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___orgLo3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = ___dstLo4;
		Tess_VertexWeights_mF6D88112E28CC0EA4628811DCE8F19EEDAC3D66E(__this, L_5, L_6, L_7, (&V_2), (&V_3), NULL);
		CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* L_8 = __this->____combineCallback_13;
		if (!L_8)
		{
			goto IL_0088;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = ___isect0;
		CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* L_10 = __this->____combineCallback_13;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11 = ___isect0;
		NullCheck(L_11);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_12 = L_11->____coords_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = L_13;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = ___orgUp1;
		NullCheck(L_15);
		int32_t L_16 = L_15->____data_8;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_16);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = L_14;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = ___dstUp2;
		NullCheck(L_18);
		int32_t L_19 = L_18->____data_8;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_19);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = L_17;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = ___orgLo3;
		NullCheck(L_21);
		int32_t L_22 = L_21->____data_8;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_22);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = L_20;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_24 = ___dstLo4;
		NullCheck(L_24);
		int32_t L_25 = L_24->____data_8;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)L_25);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_26 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = L_26;
		float L_28 = V_0;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_28);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = L_27;
		float L_30 = V_1;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_30);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_31 = L_29;
		float L_32 = V_2;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_32);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_33 = L_31;
		float L_34 = V_3;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)L_34);
		NullCheck(L_10);
		int32_t L_35;
		L_35 = CombineCallback_Invoke_m7500D256E412AE15988DD1BB818FFBEEDCA11357_inline(L_10, L_12, L_23, L_33, NULL);
		NullCheck(L_9);
		L_9->____data_8 = L_35;
	}

IL_0088:
	{
		return;
	}
}
// System.Boolean LibTessDotNet.Tess::CheckForRightSplice(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForRightSplice_m73E6E5E3B926500479750597286CAEAA603E4F58 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regUp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Remove_mCE983D6C8585217615CAF8DFEE8401A32DEA7BCA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	bool V_3 = false;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1;
		L_1 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_0, NULL);
		V_0 = L_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = ___regUp0;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____eUp_0;
		V_1 = L_3;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = V_0;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____eUp_0;
		V_2 = L_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_1;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = L_6->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_2;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = L_8->____Org_5;
		bool L_10;
		L_10 = Geom_VertLeq_mE7BBC948CD971E64A0D22328A3CAAD4B2CE82342(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_00da;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_2;
		NullCheck(L_11);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12;
		L_12 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_11, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_1;
		NullCheck(L_13);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = L_13->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_2;
		NullCheck(L_15);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = L_15->____Org_5;
		float L_17;
		L_17 = Geom_EdgeSign_mB4FA2C46F053680D96F80EC78C1616104DDA7396(L_12, L_14, L_16, NULL);
		if ((!(((float)L_17) > ((float)(0.0f)))))
		{
			goto IL_004c;
		}
	}
	{
		return (bool)0;
	}

IL_004c:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = V_1;
		NullCheck(L_18);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19 = L_18->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_2;
		NullCheck(L_20);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = L_20->____Org_5;
		bool L_22;
		L_22 = Geom_VertEq_m1D35078974A61EB63BDFBEA3750713443FC0DB7D(L_19, L_21, NULL);
		if (L_22)
		{
			goto IL_00a4;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_23 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_24 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_2;
		NullCheck(L_25);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = L_25->____Sym_2;
		NullCheck(L_23);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27;
		L_27 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_23, L_24, L_26, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_28 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_29 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = V_2;
		NullCheck(L_31);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32;
		L_32 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_31, NULL);
		NullCheck(L_28);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_28, L_29, L_30, L_32, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_33 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_34 = V_0;
		int32_t L_35 = 1;
		V_3 = (bool)L_35;
		NullCheck(L_34);
		L_34->____dirty_5 = (bool)L_35;
		bool L_36 = V_3;
		NullCheck(L_33);
		L_33->____dirty_5 = L_36;
		goto IL_0140;
	}

IL_00a4:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_37 = V_1;
		NullCheck(L_37);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_38 = L_37->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = V_2;
		NullCheck(L_39);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_40 = L_39->____Org_5;
		if ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_38) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_40)))
		{
			goto IL_0140;
		}
	}
	{
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_41 = __this->____pq_11;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_1;
		NullCheck(L_42);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_43 = L_42->____Org_5;
		NullCheck(L_43);
		PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 L_44 = L_43->____pqHandle_6;
		NullCheck(L_41);
		PriorityQueue_1_Remove_mCE983D6C8585217615CAF8DFEE8401A32DEA7BCA(L_41, L_44, PriorityQueue_1_Remove_mCE983D6C8585217615CAF8DFEE8401A32DEA7BCA_RuntimeMethod_var);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45 = V_2;
		NullCheck(L_45);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46;
		L_46 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_45, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_47 = V_1;
		Tess_SpliceMergeVertices_m3C1B73AB8A2F388421982B310359B74FE1F73290(__this, L_46, L_47, NULL);
		goto IL_0140;
	}

IL_00da:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = V_1;
		NullCheck(L_48);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_49;
		L_49 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_48, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_2;
		NullCheck(L_50);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_51 = L_50->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_52 = V_1;
		NullCheck(L_52);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_53 = L_52->____Org_5;
		float L_54;
		L_54 = Geom_EdgeSign_mB4FA2C46F053680D96F80EC78C1616104DDA7396(L_49, L_51, L_53, NULL);
		if ((!(((float)L_54) < ((float)(0.0f)))))
		{
			goto IL_00fa;
		}
	}
	{
		return (bool)0;
	}

IL_00fa:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_55 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_56;
		L_56 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_55, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_57 = ___regUp0;
		int32_t L_58 = 1;
		V_3 = (bool)L_58;
		NullCheck(L_57);
		L_57->____dirty_5 = (bool)L_58;
		bool L_59 = V_3;
		NullCheck(L_56);
		L_56->____dirty_5 = L_59;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_60 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_61 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_62 = V_1;
		NullCheck(L_62);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_63 = L_62->____Sym_2;
		NullCheck(L_60);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_64;
		L_64 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_60, L_61, L_63, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_65 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_66 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_67 = V_2;
		NullCheck(L_67);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_68;
		L_68 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_67, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_69 = V_1;
		NullCheck(L_65);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_65, L_66, L_68, L_69, NULL);
	}

IL_0140:
	{
		return (bool)1;
	}
}
// System.Boolean LibTessDotNet.Tess::CheckForLeftSplice(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForLeftSplice_m925CF548154D6A922CEDDDEE3B1662F409D874C2 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regUp0, const RuntimeMethod* method) 
{
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	bool V_4 = false;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1;
		L_1 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_0, NULL);
		V_0 = L_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = ___regUp0;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____eUp_0;
		V_1 = L_3;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = V_0;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____eUp_0;
		V_2 = L_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_1;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7;
		L_7 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_6, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_2;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9;
		L_9 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_8, NULL);
		bool L_10;
		L_10 = Geom_VertLeq_mE7BBC948CD971E64A0D22328A3CAAD4B2CE82342(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_009f;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_1;
		NullCheck(L_11);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12;
		L_12 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_11, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_2;
		NullCheck(L_13);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14;
		L_14 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_13, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_1;
		NullCheck(L_15);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = L_15->____Org_5;
		float L_17;
		L_17 = Geom_EdgeSign_mB4FA2C46F053680D96F80EC78C1616104DDA7396(L_12, L_14, L_16, NULL);
		if ((!(((float)L_17) < ((float)(0.0f)))))
		{
			goto IL_0049;
		}
	}
	{
		return (bool)0;
	}

IL_0049:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_18 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_19;
		L_19 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_18, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_20 = ___regUp0;
		int32_t L_21 = 1;
		V_4 = (bool)L_21;
		NullCheck(L_20);
		L_20->____dirty_5 = (bool)L_21;
		bool L_22 = V_4;
		NullCheck(L_19);
		L_19->____dirty_5 = L_22;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_23 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_24 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_1;
		NullCheck(L_23);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26;
		L_26 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_23, L_24, L_25, NULL);
		V_3 = L_26;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_27 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_28 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = V_2;
		NullCheck(L_29);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = L_29->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = V_3;
		NullCheck(L_27);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_27, L_28, L_30, L_31, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_3;
		NullCheck(L_32);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_33 = L_32->____Lface_6;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_34 = ___regUp0;
		NullCheck(L_34);
		bool L_35 = L_34->____inside_3;
		NullCheck(L_33);
		L_33->____inside_6 = L_35;
		goto IL_0110;
	}

IL_009f:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = V_2;
		NullCheck(L_36);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_37;
		L_37 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_36, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_1;
		NullCheck(L_38);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_39;
		L_39 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_38, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40 = V_2;
		NullCheck(L_40);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_41 = L_40->____Org_5;
		float L_42;
		L_42 = Geom_EdgeSign_mB4FA2C46F053680D96F80EC78C1616104DDA7396(L_37, L_39, L_41, NULL);
		if ((!(((float)L_42) > ((float)(0.0f)))))
		{
			goto IL_00bf;
		}
	}
	{
		return (bool)0;
	}

IL_00bf:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_43 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_44 = V_0;
		int32_t L_45 = 1;
		V_4 = (bool)L_45;
		NullCheck(L_44);
		L_44->____dirty_5 = (bool)L_45;
		bool L_46 = V_4;
		NullCheck(L_43);
		L_43->____dirty_5 = L_46;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_47 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_48 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_49 = V_2;
		NullCheck(L_47);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50;
		L_50 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_47, L_48, L_49, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_51 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_52 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_53 = V_1;
		NullCheck(L_53);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_54 = L_53->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_55 = V_2;
		NullCheck(L_55);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_56 = L_55->____Sym_2;
		NullCheck(L_51);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_51, L_52, L_54, L_56, NULL);
		NullCheck(L_50);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_57;
		L_57 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_50, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_58 = ___regUp0;
		NullCheck(L_58);
		bool L_59 = L_58->____inside_3;
		NullCheck(L_57);
		L_57->____inside_6 = L_59;
	}

IL_0110:
	{
		return (bool)1;
	}
}
// System.Boolean LibTessDotNet.Tess::CheckForIntersect(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tess_CheckForIntersect_m6E3C5BACC9119C3B4E692F87207EC7BB1FDAC299 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regUp0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mDCF83D1496BC5908C2927A7A4A16EAB4D0A7A83A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_3 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_4 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_5 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_6 = NULL;
	float V_7 = 0.0f;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_8 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_9 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_10 = NULL;
	bool V_11 = false;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* G_B14_0 = NULL;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1;
		L_1 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_0, NULL);
		V_0 = L_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = ___regUp0;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____eUp_0;
		V_1 = L_3;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = V_0;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____eUp_0;
		V_2 = L_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_1;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = L_6->____Org_5;
		V_3 = L_7;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_2;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = L_8->____Org_5;
		V_4 = L_9;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_1;
		NullCheck(L_10);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11;
		L_11 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_10, NULL);
		V_5 = L_11;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_2;
		NullCheck(L_12);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13;
		L_13 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_12, NULL);
		V_6 = L_13;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = V_4;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_14) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_15))))
		{
			goto IL_003c;
		}
	}
	{
		return (bool)0;
	}

IL_003c:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = V_3;
		NullCheck(L_16);
		float L_17 = L_16->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = V_5;
		NullCheck(L_18);
		float L_19 = L_18->____t_5;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_20;
		L_20 = Math_Min_mB41DB89BB991289571A046270A924C0EEAA2C4BC(L_17, L_19, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = V_4;
		NullCheck(L_21);
		float L_22 = L_21->____t_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_23 = V_6;
		NullCheck(L_23);
		float L_24 = L_23->____t_5;
		float L_25;
		L_25 = Math_Max_mB1131EAD9E03519D13D246CE96B599561C784957(L_22, L_24, NULL);
		V_7 = L_25;
		float L_26 = V_7;
		if ((!(((float)L_20) > ((float)L_26))))
		{
			goto IL_0069;
		}
	}
	{
		return (bool)0;
	}

IL_0069:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_27 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_28 = V_4;
		bool L_29;
		L_29 = Geom_VertLeq_mE7BBC948CD971E64A0D22328A3CAAD4B2CE82342(L_27, L_28, NULL);
		if (!L_29)
		{
			goto IL_0086;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_30 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_31 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_32 = V_4;
		float L_33;
		L_33 = Geom_EdgeSign_mB4FA2C46F053680D96F80EC78C1616104DDA7396(L_30, L_31, L_32, NULL);
		if ((!(((float)L_33) > ((float)(0.0f)))))
		{
			goto IL_0099;
		}
	}
	{
		return (bool)0;
	}

IL_0086:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_34 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_35 = V_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_36 = V_3;
		float L_37;
		L_37 = Geom_EdgeSign_mB4FA2C46F053680D96F80EC78C1616104DDA7396(L_34, L_35, L_36, NULL);
		if ((!(((float)L_37) < ((float)(0.0f)))))
		{
			goto IL_0099;
		}
	}
	{
		return (bool)0;
	}

IL_0099:
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_38 = __this->____pool_0;
		NullCheck(L_38);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_39;
		L_39 = GenericVirtualFuncInvoker0< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Get_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_mDCF83D1496BC5908C2927A7A4A16EAB4D0A7A83A_RuntimeMethod_var, L_38);
		V_8 = L_39;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_40 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_41 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_42 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_43 = V_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_44 = V_8;
		Geom_EdgeIntersect_m4B2487736018F6B130C380BFEDE17003F730DABE(L_40, L_41, L_42, L_43, L_44, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_45 = V_8;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_46 = __this->____event_12;
		bool L_47;
		L_47 = Geom_VertLeq_mE7BBC948CD971E64A0D22328A3CAAD4B2CE82342(L_45, L_46, NULL);
		if (!L_47)
		{
			goto IL_00e7;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_48 = V_8;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_49 = __this->____event_12;
		NullCheck(L_49);
		float L_50 = L_49->____s_4;
		NullCheck(L_48);
		L_48->____s_4 = L_50;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_51 = V_8;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_52 = __this->____event_12;
		NullCheck(L_52);
		float L_53 = L_52->____t_5;
		NullCheck(L_51);
		L_51->____t_5 = L_53;
	}

IL_00e7:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_54 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_55 = V_4;
		bool L_56;
		L_56 = Geom_VertLeq_mE7BBC948CD971E64A0D22328A3CAAD4B2CE82342(L_54, L_55, NULL);
		if (L_56)
		{
			goto IL_00f5;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_57 = V_4;
		G_B14_0 = L_57;
		goto IL_00f6;
	}

IL_00f5:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_58 = V_3;
		G_B14_0 = L_58;
	}

IL_00f6:
	{
		V_9 = G_B14_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_59 = V_9;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_60 = V_8;
		bool L_61;
		L_61 = Geom_VertLeq_mE7BBC948CD971E64A0D22328A3CAAD4B2CE82342(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_011f;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_62 = V_8;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_63 = V_9;
		NullCheck(L_63);
		float L_64 = L_63->____s_4;
		NullCheck(L_62);
		L_62->____s_4 = L_64;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_65 = V_8;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_66 = V_9;
		NullCheck(L_66);
		float L_67 = L_66->____t_5;
		NullCheck(L_65);
		L_65->____t_5 = L_67;
	}

IL_011f:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_68 = V_8;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_69 = V_3;
		bool L_70;
		L_70 = Geom_VertEq_m1D35078974A61EB63BDFBEA3750713443FC0DB7D(L_68, L_69, NULL);
		if (L_70)
		{
			goto IL_0134;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_71 = V_8;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_72 = V_4;
		bool L_73;
		L_73 = Geom_VertEq_m1D35078974A61EB63BDFBEA3750713443FC0DB7D(L_71, L_72, NULL);
		if (!L_73)
		{
			goto IL_014b;
		}
	}

IL_0134:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_74 = ___regUp0;
		bool L_75;
		L_75 = Tess_CheckForRightSplice_m73E6E5E3B926500479750597286CAEAA603E4F58(__this, L_74, NULL);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_76 = __this->____pool_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_77 = V_8;
		NullCheck(L_76);
		GenericVirtualActionInvoker1< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var, L_76, L_77);
		return (bool)0;
	}

IL_014b:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_78 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_79 = __this->____event_12;
		bool L_80;
		L_80 = Geom_VertEq_m1D35078974A61EB63BDFBEA3750713443FC0DB7D(L_78, L_79, NULL);
		if (L_80)
		{
			goto IL_0170;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_81 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_82 = __this->____event_12;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_83 = V_8;
		float L_84;
		L_84 = Geom_EdgeSign_mB4FA2C46F053680D96F80EC78C1616104DDA7396(L_81, L_82, L_83, NULL);
		if ((((float)L_84) >= ((float)(0.0f))))
		{
			goto IL_019b;
		}
	}

IL_0170:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_85 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_86 = __this->____event_12;
		bool L_87;
		L_87 = Geom_VertEq_m1D35078974A61EB63BDFBEA3750713443FC0DB7D(L_85, L_86, NULL);
		if (L_87)
		{
			goto IL_03a0;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_88 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_89 = __this->____event_12;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_90 = V_8;
		float L_91;
		L_91 = Geom_EdgeSign_mB4FA2C46F053680D96F80EC78C1616104DDA7396(L_88, L_89, L_90, NULL);
		if ((!(((float)L_91) <= ((float)(0.0f)))))
		{
			goto IL_03a0;
		}
	}

IL_019b:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_92 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_93 = __this->____event_12;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_92) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_93))))
		{
			goto IL_0219;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_94 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_95 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_96 = V_1;
		NullCheck(L_96);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_97 = L_96->____Sym_2;
		NullCheck(L_94);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_98;
		L_98 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_94, L_95, L_97, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_99 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_100 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_101 = V_2;
		NullCheck(L_101);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_102 = L_101->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_103 = V_1;
		NullCheck(L_99);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_99, L_100, L_102, L_103, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_104 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_105;
		L_105 = Tess_TopLeftRegion_m2FA0AA199DAE05530C04BFFE790A3CB8C83C7F86(__this, L_104, NULL);
		___regUp0 = L_105;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_106 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_107;
		L_107 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_106, NULL);
		NullCheck(L_107);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_108 = L_107->____eUp_0;
		V_1 = L_108;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_109 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_110;
		L_110 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_109, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_111 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_112;
		L_112 = Tess_FinishLeftRegions_mF89D4A8EE348FDEEFC78715A74EE7029282EAE82(__this, L_110, L_111, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_113 = ___regUp0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_114 = V_1;
		NullCheck(L_114);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_115;
		L_115 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_114, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_116 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_117 = V_1;
		Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6(__this, L_113, L_115, L_116, L_117, (bool)1, NULL);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_118 = __this->____pool_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_119 = V_8;
		NullCheck(L_118);
		GenericVirtualActionInvoker1< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var, L_118, L_119);
		return (bool)1;
	}

IL_0219:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_120 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_121 = __this->____event_12;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_120) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_121))))
		{
			goto IL_02b3;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_122 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_123 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_124 = V_2;
		NullCheck(L_124);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_125 = L_124->____Sym_2;
		NullCheck(L_122);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_126;
		L_126 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_122, L_123, L_125, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_127 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_128 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_129 = V_1;
		NullCheck(L_129);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_130 = L_129->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_131 = V_2;
		NullCheck(L_131);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_132;
		L_132 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_131, NULL);
		NullCheck(L_127);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_127, L_128, L_130, L_132, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_133 = ___regUp0;
		V_0 = L_133;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_134 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_135;
		L_135 = Tess_TopRightRegion_m4D715D95F08BD411FFABF59F4DB4FBD0EDC2E1E7(__this, L_134, NULL);
		___regUp0 = L_135;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_136 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_137;
		L_137 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_136, NULL);
		NullCheck(L_137);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_138 = L_137->____eUp_0;
		NullCheck(L_138);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_139;
		L_139 = Edge_get__Rprev_m7B1E8686D5C2FDE826371F597917BD4B5313D174(L_138, NULL);
		V_10 = L_139;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_140 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_141 = V_2;
		NullCheck(L_141);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_142;
		L_142 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_141, NULL);
		NullCheck(L_140);
		L_140->____eUp_0 = L_142;
		Il2CppCodeGenWriteBarrier((void**)(&L_140->____eUp_0), (void*)L_142);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_143 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_144;
		L_144 = Tess_FinishLeftRegions_mF89D4A8EE348FDEEFC78715A74EE7029282EAE82(__this, L_143, (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL, NULL);
		V_2 = L_144;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_145 = ___regUp0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_146 = V_2;
		NullCheck(L_146);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_147 = L_146->____Onext_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_148 = V_1;
		NullCheck(L_148);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_149;
		L_149 = Edge_get__Rprev_m7B1E8686D5C2FDE826371F597917BD4B5313D174(L_148, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_150 = V_10;
		Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6(__this, L_145, L_147, L_149, L_150, (bool)1, NULL);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_151 = __this->____pool_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_152 = V_8;
		NullCheck(L_151);
		GenericVirtualActionInvoker1< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var, L_151, L_152);
		return (bool)1;
	}

IL_02b3:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_153 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_154 = __this->____event_12;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_155 = V_8;
		float L_156;
		L_156 = Geom_EdgeSign_mB4FA2C46F053680D96F80EC78C1616104DDA7396(L_153, L_154, L_155, NULL);
		if ((!(((float)L_156) >= ((float)(0.0f)))))
		{
			goto IL_0325;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_157 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_158;
		L_158 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_157, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_159 = ___regUp0;
		int32_t L_160 = 1;
		V_11 = (bool)L_160;
		NullCheck(L_159);
		L_159->____dirty_5 = (bool)L_160;
		bool L_161 = V_11;
		NullCheck(L_158);
		L_158->____dirty_5 = L_161;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_162 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_163 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_164 = V_1;
		NullCheck(L_164);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_165 = L_164->____Sym_2;
		NullCheck(L_162);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_166;
		L_166 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_162, L_163, L_165, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_167 = V_1;
		NullCheck(L_167);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_168 = L_167->____Org_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_169 = __this->____event_12;
		NullCheck(L_169);
		float L_170 = L_169->____s_4;
		NullCheck(L_168);
		L_168->____s_4 = L_170;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_171 = V_1;
		NullCheck(L_171);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_172 = L_171->____Org_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_173 = __this->____event_12;
		NullCheck(L_173);
		float L_174 = L_173->____t_5;
		NullCheck(L_172);
		L_172->____t_5 = L_174;
	}

IL_0325:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_175 = V_6;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_176 = __this->____event_12;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_177 = V_8;
		float L_178;
		L_178 = Geom_EdgeSign_mB4FA2C46F053680D96F80EC78C1616104DDA7396(L_175, L_176, L_177, NULL);
		if ((!(((float)L_178) <= ((float)(0.0f)))))
		{
			goto IL_0391;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_179 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_180 = V_0;
		int32_t L_181 = 1;
		V_11 = (bool)L_181;
		NullCheck(L_180);
		L_180->____dirty_5 = (bool)L_181;
		bool L_182 = V_11;
		NullCheck(L_179);
		L_179->____dirty_5 = L_182;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_183 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_184 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_185 = V_2;
		NullCheck(L_185);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_186 = L_185->____Sym_2;
		NullCheck(L_183);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_187;
		L_187 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_183, L_184, L_186, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_188 = V_2;
		NullCheck(L_188);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_189 = L_188->____Org_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_190 = __this->____event_12;
		NullCheck(L_190);
		float L_191 = L_190->____s_4;
		NullCheck(L_189);
		L_189->____s_4 = L_191;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_192 = V_2;
		NullCheck(L_192);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_193 = L_192->____Org_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_194 = __this->____event_12;
		NullCheck(L_194);
		float L_195 = L_194->____t_5;
		NullCheck(L_193);
		L_193->____t_5 = L_195;
	}

IL_0391:
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_196 = __this->____pool_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_197 = V_8;
		NullCheck(L_196);
		GenericVirtualActionInvoker1< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var, L_196, L_197);
		return (bool)0;
	}

IL_03a0:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_198 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_199 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_200 = V_1;
		NullCheck(L_200);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_201 = L_200->____Sym_2;
		NullCheck(L_198);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_202;
		L_202 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_198, L_199, L_201, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_203 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_204 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_205 = V_2;
		NullCheck(L_205);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_206 = L_205->____Sym_2;
		NullCheck(L_203);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_207;
		L_207 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_203, L_204, L_206, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_208 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_209 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_210 = V_2;
		NullCheck(L_210);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_211;
		L_211 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_210, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_212 = V_1;
		NullCheck(L_208);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_208, L_209, L_211, L_212, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_213 = V_1;
		NullCheck(L_213);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_214 = L_213->____Org_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_215 = V_8;
		NullCheck(L_215);
		float L_216 = L_215->____s_4;
		NullCheck(L_214);
		L_214->____s_4 = L_216;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_217 = V_1;
		NullCheck(L_217);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_218 = L_217->____Org_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_219 = V_8;
		NullCheck(L_219);
		float L_220 = L_219->____t_5;
		NullCheck(L_218);
		L_218->____t_5 = L_220;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_221 = __this->____pool_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_222 = V_8;
		NullCheck(L_221);
		GenericVirtualActionInvoker1< Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* >::Invoke(IPool_Return_TisVertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE_m715269F0E3A542FA2CA8A626EEE745195D3526D4_RuntimeMethod_var, L_221, L_222);
		V_8 = (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)NULL;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_223 = V_1;
		NullCheck(L_223);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_224 = L_223->____Org_5;
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_225 = __this->____pq_11;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_226 = V_1;
		NullCheck(L_226);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_227 = L_226->____Org_5;
		NullCheck(L_225);
		PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 L_228;
		L_228 = PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA(L_225, L_227, PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA_RuntimeMethod_var);
		NullCheck(L_224);
		L_224->____pqHandle_6 = L_228;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_229 = V_1;
		NullCheck(L_229);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_230 = L_229->____Org_5;
		NullCheck(L_230);
		PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043* L_231 = (&L_230->____pqHandle_6);
		int32_t L_232 = L_231->____handle_1;
		il2cpp_codegen_runtime_class_init_inline(PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var);
		int32_t L_233 = ((PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_StaticFields*)il2cpp_codegen_static_fields_for(PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var))->___Invalid_0;
		if ((!(((uint32_t)L_232) == ((uint32_t)L_233))))
		{
			goto IL_045a;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_234 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_234);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_234, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD195D0425B8FE98A04F1BE9F8F30B202B33C80ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_234, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tess_CheckForIntersect_m6E3C5BACC9119C3B4E692F87207EC7BB1FDAC299_RuntimeMethod_var)));
	}

IL_045a:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_235 = V_1;
		NullCheck(L_235);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_236 = L_235->____Org_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_237 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_238 = V_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_239 = V_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_240 = V_6;
		Tess_GetIntersectData_m1EF3ED6C6834CACC2C20DD246F414D854BBFF6CE(__this, L_236, L_237, L_238, L_239, L_240, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_241 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_242;
		L_242 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_241, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_243 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_244 = V_0;
		int32_t L_245 = 1;
		V_11 = (bool)L_245;
		NullCheck(L_244);
		L_244->____dirty_5 = (bool)L_245;
		bool L_246 = V_11;
		bool L_247 = L_246;
		V_11 = L_247;
		NullCheck(L_243);
		L_243->____dirty_5 = L_247;
		bool L_248 = V_11;
		NullCheck(L_242);
		L_242->____dirty_5 = L_248;
		return (bool)0;
	}
}
// System.Void LibTessDotNet.Tess::WalkDirtyRegions(LibTessDotNet.Tess/ActiveRegion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_WalkDirtyRegions_m5988A5D583346F08BC85EADEEF4D527752099025 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regUp0, const RuntimeMethod* method) 
{
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1;
		L_1 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0015;
	}

IL_000a:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = V_0;
		___regUp0 = L_2;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3 = V_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4;
		L_4 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_3, NULL);
		V_0 = L_4;
	}

IL_0015:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->____dirty_5;
		if (L_6)
		{
			goto IL_000a;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_7 = ___regUp0;
		NullCheck(L_7);
		bool L_8 = L_7->____dirty_5;
		if (L_8)
		{
			goto IL_003c;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_9 = ___regUp0;
		V_0 = L_9;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_10 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_11;
		L_11 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_10, NULL);
		___regUp0 = L_11;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_12 = ___regUp0;
		if (!L_12)
		{
			goto IL_003b;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_13 = ___regUp0;
		NullCheck(L_13);
		bool L_14 = L_13->____dirty_5;
		if (L_14)
		{
			goto IL_003c;
		}
	}

IL_003b:
	{
		return;
	}

IL_003c:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_15 = ___regUp0;
		NullCheck(L_15);
		L_15->____dirty_5 = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_16 = ___regUp0;
		NullCheck(L_16);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = L_16->____eUp_0;
		V_1 = L_17;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_18 = V_0;
		NullCheck(L_18);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = L_18->____eUp_0;
		V_2 = L_19;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_1;
		NullCheck(L_20);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21;
		L_21 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_20, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_2;
		NullCheck(L_22);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_23;
		L_23 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_22, NULL);
		if ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_21) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_23)))
		{
			goto IL_00cb;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_24 = ___regUp0;
		bool L_25;
		L_25 = Tess_CheckForLeftSplice_m925CF548154D6A922CEDDDEE3B1662F409D874C2(__this, L_24, NULL);
		if (!L_25)
		{
			goto IL_00cb;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_26 = V_0;
		NullCheck(L_26);
		bool L_27 = L_26->____fixUpperEdge_6;
		if (!L_27)
		{
			goto IL_009a;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_28 = V_0;
		Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C(__this, L_28, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_29 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_30 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = V_2;
		NullCheck(L_29);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_29, L_30, L_31, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_32 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_33;
		L_33 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_32, NULL);
		V_0 = L_33;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_34 = V_0;
		NullCheck(L_34);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = L_34->____eUp_0;
		V_2 = L_35;
		goto IL_00cb;
	}

IL_009a:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_36 = ___regUp0;
		NullCheck(L_36);
		bool L_37 = L_36->____fixUpperEdge_6;
		if (!L_37)
		{
			goto IL_00cb;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_38 = ___regUp0;
		Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C(__this, L_38, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_39 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_40 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = V_1;
		NullCheck(L_39);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_39, L_40, L_41, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_42 = V_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_43;
		L_43 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_42, NULL);
		___regUp0 = L_43;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_44 = ___regUp0;
		NullCheck(L_44);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45 = L_44->____eUp_0;
		V_1 = L_45;
	}

IL_00cb:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = V_1;
		NullCheck(L_46);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_47 = L_46->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = V_2;
		NullCheck(L_48);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_49 = L_48->____Org_5;
		if ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_47) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_49)))
		{
			goto IL_0125;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_1;
		NullCheck(L_50);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_51;
		L_51 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_50, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_52 = V_2;
		NullCheck(L_52);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_53;
		L_53 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_52, NULL);
		if ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_51) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_53)))
		{
			goto IL_011d;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_54 = ___regUp0;
		NullCheck(L_54);
		bool L_55 = L_54->____fixUpperEdge_6;
		if (L_55)
		{
			goto IL_011d;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_56 = V_0;
		NullCheck(L_56);
		bool L_57 = L_56->____fixUpperEdge_6;
		if (L_57)
		{
			goto IL_011d;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_58 = V_1;
		NullCheck(L_58);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_59;
		L_59 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_58, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_60 = __this->____event_12;
		if ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_59) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_60)))
		{
			goto IL_0113;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_61 = V_2;
		NullCheck(L_61);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_62;
		L_62 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_61, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_63 = __this->____event_12;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_62) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_63))))
		{
			goto IL_011d;
		}
	}

IL_0113:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_64 = ___regUp0;
		bool L_65;
		L_65 = Tess_CheckForIntersect_m6E3C5BACC9119C3B4E692F87207EC7BB1FDAC299(__this, L_64, NULL);
		if (!L_65)
		{
			goto IL_0125;
		}
	}
	{
		return;
	}

IL_011d:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_66 = ___regUp0;
		bool L_67;
		L_67 = Tess_CheckForRightSplice_m73E6E5E3B926500479750597286CAEAA603E4F58(__this, L_66, NULL);
	}

IL_0125:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_68 = V_1;
		NullCheck(L_68);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_69 = L_68->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_70 = V_2;
		NullCheck(L_70);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_71 = L_70->____Org_5;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_69) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_71))))
		{
			goto IL_0015;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_72 = V_1;
		NullCheck(L_72);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_73;
		L_73 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_72, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_74 = V_2;
		NullCheck(L_74);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_75;
		L_75 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_74, NULL);
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_73) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_75))))
		{
			goto IL_0015;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_76 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_77 = V_1;
		Geom_AddWinding_m34E8125D7C665C3E4A86181F6C00198E5CECC458(L_76, L_77, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_78 = ___regUp0;
		Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C(__this, L_78, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_79 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_80 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_81 = V_1;
		NullCheck(L_79);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_79, L_80, L_81, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_82 = V_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_83;
		L_83 = Tess_RegionAbove_m9CB8DD2C473BDBE79A6810F8FF92FFD214739D7D(__this, L_82, NULL);
		___regUp0 = L_83;
		goto IL_0015;
	}
}
// System.Void LibTessDotNet.Tess::ConnectRightVertex(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectRightVertex_m014FFD2EC782394218F750F2EA57A40F05E133C6 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regUp0, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___eBottomLeft1, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	bool V_4 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_5 = NULL;
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___eBottomLeft1;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____Onext_3;
		V_0 = L_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_3;
		L_3 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_2, NULL);
		V_1 = L_3;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_4 = ___regUp0;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____eUp_0;
		V_2 = L_5;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_6 = V_1;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____eUp_0;
		V_3 = L_7;
		V_4 = (bool)0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_2;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9;
		L_9 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_8, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_3;
		NullCheck(L_10);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11;
		L_11 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_10, NULL);
		if ((((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_9) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_11)))
		{
			goto IL_0036;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_12 = ___regUp0;
		bool L_13;
		L_13 = Tess_CheckForIntersect_m6E3C5BACC9119C3B4E692F87207EC7BB1FDAC299(__this, L_12, NULL);
	}

IL_0036:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = V_2;
		NullCheck(L_14);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = L_14->____Org_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = __this->____event_12;
		bool L_17;
		L_17 = Geom_VertEq_m1D35078974A61EB63BDFBEA3750713443FC0DB7D(L_15, L_16, NULL);
		if (!L_17)
		{
			goto IL_0089;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_18 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_19 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_0;
		NullCheck(L_20);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21;
		L_21 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_20, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_2;
		NullCheck(L_18);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_18, L_19, L_21, L_22, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_23 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_24;
		L_24 = Tess_TopLeftRegion_m2FA0AA199DAE05530C04BFFE790A3CB8C83C7F86(__this, L_23, NULL);
		___regUp0 = L_24;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_25 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_26;
		L_26 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_25, NULL);
		NullCheck(L_26);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = L_26->____eUp_0;
		V_0 = L_27;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_28 = ___regUp0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_29;
		L_29 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_28, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_30 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31;
		L_31 = Tess_FinishLeftRegions_mF89D4A8EE348FDEEFC78715A74EE7029282EAE82(__this, L_29, L_30, NULL);
		V_4 = (bool)1;
	}

IL_0089:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_3;
		NullCheck(L_32);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_33 = L_32->____Org_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_34 = __this->____event_12;
		bool L_35;
		L_35 = Geom_VertEq_m1D35078974A61EB63BDFBEA3750713443FC0DB7D(L_33, L_34, NULL);
		if (!L_35)
		{
			goto IL_00c1;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_36 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_37 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = ___eBottomLeft1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = V_3;
		NullCheck(L_39);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40;
		L_40 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_39, NULL);
		NullCheck(L_36);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_36, L_37, L_38, L_40, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_41 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42;
		L_42 = Tess_FinishLeftRegions_mF89D4A8EE348FDEEFC78715A74EE7029282EAE82(__this, L_41, (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL, NULL);
		___eBottomLeft1 = L_42;
		V_4 = (bool)1;
	}

IL_00c1:
	{
		bool L_43 = V_4;
		if (!L_43)
		{
			goto IL_00d6;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_44 = ___regUp0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45 = ___eBottomLeft1;
		NullCheck(L_45);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = L_45->____Onext_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_47 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = V_0;
		Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6(__this, L_44, L_46, L_47, L_48, (bool)1, NULL);
		return;
	}

IL_00d6:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_49 = V_3;
		NullCheck(L_49);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_50 = L_49->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51 = V_2;
		NullCheck(L_51);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_52 = L_51->____Org_5;
		bool L_53;
		L_53 = Geom_VertLeq_mE7BBC948CD971E64A0D22328A3CAAD4B2CE82342(L_50, L_52, NULL);
		if (!L_53)
		{
			goto IL_00f3;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_54 = V_3;
		NullCheck(L_54);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_55;
		L_55 = Edge_get__Oprev_m56810B12C64EBBCAAA94A3CE46436DDC686F86FA(L_54, NULL);
		V_5 = L_55;
		goto IL_00f6;
	}

IL_00f3:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_56 = V_2;
		V_5 = L_56;
	}

IL_00f6:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_57 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_58 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_59 = ___eBottomLeft1;
		NullCheck(L_59);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_60;
		L_60 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_59, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_61 = V_5;
		NullCheck(L_57);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_62;
		L_62 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_57, L_58, L_60, L_61, NULL);
		V_5 = L_62;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_63 = ___regUp0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_64 = V_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_65 = V_5;
		NullCheck(L_65);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_66 = L_65->____Onext_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_67 = V_5;
		NullCheck(L_67);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_68 = L_67->____Onext_3;
		Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6(__this, L_63, L_64, L_66, L_68, (bool)0, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_69 = V_5;
		NullCheck(L_69);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_70 = L_69->____Sym_2;
		NullCheck(L_70);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_71 = L_70->____activeRegion_7;
		NullCheck(L_71);
		L_71->____fixUpperEdge_6 = (bool)1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_72 = ___regUp0;
		Tess_WalkDirtyRegions_m5988A5D583346F08BC85EADEEF4D527752099025(__this, L_72, NULL);
		return;
	}
}
// System.Void LibTessDotNet.Tess::ConnectLeftDegenerate(LibTessDotNet.Tess/ActiveRegion,LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectLeftDegenerate_mCE3996479265A6D3BF1AA3A2B149CF90B05FDA44 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* ___regUp0, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___vEvent1, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = ___regUp0;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____eUp_0;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		NullCheck(L_2);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = L_2->____Org_5;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = ___vEvent1;
		bool L_5;
		L_5 = Geom_VertEq_m1D35078974A61EB63BDFBEA3750713443FC0DB7D(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral293D055F04D51798E7BDD8DFB0C6C9C093FD520C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tess_ConnectLeftDegenerate_mCE3996479265A6D3BF1AA3A2B149CF90B05FDA44_RuntimeMethod_var)));
	}

IL_0020:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_0;
		NullCheck(L_7);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8;
		L_8 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_7, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = ___vEvent1;
		bool L_10;
		L_10 = Geom_VertEq_m1D35078974A61EB63BDFBEA3750713443FC0DB7D(L_8, L_9, NULL);
		if (L_10)
		{
			goto IL_008c;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_11 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_12 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		NullCheck(L_13);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = L_13->____Sym_2;
		NullCheck(L_11);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15;
		L_15 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_11, L_12, L_14, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_16 = ___regUp0;
		NullCheck(L_16);
		bool L_17 = L_16->____fixUpperEdge_6;
		if (!L_17)
		{
			goto IL_006c;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_18 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_19 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_0;
		NullCheck(L_20);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = L_20->____Onext_3;
		NullCheck(L_18);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_18, L_19, L_21, NULL);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_22 = ___regUp0;
		NullCheck(L_22);
		L_22->____fixUpperEdge_6 = (bool)0;
	}

IL_006c:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_23 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_24 = __this->____pool_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_25 = ___vEvent1;
		NullCheck(L_25);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = L_25->____anEdge_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = V_0;
		NullCheck(L_23);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_23, L_24, L_26, L_27, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_28 = ___vEvent1;
		Tess_SweepEvent_mFF232770963565BD3D3DE22E97A67DCA3E749FED(__this, L_28, NULL);
		return;
	}

IL_008c:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_29 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_29);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral293D055F04D51798E7BDD8DFB0C6C9C093FD520C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tess_ConnectLeftDegenerate_mCE3996479265A6D3BF1AA3A2B149CF90B05FDA44_RuntimeMethod_var)));
	}
}
// System.Void LibTessDotNet.Tess::ConnectLeftVertex(LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ConnectLeftVertex_m7F52A092CDE293862BE3773D7ABA7BF7C6A3121B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___vEvent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_Find_mAF7B5CED2C433BD5E9EADDC6604B3A28BCE7CDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m0C9ECBA50066B4287A5C6AF8BDD616D679FACD68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m710088A37FD53E25E588FE38C58925E766A12636_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Node_get_Key_m58310B9ADF76612AC49364C8C8EBFC7E9C61B74D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_1 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_4 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_5 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_6 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* G_B7_0 = NULL;
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_0 = __this->____pool_0;
		NullCheck(L_0);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_1;
		L_1 = GenericVirtualFuncInvoker0< ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* >::Invoke(IPool_Get_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m0C9ECBA50066B4287A5C6AF8BDD616D679FACD68_RuntimeMethod_var, L_0);
		V_0 = L_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = ___vEvent0;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____anEdge_2;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____Sym_2;
		NullCheck(L_2);
		L_2->____eUp_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____eUp_0), (void*)L_5);
		Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* L_6 = __this->____dict_10;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_7 = V_0;
		NullCheck(L_6);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_8;
		L_8 = Dict_1_Find_mAF7B5CED2C433BD5E9EADDC6604B3A28BCE7CDB4(L_6, L_7, Dict_1_Find_mAF7B5CED2C433BD5E9EADDC6604B3A28BCE7CDB4_RuntimeMethod_var);
		NullCheck(L_8);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_9;
		L_9 = Node_get_Key_m58310B9ADF76612AC49364C8C8EBFC7E9C61B74D_inline(L_8, Node_get_Key_m58310B9ADF76612AC49364C8C8EBFC7E9C61B74D_RuntimeMethod_var);
		V_1 = L_9;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_10 = __this->____pool_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_11 = V_0;
		NullCheck(L_10);
		GenericVirtualActionInvoker1< ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* >::Invoke(IPool_Return_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m710088A37FD53E25E588FE38C58925E766A12636_RuntimeMethod_var, L_10, L_11);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_12 = V_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_13;
		L_13 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_12, NULL);
		V_2 = L_13;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_14 = V_2;
		if (L_14)
		{
			goto IL_0047;
		}
	}
	{
		return;
	}

IL_0047:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_15 = V_1;
		NullCheck(L_15);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = L_15->____eUp_0;
		V_3 = L_16;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_17 = V_2;
		NullCheck(L_17);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = L_17->____eUp_0;
		V_4 = L_18;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19 = V_3;
		NullCheck(L_19);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_20;
		L_20 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_19, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = ___vEvent0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_3;
		NullCheck(L_22);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_23 = L_22->____Org_5;
		float L_24;
		L_24 = Geom_EdgeSign_mB4FA2C46F053680D96F80EC78C1616104DDA7396(L_20, L_21, L_23, NULL);
		if ((!(((float)L_24) == ((float)(0.0f)))))
		{
			goto IL_0078;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_25 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_26 = ___vEvent0;
		Tess_ConnectLeftDegenerate_mCE3996479265A6D3BF1AA3A2B149CF90B05FDA44(__this, L_25, L_26, NULL);
		return;
	}

IL_0078:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = V_4;
		NullCheck(L_27);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_28;
		L_28 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_27, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = V_3;
		NullCheck(L_29);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_30;
		L_30 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_29, NULL);
		bool L_31;
		L_31 = Geom_VertLeq_mE7BBC948CD971E64A0D22328A3CAAD4B2CE82342(L_28, L_30, NULL);
		if (L_31)
		{
			goto IL_008f;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_32 = V_2;
		G_B7_0 = L_32;
		goto IL_0090;
	}

IL_008f:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_33 = V_1;
		G_B7_0 = L_33;
	}

IL_0090:
	{
		V_5 = G_B7_0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_34 = V_1;
		NullCheck(L_34);
		bool L_35 = L_34->____inside_3;
		if (L_35)
		{
			goto IL_00a3;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_36 = V_5;
		NullCheck(L_36);
		bool L_37 = L_36->____fixUpperEdge_6;
		if (!L_37)
		{
			goto IL_011f;
		}
	}

IL_00a3:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_38 = V_5;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_39 = V_1;
		if ((!(((RuntimeObject*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)L_38) == ((RuntimeObject*)(ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)L_39))))
		{
			goto IL_00ce;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_40 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_41 = __this->____pool_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_42 = ___vEvent0;
		NullCheck(L_42);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_43 = L_42->____anEdge_2;
		NullCheck(L_43);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = L_43->____Sym_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45 = V_3;
		NullCheck(L_45);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = L_45->____Lnext_4;
		NullCheck(L_40);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_47;
		L_47 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_40, L_41, L_44, L_46, NULL);
		V_6 = L_47;
		goto IL_00f3;
	}

IL_00ce:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_48 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_49 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_4;
		NullCheck(L_50);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51;
		L_51 = Edge_get__Dnext_m7E374925C354672842CF18197905942EA76DD7E7(L_50, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_52 = ___vEvent0;
		NullCheck(L_52);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_53 = L_52->____anEdge_2;
		NullCheck(L_48);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_54;
		L_54 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_48, L_49, L_51, L_53, NULL);
		NullCheck(L_54);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_55 = L_54->____Sym_2;
		V_6 = L_55;
	}

IL_00f3:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_56 = V_5;
		NullCheck(L_56);
		bool L_57 = L_56->____fixUpperEdge_6;
		if (!L_57)
		{
			goto IL_0108;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_58 = V_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_59 = V_6;
		Tess_FixUpperEdge_m1E4236D65D3FB0321FA1FB71BAE30806B18D889B(__this, L_58, L_59, NULL);
		goto IL_0117;
	}

IL_0108:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_60 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_61 = V_6;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_62;
		L_62 = Tess_AddRegionBelow_m0275D421E35EBBEFF2546E2DDEFBBB1061EC700D(__this, L_60, L_61, NULL);
		Tess_ComputeWinding_m08BB6BDD14F5FD6820052F3833AE916DB6D05B50(__this, L_62, NULL);
	}

IL_0117:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_63 = ___vEvent0;
		Tess_SweepEvent_mFF232770963565BD3D3DE22E97A67DCA3E749FED(__this, L_63, NULL);
		return;
	}

IL_011f:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_64 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_65 = ___vEvent0;
		NullCheck(L_65);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_66 = L_65->____anEdge_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_67 = ___vEvent0;
		NullCheck(L_67);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_68 = L_67->____anEdge_2;
		Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6(__this, L_64, L_66, L_68, (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL, (bool)1, NULL);
		return;
	}
}
// System.Void LibTessDotNet.Tess::SweepEvent(LibTessDotNet.MeshUtils/Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SweepEvent_mFF232770963565BD3D3DE22E97A67DCA3E749FED (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* ___vEvent0, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_1 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_4 = NULL;
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_0 = ___vEvent0;
		__this->____event_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____event_12), (void*)L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = ___vEvent0;
		NullCheck(L_1);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = L_1->____anEdge_2;
		V_0 = L_2;
		goto IL_0028;
	}

IL_0010:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_0;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____Onext_3;
		V_0 = L_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = ___vEvent0;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____anEdge_2;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_5) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_7))))
		{
			goto IL_0028;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = ___vEvent0;
		Tess_ConnectLeftVertex_m7F52A092CDE293862BE3773D7ABA7BF7C6A3121B(__this, L_8, NULL);
		return;
	}

IL_0028:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = V_0;
		NullCheck(L_9);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_10 = L_9->____activeRegion_7;
		if (!L_10)
		{
			goto IL_0010;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_0;
		NullCheck(L_11);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_12 = L_11->____activeRegion_7;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_13;
		L_13 = Tess_TopLeftRegion_m2FA0AA199DAE05530C04BFFE790A3CB8C83C7F86(__this, L_12, NULL);
		V_1 = L_13;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_14 = V_1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_15;
		L_15 = Tess_RegionBelow_mCD2B853DF8E288E567C497A745951E081213B53F(__this, L_14, NULL);
		V_2 = L_15;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_16 = V_2;
		NullCheck(L_16);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = L_16->____eUp_0;
		V_3 = L_17;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_18 = V_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_19;
		L_19 = Tess_FinishLeftRegions_mF89D4A8EE348FDEEFC78715A74EE7029282EAE82(__this, L_18, (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47*)NULL, NULL);
		V_4 = L_19;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_4;
		NullCheck(L_20);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = L_20->____Onext_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_3;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_21) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_22))))
		{
			goto IL_006a;
		}
	}
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_23 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = V_4;
		Tess_ConnectRightVertex_m014FFD2EC782394218F750F2EA57A40F05E133C6(__this, L_23, L_24, NULL);
		return;
	}

IL_006a:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_25 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_4;
		NullCheck(L_26);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = L_26->____Onext_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = V_3;
		Tess_AddRightEdges_m4011889757B4B5E83ACD9BE654FF13EB6DDE53E6(__this, L_25, L_27, L_28, L_29, (bool)1, NULL);
		return;
	}
}
// System.Void LibTessDotNet.Tess::AddSentinel(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddSentinel_m88FB52E7CF92ECB9C1FF491E64B3CC5E076413D3 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, float ___smin0, float ___smax1, float ___t2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_Insert_m76E76003906032D37BF3554CA41AAAFB38240615_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m0C9ECBA50066B4287A5C6AF8BDD616D679FACD68_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_1 = NULL;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_1 = __this->____pool_0;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2;
		L_2 = Mesh_MakeEdge_m885B759356861633DA4414A5DE88F5FDB0E8B8E7(L_0, L_1, NULL);
		V_0 = L_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_0;
		NullCheck(L_3);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = L_3->____Org_5;
		float L_5 = ___smax1;
		NullCheck(L_4);
		L_4->____s_4 = L_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_0;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = L_6->____Org_5;
		float L_8 = ___t2;
		NullCheck(L_7);
		L_7->____t_5 = L_8;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = V_0;
		NullCheck(L_9);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10;
		L_10 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_9, NULL);
		float L_11 = ___smin0;
		NullCheck(L_10);
		L_10->____s_4 = L_11;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_0;
		NullCheck(L_12);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13;
		L_13 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_12, NULL);
		float L_14 = ___t2;
		NullCheck(L_13);
		L_13->____t_5 = L_14;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = V_0;
		NullCheck(L_15);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16;
		L_16 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_15, NULL);
		__this->____event_12 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____event_12), (void*)L_16);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_17 = __this->____pool_0;
		NullCheck(L_17);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_18;
		L_18 = GenericVirtualFuncInvoker0< ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* >::Invoke(IPool_Get_TisActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47_m0C9ECBA50066B4287A5C6AF8BDD616D679FACD68_RuntimeMethod_var, L_17);
		V_1 = L_18;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_19 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_0;
		NullCheck(L_19);
		L_19->____eUp_0 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->____eUp_0), (void*)L_20);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_21 = V_1;
		NullCheck(L_21);
		L_21->____windingNumber_2 = 0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_22 = V_1;
		NullCheck(L_22);
		L_22->____inside_3 = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_23 = V_1;
		NullCheck(L_23);
		L_23->____fixUpperEdge_6 = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_24 = V_1;
		NullCheck(L_24);
		L_24->____sentinel_4 = (bool)1;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_25 = V_1;
		NullCheck(L_25);
		L_25->____dirty_5 = (bool)0;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_26 = V_1;
		Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* L_27 = __this->____dict_10;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_28 = V_1;
		NullCheck(L_27);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_29;
		L_29 = Dict_1_Insert_m76E76003906032D37BF3554CA41AAAFB38240615(L_27, L_28, Dict_1_Insert_m76E76003906032D37BF3554CA41AAAFB38240615_RuntimeMethod_var);
		NullCheck(L_26);
		L_26->____nodeUp_1 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_26->____nodeUp_1), (void*)L_29);
		return;
	}
}
// System.Void LibTessDotNet.Tess::InitEdgeDict()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_InitEdgeDict_mEB38032A27EBED333E70337D99F8E0AC09C131A8 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1__ctor_m427AF97AEE0D0E94038FF1767C2B9CC4826187B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tess_EdgeLeq_m91CF47985D9D5E386D03C685E54E650DA722307A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6* L_0 = (LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6*)il2cpp_codegen_object_new(LessOrEqual_t2BDF67EEFA95140BB2A3455D1A8BB05A07087AD6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LessOrEqual__ctor_m6556B77F3E07A00B7AFD15AD07B0EF86306BFF0C(L_0, __this, (intptr_t)((void*)Tess_EdgeLeq_m91CF47985D9D5E386D03C685E54E650DA722307A_RuntimeMethod_var), NULL);
		Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* L_1 = (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*)il2cpp_codegen_object_new(Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dict_1__ctor_m427AF97AEE0D0E94038FF1767C2B9CC4826187B7(L_1, L_0, Dict_1__ctor_m427AF97AEE0D0E94038FF1767C2B9CC4826187B7_RuntimeMethod_var);
		__this->____dict_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dict_10), (void*)L_1);
		float L_2 = __this->___SentinelCoord_21;
		float L_3 = __this->___SentinelCoord_21;
		float L_4 = __this->___SentinelCoord_21;
		Tess_AddSentinel_m88FB52E7CF92ECB9C1FF491E64B3CC5E076413D3(__this, ((-L_2)), L_3, ((-L_4)), NULL);
		float L_5 = __this->___SentinelCoord_21;
		float L_6 = __this->___SentinelCoord_21;
		float L_7 = __this->___SentinelCoord_21;
		Tess_AddSentinel_m88FB52E7CF92ECB9C1FF491E64B3CC5E076413D3(__this, ((-L_5)), L_6, L_7, NULL);
		return;
	}
}
// System.Void LibTessDotNet.Tess::DoneEdgeDict()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DoneEdgeDict_m35196774C9960C4A2D2ACCD938DB0453C43B9C9E (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dict_1_Min_m733D0E65ECF2770E0BBF7268E415BC20E49A0A84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Node_get_Key_m58310B9ADF76612AC49364C8C8EBFC7E9C61B74D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* V_0 = NULL;
	{
		goto IL_0010;
	}

IL_0002:
	{
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_0 = V_0;
		NullCheck(L_0);
		bool L_1 = L_0->____sentinel_4;
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_2 = V_0;
		Tess_DeleteRegion_mEA00B4BAA2600E497A738D744DB87F4A82EA7A6C(__this, L_2, NULL);
	}

IL_0010:
	{
		Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3* L_3 = __this->____dict_10;
		NullCheck(L_3);
		Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C* L_4;
		L_4 = Dict_1_Min_m733D0E65ECF2770E0BBF7268E415BC20E49A0A84(L_3, Dict_1_Min_m733D0E65ECF2770E0BBF7268E415BC20E49A0A84_RuntimeMethod_var);
		NullCheck(L_4);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_5;
		L_5 = Node_get_Key_m58310B9ADF76612AC49364C8C8EBFC7E9C61B74D_inline(L_4, Node_get_Key_m58310B9ADF76612AC49364C8C8EBFC7E9C61B74D_RuntimeMethod_var);
		ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* L_6 = L_5;
		V_0 = L_6;
		if (L_6)
		{
			goto IL_0002;
		}
	}
	{
		__this->____dict_10 = (Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dict_10), (void*)(Dict_1_t614E97C891B579B51D37481B8E2BCB961D0064B3*)NULL);
		return;
	}
}
// System.Void LibTessDotNet.Tess::RemoveDegenerateEdges()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_RemoveDegenerateEdges_m6F88AF680A0B3E2FF9A8E274FF475C1EDDF025CC (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_3 = NULL;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh_1;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____eHead_2;
		V_0 = L_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = L_2->____next_1;
		V_1 = L_3;
		goto IL_00c5;
	}

IL_0018:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_1;
		NullCheck(L_4);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = L_4->____next_1;
		V_2 = L_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_1;
		NullCheck(L_6);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6->____Lnext_4;
		V_3 = L_7;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_1;
		NullCheck(L_8);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = L_8->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_1;
		NullCheck(L_10);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11;
		L_11 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_10, NULL);
		bool L_12;
		L_12 = Geom_VertEq_m1D35078974A61EB63BDFBEA3750713443FC0DB7D(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_1;
		NullCheck(L_13);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_14 = L_13->____Lnext_4;
		NullCheck(L_14);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_15 = L_14->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = V_1;
		if ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_15) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_16)))
		{
			goto IL_006a;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = V_1;
		Tess_SpliceMergeVertices_m3C1B73AB8A2F388421982B310359B74FE1F73290(__this, L_17, L_18, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_19 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_20 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = V_1;
		NullCheck(L_19);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_19, L_20, L_21, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_3;
		V_1 = L_22;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_1;
		NullCheck(L_23);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = L_23->____Lnext_4;
		V_3 = L_24;
	}

IL_006a:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_3;
		NullCheck(L_25);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = L_25->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = V_1;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_26) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_27))))
		{
			goto IL_00c3;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = V_1;
		if ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_28) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_29)))
		{
			goto IL_009d;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = V_2;
		if ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_30) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_31)))
		{
			goto IL_0084;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_2;
		NullCheck(L_33);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = L_33->____Sym_2;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_32) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_34))))
		{
			goto IL_008b;
		}
	}

IL_0084:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = V_2;
		NullCheck(L_35);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = L_35->____next_1;
		V_2 = L_36;
	}

IL_008b:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_37 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_38 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_39 = V_3;
		NullCheck(L_37);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_37, L_38, L_39, NULL);
	}

IL_009d:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = V_2;
		if ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_40) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_41)))
		{
			goto IL_00aa;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_43 = V_2;
		NullCheck(L_43);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = L_43->____Sym_2;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_42) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_44))))
		{
			goto IL_00b1;
		}
	}

IL_00aa:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45 = V_2;
		NullCheck(L_45);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = L_45->____next_1;
		V_2 = L_46;
	}

IL_00b1:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_47 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_48 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_49 = V_1;
		NullCheck(L_47);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_47, L_48, L_49, NULL);
	}

IL_00c3:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50 = V_2;
		V_1 = L_50;
	}

IL_00c5:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_52 = V_0;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_51) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_52))))
		{
			goto IL_0018;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::InitPriorityQ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_InitPriorityQ_m63D067CB8781EC6E25D43FEFFDD0DC407E2875EA (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Geom_VertLeq_mE7BBC948CD971E64A0D22328A3CAAD4B2CE82342_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Init_mB8A3092D595F065F1DBD85FD3BBC2034DEFB35FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1__ctor_m75EE6938A947B7F5F22DCD1E25CFBA4E8936D5EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh_1;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = L_0->____vHead_0;
		V_0 = L_1;
		V_2 = 0;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = V_0;
		NullCheck(L_2);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = L_2->____next_1;
		V_1 = L_3;
		goto IL_0022;
	}

IL_0017:
	{
		int32_t L_4 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5 = V_1;
		NullCheck(L_5);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = L_5->____next_1;
		V_1 = L_6;
	}

IL_0022:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = V_0;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_7) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_8))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 8));
		int32_t L_10 = V_2;
		LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00* L_11 = (LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00*)il2cpp_codegen_object_new(LessOrEqual_t10F9BFA4AD1B44857E7B44141EDF20C2899DCC00_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		LessOrEqual__ctor_m354C7C326099DA31A5715796F9CCA76DE5067731(L_11, NULL, (intptr_t)((void*)Geom_VertLeq_mE7BBC948CD971E64A0D22328A3CAAD4B2CE82342_RuntimeMethod_var), NULL);
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_12 = (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*)il2cpp_codegen_object_new(PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		PriorityQueue_1__ctor_m75EE6938A947B7F5F22DCD1E25CFBA4E8936D5EF(L_12, L_10, L_11, PriorityQueue_1__ctor_m75EE6938A947B7F5F22DCD1E25CFBA4E8936D5EF_RuntimeMethod_var);
		__this->____pq_11 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pq_11), (void*)L_12);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_13 = __this->____mesh_1;
		NullCheck(L_13);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14 = L_13->____vHead_0;
		V_0 = L_14;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = V_0;
		NullCheck(L_15);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = L_15->____next_1;
		V_1 = L_16;
		goto IL_008d;
	}

IL_0057:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = V_1;
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_18 = __this->____pq_11;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19 = V_1;
		NullCheck(L_18);
		PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043 L_20;
		L_20 = PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA(L_18, L_19, PriorityQueue_1_Insert_m25BA06559FB77D33BC229C51F376150D7A2B18BA_RuntimeMethod_var);
		NullCheck(L_17);
		L_17->____pqHandle_6 = L_20;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = V_1;
		NullCheck(L_21);
		PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043* L_22 = (&L_21->____pqHandle_6);
		int32_t L_23 = L_22->____handle_1;
		il2cpp_codegen_runtime_class_init_inline(PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var);
		int32_t L_24 = ((PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_StaticFields*)il2cpp_codegen_static_fields_for(PQHandle_t7B7EE28F22257FFA6D15515AA8A732852F3A8043_il2cpp_TypeInfo_var))->___Invalid_0;
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0086;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_25 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_25);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD195D0425B8FE98A04F1BE9F8F30B202B33C80ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Tess_InitPriorityQ_m63D067CB8781EC6E25D43FEFFDD0DC407E2875EA_RuntimeMethod_var)));
	}

IL_0086:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_26 = V_1;
		NullCheck(L_26);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_27 = L_26->____next_1;
		V_1 = L_27;
	}

IL_008d:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_28 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_29 = V_0;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_28) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_29))))
		{
			goto IL_0057;
		}
	}
	{
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_30 = __this->____pq_11;
		NullCheck(L_30);
		PriorityQueue_1_Init_mB8A3092D595F065F1DBD85FD3BBC2034DEFB35FF(L_30, PriorityQueue_1_Init_mB8A3092D595F065F1DBD85FD3BBC2034DEFB35FF_RuntimeMethod_var);
		return;
	}
}
// System.Void LibTessDotNet.Tess::DonePriorityQ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DonePriorityQ_m34351749D862BF10E730498E5ED9D502CE00D784 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	{
		__this->____pq_11 = (PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pq_11), (void*)(PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29*)NULL);
		return;
	}
}
// System.Void LibTessDotNet.Tess::RemoveDegenerateFaces()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_RemoveDegenerateFaces_m48F4E1549170751BB553A45C7BB4E54351E15BB4 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh_1;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = L_0->____fHead_1;
		NullCheck(L_1);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = L_1->____next_1;
		V_0 = L_2;
		goto IL_004f;
	}

IL_0013:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = V_0;
		NullCheck(L_3);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_4 = L_3->____next_1;
		V_1 = L_4;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5 = V_0;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____anEdge_2;
		V_2 = L_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = V_2;
		NullCheck(L_7);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = L_7->____Lnext_4;
		NullCheck(L_8);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = L_8->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_2;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_9) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_10))))
		{
			goto IL_004d;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_2;
		NullCheck(L_11);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = L_11->____Onext_3;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_2;
		Geom_AddWinding_m34E8125D7C665C3E4A86181F6C00198E5CECC458(L_12, L_13, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_14 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_15 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = V_2;
		NullCheck(L_14);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_14, L_15, L_16, NULL);
	}

IL_004d:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_17 = V_1;
		V_0 = L_17;
	}

IL_004f:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_18 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_19 = __this->____mesh_1;
		NullCheck(L_19);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_20 = L_19->____fHead_1;
		if ((!(((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_18) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_20))))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::ComputeInterior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeInterior_mFE484BBCF4AAC36E007A54416314B53790663CAD (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_ExtractMin_mA9DE27CCFA570258EA0038D5BFE479BD73407330_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Minimum_mBB08F7A95861A7EE0B1797475861279AAAC0CD86_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_1 = NULL;
	{
		Tess_RemoveDegenerateEdges_m6F88AF680A0B3E2FF9A8E274FF475C1EDDF025CC(__this, NULL);
		Tess_InitPriorityQ_m63D067CB8781EC6E25D43FEFFDD0DC407E2875EA(__this, NULL);
		Tess_RemoveDegenerateFaces_m48F4E1549170751BB553A45C7BB4E54351E15BB4(__this, NULL);
		Tess_InitEdgeDict_mEB38032A27EBED333E70337D99F8E0AC09C131A8(__this, NULL);
		goto IL_0059;
	}

IL_001a:
	{
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_0 = __this->____pq_11;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1;
		L_1 = PriorityQueue_1_Minimum_mBB08F7A95861A7EE0B1797475861279AAAC0CD86(L_0, PriorityQueue_1_Minimum_mBB08F7A95861A7EE0B1797475861279AAAC0CD86_RuntimeMethod_var);
		V_1 = L_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = V_1;
		if (!L_2)
		{
			goto IL_0052;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_3 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_4 = V_0;
		bool L_5;
		L_5 = Geom_VertEq_m1D35078974A61EB63BDFBEA3750713443FC0DB7D(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0052;
		}
	}
	{
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_6 = __this->____pq_11;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7;
		L_7 = PriorityQueue_1_ExtractMin_mA9DE27CCFA570258EA0038D5BFE479BD73407330(L_6, PriorityQueue_1_ExtractMin_mA9DE27CCFA570258EA0038D5BFE479BD73407330_RuntimeMethod_var);
		V_1 = L_7;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = V_0;
		NullCheck(L_8);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = L_8->____anEdge_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = V_1;
		NullCheck(L_10);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = L_10->____anEdge_2;
		Tess_SpliceMergeVertices_m3C1B73AB8A2F388421982B310359B74FE1F73290(__this, L_9, L_11, NULL);
		goto IL_001a;
	}

IL_0052:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = V_0;
		Tess_SweepEvent_mFF232770963565BD3D3DE22E97A67DCA3E749FED(__this, L_12, NULL);
	}

IL_0059:
	{
		PriorityQueue_1_t3E73EC2AA4A93BE63DB7F21BD13ECC110F8BCA29* L_13 = __this->____pq_11;
		NullCheck(L_13);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14;
		L_14 = PriorityQueue_1_ExtractMin_mA9DE27CCFA570258EA0038D5BFE479BD73407330(L_13, PriorityQueue_1_ExtractMin_mA9DE27CCFA570258EA0038D5BFE479BD73407330_RuntimeMethod_var);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_15 = L_14;
		V_0 = L_15;
		if (L_15)
		{
			goto IL_001a;
		}
	}
	{
		Tess_DoneEdgeDict_m35196774C9960C4A2D2ACCD938DB0453C43B9C9E(__this, NULL);
		Tess_DonePriorityQ_m34351749D862BF10E730498E5ED9D502CE00D784(__this, NULL);
		Tess_RemoveDegenerateFaces_m48F4E1549170751BB553A45C7BB4E54351E15BB4(__this, NULL);
		return;
	}
}
// LibTessDotNet.Vec3 LibTessDotNet.Tess::get_Normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 Tess_get_Normal_mCDA91ACB90DDB93FB587F1DDCD639F0D46AA0405 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_0 = __this->____normal_2;
		return L_0;
	}
}
// LibTessDotNet.ContourVertex[] LibTessDotNet.Tess::get_Vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* Tess_get_Vertices_mDBE386129B4DF1C7D1F16A937D2D47FFF3567E45 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	{
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_0 = __this->____vertices_14;
		return L_0;
	}
}
// System.Int32 LibTessDotNet.Tess::get_VertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tess_get_VertexCount_m243B19BDF8F6767DA70606FA5D8C26C590A9D210 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____vertexCount_15;
		return L_0;
	}
}
// System.Int32[] LibTessDotNet.Tess::get_Elements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Tess_get_Elements_mED221BAB8BAAAC0EA4160C2C5DA5E38803883D7B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____elements_16;
		return L_0;
	}
}
// System.Int32 LibTessDotNet.Tess::get_ElementCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tess_get_ElementCount_m1D5AF4E9A9295BA0D57AA883D2C226D32C154E3F (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____elementCount_17;
		return L_0;
	}
}
// System.Void LibTessDotNet.Tess::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess__ctor_m9C50EAA56E0DBFFB1B779D0A921ECA9C7984E7A2 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04* L_0 = (DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04*)il2cpp_codegen_object_new(DefaultPool_tFDE017AAD1FD4219350B5FE11FAA7023B8925E04_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DefaultPool__ctor_m8D4477214AEE206E11961F64854E616FD3530CFD(L_0, NULL);
		Tess__ctor_mB2C19DD684CEED784DAD77FAD79561ABF4CADDAE(__this, L_0, NULL);
		return;
	}
}
// System.Void LibTessDotNet.Tess::.ctor(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess__ctor_mB2C19DD684CEED784DAD77FAD79561ABF4CADDAE (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		__this->___SUnitX_19 = (1.0f);
		__this->___SentinelCoord_21 = (4.00000006E+30f);
		__this->___UsePooling_23 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_0 = ((Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var))->___Zero_0;
		__this->____normal_2 = L_0;
		float L_1 = (0.0f);
		V_0 = L_1;
		__this->____bmaxY_8 = L_1;
		float L_2 = V_0;
		float L_3 = L_2;
		V_0 = L_3;
		__this->____bmaxX_7 = L_3;
		float L_4 = V_0;
		float L_5 = L_4;
		V_0 = L_5;
		__this->____bminY_6 = L_5;
		float L_6 = V_0;
		__this->____bminX_5 = L_6;
		__this->____windingRule_9 = 0;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_7 = ___pool0;
		__this->____pool_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pool_0), (void*)L_7);
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_8 = __this->____pool_0;
		if (L_8)
		{
			goto IL_0075;
		}
	}
	{
		NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D* L_9 = (NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D*)il2cpp_codegen_object_new(NullPool_t6B5FEEB54C6D048C7D7257CB7F7FE01C1BA5E54D_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		NullPool__ctor_mA9794AE1C4917832E71637ADA7B763D44F1AADCA(L_9, NULL);
		__this->____pool_0 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pool_0), (void*)L_9);
	}

IL_0075:
	{
		__this->____mesh_1 = (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mesh_1), (void*)(Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3*)NULL);
		__this->____vertices_14 = (ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices_14), (void*)(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)NULL);
		__this->____vertexCount_15 = 0;
		__this->____elements_16 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elements_16), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____elementCount_17 = 0;
		return;
	}
}
// System.Void LibTessDotNet.Tess::ComputeNormal(LibTessDotNet.Vec3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ComputeNormal_m1DB2CFB644D7D35AA0F4495759B28458EA3A6907 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* ___norm0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_1 = NULL;
	VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* V_2 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_3 = NULL;
	VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* V_4 = NULL;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_8 = NULL;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 V_11;
	memset((&V_11), 0, sizeof(V_11));
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh_1;
		NullCheck(L_0);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_1 = L_0->____vHead_0;
		NullCheck(L_1);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_2 = L_1->____next_1;
		V_0 = L_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = L_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5 = V_0;
		NullCheck(L_5);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_6 = (&L_5->____coords_3);
		float L_7 = L_6->___X_1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_7);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = L_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = V_0;
		NullCheck(L_9);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_10 = (&L_9->____coords_3);
		float L_11 = L_10->___Y_2;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_11);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_12 = L_8;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13 = V_0;
		NullCheck(L_13);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_14 = (&L_13->____coords_3);
		float L_15 = L_14->___Z_3;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_15);
		V_1 = L_12;
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_16 = (VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362*)(VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362*)SZArrayNew(VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362_il2cpp_TypeInfo_var, (uint32_t)3);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_17 = L_16;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = V_0;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_18);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_19 = L_17;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_20 = V_0;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_20);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_21 = L_19;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = V_0;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_22);
		V_2 = L_21;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = L_23;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_25 = V_0;
		NullCheck(L_25);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_26 = (&L_25->____coords_3);
		float L_27 = L_26->___X_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_27);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_28 = L_24;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_29 = V_0;
		NullCheck(L_29);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_30 = (&L_29->____coords_3);
		float L_31 = L_30->___Y_2;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_31);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = L_28;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_33 = V_0;
		NullCheck(L_33);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_34 = (&L_33->____coords_3);
		float L_35 = L_34->___Z_3;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_35);
		V_3 = L_32;
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_36 = (VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362*)(VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362*)SZArrayNew(VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362_il2cpp_TypeInfo_var, (uint32_t)3);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_37 = L_36;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_38 = V_0;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_38);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_39 = L_37;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_40 = V_0;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_40);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_41 = L_39;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_42 = V_0;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_42);
		V_4 = L_41;
		goto IL_0175;
	}

IL_009f:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_43 = V_0;
		NullCheck(L_43);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_44 = (&L_43->____coords_3);
		float L_45 = L_44->___X_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_46 = V_1;
		NullCheck(L_46);
		int32_t L_47 = 0;
		float L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		if ((!(((float)L_45) < ((float)L_48))))
		{
			goto IL_00c1;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_49 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_50 = V_0;
		NullCheck(L_50);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_51 = (&L_50->____coords_3);
		float L_52 = L_51->___X_1;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_52);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_53 = V_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_54 = V_0;
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_54);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_54);
	}

IL_00c1:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_55 = V_0;
		NullCheck(L_55);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_56 = (&L_55->____coords_3);
		float L_57 = L_56->___Y_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_58 = V_1;
		NullCheck(L_58);
		int32_t L_59 = 1;
		float L_60 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		if ((!(((float)L_57) < ((float)L_60))))
		{
			goto IL_00e3;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_61 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_62 = V_0;
		NullCheck(L_62);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_63 = (&L_62->____coords_3);
		float L_64 = L_63->___Y_2;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_64);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_65 = V_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_66 = V_0;
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_66);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_66);
	}

IL_00e3:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_67 = V_0;
		NullCheck(L_67);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_68 = (&L_67->____coords_3);
		float L_69 = L_68->___Z_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_70 = V_1;
		NullCheck(L_70);
		int32_t L_71 = 2;
		float L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		if ((!(((float)L_69) < ((float)L_72))))
		{
			goto IL_0105;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_73 = V_1;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_74 = V_0;
		NullCheck(L_74);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_75 = (&L_74->____coords_3);
		float L_76 = L_75->___Z_3;
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_76);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_77 = V_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_78 = V_0;
		NullCheck(L_77);
		ArrayElementTypeCheck (L_77, L_78);
		(L_77)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_78);
	}

IL_0105:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_79 = V_0;
		NullCheck(L_79);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_80 = (&L_79->____coords_3);
		float L_81 = L_80->___X_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_82 = V_3;
		NullCheck(L_82);
		int32_t L_83 = 0;
		float L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		if ((!(((float)L_81) > ((float)L_84))))
		{
			goto IL_0128;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_85 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_86 = V_0;
		NullCheck(L_86);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_87 = (&L_86->____coords_3);
		float L_88 = L_87->___X_1;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_88);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_89 = V_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_90 = V_0;
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, L_90);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_90);
	}

IL_0128:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_91 = V_0;
		NullCheck(L_91);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_92 = (&L_91->____coords_3);
		float L_93 = L_92->___Y_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_94 = V_3;
		NullCheck(L_94);
		int32_t L_95 = 1;
		float L_96 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		if ((!(((float)L_93) > ((float)L_96))))
		{
			goto IL_014b;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_97 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_98 = V_0;
		NullCheck(L_98);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_99 = (&L_98->____coords_3);
		float L_100 = L_99->___Y_2;
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_100);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_101 = V_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_102 = V_0;
		NullCheck(L_101);
		ArrayElementTypeCheck (L_101, L_102);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_102);
	}

IL_014b:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_103 = V_0;
		NullCheck(L_103);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_104 = (&L_103->____coords_3);
		float L_105 = L_104->___Z_3;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_106 = V_3;
		NullCheck(L_106);
		int32_t L_107 = 2;
		float L_108 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		if ((!(((float)L_105) > ((float)L_108))))
		{
			goto IL_016e;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_109 = V_3;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_110 = V_0;
		NullCheck(L_110);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_111 = (&L_110->____coords_3);
		float L_112 = L_111->___Z_3;
		NullCheck(L_109);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)L_112);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_113 = V_4;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_114 = V_0;
		NullCheck(L_113);
		ArrayElementTypeCheck (L_113, L_114);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_114);
	}

IL_016e:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_115 = V_0;
		NullCheck(L_115);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_116 = L_115->____next_1;
		V_0 = L_116;
	}

IL_0175:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_117 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_118 = __this->____mesh_1;
		NullCheck(L_118);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_119 = L_118->____vHead_0;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_117) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_119))))
		{
			goto IL_009f;
		}
	}
	{
		V_5 = 0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_120 = V_3;
		NullCheck(L_120);
		int32_t L_121 = 1;
		float L_122 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_123 = V_1;
		NullCheck(L_123);
		int32_t L_124 = 1;
		float L_125 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_126 = V_3;
		NullCheck(L_126);
		int32_t L_127 = 0;
		float L_128 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_129 = V_1;
		NullCheck(L_129);
		int32_t L_130 = 0;
		float L_131 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		if ((!(((float)((float)il2cpp_codegen_subtract(L_122, L_125))) > ((float)((float)il2cpp_codegen_subtract(L_128, L_131))))))
		{
			goto IL_019c;
		}
	}
	{
		V_5 = 1;
	}

IL_019c:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_132 = V_3;
		NullCheck(L_132);
		int32_t L_133 = 2;
		float L_134 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_135 = V_1;
		NullCheck(L_135);
		int32_t L_136 = 2;
		float L_137 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_138 = V_3;
		int32_t L_139 = V_5;
		NullCheck(L_138);
		int32_t L_140 = L_139;
		float L_141 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_142 = V_1;
		int32_t L_143 = V_5;
		NullCheck(L_142);
		int32_t L_144 = L_143;
		float L_145 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		if ((!(((float)((float)il2cpp_codegen_subtract(L_134, L_137))) > ((float)((float)il2cpp_codegen_subtract(L_141, L_145))))))
		{
			goto IL_01b1;
		}
	}
	{
		V_5 = 2;
	}

IL_01b1:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_146 = V_1;
		int32_t L_147 = V_5;
		NullCheck(L_146);
		int32_t L_148 = L_147;
		float L_149 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_150 = V_3;
		int32_t L_151 = V_5;
		NullCheck(L_150);
		int32_t L_152 = L_151;
		float L_153 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		if ((!(((float)L_149) >= ((float)L_153))))
		{
			goto IL_01d6;
		}
	}
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_154 = ___norm0;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_155;
		memset((&L_155), 0, sizeof(L_155));
		Vec3__ctor_m937D1DD303AF7D61662A455E5F208BDB81106B7C((&L_155), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		*(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)L_154 = L_155;
		return;
	}

IL_01d6:
	{
		V_6 = (0.0f);
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_156 = V_2;
		int32_t L_157 = V_5;
		NullCheck(L_156);
		int32_t L_158 = L_157;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_159 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		VertexU5BU5D_t51AB695111113AB54648398393ADE4848FED8362* L_160 = V_4;
		int32_t L_161 = V_5;
		NullCheck(L_160);
		int32_t L_162 = L_161;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		V_8 = L_163;
		NullCheck(L_159);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_164 = (&L_159->____coords_3);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_165 = V_8;
		NullCheck(L_165);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_166 = (&L_165->____coords_3);
		il2cpp_codegen_runtime_class_init_inline(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		Vec3_Sub_mAEFED9A4A944DF3B135130969858756B276D13B9(L_164, L_166, (&V_9), NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_167 = __this->____mesh_1;
		NullCheck(L_167);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_168 = L_167->____vHead_0;
		NullCheck(L_168);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_169 = L_168->____next_1;
		V_0 = L_169;
		goto IL_02e1;
	}

IL_0211:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_170 = V_0;
		NullCheck(L_170);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_171 = (&L_170->____coords_3);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_172 = V_8;
		NullCheck(L_172);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_173 = (&L_172->____coords_3);
		il2cpp_codegen_runtime_class_init_inline(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		Vec3_Sub_mAEFED9A4A944DF3B135130969858756B276D13B9(L_171, L_173, (&V_10), NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_174 = V_9;
		float L_175 = L_174.___Y_2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_176 = V_10;
		float L_177 = L_176.___Z_3;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_178 = V_9;
		float L_179 = L_178.___Z_3;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_180 = V_10;
		float L_181 = L_180.___Y_2;
		(&V_11)->___X_1 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_175, L_177)), ((float)il2cpp_codegen_multiply(L_179, L_181))));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_182 = V_9;
		float L_183 = L_182.___Z_3;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_184 = V_10;
		float L_185 = L_184.___X_1;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_186 = V_9;
		float L_187 = L_186.___X_1;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_188 = V_10;
		float L_189 = L_188.___Z_3;
		(&V_11)->___Y_2 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_183, L_185)), ((float)il2cpp_codegen_multiply(L_187, L_189))));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_190 = V_9;
		float L_191 = L_190.___X_1;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_192 = V_10;
		float L_193 = L_192.___Y_2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_194 = V_9;
		float L_195 = L_194.___Y_2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_196 = V_10;
		float L_197 = L_196.___X_1;
		(&V_11)->___Z_3 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_191, L_193)), ((float)il2cpp_codegen_multiply(L_195, L_197))));
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_198 = V_11;
		float L_199 = L_198.___X_1;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_200 = V_11;
		float L_201 = L_200.___X_1;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_202 = V_11;
		float L_203 = L_202.___Y_2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_204 = V_11;
		float L_205 = L_204.___Y_2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_206 = V_11;
		float L_207 = L_206.___Z_3;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_208 = V_11;
		float L_209 = L_208.___Z_3;
		V_7 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_199, L_201)), ((float)il2cpp_codegen_multiply(L_203, L_205)))), ((float)il2cpp_codegen_multiply(L_207, L_209))));
		float L_210 = V_7;
		float L_211 = V_6;
		if ((!(((float)L_210) > ((float)L_211))))
		{
			goto IL_02da;
		}
	}
	{
		float L_212 = V_7;
		V_6 = L_212;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_213 = ___norm0;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_214 = V_11;
		*(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)L_213 = L_214;
	}

IL_02da:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_215 = V_0;
		NullCheck(L_215);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_216 = L_215->____next_1;
		V_0 = L_216;
	}

IL_02e1:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_217 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_218 = __this->____mesh_1;
		NullCheck(L_218);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_219 = L_218->____vHead_0;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_217) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_219))))
		{
			goto IL_0211;
		}
	}
	{
		float L_220 = V_6;
		if ((!(((float)L_220) <= ((float)(0.0f)))))
		{
			goto IL_031c;
		}
	}
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_221 = ___norm0;
		il2cpp_codegen_runtime_class_init_inline(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_222 = ((Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_StaticFields*)il2cpp_codegen_static_fields_for(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var))->___Zero_0;
		*(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6*)L_221 = L_222;
		int32_t L_223;
		L_223 = Vec3_LongAxis_m53C80DC4AF421775497E0380A929DE96F6F7B630((&V_9), NULL);
		V_5 = L_223;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_224 = ___norm0;
		int32_t L_225 = V_5;
		Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(L_224, L_225, (1.0f), NULL);
	}

IL_031c:
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::CheckOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_CheckOrientation_m78C0B1CA1B88D946FDA7CC447C44BA91BFFAF469 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_2 = NULL;
	{
		V_0 = (0.0f);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh_1;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = L_0->____fHead_1;
		NullCheck(L_1);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = L_1->____next_1;
		V_1 = L_2;
		goto IL_0037;
	}

IL_0019:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = V_1;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____anEdge_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->____winding_8;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		float L_6 = V_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_7 = V_1;
		float L_8;
		L_8 = MeshUtils_FaceArea_m198368582A4CEE00E33907F41C30CDFD5F6841C4(L_7, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_6, L_8));
	}

IL_0030:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_9 = V_1;
		NullCheck(L_9);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_10 = L_9->____next_1;
		V_1 = L_10;
	}

IL_0037:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_11 = V_1;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_12 = __this->____mesh_1;
		NullCheck(L_12);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_13 = L_12->____fHead_1;
		if ((!(((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_11) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_13))))
		{
			goto IL_0019;
		}
	}
	{
		float L_14 = V_0;
		if ((!(((float)L_14) < ((float)(0.0f)))))
		{
			goto IL_008d;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_15 = __this->____mesh_1;
		NullCheck(L_15);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_16 = L_15->____vHead_0;
		NullCheck(L_16);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_17 = L_16->____next_1;
		V_2 = L_17;
		goto IL_0074;
	}

IL_0060:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_18 = V_2;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19 = V_2;
		NullCheck(L_19);
		float L_20 = L_19->____t_5;
		NullCheck(L_18);
		L_18->____t_5 = ((-L_20));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = V_2;
		NullCheck(L_21);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_22 = L_21->____next_1;
		V_2 = L_22;
	}

IL_0074:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_23 = V_2;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_24 = __this->____mesh_1;
		NullCheck(L_24);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_25 = L_24->____vHead_0;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_23) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_25))))
		{
			goto IL_0060;
		}
	}
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_26 = (&__this->____tUnit_4);
		il2cpp_codegen_runtime_class_init_inline(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		Vec3_Neg_m53588C86DA46DF9A1BDCCFD8BC4BC9DC247452FC(L_26, NULL);
	}

IL_008d:
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::ProjectPolygon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_ProjectPolygon_m22515E7F73F680B50FAC5ADD3BF5290A0FD719B2 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_4 = NULL;
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_5 = NULL;
	float V_6 = 0.0f;
	int32_t G_B6_0 = 0;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* G_B6_1 = NULL;
	int32_t G_B5_0 = 0;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* G_B5_1 = NULL;
	float G_B7_0 = 0.0f;
	int32_t G_B7_1 = 0;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* G_B7_2 = NULL;
	int32_t G_B9_0 = 0;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* G_B9_1 = NULL;
	int32_t G_B8_0 = 0;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* G_B8_1 = NULL;
	float G_B10_0 = 0.0f;
	int32_t G_B10_1 = 0;
	Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* G_B10_2 = NULL;
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_0 = __this->____normal_2;
		V_0 = L_0;
		V_1 = (bool)0;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_1 = V_0;
		float L_2 = L_1.___X_1;
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_3 = V_0;
		float L_4 = L_3.___Y_2;
		if ((!(((float)L_4) == ((float)(0.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_5 = V_0;
		float L_6 = L_5.___Z_3;
		if ((!(((float)L_6) == ((float)(0.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		Tess_ComputeNormal_m1DB2CFB644D7D35AA0F4495759B28458EA3A6907(__this, (&V_0), NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_7 = V_0;
		__this->____normal_2 = L_7;
		V_1 = (bool)1;
	}

IL_0041:
	{
		il2cpp_codegen_runtime_class_init_inline(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Vec3_LongAxis_m53C80DC4AF421775497E0380A929DE96F6F7B630((&V_0), NULL);
		V_2 = L_8;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_9 = (&__this->____sUnit_3);
		int32_t L_10 = V_2;
		Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(L_9, L_10, (0.0f), NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_11 = (&__this->____sUnit_3);
		int32_t L_12 = V_2;
		float L_13 = __this->___SUnitX_19;
		Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(L_11, ((int32_t)(((int32_t)il2cpp_codegen_add(L_12, 1))%3)), L_13, NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_14 = (&__this->____sUnit_3);
		int32_t L_15 = V_2;
		float L_16 = __this->___SUnitY_20;
		Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(L_14, ((int32_t)(((int32_t)il2cpp_codegen_add(L_15, 2))%3)), L_16, NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_17 = (&__this->____tUnit_4);
		int32_t L_18 = V_2;
		Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(L_17, L_18, (0.0f), NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_19 = (&__this->____tUnit_4);
		int32_t L_20 = V_2;
		int32_t L_21 = V_2;
		float L_22;
		L_22 = Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318((&V_0), L_21, NULL);
		G_B5_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_20, 1))%3));
		G_B5_1 = L_19;
		if ((((float)L_22) > ((float)(0.0f))))
		{
			G_B6_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_20, 1))%3));
			G_B6_1 = L_19;
			goto IL_00b9;
		}
	}
	{
		float L_23 = __this->___SUnitY_20;
		G_B7_0 = L_23;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_00c0;
	}

IL_00b9:
	{
		float L_24 = __this->___SUnitY_20;
		G_B7_0 = ((-L_24));
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_00c0:
	{
		Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(G_B7_2, G_B7_1, G_B7_0, NULL);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_25 = (&__this->____tUnit_4);
		int32_t L_26 = V_2;
		int32_t L_27 = V_2;
		float L_28;
		L_28 = Vec3_get_Item_mD1A78109CEA7E96660457D34BE875AA58BDB8318((&V_0), L_27, NULL);
		G_B8_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_26, 2))%3));
		G_B8_1 = L_25;
		if ((((float)L_28) > ((float)(0.0f))))
		{
			G_B9_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_26, 2))%3));
			G_B9_1 = L_25;
			goto IL_00e8;
		}
	}
	{
		float L_29 = __this->___SUnitX_19;
		G_B10_0 = ((-L_29));
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_00ee;
	}

IL_00e8:
	{
		float L_30 = __this->___SUnitX_19;
		G_B10_0 = L_30;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_00ee:
	{
		Vec3_set_Item_m3DEECD6FB4D93D4CC7DA082C7FDECF5B20E79857(G_B10_2, G_B10_1, G_B10_0, NULL);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_31 = __this->____mesh_1;
		NullCheck(L_31);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_32 = L_31->____vHead_0;
		NullCheck(L_32);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_33 = L_32->____next_1;
		V_4 = L_33;
		goto IL_0142;
	}

IL_0107:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_34 = V_4;
		NullCheck(L_34);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_35 = (&L_34->____coords_3);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_36 = (&__this->____sUnit_3);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_37 = V_4;
		NullCheck(L_37);
		float* L_38 = (&L_37->____s_4);
		il2cpp_codegen_runtime_class_init_inline(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		Vec3_Dot_m647C7F8C0E0ECAF41BAC6A18C704BBBC70AFC94E(L_35, L_36, L_38, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_39 = V_4;
		NullCheck(L_39);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_40 = (&L_39->____coords_3);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6* L_41 = (&__this->____tUnit_4);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_42 = V_4;
		NullCheck(L_42);
		float* L_43 = (&L_42->____t_5);
		Vec3_Dot_m647C7F8C0E0ECAF41BAC6A18C704BBBC70AFC94E(L_40, L_41, L_43, NULL);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_44 = V_4;
		NullCheck(L_44);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_45 = L_44->____next_1;
		V_4 = L_45;
	}

IL_0142:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_46 = V_4;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_47 = __this->____mesh_1;
		NullCheck(L_47);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_48 = L_47->____vHead_0;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_46) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_48))))
		{
			goto IL_0107;
		}
	}
	{
		bool L_49 = V_1;
		if (!L_49)
		{
			goto IL_015a;
		}
	}
	{
		Tess_CheckOrientation_m78C0B1CA1B88D946FDA7CC447C44BA91BFFAF469(__this, NULL);
	}

IL_015a:
	{
		V_3 = (bool)1;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_50 = __this->____mesh_1;
		NullCheck(L_50);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_51 = L_50->____vHead_0;
		NullCheck(L_51);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_52 = L_51->____next_1;
		V_5 = L_52;
		goto IL_0223;
	}

IL_0173:
	{
		bool L_53 = V_3;
		if (!L_53)
		{
			goto IL_01aa;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_54 = V_5;
		NullCheck(L_54);
		float L_55 = L_54->____s_4;
		float L_56 = L_55;
		V_6 = L_56;
		__this->____bmaxX_7 = L_56;
		float L_57 = V_6;
		__this->____bminX_5 = L_57;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_58 = V_5;
		NullCheck(L_58);
		float L_59 = L_58->____t_5;
		float L_60 = L_59;
		V_6 = L_60;
		__this->____bmaxY_8 = L_60;
		float L_61 = V_6;
		__this->____bminY_6 = L_61;
		V_3 = (bool)0;
		goto IL_021a;
	}

IL_01aa:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_62 = V_5;
		NullCheck(L_62);
		float L_63 = L_62->____s_4;
		float L_64 = __this->____bminX_5;
		if ((!(((float)L_63) < ((float)L_64))))
		{
			goto IL_01c6;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_65 = V_5;
		NullCheck(L_65);
		float L_66 = L_65->____s_4;
		__this->____bminX_5 = L_66;
	}

IL_01c6:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_67 = V_5;
		NullCheck(L_67);
		float L_68 = L_67->____s_4;
		float L_69 = __this->____bmaxX_7;
		if ((!(((float)L_68) > ((float)L_69))))
		{
			goto IL_01e2;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_70 = V_5;
		NullCheck(L_70);
		float L_71 = L_70->____s_4;
		__this->____bmaxX_7 = L_71;
	}

IL_01e2:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_72 = V_5;
		NullCheck(L_72);
		float L_73 = L_72->____t_5;
		float L_74 = __this->____bminY_6;
		if ((!(((float)L_73) < ((float)L_74))))
		{
			goto IL_01fe;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_75 = V_5;
		NullCheck(L_75);
		float L_76 = L_75->____t_5;
		__this->____bminY_6 = L_76;
	}

IL_01fe:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_77 = V_5;
		NullCheck(L_77);
		float L_78 = L_77->____t_5;
		float L_79 = __this->____bmaxY_8;
		if ((!(((float)L_78) > ((float)L_79))))
		{
			goto IL_021a;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_80 = V_5;
		NullCheck(L_80);
		float L_81 = L_80->____t_5;
		__this->____bmaxY_8 = L_81;
	}

IL_021a:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_82 = V_5;
		NullCheck(L_82);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_83 = L_82->____next_1;
		V_5 = L_83;
	}

IL_0223:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_84 = V_5;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_85 = __this->____mesh_1;
		NullCheck(L_85);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_86 = L_85->____vHead_0;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_84) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_86))))
		{
			goto IL_0173;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::TessellateMonoRegion(LibTessDotNet.MeshUtils/Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_TessellateMonoRegion_m35381625E13B132270623B38CB8AFA019884D894 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* ___face0, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_0 = ___face0;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____anEdge_2;
		V_0 = L_1;
		goto IL_0010;
	}

IL_0009:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = V_0;
		NullCheck(L_2);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3;
		L_3 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_2, NULL);
		V_0 = L_3;
	}

IL_0010:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = V_0;
		NullCheck(L_4);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_5;
		L_5 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_4, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = V_0;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = L_6->____Org_5;
		bool L_8;
		L_8 = Geom_VertLeq_mE7BBC948CD971E64A0D22328A3CAAD4B2CE82342(L_5, L_7, NULL);
		if (L_8)
		{
			goto IL_0009;
		}
	}
	{
		goto IL_002c;
	}

IL_0025:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = V_0;
		NullCheck(L_9);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = L_9->____Lnext_4;
		V_0 = L_10;
	}

IL_002c:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_0;
		NullCheck(L_11);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_12 = L_11->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13 = V_0;
		NullCheck(L_13);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_14;
		L_14 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_13, NULL);
		bool L_15;
		L_15 = Geom_VertLeq_mE7BBC948CD971E64A0D22328A3CAAD4B2CE82342(L_12, L_14, NULL);
		if (L_15)
		{
			goto IL_0025;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = V_0;
		NullCheck(L_16);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17;
		L_17 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_16, NULL);
		V_1 = L_17;
		goto IL_0121;
	}

IL_004b:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = V_0;
		NullCheck(L_18);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_19;
		L_19 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_18, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_20 = V_1;
		NullCheck(L_20);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_21 = L_20->____Org_5;
		bool L_22;
		L_22 = Geom_VertLeq_mE7BBC948CD971E64A0D22328A3CAAD4B2CE82342(L_19, L_21, NULL);
		if (!L_22)
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_0081;
	}

IL_0063:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_23 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_24 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = V_1;
		NullCheck(L_25);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = L_25->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_27 = V_1;
		NullCheck(L_23);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_28;
		L_28 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_23, L_24, L_26, L_27, NULL);
		NullCheck(L_28);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = L_28->____Sym_2;
		V_1 = L_29;
	}

IL_0081:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_1;
		NullCheck(L_30);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_31 = L_30->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_32 = V_0;
		if ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_31) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_32)))
		{
			goto IL_00ba;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_1;
		NullCheck(L_33);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = L_33->____Lnext_4;
		bool L_35;
		L_35 = Geom_EdgeGoesLeft_m5E05BD16E96A711C609F88596B1A82738C75605F(L_34, NULL);
		if (L_35)
		{
			goto IL_0063;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = V_1;
		NullCheck(L_36);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_37 = L_36->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_1;
		NullCheck(L_38);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_39;
		L_39 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_38, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_40 = V_1;
		NullCheck(L_40);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_41 = L_40->____Lnext_4;
		NullCheck(L_41);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_42;
		L_42 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_41, NULL);
		float L_43;
		L_43 = Geom_EdgeSign_mB4FA2C46F053680D96F80EC78C1616104DDA7396(L_37, L_39, L_42, NULL);
		if ((((float)L_43) <= ((float)(0.0f))))
		{
			goto IL_0063;
		}
	}

IL_00ba:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = V_1;
		NullCheck(L_44);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45;
		L_45 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_44, NULL);
		V_1 = L_45;
		goto IL_0121;
	}

IL_00c3:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_46 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_47 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_48 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_49 = V_0;
		NullCheck(L_49);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_50;
		L_50 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_49, NULL);
		NullCheck(L_46);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_51;
		L_51 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_46, L_47, L_48, L_50, NULL);
		NullCheck(L_51);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_52 = L_51->____Sym_2;
		V_0 = L_52;
	}

IL_00e1:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_53 = V_1;
		NullCheck(L_53);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_54 = L_53->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_55 = V_0;
		if ((((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_54) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_55)))
		{
			goto IL_011a;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_56 = V_0;
		NullCheck(L_56);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_57;
		L_57 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_56, NULL);
		bool L_58;
		L_58 = Geom_EdgeGoesRight_m4CC6F9D21B8B72CFA3FC7C772DC801973B774721(L_57, NULL);
		if (L_58)
		{
			goto IL_00c3;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_59 = V_0;
		NullCheck(L_59);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_60;
		L_60 = Edge_get__Dst_m653270D442F13DAD2D902BAA8CEAE3E048753709(L_59, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_61 = V_0;
		NullCheck(L_61);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_62 = L_61->____Org_5;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_63 = V_0;
		NullCheck(L_63);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_64;
		L_64 = Edge_get__Lprev_mAFD18860D11AD2FEAA580E239EAA1430A63F7775(L_63, NULL);
		NullCheck(L_64);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_65 = L_64->____Org_5;
		float L_66;
		L_66 = Geom_EdgeSign_mB4FA2C46F053680D96F80EC78C1616104DDA7396(L_60, L_62, L_65, NULL);
		if ((((float)L_66) >= ((float)(0.0f))))
		{
			goto IL_00c3;
		}
	}

IL_011a:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_67 = V_0;
		NullCheck(L_67);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_68 = L_67->____Lnext_4;
		V_0 = L_68;
	}

IL_0121:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_69 = V_0;
		NullCheck(L_69);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_70 = L_69->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_71 = V_1;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_70) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_71))))
		{
			goto IL_004b;
		}
	}
	{
		goto IL_014d;
	}

IL_012f:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_72 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_73 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_74 = V_1;
		NullCheck(L_74);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_75 = L_74->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_76 = V_1;
		NullCheck(L_72);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_77;
		L_77 = Mesh_Connect_m78D2973D39D74787021E2E9DBBF22666691236CA(L_72, L_73, L_75, L_76, NULL);
		NullCheck(L_77);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_78 = L_77->____Sym_2;
		V_1 = L_78;
	}

IL_014d:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_79 = V_1;
		NullCheck(L_79);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_80 = L_79->____Lnext_4;
		NullCheck(L_80);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_81 = L_80->____Lnext_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_82 = V_0;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_81) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_82))))
		{
			goto IL_012f;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::TessellateInterior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_TessellateInterior_mE0300B408C5AF3A1D2ED19A02BA39F5BC21DAD91 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh_1;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = L_0->____fHead_1;
		NullCheck(L_1);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = L_1->____next_1;
		V_0 = L_2;
		goto IL_002b;
	}

IL_0013:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = V_0;
		NullCheck(L_3);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_4 = L_3->____next_1;
		V_1 = L_4;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->____inside_6;
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_7 = V_0;
		Tess_TessellateMonoRegion_m35381625E13B132270623B38CB8AFA019884D894(__this, L_7, NULL);
	}

IL_0029:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_8 = V_1;
		V_0 = L_8;
	}

IL_002b:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_9 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_10 = __this->____mesh_1;
		NullCheck(L_10);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_11 = L_10->____fHead_1;
		if ((!(((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_9) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_11))))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::DiscardExterior()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_DiscardExterior_m4AAC0C1966660472AC09B4A209FD519837598ECD (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh_1;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = L_0->____fHead_1;
		NullCheck(L_1);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = L_1->____next_1;
		V_0 = L_2;
		goto IL_0036;
	}

IL_0013:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = V_0;
		NullCheck(L_3);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_4 = L_3->____next_1;
		V_1 = L_4;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->____inside_6;
		if (L_6)
		{
			goto IL_0034;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_7 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_8 = __this->____pool_0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_9 = V_0;
		NullCheck(L_7);
		Mesh_ZapFace_m40CB995646CB70A3A752001902CF3A1289CC54E7(L_7, L_8, L_9, NULL);
	}

IL_0034:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_10 = V_1;
		V_0 = L_10;
	}

IL_0036:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_11 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_12 = __this->____mesh_1;
		NullCheck(L_12);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_13 = L_12->____fHead_1;
		if ((!(((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_11) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_13))))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::SetWindingNumber(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_SetWindingNumber_m67CAD83A0441F03AC00A0988396CC22DDD93FE6A (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, int32_t ___value0, bool ___keepOnlyBoundary1, const RuntimeMethod* method) 
{
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* G_B4_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* G_B5_1 = NULL;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh_1;
		NullCheck(L_0);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_1 = L_0->____eHead_2;
		NullCheck(L_1);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = L_1->____next_1;
		V_0 = L_2;
		goto IL_006c;
	}

IL_0013:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_3 = V_0;
		NullCheck(L_3);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_4 = L_3->____next_1;
		V_1 = L_4;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = V_0;
		NullCheck(L_5);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_6;
		L_6 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_5, NULL);
		NullCheck(L_6);
		bool L_7 = L_6->____inside_6;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_8 = V_0;
		NullCheck(L_8);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_9 = L_8->____Lface_6;
		NullCheck(L_9);
		bool L_10 = L_9->____inside_6;
		if ((((int32_t)L_7) == ((int32_t)L_10)))
		{
			goto IL_004c;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_0;
		NullCheck(L_12);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_13 = L_12->____Lface_6;
		NullCheck(L_13);
		bool L_14 = L_13->____inside_6;
		G_B3_0 = L_11;
		if (L_14)
		{
			G_B4_0 = L_11;
			goto IL_0044;
		}
	}
	{
		int32_t L_15 = ___value0;
		G_B5_0 = ((-L_15));
		G_B5_1 = G_B3_0;
		goto IL_0045;
	}

IL_0044:
	{
		int32_t L_16 = ___value0;
		G_B5_0 = L_16;
		G_B5_1 = G_B4_0;
	}

IL_0045:
	{
		NullCheck(G_B5_1);
		G_B5_1->____winding_8 = G_B5_0;
		goto IL_006a;
	}

IL_004c:
	{
		bool L_17 = ___keepOnlyBoundary1;
		if (L_17)
		{
			goto IL_0058;
		}
	}
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = V_0;
		NullCheck(L_18);
		L_18->____winding_8 = 0;
		goto IL_006a;
	}

IL_0058:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_19 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_20 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = V_0;
		NullCheck(L_19);
		Mesh_Delete_mB3927BA15BCDDCF4E6C68D90CCE70DF491F31512(L_19, L_20, L_21, NULL);
	}

IL_006a:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22 = V_1;
		V_0 = L_22;
	}

IL_006c:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_24 = __this->____mesh_1;
		NullCheck(L_24);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = L_24->____eHead_2;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_23) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_25))))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Int32 LibTessDotNet.Tess::GetNeighbourFace(LibTessDotNet.MeshUtils/Edge)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tess_GetNeighbourFace_mDB66AF9ED49A800C6FD51072F7EC9E2DFFACFAA8 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* ___edge0, const RuntimeMethod* method) 
{
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_0 = ___edge0;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1;
		L_1 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (-1);
	}

IL_000a:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_2 = ___edge0;
		NullCheck(L_2);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3;
		L_3 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_2, NULL);
		NullCheck(L_3);
		bool L_4 = L_3->____inside_6;
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		return (-1);
	}

IL_0019:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_5 = ___edge0;
		NullCheck(L_5);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_6;
		L_6 = Edge_get__Rface_m544441942890DCAC03EDDB044BE3344023B94769(L_5, NULL);
		NullCheck(L_6);
		int32_t L_7 = L_6->____n_4;
		return L_7;
	}
}
// System.Void LibTessDotNet.Tess::OutputPolymesh(LibTessDotNet.ElementType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_OutputPolymesh_mD26B103CACD185034776B1CC6869212B40665B7B (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, int32_t ___elementType0, int32_t ___polySize1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* V_0 = NULL;
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		V_3 = 0;
		V_4 = 0;
		int32_t L_0 = ___polySize1;
		if ((((int32_t)L_0) >= ((int32_t)3)))
		{
			goto IL_000c;
		}
	}
	{
		___polySize1 = 3;
	}

IL_000c:
	{
		int32_t L_1 = ___polySize1;
		if ((((int32_t)L_1) <= ((int32_t)3)))
		{
			goto IL_0022;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_2 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_3 = __this->____pool_0;
		int32_t L_4 = ___polySize1;
		NullCheck(L_2);
		Mesh_MergeConvexFaces_m2452DF609E5F2842DCB3645A91AE38474D00189C(L_2, L_3, L_4, NULL);
	}

IL_0022:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_5 = __this->____mesh_1;
		NullCheck(L_5);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_6 = L_5->____vHead_0;
		NullCheck(L_6);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_7 = L_6->____next_1;
		V_0 = L_7;
		goto IL_0043;
	}

IL_0035:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_8 = V_0;
		NullCheck(L_8);
		L_8->____n_7 = (-1);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_9 = V_0;
		NullCheck(L_9);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_10 = L_9->____next_1;
		V_0 = L_10;
	}

IL_0043:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_11 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_12 = __this->____mesh_1;
		NullCheck(L_12);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_13 = L_12->____vHead_0;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_11) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_13))))
		{
			goto IL_0035;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_14 = __this->____mesh_1;
		NullCheck(L_14);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_15 = L_14->____fHead_1;
		NullCheck(L_15);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_16 = L_15->____next_1;
		V_1 = L_16;
		goto IL_00dd;
	}

IL_0064:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_17 = V_1;
		NullCheck(L_17);
		L_17->____n_4 = (-1);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_18 = V_1;
		NullCheck(L_18);
		bool L_19 = L_18->____inside_6;
		if (!L_19)
		{
			goto IL_00d6;
		}
	}
	{
		bool L_20 = __this->___NoEmptyPolygons_22;
		if (!L_20)
		{
			goto IL_008d;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_21 = V_1;
		float L_22;
		L_22 = MeshUtils_FaceArea_m198368582A4CEE00E33907F41C30CDFD5F6841C4(L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_23;
		L_23 = fabsf(L_22);
		if ((((float)L_23) < ((float)(1.40129846E-45f))))
		{
			goto IL_00d6;
		}
	}

IL_008d:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_24 = V_1;
		NullCheck(L_24);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_25 = L_24->____anEdge_2;
		V_2 = L_25;
		V_5 = 0;
	}

IL_0097:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_26 = V_2;
		NullCheck(L_26);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_27 = L_26->____Org_5;
		V_0 = L_27;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = L_28->____n_7;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_00b5;
		}
	}
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_30 = V_0;
		int32_t L_31 = V_4;
		NullCheck(L_30);
		L_30->____n_7 = L_31;
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00b5:
	{
		int32_t L_33 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_34 = V_2;
		NullCheck(L_34);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_35 = L_34->____Lnext_4;
		V_2 = L_35;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = V_2;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_37 = V_1;
		NullCheck(L_37);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = L_37->____anEdge_2;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_36) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_38))))
		{
			goto IL_0097;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_39 = V_1;
		int32_t L_40 = V_3;
		NullCheck(L_39);
		L_39->____n_4 = L_40;
		int32_t L_41 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00d6:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_42 = V_1;
		NullCheck(L_42);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_43 = L_42->____next_1;
		V_1 = L_43;
	}

IL_00dd:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_44 = V_1;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_45 = __this->____mesh_1;
		NullCheck(L_45);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_46 = L_45->____fHead_1;
		if ((!(((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_44) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_46))))
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_47 = V_3;
		__this->____elementCount_17 = L_47;
		int32_t L_48 = ___elementType0;
		if ((!(((uint32_t)L_48) == ((uint32_t)1))))
		{
			goto IL_00fd;
		}
	}
	{
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_49, 2));
	}

IL_00fd:
	{
		int32_t L_50 = V_3;
		int32_t L_51 = ___polySize1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_50, L_51)));
		__this->____elements_16 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elements_16), (void*)L_52);
		int32_t L_53 = V_4;
		__this->____vertexCount_15 = L_53;
		int32_t L_54 = __this->____vertexCount_15;
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_55 = (ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)SZArrayNew(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF_il2cpp_TypeInfo_var, (uint32_t)L_54);
		__this->____vertices_14 = L_55;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices_14), (void*)L_55);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_56 = __this->____mesh_1;
		NullCheck(L_56);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_57 = L_56->____vHead_0;
		NullCheck(L_57);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_58 = L_57->____next_1;
		V_0 = L_58;
		goto IL_017f;
	}

IL_0137:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_59 = V_0;
		NullCheck(L_59);
		int32_t L_60 = L_59->____n_7;
		if ((((int32_t)L_60) == ((int32_t)(-1))))
		{
			goto IL_0178;
		}
	}
	{
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_61 = __this->____vertices_14;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_62 = V_0;
		NullCheck(L_62);
		int32_t L_63 = L_62->____n_7;
		NullCheck(L_61);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_64 = V_0;
		NullCheck(L_64);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_65 = L_64->____coords_3;
		((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63)))->___Position_0 = L_65;
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_66 = __this->____vertices_14;
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_67 = V_0;
		NullCheck(L_67);
		int32_t L_68 = L_67->____n_7;
		NullCheck(L_66);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_69 = V_0;
		NullCheck(L_69);
		int32_t L_70 = L_69->____data_8;
		((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_68)))->___Data_1 = L_70;
	}

IL_0178:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_71 = V_0;
		NullCheck(L_71);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_72 = L_71->____next_1;
		V_0 = L_72;
	}

IL_017f:
	{
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_73 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_74 = __this->____mesh_1;
		NullCheck(L_74);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_75 = L_74->____vHead_0;
		if ((!(((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_73) == ((RuntimeObject*)(Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE*)L_75))))
		{
			goto IL_0137;
		}
	}
	{
		V_7 = 0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_76 = __this->____mesh_1;
		NullCheck(L_76);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_77 = L_76->____fHead_1;
		NullCheck(L_77);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_78 = L_77->____next_1;
		V_1 = L_78;
		goto IL_0280;
	}

IL_01a6:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_79 = V_1;
		NullCheck(L_79);
		bool L_80 = L_79->____inside_6;
		if (!L_80)
		{
			goto IL_0279;
		}
	}
	{
		bool L_81 = __this->___NoEmptyPolygons_22;
		if (!L_81)
		{
			goto IL_01ce;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_82 = V_1;
		float L_83;
		L_83 = MeshUtils_FaceArea_m198368582A4CEE00E33907F41C30CDFD5F6841C4(L_82, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_84;
		L_84 = fabsf(L_83);
		if ((((float)L_84) < ((float)(1.40129846E-45f))))
		{
			goto IL_0279;
		}
	}

IL_01ce:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_85 = V_1;
		NullCheck(L_85);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_86 = L_85->____anEdge_2;
		V_2 = L_86;
		V_5 = 0;
	}

IL_01d8:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_87 = V_2;
		NullCheck(L_87);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_88 = L_87->____Org_5;
		V_0 = L_88;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = __this->____elements_16;
		int32_t L_90 = V_7;
		int32_t L_91 = L_90;
		V_7 = ((int32_t)il2cpp_codegen_add(L_91, 1));
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_92 = V_0;
		NullCheck(L_92);
		int32_t L_93 = L_92->____n_7;
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(L_91), (int32_t)L_93);
		int32_t L_94 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_94, 1));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_95 = V_2;
		NullCheck(L_95);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_96 = L_95->____Lnext_4;
		V_2 = L_96;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_97 = V_2;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_98 = V_1;
		NullCheck(L_98);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_99 = L_98->____anEdge_2;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_97) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_99))))
		{
			goto IL_01d8;
		}
	}
	{
		int32_t L_100 = V_5;
		V_6 = L_100;
		goto IL_0224;
	}

IL_020f:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = __this->____elements_16;
		int32_t L_102 = V_7;
		int32_t L_103 = L_102;
		V_7 = ((int32_t)il2cpp_codegen_add(L_103, 1));
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(L_103), (int32_t)(-1));
		int32_t L_104 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_104, 1));
	}

IL_0224:
	{
		int32_t L_105 = V_6;
		int32_t L_106 = ___polySize1;
		if ((((int32_t)L_105) < ((int32_t)L_106)))
		{
			goto IL_020f;
		}
	}
	{
		int32_t L_107 = ___elementType0;
		if ((!(((uint32_t)L_107) == ((uint32_t)1))))
		{
			goto IL_0279;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_108 = V_1;
		NullCheck(L_108);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_109 = L_108->____anEdge_2;
		V_2 = L_109;
	}

IL_0234:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = __this->____elements_16;
		int32_t L_111 = V_7;
		int32_t L_112 = L_111;
		V_7 = ((int32_t)il2cpp_codegen_add(L_112, 1));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_113 = V_2;
		int32_t L_114;
		L_114 = Tess_GetNeighbourFace_mDB66AF9ED49A800C6FD51072F7EC9E2DFFACFAA8(__this, L_113, NULL);
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(L_112), (int32_t)L_114);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_115 = V_2;
		NullCheck(L_115);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_116 = L_115->____Lnext_4;
		V_2 = L_116;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_117 = V_2;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_118 = V_1;
		NullCheck(L_118);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_119 = L_118->____anEdge_2;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_117) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_119))))
		{
			goto IL_0234;
		}
	}
	{
		int32_t L_120 = V_5;
		V_6 = L_120;
		goto IL_0274;
	}

IL_025f:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_121 = __this->____elements_16;
		int32_t L_122 = V_7;
		int32_t L_123 = L_122;
		V_7 = ((int32_t)il2cpp_codegen_add(L_123, 1));
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(L_123), (int32_t)(-1));
		int32_t L_124 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_124, 1));
	}

IL_0274:
	{
		int32_t L_125 = V_6;
		int32_t L_126 = ___polySize1;
		if ((((int32_t)L_125) < ((int32_t)L_126)))
		{
			goto IL_025f;
		}
	}

IL_0279:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_127 = V_1;
		NullCheck(L_127);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_128 = L_127->____next_1;
		V_1 = L_128;
	}

IL_0280:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_129 = V_1;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_130 = __this->____mesh_1;
		NullCheck(L_130);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_131 = L_130->____fHead_1;
		if ((!(((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_129) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_131))))
		{
			goto IL_01a6;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::OutputContours()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_OutputContours_mB354AD2F98DCFE73A074C5443A000FDDCBBD0D83 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* V_0 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		V_3 = 0;
		V_4 = 0;
		__this->____vertexCount_15 = 0;
		__this->____elementCount_17 = 0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh_1;
		NullCheck(L_0);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_1 = L_0->____fHead_1;
		NullCheck(L_1);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_2 = L_1->____next_1;
		V_0 = L_2;
		goto IL_0065;
	}

IL_0026:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = L_3->____inside_6;
		if (!L_4)
		{
			goto IL_005e;
		}
	}
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_5 = V_0;
		NullCheck(L_5);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_6 = L_5->____anEdge_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_7 = L_6;
		V_1 = L_7;
		V_2 = L_7;
	}

IL_0037:
	{
		int32_t L_8 = __this->____vertexCount_15;
		__this->____vertexCount_15 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_9 = V_1;
		NullCheck(L_9);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = L_9->____Lnext_4;
		V_1 = L_10;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_11 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_12 = V_2;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_11) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_12))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_13 = __this->____elementCount_17;
		__this->____elementCount_17 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005e:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_14 = V_0;
		NullCheck(L_14);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_15 = L_14->____next_1;
		V_0 = L_15;
	}

IL_0065:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_16 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_17 = __this->____mesh_1;
		NullCheck(L_17);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_18 = L_17->____fHead_1;
		if ((!(((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_16) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_18))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_19 = __this->____elementCount_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_19, 2)));
		__this->____elements_16 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elements_16), (void*)L_20);
		int32_t L_21 = __this->____vertexCount_15;
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_22 = (ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)SZArrayNew(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF_il2cpp_TypeInfo_var, (uint32_t)L_21);
		__this->____vertices_14 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices_14), (void*)L_22);
		V_5 = 0;
		V_6 = 0;
		V_3 = 0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_23 = __this->____mesh_1;
		NullCheck(L_23);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_24 = L_23->____fHead_1;
		NullCheck(L_24);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_25 = L_24->____next_1;
		V_0 = L_25;
		goto IL_0148;
	}

IL_00b5:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_26 = V_0;
		NullCheck(L_26);
		bool L_27 = L_26->____inside_6;
		if (!L_27)
		{
			goto IL_0141;
		}
	}
	{
		V_4 = 0;
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_28 = V_0;
		NullCheck(L_28);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_29 = L_28->____anEdge_2;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = L_29;
		V_1 = L_30;
		V_2 = L_30;
	}

IL_00cc:
	{
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_31 = __this->____vertices_14;
		int32_t L_32 = V_5;
		NullCheck(L_31);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_33 = V_1;
		NullCheck(L_33);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_34 = L_33->____Org_5;
		NullCheck(L_34);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_35 = L_34->____coords_3;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___Position_0 = L_35;
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_36 = __this->____vertices_14;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_38 = V_1;
		NullCheck(L_38);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_39 = L_38->____Org_5;
		NullCheck(L_39);
		int32_t L_40 = L_39->____data_8;
		((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37)))->___Data_1 = L_40;
		int32_t L_41 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_43 = V_1;
		NullCheck(L_43);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = L_43->____Lnext_4;
		V_1 = L_44;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_45 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_46 = V_2;
		if ((!(((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_45) == ((RuntimeObject*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)L_46))))
		{
			goto IL_00cc;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = __this->____elements_16;
		int32_t L_48 = V_6;
		int32_t L_49 = L_48;
		V_6 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		int32_t L_50 = V_3;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (int32_t)L_50);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = __this->____elements_16;
		int32_t L_52 = V_6;
		int32_t L_53 = L_52;
		V_6 = ((int32_t)il2cpp_codegen_add(L_53, 1));
		int32_t L_54 = V_4;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (int32_t)L_54);
		int32_t L_55 = V_3;
		int32_t L_56 = V_4;
		V_3 = ((int32_t)il2cpp_codegen_add(L_55, L_56));
	}

IL_0141:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_57 = V_0;
		NullCheck(L_57);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_58 = L_57->____next_1;
		V_0 = L_58;
	}

IL_0148:
	{
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_59 = V_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_60 = __this->____mesh_1;
		NullCheck(L_60);
		Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF* L_61 = L_60->____fHead_1;
		if ((!(((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_59) == ((RuntimeObject*)(Face_t4523029054D66AC2FA8B5BB361B53C040AA990EF*)L_61))))
		{
			goto IL_00b5;
		}
	}
	{
		return;
	}
}
// System.Single LibTessDotNet.Tess::SignedArea(System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tess_SignedArea_m81A5A96E18FE237FDA733FE8D31601142341B841 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, RuntimeObject* ___vertices0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t8914FBB527D049FFD6FB295C98F49CBAF7B186A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F V_2;
	memset((&V_2), 0, sizeof(V_2));
	ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		V_0 = (0.0f);
		V_1 = 0;
		goto IL_005b;
	}

IL_000a:
	{
		RuntimeObject* L_0 = ___vertices0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_2;
		L_2 = InterfaceFuncInvoker1< ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>::get_Item(System.Int32) */, IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D_il2cpp_TypeInfo_var, L_0, L_1);
		V_2 = L_2;
		RuntimeObject* L_3 = ___vertices0;
		int32_t L_4 = V_1;
		RuntimeObject* L_5 = ___vertices0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<LibTessDotNet.ContourVertex>::get_Count() */, ICollection_1_t8914FBB527D049FFD6FB295C98F49CBAF7B186A0_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_3);
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_7;
		L_7 = InterfaceFuncInvoker1< ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>::get_Item(System.Int32) */, IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D_il2cpp_TypeInfo_var, L_3, ((int32_t)(((int32_t)il2cpp_codegen_add(L_4, 1))%L_6)));
		V_3 = L_7;
		float L_8 = V_0;
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_9 = V_2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_10 = L_9.___Position_0;
		float L_11 = L_10.___X_1;
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_12 = V_3;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_13 = L_12.___Position_0;
		float L_14 = L_13.___Y_2;
		V_0 = ((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(L_11, L_14))));
		float L_15 = V_0;
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_16 = V_2;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_17 = L_16.___Position_0;
		float L_18 = L_17.___Y_2;
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_19 = V_3;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_20 = L_19.___Position_0;
		float L_21 = L_20.___X_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_15, ((float)il2cpp_codegen_multiply(L_18, L_21))));
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_005b:
	{
		int32_t L_23 = V_1;
		RuntimeObject* L_24 = ___vertices0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<LibTessDotNet.ContourVertex>::get_Count() */, ICollection_1_t8914FBB527D049FFD6FB295C98F49CBAF7B186A0_il2cpp_TypeInfo_var, L_24);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_000a;
		}
	}
	{
		float L_26 = V_0;
		return ((float)il2cpp_codegen_multiply((0.5f), L_26));
	}
}
// System.Void LibTessDotNet.Tess::AddContour(LibTessDotNet.ContourVertex[],LibTessDotNet.ContourOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContour_mF667311A04886C578E9808D715A4D6470D0AD5A5 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* ___vertices0, int32_t ___forceOrientation1, const RuntimeMethod* method) 
{
	{
		ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF* L_0 = ___vertices0;
		int32_t L_1 = ___forceOrientation1;
		Tess_AddContourInternal_mFA84BAC9BB6FA1F7C40B76E6ABC6C7884C666887(__this, (RuntimeObject*)L_0, L_1, NULL);
		return;
	}
}
// System.Void LibTessDotNet.Tess::AddContour(System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>,LibTessDotNet.ContourOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContour_m8EDE4A726EAE9475970B07B9ABA4D7F0F8D1674E (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, RuntimeObject* ___vertices0, int32_t ___forceOrientation1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___vertices0;
		int32_t L_1 = ___forceOrientation1;
		Tess_AddContourInternal_mFA84BAC9BB6FA1F7C40B76E6ABC6C7884C666887(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void LibTessDotNet.Tess::AddContourInternal(System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>,LibTessDotNet.ContourOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_AddContourInternal_mFA84BAC9BB6FA1F7C40B76E6ABC6C7884C666887 (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, RuntimeObject* ___vertices0, int32_t ___forceOrientation1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t8914FBB527D049FFD6FB295C98F49CBAF7B186A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Get_TisMesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3_m1D44A8B041AE4181C7B292F16B2DA3AF32201ADB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* V_1 = NULL;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B17_0 = 0;
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_0 = __this->____mesh_1;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_1 = __this->____pool_0;
		NullCheck(L_1);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_2;
		L_2 = GenericVirtualFuncInvoker0< Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* >::Invoke(IPool_Get_TisMesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3_m1D44A8B041AE4181C7B292F16B2DA3AF32201ADB_RuntimeMethod_var, L_1);
		__this->____mesh_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mesh_1), (void*)L_2);
	}

IL_0019:
	{
		V_0 = (bool)0;
		int32_t L_3 = ___forceOrientation1;
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		RuntimeObject* L_4 = ___vertices0;
		float L_5;
		L_5 = Tess_SignedArea_m81A5A96E18FE237FDA733FE8D31601142341B841(__this, L_4, NULL);
		V_2 = L_5;
		int32_t L_6 = ___forceOrientation1;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0032;
		}
	}
	{
		float L_7 = V_2;
		if ((((float)L_7) < ((float)(0.0f))))
		{
			goto IL_0043;
		}
	}

IL_0032:
	{
		int32_t L_8 = ___forceOrientation1;
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_0040;
		}
	}
	{
		float L_9 = V_2;
		G_B9_0 = ((((float)L_9) > ((float)(0.0f)))? 1 : 0);
		goto IL_0044;
	}

IL_0040:
	{
		G_B9_0 = 0;
		goto IL_0044;
	}

IL_0043:
	{
		G_B9_0 = 1;
	}

IL_0044:
	{
		V_0 = (bool)G_B9_0;
	}

IL_0045:
	{
		V_1 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		V_3 = 0;
		goto IL_00f0;
	}

IL_004e:
	{
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_10 = V_1;
		if (L_10)
		{
			goto IL_007d;
		}
	}
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_11 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_12 = __this->____pool_0;
		NullCheck(L_11);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_13;
		L_13 = Mesh_MakeEdge_m885B759356861633DA4414A5DE88F5FDB0E8B8E7(L_11, L_12, NULL);
		V_1 = L_13;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_14 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_15 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_16 = V_1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_17 = V_1;
		NullCheck(L_17);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_18 = L_17->____Sym_2;
		NullCheck(L_14);
		Mesh_Splice_mA43E0A33B98D6E26E0D4E62DE92E0B859B62F929(L_14, L_15, L_16, L_18, NULL);
		goto IL_0097;
	}

IL_007d:
	{
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_19 = __this->____mesh_1;
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_20 = __this->____pool_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_21 = V_1;
		NullCheck(L_19);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_22;
		L_22 = Mesh_SplitEdge_mC22B9AB48ECAD4F60435EEA81214EFACFAE2D8F7(L_19, L_20, L_21, NULL);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_23 = V_1;
		NullCheck(L_23);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_24 = L_23->____Lnext_4;
		V_1 = L_24;
	}

IL_0097:
	{
		bool L_25 = V_0;
		if (L_25)
		{
			goto IL_009d;
		}
	}
	{
		int32_t L_26 = V_3;
		G_B17_0 = L_26;
		goto IL_00a7;
	}

IL_009d:
	{
		RuntimeObject* L_27 = ___vertices0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<LibTessDotNet.ContourVertex>::get_Count() */, ICollection_1_t8914FBB527D049FFD6FB295C98F49CBAF7B186A0_il2cpp_TypeInfo_var, L_27);
		int32_t L_29 = V_3;
		G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_28, 1)), L_29));
	}

IL_00a7:
	{
		V_4 = G_B17_0;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_30 = V_1;
		NullCheck(L_30);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_31 = L_30->____Org_5;
		RuntimeObject* L_32 = ___vertices0;
		int32_t L_33 = V_4;
		NullCheck(L_32);
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_34;
		L_34 = InterfaceFuncInvoker1< ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>::get_Item(System.Int32) */, IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D_il2cpp_TypeInfo_var, L_32, L_33);
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_35 = L_34.___Position_0;
		NullCheck(L_31);
		L_31->____coords_3 = L_35;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_36 = V_1;
		NullCheck(L_36);
		Vertex_tB20D7EDB9277909713A9796540D3CE44C9B14DBE* L_37 = L_36->____Org_5;
		RuntimeObject* L_38 = ___vertices0;
		int32_t L_39 = V_4;
		NullCheck(L_38);
		ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F L_40;
		L_40 = InterfaceFuncInvoker1< ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<LibTessDotNet.ContourVertex>::get_Item(System.Int32) */, IList_1_t7B08130BDC464CC2BCD7D73811799DD84589F08D_il2cpp_TypeInfo_var, L_38, L_39);
		int32_t L_41 = L_40.___Data_1;
		NullCheck(L_37);
		L_37->____data_8 = L_41;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_42 = V_1;
		NullCheck(L_42);
		L_42->____winding_8 = 1;
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_43 = V_1;
		NullCheck(L_43);
		Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966* L_44 = L_43->____Sym_2;
		NullCheck(L_44);
		L_44->____winding_8 = (-1);
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00f0:
	{
		int32_t L_46 = V_3;
		RuntimeObject* L_47 = ___vertices0;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<LibTessDotNet.ContourVertex>::get_Count() */, ICollection_1_t8914FBB527D049FFD6FB295C98F49CBAF7B186A0_il2cpp_TypeInfo_var, L_47);
		if ((((int32_t)L_46) < ((int32_t)L_48)))
		{
			goto IL_004e;
		}
	}
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess::Tessellate(LibTessDotNet.WindingRule,LibTessDotNet.ElementType,System.Int32,LibTessDotNet.CombineCallback,LibTessDotNet.Vec3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tess_Tessellate_m1A288974947B0D69A8FC26556C151259C8C8418E (Tess_t8CA952BC4718E0DC5AB5D4D32E0736A193287BC8* __this, int32_t ___windingRule0, int32_t ___elementType1, int32_t ___polySize2, CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* ___combineCallback3, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___normal4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPool_Return_TisMesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3_m004092468BAD1B30CA23F97F4F00ED69D37E7C01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_0 = ___normal4;
		__this->____normal_2 = L_0;
		__this->____vertices_14 = (ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____vertices_14), (void*)(ContourVertexU5BU5D_tAA6EDE0FE3A9428E4FA7E8E6115E2F65C82259CF*)NULL);
		__this->____elements_16 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elements_16), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		int32_t L_1 = ___windingRule0;
		__this->____windingRule_9 = L_1;
		CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* L_2 = ___combineCallback3;
		__this->____combineCallback_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____combineCallback_13), (void*)L_2);
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_3 = __this->____mesh_1;
		if (L_3)
		{
			goto IL_002e;
		}
	}
	{
		return;
	}

IL_002e:
	{
		Tess_ProjectPolygon_m22515E7F73F680B50FAC5ADD3BF5290A0FD719B2(__this, NULL);
		Tess_ComputeInterior_mFE484BBCF4AAC36E007A54416314B53790663CAD(__this, NULL);
		int32_t L_4 = ___elementType1;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0048;
		}
	}
	{
		Tess_SetWindingNumber_m67CAD83A0441F03AC00A0988396CC22DDD93FE6A(__this, 1, (bool)1, NULL);
		goto IL_004e;
	}

IL_0048:
	{
		Tess_TessellateInterior_mE0300B408C5AF3A1D2ED19A02BA39F5BC21DAD91(__this, NULL);
	}

IL_004e:
	{
		int32_t L_5 = ___elementType1;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_005a;
		}
	}
	{
		Tess_OutputContours_mB354AD2F98DCFE73A074C5443A000FDDCBBD0D83(__this, NULL);
		goto IL_0062;
	}

IL_005a:
	{
		int32_t L_6 = ___elementType1;
		int32_t L_7 = ___polySize2;
		Tess_OutputPolymesh_mD26B103CACD185034776B1CC6869212B40665B7B(__this, L_6, L_7, NULL);
	}

IL_0062:
	{
		IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* L_8 = __this->____pool_0;
		Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* L_9 = __this->____mesh_1;
		NullCheck(L_8);
		GenericVirtualActionInvoker1< Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3* >::Invoke(IPool_Return_TisMesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3_m004092468BAD1B30CA23F97F4F00ED69D37E7C01_RuntimeMethod_var, L_8, L_9);
		__this->____mesh_1 = (Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mesh_1), (void*)(Mesh_t97B47EB5EDB26FF22122CCF4EDF64638A2D02FA3*)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibTessDotNet.Tess/ActiveRegion::Init(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveRegion_Init_m80C01AA8B6EF1AF955B6E6D038266AC164C7C7B8 (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void LibTessDotNet.Tess/ActiveRegion::Reset(LibTessDotNet.IPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveRegion_Reset_m48644BA3A77C7E987752B537061AB5CE6ADD78DD (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* __this, IPool_t4092464366D18B2083189C6B4FC416B4C47A4C90* ___pool0, const RuntimeMethod* method) 
{
	{
		__this->____eUp_0 = (Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eUp_0), (void*)(Edge_tD91CC8BC2325D21113FB0F3B3B5C78512D5ED966*)NULL);
		__this->____nodeUp_1 = (Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nodeUp_1), (void*)(Node_t226CBFBE2F93FF41C1668CA12F0ADDDAFE352D9C*)NULL);
		__this->____windingNumber_2 = 0;
		__this->____inside_3 = (bool)0;
		__this->____sentinel_4 = (bool)0;
		__this->____dirty_5 = (bool)0;
		__this->____fixUpperEdge_6 = (bool)0;
		return;
	}
}
// System.Void LibTessDotNet.Tess/ActiveRegion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActiveRegion__ctor_m30F0FDCDC7ACA4654AE05183BB52C250FFD904C2 (ActiveRegion_t513A2D9BEEAF4E481547248EA6B5EE86DA6CFA47* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibTessDotNet.ContourVertex::.ctor(LibTessDotNet.Vec3,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContourVertex__ctor_mD7A2D36CB7A7980370FD0F66BF3B59325C1EC9EB (ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___position0, int32_t ___data1, const RuntimeMethod* method) 
{
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_0 = ___position0;
		__this->___Position_0 = L_0;
		int32_t L_1 = ___data1;
		__this->___Data_1 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void ContourVertex__ctor_mD7A2D36CB7A7980370FD0F66BF3B59325C1EC9EB_AdjustorThunk (RuntimeObject* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___position0, int32_t ___data1, const RuntimeMethod* method)
{
	ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F*>(__this + _offset);
	ContourVertex__ctor_mD7A2D36CB7A7980370FD0F66BF3B59325C1EC9EB(_thisAdjusted, ___position0, ___data1, method);
}
// System.String LibTessDotNet.ContourVertex::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ContourVertex_ToString_m5C3892C4BC39F4D753E1B3B02B82242DD4FAD66A (ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5998705EF12506344D61B653EA1DAE85B97BC9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_0 = __this->___Position_0;
		Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 L_1 = L_0;
		RuntimeObject* L_2 = Box(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = __this->___Data_1;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralB5998705EF12506344D61B653EA1DAE85B97BC9C, L_2, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  String_t* ContourVertex_ToString_m5C3892C4BC39F4D753E1B3B02B82242DD4FAD66A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ContourVertex_t7039525BFF24D8B6501A2105EA311A90C86ABB5F*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ContourVertex_ToString_m5C3892C4BC39F4D753E1B3B02B82242DD4FAD66A(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
int32_t CombineCallback_Invoke_m7500D256E412AE15988DD1BB818FFBEEDCA11357_Multicast(CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___position0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___data1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	int32_t retVal = 0;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* currentDelegate = reinterpret_cast<CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300*>(delegatesToInvoke[i]);
		typedef int32_t (*FunctionPointerType) (RuntimeObject*, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___position0, ___data1, ___weights2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
int32_t CombineCallback_Invoke_m7500D256E412AE15988DD1BB818FFBEEDCA11357_Open(CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___position0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___data1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights2, const RuntimeMethod* method)
{
	typedef int32_t (*FunctionPointerType) (Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___position0, ___data1, ___weights2, method);
}
int32_t CombineCallback_Invoke_m7500D256E412AE15988DD1BB818FFBEEDCA11357_OpenStaticInvoker(CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___position0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___data1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker3< int32_t, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* >::Invoke(__this->___method_ptr_0, method, NULL, ___position0, ___data1, ___weights2);
}
int32_t CombineCallback_Invoke_m7500D256E412AE15988DD1BB818FFBEEDCA11357_ClosedStaticInvoker(CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___position0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___data1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights2, const RuntimeMethod* method)
{
	return InvokerFuncInvoker4< int32_t, RuntimeObject*, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___position0, ___data1, ___weights2);
}
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300 (CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___position0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___data1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6, int32_t*, float*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___data1' to native representation
	int32_t* ____data1_marshaled = NULL;
	if (___data1 != NULL)
	{
		____data1_marshaled = reinterpret_cast<int32_t*>((___data1)->GetAddressAtUnchecked(0));
	}

	// Marshaling of parameter '___weights2' to native representation
	float* ____weights2_marshaled = NULL;
	if (___weights2 != NULL)
	{
		____weights2_marshaled = reinterpret_cast<float*>((___weights2)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___position0, ____data1_marshaled, ____weights2_marshaled);

	return returnValue;
}
// System.Void LibTessDotNet.CombineCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineCallback__ctor_m4C08DD9F36BCA4F132C1AE0D7A6FAA7540EC1C47 (CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CombineCallback_Invoke_m7500D256E412AE15988DD1BB818FFBEEDCA11357_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&CombineCallback_Invoke_m7500D256E412AE15988DD1BB818FFBEEDCA11357_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&CombineCallback_Invoke_m7500D256E412AE15988DD1BB818FFBEEDCA11357_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&CombineCallback_Invoke_m7500D256E412AE15988DD1BB818FFBEEDCA11357_Multicast;
}
// System.Int32 LibTessDotNet.CombineCallback::Invoke(LibTessDotNet.Vec3,System.Int32[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CombineCallback_Invoke_m7500D256E412AE15988DD1BB818FFBEEDCA11357 (CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___position0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___data1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___position0, ___data1, ___weights2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult LibTessDotNet.CombineCallback::BeginInvoke(LibTessDotNet.Vec3,System.Int32[],System.Single[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CombineCallback_BeginInvoke_m51E94F5ED87B9F1A5B4A6A412484E2FF4EEF260D (CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___position0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___data1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6_il2cpp_TypeInfo_var, &___position0);
	__d_args[1] = ___data1;
	__d_args[2] = ___weights2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 LibTessDotNet.CombineCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CombineCallback_EndInvoke_m5794D12E761425F39AD95336C89C93869EDD928F (CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CombineCallback_Invoke_m7500D256E412AE15988DD1BB818FFBEEDCA11357_inline (CombineCallback_t90A4319D945E1850E213DE4F74C2BDAA4D58D300* __this, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6 ___position0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___data1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___weights2, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, Vec3_t7AA9166B9BB818308F0807E2023584038C0104F6, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___position0, ___data1, ___weights2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Node_get_Key_m7C2669092F4A0E59D5F38ADC148ADC476A3B15EE_gshared_inline (Node_t0AEE6C83E99DF1A68C017C4B2204AD846B874C62* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____key_0;
		return L_0;
	}
}
