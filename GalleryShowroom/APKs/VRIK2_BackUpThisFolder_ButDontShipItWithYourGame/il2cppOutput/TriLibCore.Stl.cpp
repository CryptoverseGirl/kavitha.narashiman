#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Action`1<TriLibCore.AssetLoaderContext>
struct Action_1_tD39AE6C0C913B7D513756AFCD7E9F0539538D226;
// System.Action`1<TriLibCore.IContextualizedError>
struct Action_1_t3B6442C6168F6F5364512C62A54645843CF93C30;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`2<TriLibCore.AssetLoaderContext,System.Single>
struct Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD;
// System.Action`4<System.String,System.String,System.TimeSpan,System.Int64>
struct Action_4_tA3594528C5AC13E7A27B50D19223DC951CD1E8B2;
// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.General.CompoundMaterialKey,TriLibCore.TextureLoadingContext>
struct ConcurrentDictionary_2_t94764B51655C4F04FDAE59E1A6327AFEE05EA292;
// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.General.CompoundTextureKey,TriLibCore.TextureLoadingContext>
struct ConcurrentDictionary_2_tE0357F18D1BC03B7BBB7A57FD3EED277081D529F;
// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.Interfaces.IMaterial,System.Collections.Generic.List`1<TriLibCore.MaterialRendererContext>>
struct ConcurrentDictionary_2_tA783589C825EB0CEA850D32094AAEFFBB3FD5D82;
// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.Interfaces.IMaterial,UnityEngine.Material>
struct ConcurrentDictionary_2_t3C2E41F7177FE1C1CDEBF4CACA510701BAF4AEF2;
// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.Interfaces.ITexture,TriLibCore.TextureDataContext>
struct ConcurrentDictionary_2_t721588B2E7B353F14DC625DB8CB5BE278DA8666C;
// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.Interfaces.ITexture,TriLibCore.TextureLoadingContext>
struct ConcurrentDictionary_2_tBB5915FD91B3F65141A8C3EC64A14F14EEA3905B;
// TriLibCore.General.ConcurrentDictionary`2<System.String,System.String>
struct ConcurrentDictionary_2_tCF44E0035FB42A2A1DF508A4CE0B233163C23F1E;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,TriLibCore.Interfaces.IModel>
struct Dictionary_2_tE704ACFE7C32537A046D8577F8299D1B52ED0C00;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.String>
struct Dictionary_2_t15A9DEF843D5DA84170CD8536BA0EBB039EB4ADF;
// System.Collections.Generic.Dictionary`2<TriLibCore.Interfaces.IModel,UnityEngine.GameObject>
struct Dictionary_2_tADE1FC3F6C786CACD6652C2C7275C3A0FD274A9C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,TriLibCore.Interfaces.IGeometry>
struct Dictionary_2_tAD7E9A914CC230BDC52143B8156BC6CCAB871D27;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Interfaces.IModel>
struct Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Stl.Reader.StlGeometryGroup>
struct Dictionary_2_t905E5DC1FAFCAD1369228C7CD235A3242C23933D;
// TriLibCore.Geometries.GeometryGroup`1<TriLibCore.Geometries.PositionNormalColorVertexData>
struct GeometryGroup_1_tAB214074D23BF71097A46E9AC61FF11A7B26E283;
// System.Collections.Generic.HashSet`1<UnityEngine.Texture>
struct HashSet_1_t70836788BCAF42568800A162B9F23937F5309AE8;
// System.Collections.Generic.IEnumerable`1<TriLibCore.Interfaces.IModel>
struct IEnumerable_1_t03C6D7F3A96DA6FAE16E0D510D08496F01435357;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<TriLibCore.Stl.Reader.StlGeometryGroup>
struct IEnumerable_1_t42DC80CB0718903060291A032C8CF28AD7274AB7;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<UnityEngine.BoneWeight>
struct IList_1_t9DEB3AEDB83DBD71897854C426EF2C1492AB3E18;
// System.Collections.Generic.IList`1<System.Char>
struct IList_1_tF23041AC58956CDAA98A1DA3D23002DBE4EBE278;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimation>
struct IList_1_t7A16CD7EF0938B36E4D20182185F284ECA5F93A2;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IBlendShapeKey>
struct IList_1_t04987423BB0AA5BB1F92BD1B4CDB26ABC6B94C0D;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ICamera>
struct IList_1_t13EA3E1B6894AF8023B793D65EA2E1ED596B6E82;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IGeometryGroup>
struct IList_1_t54EA2EAA8FF287B3E144BC90047C3E635336CB4C;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ILight>
struct IList_1_t95B0FF72887258CDC012A1B81E66B66AF3BBE38E;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IMaterial>
struct IList_1_t0662D113B996C51F1676FFC848F7B3448D818DB7;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel>
struct IList_1_tBAC2F9CBFB365F17F69446225AF2802DEF7B2956;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ITexture>
struct IList_1_t2988C79E2C0A953B91ACE72118B299F94ECFEB62;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1;
// System.Collections.Generic.IList`1<TriLibCore.Geometries.PositionNormalColorVertexData>
struct IList_1_t775A91EA6D62F11E5F3DF12265F8EE952F8DD1A7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,TriLibCore.Interfaces.IModel>
struct KeyCollection_tE72CD5B28675345F9BF175796FBC9BC6302E5275;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,TriLibCore.Stl.Reader.StlGeometryGroup>
struct KeyCollection_t08FE7082677D2B1728C4F88776582FEE44DDF43F;
// System.Collections.Generic.List`1<TriLibCore.Interfaces.IContextualizedAction>
struct List_1_t86716DC43840ACBAACF0E5014A0EC4019529570C;
// System.Collections.Generic.List`1<TriLibCore.Interfaces.IModel>
struct List_1_t62A281831D28273651D3773FC1796B24A9B2F9BC;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3;
// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_t84C257E858DDB8EA0B6269E08AAD9A2A2018A551;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TriLibCore.Interfaces.IModel>
struct ValueCollection_t52D0D70A98CDE4A09BB9B7D39C2159B31ECAE027;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TriLibCore.Stl.Reader.StlGeometryGroup>
struct ValueCollection_t06DE05054C61B3458F79E9A2C798D5812D926BA1;
// System.Collections.Generic.Dictionary`2/Entry<System.String,TriLibCore.Interfaces.IModel>[]
struct EntryU5BU5D_t97D3428B6A02CD680A2D45BF34F1488CADFC7A7E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,TriLibCore.Stl.Reader.StlGeometryGroup>[]
struct EntryU5BU5D_t3747B45FA1EB7035A99D6A0BD44A7CB5454141D1;
// System.Collections.Generic.IList`1<UnityEngine.BoneWeight1>[]
struct IList_1U5BU5D_tFC7D4F16EB776F3F265ED25F887D5888762AD3A7;
// TriLibCore.Mappers.AnimationClipMapper[]
struct AnimationClipMapperU5BU5D_t8E00A18562A07FD65A6E731D8BA6FF48D80BBFD8;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TriLibCore.Interfaces.IModel[]
struct IModelU5BU5D_tE19C9CE57A4C086398F86D3E8410C416B390CC76;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// TriLibCore.Mappers.LipSyncMapper[]
struct LipSyncMapperU5BU5D_t32748FDCB493E8E7550A88244C1CBBB79E54C18A;
// TriLibCore.Mappers.MaterialMapper[]
struct MaterialMapperU5BU5D_tBD3B26C68148AE48AD6F3B44795C7B7B3EE2257B;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TriLibCore.Stl.Reader.StlGeometryGroup[]
struct StlGeometryGroupU5BU5D_tDCFAA3EDF49B9F9FEAC62B179CB23851DCFE8EEB;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Rendering.VertexAttributeDescriptor[]
struct VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2;
// TriLibCore.AssetLoaderContext
struct AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C;
// TriLibCore.AssetLoaderOptions
struct AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6;
// UnityEngine.Avatar
struct Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// TriLibCore.Mappers.ExternalDataMapper
struct ExternalDataMapper_t809726D72207DAF57227F4A5D67B9D01394B760A;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// TriLibCore.Geometries.Geometry
struct Geometry_t9DA9B9652E3E92AD194E9898A2EB36E95FE2E147;
// TriLibCore.General.HumanDescription
struct HumanDescription_t0BD271EF43944EC6940A10C164E94F8C7E750481;
// TriLibCore.Mappers.HumanoidAvatarMapper
struct HumanoidAvatarMapper_t691E00A2CE4455F03562FF79A586CC717D38FB09;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// TriLibCore.Interfaces.IGeometryGroup
struct IGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262;
// TriLibCore.Interfaces.IModel
struct IModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB;
// TriLibCore.Interfaces.IRootModel
struct IRootModel_t83ED40397FD23448FC9A99336523CC7DE8A841BB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// TriLibCore.ReaderBase
struct ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449;
// TriLibCore.Mappers.RootBoneMapper
struct RootBoneMapper_t64AE3E33364A832EE1B74D8B65BC9AA7B448DDA2;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// TriLibCore.Stl.StlGeometry
struct StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF;
// TriLibCore.Stl.Reader.StlGeometryGroup
struct StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2;
// TriLibCore.Stl.StlModel
struct StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA;
// TriLibCore.Stl.StlProcessor
struct StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0;
// TriLibCore.Stl.Reader.StlReader
struct StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A;
// TriLibCore.Stl.StlRootModel
struct StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142;
// TriLibCore.Stl.StlStreamReader
struct StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// TriLibCore.Mappers.TextureMapper
struct TextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD;
// System.Type
struct Type_t;
// TriLibCore.Mappers.UserPropertiesMapper
struct UserPropertiesMapper_t8437A569EBEB9E02E364D9951BE31F9601C55714;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t905E5DC1FAFCAD1369228C7CD235A3242C23933D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t09990CB31AEE0CFE50A3176F9E78C65B17DB1E0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3063F5F4FAEA0002A9B169DA0D12D52AC6312C1A;
IL2CPP_EXTERN_C String_t* _stringLiteral4F4B57D5A155D08E686DEA8A1E7C1992F9C3675B;
IL2CPP_EXTERN_C String_t* _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044;
IL2CPP_EXTERN_C String_t* _stringLiteral795FA97334306AE47C0C9744A2642732E6FED22D;
IL2CPP_EXTERN_C String_t* _stringLiteral8E84C7CBF5EA8FD2E1EDA86178896A7CB3F34B81;
IL2CPP_EXTERN_C String_t* _stringLiteralB0F9A5767B5106090414D118D94D8CC4F1F188C6;
IL2CPP_EXTERN_C String_t* _stringLiteralC3007E4D4C9A026A571CD47422BE823D8A32DC2A;
IL2CPP_EXTERN_C String_t* _stringLiteralE21886A8FD3908720B58122F94229E548DD3A51F;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m53D84560875155F383C73DA9027DE4CC7AC985D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m60B6520F9A2424BE13CF3767F28B8612538651ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m299AC4E805B5350793D8EBF404877DD870FC4E34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5506E0DCECF49F29806DBE66FA8FBD4C28AACC38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5F5C68AF90E49C38EB7E07DDE14E85B7C3875390_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mF8582269BDE4C140C0B3D5C60BC07DC39DBA4C4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mA658433C78AF42331F861807619CE453560C8A96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m56D477CD7C6E64384E53F8B4C44C151CB9CADA48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mEAF28F0B7E0954C8CF16C2FC21585C9CA1F27C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisIModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB_m036D15DBE03F594018E148803BC38FF2FB06E146_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisStlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2_m5BE5B3204062AC07D37048B3E74576B2E2813ED6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeometryGroup_1_GetGeometry_TisStlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF_mBCB6275673F4265D1D1756F5DFFDE5A8F95F7BE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeometryGroup_1__ctor_m3FD15BB5ACAA8CEFBE862588F2A137241EEF61B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeometryGroup_1_get_Name_mD09F37F9ADCF0BCC1CAC2CC96CBC03CA98598563_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeometryGroup_1_get_VerticesData_m90A5BFB1A1F0F3ED0C7C889EDDEC7CD3C296DB3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeometryGroup_1_set_Name_m6256B957770AB633839BECA40F9FFF08A1D77C81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Geometry_AddVertex_TisPositionNormalColorVertexData_t3B0C1CB04DDC0CB5FFBDE86BA1CB5E9A3FB380F4_m65CC12757C5C59782DC19A80BFFB829E38ABD9C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StlProcessor_ParseASCII_m297D902C12F8D0B07F75397F81C1BA6A82B918ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StlStreamReader_ReadTokenAsFloat_m30C508ABFBF8FF2F47629BCFFB53C042F4B7F551_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StlStreamReader_ReadToken_m66B4713DAD087A09068A8EF495F3CA3FD9B16822_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ProcessingSteps_t0ED2265911192A39BA3686E081CB2D9F4DA68078_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IModelU5BU5D_tE19C9CE57A4C086398F86D3E8410C416B390CC76;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct StlGeometryGroupU5BU5D_tDCFAA3EDF49B9F9FEAC62B179CB23851DCFE8EEB;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t02941931EB822FCAB52150CDE43126D44ACC9F7D 
{
};

// System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Interfaces.IModel>
struct Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t97D3428B6A02CD680A2D45BF34F1488CADFC7A7E* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE72CD5B28675345F9BF175796FBC9BC6302E5275* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t52D0D70A98CDE4A09BB9B7D39C2159B31ECAE027* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Stl.Reader.StlGeometryGroup>
struct Dictionary_2_t905E5DC1FAFCAD1369228C7CD235A3242C23933D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t3747B45FA1EB7035A99D6A0BD44A7CB5454141D1* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t08FE7082677D2B1728C4F88776582FEE44DDF43F* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t06DE05054C61B3458F79E9A2C798D5812D926BA1* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TriLibCore.Interfaces.IModel>
struct ValueCollection_t52D0D70A98CDE4A09BB9B7D39C2159B31ECAE027  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,TriLibCore.Stl.Reader.StlGeometryGroup>
struct ValueCollection_t06DE05054C61B3458F79E9A2C798D5812D926BA1  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t905E5DC1FAFCAD1369228C7CD235A3242C23933D* ____dictionary_0;
};
struct Il2CppArrayBounds;

// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_60;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_61;
};

// TriLibCore.Geometries.Geometry
struct Geometry_t9DA9B9652E3E92AD194E9898A2EB36E95FE2E147  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<System.Int32> TriLibCore.Geometries.Geometry::<OriginalVertexIndices>k__BackingField
	RuntimeObject* ___U3COriginalVertexIndicesU3Ek__BackingField_0;
	// System.Collections.Generic.IList`1<System.Int32> TriLibCore.Geometries.Geometry::<VertexDataIndices>k__BackingField
	RuntimeObject* ___U3CVertexDataIndicesU3Ek__BackingField_1;
	// TriLibCore.Interfaces.IGeometryGroup TriLibCore.Geometries.Geometry::<GeometryGroup>k__BackingField
	RuntimeObject* ___U3CGeometryGroupU3Ek__BackingField_2;
	// System.Int32 TriLibCore.Geometries.Geometry::<MaterialIndex>k__BackingField
	int32_t ___U3CMaterialIndexU3Ek__BackingField_3;
	// System.Boolean TriLibCore.Geometries.Geometry::<IsQuad>k__BackingField
	bool ___U3CIsQuadU3Ek__BackingField_4;
	// System.Int32 TriLibCore.Geometries.Geometry::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_5;
	// System.Int32 TriLibCore.Geometries.Geometry::<OriginalIndex>k__BackingField
	int32_t ___U3COriginalIndexU3Ek__BackingField_6;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// TriLibCore.ReaderBase
struct ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449  : public RuntimeObject
{
	// System.String[] TriLibCore.ReaderBase::_loadingStepEnumNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____loadingStepEnumNames_2;
	// TriLibCore.AssetLoaderContext TriLibCore.ReaderBase::<AssetLoaderContext>k__BackingField
	AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___U3CAssetLoaderContextU3Ek__BackingField_3;
	// System.String TriLibCore.ReaderBase::_filename
	String_t* ____filename_4;
	// System.Action`2<TriLibCore.AssetLoaderContext,System.Single> TriLibCore.ReaderBase::_onProgress
	Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* ____onProgress_5;
	// System.Int32 TriLibCore.ReaderBase::_nameCounter
	int32_t ____nameCounter_6;
	// System.Int32 TriLibCore.ReaderBase::_materialCounter
	int32_t ____materialCounter_7;
	// System.Int32 TriLibCore.ReaderBase::_textureCounter
	int32_t ____textureCounter_8;
	// System.Int32 TriLibCore.ReaderBase::_geometryGroupCounter
	int32_t ____geometryGroupCounter_9;
	// System.Int32 TriLibCore.ReaderBase::_animationCounter
	int32_t ____animationCounter_10;
	// System.Collections.Generic.List`1<TriLibCore.Interfaces.IModel> TriLibCore.ReaderBase::_modelsWithTheSameName
	List_1_t62A281831D28273651D3773FC1796B24A9B2F9BC* ____modelsWithTheSameName_11;
};

struct ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449_StaticFields
{
	// System.Action`4<System.String,System.String,System.TimeSpan,System.Int64> TriLibCore.ReaderBase::ProfileStepCallback
	Action_4_tA3594528C5AC13E7A27B50D19223DC951CD1E8B2* ___ProfileStepCallback_0;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TriLibCore.Stl.StlGeometry
struct StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF  : public Geometry_t9DA9B9652E3E92AD194E9898A2EB36E95FE2E147
{
};

// TriLibCore.Stl.Reader.StlReader
struct StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A  : public ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449
{
};

struct StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_StaticFields
{
	// System.Boolean TriLibCore.Stl.Reader.StlReader::FixInfacingNormals
	bool ___FixInfacingNormals_12;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// TriLibCore.Geometries.GeometryGroup`1<TriLibCore.Geometries.PositionNormalColorVertexData>
struct GeometryGroup_1_tAB214074D23BF71097A46E9AC61FF11A7B26E283  : public RuntimeObject
{
	// UnityEngine.Mesh TriLibCore.Geometries.GeometryGroup`1::_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ____mesh_1;
	// System.Boolean TriLibCore.Geometries.GeometryGroup`1::_hasNormals
	bool ____hasNormals_2;
	// System.Boolean TriLibCore.Geometries.GeometryGroup`1::_hasTangents
	bool ____hasTangents_3;
	// System.Boolean TriLibCore.Geometries.GeometryGroup`1::_hasColors
	bool ____hasColors_4;
	// System.Boolean TriLibCore.Geometries.GeometryGroup`1::_hasUV1
	bool ____hasUV1_5;
	// System.Boolean TriLibCore.Geometries.GeometryGroup`1::_hasUV2
	bool ____hasUV2_6;
	// System.Boolean TriLibCore.Geometries.GeometryGroup`1::_hasUV3
	bool ____hasUV3_7;
	// System.Boolean TriLibCore.Geometries.GeometryGroup`1::_hasUV4
	bool ____hasUV4_8;
	// System.Boolean TriLibCore.Geometries.GeometryGroup`1::_hasBones
	bool ____hasBones_9;
	// System.Boolean TriLibCore.Geometries.GeometryGroup`1::_hasInvalidNormals
	bool ____hasInvalidNormals_10;
	// System.String TriLibCore.Geometries.GeometryGroup`1::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_11;
	// System.Boolean TriLibCore.Geometries.GeometryGroup`1::<Used>k__BackingField
	bool ___U3CUsedU3Ek__BackingField_12;
	// System.Collections.Generic.IList`1<UnityEngine.BoneWeight1>[] TriLibCore.Geometries.GeometryGroup`1::_rawBoneWeights
	IList_1U5BU5D_tFC7D4F16EB776F3F265ED25F887D5888762AD3A7* ____rawBoneWeights_13;
	// System.Collections.Generic.IList`1<UnityEngine.BoneWeight> TriLibCore.Geometries.GeometryGroup`1::<ProcessedBoneWeights>k__BackingField
	RuntimeObject* ___U3CProcessedBoneWeightsU3Ek__BackingField_14;
	// System.Collections.Generic.IList`1<TVertexData> TriLibCore.Geometries.GeometryGroup`1::<VerticesData>k__BackingField
	RuntimeObject* ___U3CVerticesDataU3Ek__BackingField_15;
	// System.Collections.Generic.Dictionary`2<System.Int32,TriLibCore.Interfaces.IGeometry> TriLibCore.Geometries.GeometryGroup`1::<GeometriesData>k__BackingField
	Dictionary_2_tAD7E9A914CC230BDC52143B8156BC6CCAB871D27* ___U3CGeometriesDataU3Ek__BackingField_16;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IBlendShapeKey> TriLibCore.Geometries.GeometryGroup`1::<BlendShapeKeys>k__BackingField
	RuntimeObject* ___U3CBlendShapeKeysU3Ek__BackingField_17;
	// System.Int32 TriLibCore.Geometries.GeometryGroup`1::<VerticesCount>k__BackingField
	int32_t ___U3CVerticesCountU3Ek__BackingField_18;
	// System.Int32 TriLibCore.Geometries.GeometryGroup`1::<VerticesCapacity>k__BackingField
	int32_t ___U3CVerticesCapacityU3Ek__BackingField_19;
	// System.Int32 TriLibCore.Geometries.GeometryGroup`1::<GeometriesCapacity>k__BackingField
	int32_t ___U3CGeometriesCapacityU3Ek__BackingField_20;
	// System.Int32 TriLibCore.Geometries.GeometryGroup`1::<BonesCapacity>k__BackingField
	int32_t ___U3CBonesCapacityU3Ek__BackingField_21;
	// UnityEngine.Vector3 TriLibCore.Geometries.GeometryGroup`1::<Pivot>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPivotU3Ek__BackingField_22;
};

// TriLibCore.AssetLoaderContext
struct AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C  : public RuntimeObject
{
	// TriLibCore.AssetLoaderOptions TriLibCore.AssetLoaderContext::Options
	AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* ___Options_0;
	// TriLibCore.ReaderBase TriLibCore.AssetLoaderContext::Reader
	ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* ___Reader_1;
	// System.String TriLibCore.AssetLoaderContext::Filename
	String_t* ___Filename_2;
	// System.String TriLibCore.AssetLoaderContext::FileExtension
	String_t* ___FileExtension_3;
	// System.IO.Stream TriLibCore.AssetLoaderContext::Stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Stream_4;
	// System.String TriLibCore.AssetLoaderContext::BasePath
	String_t* ___BasePath_5;
	// UnityEngine.GameObject TriLibCore.AssetLoaderContext::RootGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___RootGameObject_6;
	// TriLibCore.Interfaces.IRootModel TriLibCore.AssetLoaderContext::RootModel
	RuntimeObject* ___RootModel_7;
	// System.Collections.Generic.Dictionary`2<TriLibCore.Interfaces.IModel,UnityEngine.GameObject> TriLibCore.AssetLoaderContext::GameObjects
	Dictionary_2_tADE1FC3F6C786CACD6652C2C7275C3A0FD274A9C* ___GameObjects_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,TriLibCore.Interfaces.IModel> TriLibCore.AssetLoaderContext::Models
	Dictionary_2_tE704ACFE7C32537A046D8577F8299D1B52ED0C00* ___Models_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.String> TriLibCore.AssetLoaderContext::GameObjectPaths
	Dictionary_2_t15A9DEF843D5DA84170CD8536BA0EBB039EB4ADF* ___GameObjectPaths_10;
	// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.Interfaces.IMaterial,System.Collections.Generic.List`1<TriLibCore.MaterialRendererContext>> TriLibCore.AssetLoaderContext::MaterialRenderers
	ConcurrentDictionary_2_tA783589C825EB0CEA850D32094AAEFFBB3FD5D82* ___MaterialRenderers_11;
	// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.Interfaces.IMaterial,UnityEngine.Material> TriLibCore.AssetLoaderContext::LoadedMaterials
	ConcurrentDictionary_2_t3C2E41F7177FE1C1CDEBF4CACA510701BAF4AEF2* ___LoadedMaterials_12;
	// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.Interfaces.IMaterial,UnityEngine.Material> TriLibCore.AssetLoaderContext::GeneratedMaterials
	ConcurrentDictionary_2_t3C2E41F7177FE1C1CDEBF4CACA510701BAF4AEF2* ___GeneratedMaterials_13;
	// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.Interfaces.ITexture,TriLibCore.TextureLoadingContext> TriLibCore.AssetLoaderContext::LoadedTextures
	ConcurrentDictionary_2_tBB5915FD91B3F65141A8C3EC64A14F14EEA3905B* ___LoadedTextures_14;
	// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.Interfaces.ITexture,TriLibCore.TextureDataContext> TriLibCore.AssetLoaderContext::CreatedTextures
	ConcurrentDictionary_2_t721588B2E7B353F14DC625DB8CB5BE278DA8666C* ___CreatedTextures_15;
	// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.General.CompoundTextureKey,TriLibCore.TextureLoadingContext> TriLibCore.AssetLoaderContext::TexturesWithContext
	ConcurrentDictionary_2_tE0357F18D1BC03B7BBB7A57FD3EED277081D529F* ___TexturesWithContext_16;
	// TriLibCore.General.ConcurrentDictionary`2<TriLibCore.General.CompoundMaterialKey,TriLibCore.TextureLoadingContext> TriLibCore.AssetLoaderContext::MaterialTextures
	ConcurrentDictionary_2_t94764B51655C4F04FDAE59E1A6327AFEE05EA292* ___MaterialTextures_17;
	// TriLibCore.General.ConcurrentDictionary`2<System.String,System.String> TriLibCore.AssetLoaderContext::LoadedExternalData
	ConcurrentDictionary_2_tCF44E0035FB42A2A1DF508A4CE0B233163C23F1E* ___LoadedExternalData_18;
	// System.Collections.Generic.HashSet`1<UnityEngine.Texture> TriLibCore.AssetLoaderContext::UsedTextures
	HashSet_1_t70836788BCAF42568800A162B9F23937F5309AE8* ___UsedTextures_19;
	// System.Collections.Generic.List`1<UnityEngine.Object> TriLibCore.AssetLoaderContext::Allocations
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___Allocations_20;
	// System.Boolean TriLibCore.AssetLoaderContext::Async
	bool ___Async_21;
	// System.Action`1<TriLibCore.AssetLoaderContext> TriLibCore.AssetLoaderContext::OnLoad
	Action_1_tD39AE6C0C913B7D513756AFCD7E9F0539538D226* ___OnLoad_22;
	// System.Action`1<TriLibCore.AssetLoaderContext> TriLibCore.AssetLoaderContext::OnMaterialsLoad
	Action_1_tD39AE6C0C913B7D513756AFCD7E9F0539538D226* ___OnMaterialsLoad_23;
	// System.Action`2<TriLibCore.AssetLoaderContext,System.Single> TriLibCore.AssetLoaderContext::OnProgress
	Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* ___OnProgress_24;
	// System.Action`1<TriLibCore.IContextualizedError> TriLibCore.AssetLoaderContext::OnError
	Action_1_t3B6442C6168F6F5364512C62A54645843CF93C30* ___OnError_25;
	// System.Action`1<TriLibCore.IContextualizedError> TriLibCore.AssetLoaderContext::HandleError
	Action_1_t3B6442C6168F6F5364512C62A54645843CF93C30* ___HandleError_26;
	// System.Object TriLibCore.AssetLoaderContext::CustomData
	RuntimeObject* ___CustomData_27;
	// System.Collections.Generic.List`1<System.Threading.Tasks.Task> TriLibCore.AssetLoaderContext::Tasks
	List_1_t84C257E858DDB8EA0B6269E08AAD9A2A2018A551* ___Tasks_28;
	// System.Threading.Tasks.Task TriLibCore.AssetLoaderContext::Task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___Task_29;
	// UnityEngine.GameObject TriLibCore.AssetLoaderContext::WrapperGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___WrapperGameObject_30;
	// System.Threading.CancellationToken TriLibCore.AssetLoaderContext::CancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___CancellationToken_31;
	// System.Single TriLibCore.AssetLoaderContext::LoadingProgress
	float ___LoadingProgress_32;
	// System.Threading.CancellationTokenSource TriLibCore.AssetLoaderContext::CancellationTokenSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___CancellationTokenSource_33;
	// System.Action`1<TriLibCore.AssetLoaderContext> TriLibCore.AssetLoaderContext::OnPreLoad
	Action_1_tD39AE6C0C913B7D513756AFCD7E9F0539538D226* ___OnPreLoad_34;
	// System.Int32 TriLibCore.AssetLoaderContext::LoadingStep
	int32_t ___LoadingStep_35;
	// System.Int32 TriLibCore.AssetLoaderContext::PreviousLoadingStep
	int32_t ___PreviousLoadingStep_36;
	// System.Collections.Generic.List`1<TriLibCore.Interfaces.IContextualizedAction> TriLibCore.AssetLoaderContext::_actions
	List_1_t86716DC43840ACBAACF0E5014A0EC4019529570C* ____actions_37;
	// System.Boolean TriLibCore.AssetLoaderContext::<Completed>k__BackingField
	bool ___U3CCompletedU3Ek__BackingField_38;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// TriLibCore.Geometries.PositionNormalColorVertexData
struct PositionNormalColorVertexData_t3B0C1CB04DDC0CB5FFBDE86BA1CB5E9A3FB380F4 
{
	// UnityEngine.Vector3 TriLibCore.Geometries.PositionNormalColorVertexData::<Position>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPositionU3Ek__BackingField_1;
	// UnityEngine.Vector3 TriLibCore.Geometries.PositionNormalColorVertexData::<Normal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CNormalU3Ek__BackingField_2;
	// UnityEngine.Vector4 TriLibCore.Geometries.PositionNormalColorVertexData::<Tangent>k__BackingField
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___U3CTangentU3Ek__BackingField_3;
	// UnityEngine.Color TriLibCore.Geometries.PositionNormalColorVertexData::<Color>k__BackingField
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CColorU3Ek__BackingField_4;
	// System.Int32 TriLibCore.Geometries.PositionNormalColorVertexData::<GroupIndex>k__BackingField
	int32_t ___U3CGroupIndexU3Ek__BackingField_5;
};

struct PositionNormalColorVertexData_t3B0C1CB04DDC0CB5FFBDE86BA1CB5E9A3FB380F4_StaticFields
{
	// UnityEngine.Rendering.VertexAttributeDescriptor[] TriLibCore.Geometries.PositionNormalColorVertexData::Layout
	VertexAttributeDescriptorU5BU5D_t5D10E60612F12777F59B7E33939F9075DB0E02B2* ___Layout_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// TriLibCore.Stl.StlModel
struct StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA  : public RuntimeObject
{
	// System.String TriLibCore.Stl.StlModel::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Boolean TriLibCore.Stl.StlModel::<Used>k__BackingField
	bool ___U3CUsedU3Ek__BackingField_1;
	// UnityEngine.Vector3 TriLibCore.Stl.StlModel::<LocalPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CLocalPositionU3Ek__BackingField_2;
	// UnityEngine.Quaternion TriLibCore.Stl.StlModel::<LocalRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CLocalRotationU3Ek__BackingField_3;
	// UnityEngine.Vector3 TriLibCore.Stl.StlModel::<LocalScale>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CLocalScaleU3Ek__BackingField_4;
	// System.Boolean TriLibCore.Stl.StlModel::<Visibility>k__BackingField
	bool ___U3CVisibilityU3Ek__BackingField_5;
	// TriLibCore.Interfaces.IModel TriLibCore.Stl.StlModel::<Parent>k__BackingField
	RuntimeObject* ___U3CParentU3Ek__BackingField_6;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Stl.StlModel::<Children>k__BackingField
	RuntimeObject* ___U3CChildrenU3Ek__BackingField_7;
	// System.Boolean TriLibCore.Stl.StlModel::<IsBone>k__BackingField
	bool ___U3CIsBoneU3Ek__BackingField_8;
	// TriLibCore.Interfaces.IGeometryGroup TriLibCore.Stl.StlModel::<GeometryGroup>k__BackingField
	RuntimeObject* ___U3CGeometryGroupU3Ek__BackingField_9;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Stl.StlModel::<Bones>k__BackingField
	RuntimeObject* ___U3CBonesU3Ek__BackingField_10;
	// UnityEngine.Matrix4x4[] TriLibCore.Stl.StlModel::<BindPoses>k__BackingField
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___U3CBindPosesU3Ek__BackingField_11;
	// System.Collections.Generic.IList`1<System.Int32> TriLibCore.Stl.StlModel::<MaterialIndices>k__BackingField
	RuntimeObject* ___U3CMaterialIndicesU3Ek__BackingField_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> TriLibCore.Stl.StlModel::<UserProperties>k__BackingField
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___U3CUserPropertiesU3Ek__BackingField_13;
};

// TriLibCore.Stl.StlProcessor
struct StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Stl.Reader.StlGeometryGroup> TriLibCore.Stl.StlProcessor::_geometryGroups
	Dictionary_2_t905E5DC1FAFCAD1369228C7CD235A3242C23933D* ____geometryGroups_3;
	// System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Interfaces.IModel> TriLibCore.Stl.StlProcessor::_models
	Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* ____models_4;
	// TriLibCore.Stl.Reader.StlReader TriLibCore.Stl.StlProcessor::_reader
	StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* ____reader_5;
	// System.String TriLibCore.Stl.StlProcessor::_groupName
	String_t* ____groupName_6;
	// System.String TriLibCore.Stl.StlProcessor::_lastGeometryGroupName
	String_t* ____lastGeometryGroupName_7;
	// System.Int32 TriLibCore.Stl.StlProcessor::_lastLoopNumber
	int32_t ____lastLoopNumber_8;
	// TriLibCore.Stl.Reader.StlGeometryGroup TriLibCore.Stl.StlProcessor::_activeGeometryGroup
	StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* ____activeGeometryGroup_9;
	// TriLibCore.Stl.StlGeometry TriLibCore.Stl.StlProcessor::_activeGeometry
	StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF* ____activeGeometry_10;
	// System.Int32 TriLibCore.Stl.StlProcessor::_loopNumber
	int32_t ____loopNumber_11;
	// UnityEngine.Vector3 TriLibCore.Stl.StlProcessor::_facetNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____facetNormal_12;
	// UnityEngine.Color TriLibCore.Stl.StlProcessor::_partColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____partColor_21;
	// UnityEngine.Color TriLibCore.Stl.StlProcessor::_facetColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____facetColor_22;
};

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_3;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_4;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_5;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_6;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_7;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_8;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_9;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_10;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_11;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_12;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_13;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_14;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_15;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_17;
};

struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// TriLibCore.Stl.Reader.StlGeometryGroup
struct StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2  : public GeometryGroup_1_tAB214074D23BF71097A46E9AC61FF11A7B26E283
{
};

// TriLibCore.Stl.StlRootModel
struct StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142  : public StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA
{
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Stl.StlRootModel::<AllModels>k__BackingField
	RuntimeObject* ___U3CAllModelsU3Ek__BackingField_14;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IGeometryGroup> TriLibCore.Stl.StlRootModel::<AllGeometryGroups>k__BackingField
	RuntimeObject* ___U3CAllGeometryGroupsU3Ek__BackingField_15;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimation> TriLibCore.Stl.StlRootModel::<AllAnimations>k__BackingField
	RuntimeObject* ___U3CAllAnimationsU3Ek__BackingField_16;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IMaterial> TriLibCore.Stl.StlRootModel::<AllMaterials>k__BackingField
	RuntimeObject* ___U3CAllMaterialsU3Ek__BackingField_17;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ITexture> TriLibCore.Stl.StlRootModel::<AllTextures>k__BackingField
	RuntimeObject* ___U3CAllTexturesU3Ek__BackingField_18;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ICamera> TriLibCore.Stl.StlRootModel::<AllCameras>k__BackingField
	RuntimeObject* ___U3CAllCamerasU3Ek__BackingField_19;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ILight> TriLibCore.Stl.StlRootModel::<AllLights>k__BackingField
	RuntimeObject* ___U3CAllLightsU3Ek__BackingField_20;
};

// TriLibCore.Stl.StlStreamReader
struct StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5  : public StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B
{
	// System.Int32 TriLibCore.Stl.StlStreamReader::_endOfLinePointer
	int32_t ____endOfLinePointer_22;
	// System.Char[] TriLibCore.Stl.StlStreamReader::_charStream
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charStream_23;
	// System.Int32 TriLibCore.Stl.StlStreamReader::_charPosition
	int32_t ____charPosition_24;
	// System.Int32 TriLibCore.Stl.StlStreamReader::<Line>k__BackingField
	int32_t ___U3CLineU3Ek__BackingField_25;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`2<TriLibCore.AssetLoaderContext,System.Single>
struct Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD  : public MulticastDelegate_t
{
};

// TriLibCore.AssetLoaderOptions
struct AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean TriLibCore.AssetLoaderOptions::UseFileScale
	bool ___UseFileScale_4;
	// System.Single TriLibCore.AssetLoaderOptions::ScaleFactor
	float ___ScaleFactor_5;
	// System.Boolean TriLibCore.AssetLoaderOptions::SortHierarchyByName
	bool ___SortHierarchyByName_6;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportVisibility
	bool ___ImportVisibility_7;
	// System.Boolean TriLibCore.AssetLoaderOptions::Static
	bool ___Static_8;
	// System.Boolean TriLibCore.AssetLoaderOptions::AddAssetUnloader
	bool ___AddAssetUnloader_9;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportMeshes
	bool ___ImportMeshes_10;
	// System.Boolean TriLibCore.AssetLoaderOptions::LimitBoneWeights
	bool ___LimitBoneWeights_11;
	// System.Boolean TriLibCore.AssetLoaderOptions::ReadEnabled
	bool ___ReadEnabled_12;
	// System.Boolean TriLibCore.AssetLoaderOptions::ReadAndWriteEnabled
	bool ___ReadAndWriteEnabled_13;
	// System.Boolean TriLibCore.AssetLoaderOptions::OptimizeMeshes
	bool ___OptimizeMeshes_14;
	// System.Boolean TriLibCore.AssetLoaderOptions::GenerateColliders
	bool ___GenerateColliders_15;
	// System.Boolean TriLibCore.AssetLoaderOptions::ConvexColliders
	bool ___ConvexColliders_16;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportBlendShapes
	bool ___ImportBlendShapes_17;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportColors
	bool ___ImportColors_18;
	// UnityEngine.Rendering.IndexFormat TriLibCore.AssetLoaderOptions::IndexFormat
	int32_t ___IndexFormat_19;
	// System.Single TriLibCore.AssetLoaderOptions::LODScreenRelativeTransitionHeightBase
	float ___LODScreenRelativeTransitionHeightBase_20;
	// System.Boolean TriLibCore.AssetLoaderOptions::KeepQuads
	bool ___KeepQuads_21;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportNormals
	bool ___ImportNormals_22;
	// System.Single TriLibCore.AssetLoaderOptions::SmoothingAngle
	float ___SmoothingAngle_23;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportBlendShapeNormals
	bool ___ImportBlendShapeNormals_24;
	// System.Boolean TriLibCore.AssetLoaderOptions::CalculateBlendShapeNormals
	bool ___CalculateBlendShapeNormals_25;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportTangents
	bool ___ImportTangents_26;
	// System.Boolean TriLibCore.AssetLoaderOptions::SwapUVs
	bool ___SwapUVs_27;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportMaterials
	bool ___ImportMaterials_28;
	// TriLibCore.Mappers.MaterialMapper[] TriLibCore.AssetLoaderOptions::MaterialMappers
	MaterialMapperU5BU5D_tBD3B26C68148AE48AD6F3B44795C7B7B3EE2257B* ___MaterialMappers_29;
	// System.Boolean TriLibCore.AssetLoaderOptions::AddSecondAlphaMaterial
	bool ___AddSecondAlphaMaterial_30;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportTextures
	bool ___ImportTextures_31;
	// System.Boolean TriLibCore.AssetLoaderOptions::Enforce16BitsTextures
	bool ___Enforce16BitsTextures_32;
	// System.Boolean TriLibCore.AssetLoaderOptions::ScanForAlphaPixels
	bool ___ScanForAlphaPixels_33;
	// System.Boolean TriLibCore.AssetLoaderOptions::UseAlphaMaterials
	bool ___UseAlphaMaterials_34;
	// TriLibCore.General.AlphaMaterialMode TriLibCore.AssetLoaderOptions::AlphaMaterialMode
	int32_t ___AlphaMaterialMode_35;
	// System.Boolean TriLibCore.AssetLoaderOptions::DoubleSidedMaterials
	bool ___DoubleSidedMaterials_36;
	// TriLibCore.Mappers.TextureMapper TriLibCore.AssetLoaderOptions::TextureMapper
	TextureMapper_tCDB3B0D28AFDBA2BA4A640F75A7227C1B2D10ADD* ___TextureMapper_37;
	// TriLibCore.General.TextureCompressionQuality TriLibCore.AssetLoaderOptions::TextureCompressionQuality
	int32_t ___TextureCompressionQuality_38;
	// System.Boolean TriLibCore.AssetLoaderOptions::GenerateMipmaps
	bool ___GenerateMipmaps_39;
	// System.Boolean TriLibCore.AssetLoaderOptions::FixNormalMaps
	bool ___FixNormalMaps_40;
	// TriLibCore.General.AnimationType TriLibCore.AssetLoaderOptions::AnimationType
	int32_t ___AnimationType_41;
	// TriLibCore.General.AvatarDefinitionType TriLibCore.AssetLoaderOptions::AvatarDefinition
	int32_t ___AvatarDefinition_42;
	// UnityEngine.Avatar TriLibCore.AssetLoaderOptions::Avatar
	Avatar_t7861E57EEE2CF8CC61BD63C09737BA22F7ABCA0F* ___Avatar_43;
	// TriLibCore.General.HumanDescription TriLibCore.AssetLoaderOptions::HumanDescription
	HumanDescription_t0BD271EF43944EC6940A10C164E94F8C7E750481* ___HumanDescription_44;
	// TriLibCore.Mappers.RootBoneMapper TriLibCore.AssetLoaderOptions::RootBoneMapper
	RootBoneMapper_t64AE3E33364A832EE1B74D8B65BC9AA7B448DDA2* ___RootBoneMapper_45;
	// TriLibCore.Mappers.HumanoidAvatarMapper TriLibCore.AssetLoaderOptions::HumanoidAvatarMapper
	HumanoidAvatarMapper_t691E00A2CE4455F03562FF79A586CC717D38FB09* ___HumanoidAvatarMapper_46;
	// TriLibCore.Mappers.LipSyncMapper[] TriLibCore.AssetLoaderOptions::LipSyncMappers
	LipSyncMapperU5BU5D_t32748FDCB493E8E7550A88244C1CBBB79E54C18A* ___LipSyncMappers_47;
	// System.Boolean TriLibCore.AssetLoaderOptions::SampleBindPose
	bool ___SampleBindPose_48;
	// System.Boolean TriLibCore.AssetLoaderOptions::EnforceTPose
	bool ___EnforceTPose_49;
	// System.Boolean TriLibCore.AssetLoaderOptions::ResampleAnimations
	bool ___ResampleAnimations_50;
	// System.Boolean TriLibCore.AssetLoaderOptions::EnforceAnimatorWithLegacyAnimations
	bool ___EnforceAnimatorWithLegacyAnimations_51;
	// System.Boolean TriLibCore.AssetLoaderOptions::AutomaticallyPlayLegacyAnimations
	bool ___AutomaticallyPlayLegacyAnimations_52;
	// System.Single TriLibCore.AssetLoaderOptions::ResampleFrequency
	float ___ResampleFrequency_53;
	// UnityEngine.WrapMode TriLibCore.AssetLoaderOptions::AnimationWrapMode
	int32_t ___AnimationWrapMode_54;
	// TriLibCore.Mappers.AnimationClipMapper[] TriLibCore.AssetLoaderOptions::AnimationClipMappers
	AnimationClipMapperU5BU5D_t8E00A18562A07FD65A6E731D8BA6FF48D80BBFD8* ___AnimationClipMappers_55;
	// TriLibCore.Mappers.ExternalDataMapper TriLibCore.AssetLoaderOptions::ExternalDataMapper
	ExternalDataMapper_t809726D72207DAF57227F4A5D67B9D01394B760A* ___ExternalDataMapper_56;
	// System.Boolean TriLibCore.AssetLoaderOptions::ShowLoadingWarnings
	bool ___ShowLoadingWarnings_57;
	// System.Boolean TriLibCore.AssetLoaderOptions::CloseStreamAutomatically
	bool ___CloseStreamAutomatically_58;
	// System.Int32 TriLibCore.AssetLoaderOptions::Timeout
	int32_t ___Timeout_59;
	// System.Boolean TriLibCore.AssetLoaderOptions::DestroyOnError
	bool ___DestroyOnError_60;
	// System.Boolean TriLibCore.AssetLoaderOptions::EnsureQuaternionContinuity
	bool ___EnsureQuaternionContinuity_61;
	// System.Boolean TriLibCore.AssetLoaderOptions::UseMaterialKeywords
	bool ___UseMaterialKeywords_62;
	// System.Boolean TriLibCore.AssetLoaderOptions::ForceGCCollectionWhileLoading
	bool ___ForceGCCollectionWhileLoading_63;
	// System.Boolean TriLibCore.AssetLoaderOptions::MergeVertices
	bool ___MergeVertices_64;
	// System.Boolean TriLibCore.AssetLoaderOptions::MarkTexturesNoLongerReadable
	bool ___MarkTexturesNoLongerReadable_65;
	// System.Boolean TriLibCore.AssetLoaderOptions::UseUnityNativeNormalCalculator
	bool ___UseUnityNativeNormalCalculator_66;
	// System.Single TriLibCore.AssetLoaderOptions::GCHelperCollectionInterval
	float ___GCHelperCollectionInterval_67;
	// System.Boolean TriLibCore.AssetLoaderOptions::LoadTexturesAsSRGB
	bool ___LoadTexturesAsSRGB_68;
	// TriLibCore.Mappers.UserPropertiesMapper TriLibCore.AssetLoaderOptions::UserPropertiesMapper
	UserPropertiesMapper_t8437A569EBEB9E02E364D9951BE31F9601C55714* ___UserPropertiesMapper_69;
	// System.Boolean TriLibCore.AssetLoaderOptions::ApplyTexturesOffsetAndScaling
	bool ___ApplyTexturesOffsetAndScaling_70;
	// System.Boolean TriLibCore.AssetLoaderOptions::UseAutodeskInteractiveMaterials
	bool ___UseAutodeskInteractiveMaterials_71;
	// System.Boolean TriLibCore.AssetLoaderOptions::DiscardUnusedTextures
	bool ___DiscardUnusedTextures_72;
	// TriLibCore.General.PivotPosition TriLibCore.AssetLoaderOptions::PivotPosition
	int32_t ___PivotPosition_73;
	// System.Boolean TriLibCore.AssetLoaderOptions::ForcePowerOfTwoTextures
	bool ___ForcePowerOfTwoTextures_74;
	// System.Int32 TriLibCore.AssetLoaderOptions::MaxTexturesResolution
	int32_t ___MaxTexturesResolution_75;
	// System.Boolean TriLibCore.AssetLoaderOptions::EnableProfiler
	bool ___EnableProfiler_76;
	// System.Boolean TriLibCore.AssetLoaderOptions::UseUnityNativeTextureLoader
	bool ___UseUnityNativeTextureLoader_77;
	// System.Boolean TriLibCore.AssetLoaderOptions::LoadMaterialsProgressively
	bool ___LoadMaterialsProgressively_78;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportCameras
	bool ___ImportCameras_79;
	// System.Boolean TriLibCore.AssetLoaderOptions::ImportLights
	bool ___ImportLights_80;
	// System.Boolean TriLibCore.AssetLoaderOptions::DisableObjectsRenaming
	bool ___DisableObjectsRenaming_81;
	// System.Boolean TriLibCore.AssetLoaderOptions::MergeSingleChild
	bool ___MergeSingleChild_82;
	// System.Boolean TriLibCore.AssetLoaderOptions::SetUnusedTexturePropertiesToNull
	bool ___SetUnusedTexturePropertiesToNull_83;
	// System.Collections.Generic.List`1<UnityEngine.Object> TriLibCore.AssetLoaderOptions::FixedAllocations
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___FixedAllocations_84;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 m_Items[1];

	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// TriLibCore.Interfaces.IModel[]
struct IModelU5BU5D_tE19C9CE57A4C086398F86D3E8410C416B390CC76  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TriLibCore.Stl.Reader.StlGeometryGroup[]
struct StlGeometryGroupU5BU5D_tDCFAA3EDF49B9F9FEAC62B179CB23851DCFE8EEB  : public RuntimeArray
{
	ALIGN_FIELD (8) StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* m_Items[1];

	inline StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void TriLibCore.Geometries.GeometryGroup`1<TriLibCore.Geometries.PositionNormalColorVertexData>::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GeometryGroup_1_set_Name_m6256B957770AB633839BECA40F9FFF08A1D77C81_gshared_inline (GeometryGroup_1_tAB214074D23BF71097A46E9AC61FF11A7B26E283* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.String TriLibCore.Geometries.GeometryGroup`1<TriLibCore.Geometries.PositionNormalColorVertexData>::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GeometryGroup_1_get_Name_mD09F37F9ADCF0BCC1CAC2CC96CBC03CA98598563_gshared_inline (GeometryGroup_1_tAB214074D23BF71097A46E9AC61FF11A7B26E283* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Geometries.Geometry::AddVertex<TriLibCore.Geometries.PositionNormalColorVertexData>(TriLibCore.AssetLoaderContext,System.Int32,TVertexData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geometry_AddVertex_TisPositionNormalColorVertexData_t3B0C1CB04DDC0CB5FFBDE86BA1CB5E9A3FB380F4_m65CC12757C5C59782DC19A80BFFB829E38ABD9C1_gshared (Geometry_t9DA9B9652E3E92AD194E9898A2EB36E95FE2E147* __this, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___assetLoaderContext0, int32_t ___vertexIndex1, PositionNormalColorVertexData_t3B0C1CB04DDC0CB5FFBDE86BA1CB5E9A3FB380F4 ___vertexData2, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<TVertexData> TriLibCore.Geometries.GeometryGroup`1<TriLibCore.Geometries.PositionNormalColorVertexData>::get_VerticesData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GeometryGroup_1_get_VerticesData_m90A5BFB1A1F0F3ED0C7C889EDDEC7CD3C296DB3D_gshared_inline (GeometryGroup_1_tAB214074D23BF71097A46E9AC61FF11A7B26E283* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Geometries.GeometryGroup`1<TriLibCore.Geometries.PositionNormalColorVertexData>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeometryGroup_1__ctor_m3FD15BB5ACAA8CEFBE862588F2A137241EEF61B5_gshared (GeometryGroup_1_tAB214074D23BF71097A46E9AC61FF11A7B26E283* __this, const RuntimeMethod* method) ;

// System.Void TriLibCore.Geometries.Geometry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Geometry__ctor_m0F5EBDDAEEB9ED6F66946F16F31BAB22BE44D193 (Geometry_t9DA9B9652E3E92AD194E9898A2EB36E95FE2E147* __this, const RuntimeMethod* method) ;
// System.String TriLibCore.Stl.StlModel::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StlModel_get_Name_m25E9B99DE29E6200C71933B5E52D158E28DCD941_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Stl.Reader.StlGeometryGroup>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m299AC4E805B5350793D8EBF404877DD870FC4E34 (Dictionary_2_t905E5DC1FAFCAD1369228C7CD235A3242C23933D* __this, String_t* ___key0, StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t905E5DC1FAFCAD1369228C7CD235A3242C23933D*, String_t*, StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void TriLibCore.Stl.Reader.StlGeometryGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlGeometryGroup__ctor_mD859B095ED8F9FAAF47A8A34955F3AF5BC81D532 (StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Geometries.GeometryGroup`1<TriLibCore.Geometries.PositionNormalColorVertexData>::set_Name(System.String)
inline void GeometryGroup_1_set_Name_m6256B957770AB633839BECA40F9FFF08A1D77C81_inline (GeometryGroup_1_tAB214074D23BF71097A46E9AC61FF11A7B26E283* __this, String_t* ___value0, const RuntimeMethod* method)
{
	((  void (*) (GeometryGroup_1_tAB214074D23BF71097A46E9AC61FF11A7B26E283*, String_t*, const RuntimeMethod*))GeometryGroup_1_set_Name_m6256B957770AB633839BECA40F9FFF08A1D77C81_gshared_inline)(__this, ___value0, method);
}
// TriLibCore.AssetLoaderContext TriLibCore.ReaderBase::get_AssetLoaderContext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Stl.Reader.StlGeometryGroup>::Add(TKey,TValue)
inline void Dictionary_2_Add_m60B6520F9A2424BE13CF3767F28B8612538651ED (Dictionary_2_t905E5DC1FAFCAD1369228C7CD235A3242C23933D* __this, String_t* ___key0, StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t905E5DC1FAFCAD1369228C7CD235A3242C23933D*, String_t*, StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean TriLibCore.Stl.StlProcessor::IsBinary(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StlProcessor_IsBinary_mE4F7A97BD80A074EFD7A1AE76A80F058DFE85742 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// TriLibCore.Interfaces.IRootModel TriLibCore.Stl.StlProcessor::ParseBinary(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlProcessor_ParseBinary_m15DAD2962CF54D1F8C652CD1F69C56EDD19A991A (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// TriLibCore.Interfaces.IRootModel TriLibCore.Stl.StlProcessor::ParseASCII(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlProcessor_ParseASCII_m297D902C12F8D0B07F75397F81C1BA6A82B918ED (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___val0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// TriLibCore.Stl.Reader.StlGeometryGroup TriLibCore.Stl.StlProcessor::GetActiveGeometryGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* StlProcessor_GetActiveGeometryGroup_m2BE506EEF7F03897061A0AF246F24D2376ACDD78 (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlRootModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlRootModel__ctor_mF3CCCD9F9A1339A398A4FA1EAA0D00B3AD7BB737 (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel__ctor_m6E2FE456538DB2C0EB1C98D3144C193CF6157D1C (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlModel::set_LocalScale(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlModel_set_LocalScale_m0709587074F69EEB1DCF2F639318F4C9BE86D840_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlModel::set_LocalRotation(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlModel_set_LocalRotation_mE9C27ACA9705C49C2EEEEC359CF9195A0EADF5B9_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlModel::set_GeometryGroup(TriLibCore.Interfaces.IGeometryGroup)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlModel_set_GeometryGroup_m32211C6B2E30C396961F21D3E5E81B925AAA444E_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.String TriLibCore.Geometries.GeometryGroup`1<TriLibCore.Geometries.PositionNormalColorVertexData>::get_Name()
inline String_t* GeometryGroup_1_get_Name_mD09F37F9ADCF0BCC1CAC2CC96CBC03CA98598563_inline (GeometryGroup_1_tAB214074D23BF71097A46E9AC61FF11A7B26E283* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (GeometryGroup_1_tAB214074D23BF71097A46E9AC61FF11A7B26E283*, const RuntimeMethod*))GeometryGroup_1_get_Name_mD09F37F9ADCF0BCC1CAC2CC96CBC03CA98598563_gshared_inline)(__this, method);
}
// System.Void TriLibCore.Stl.StlModel::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlModel_set_Name_mF8213C9BAD85BC9320C876C41ABBF594327F2814_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlModel::set_Visibility(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlModel_set_Visibility_m635AB4624DB7C9E08470800B07ABABD332AF0E01_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlModel::set_Parent(TriLibCore.Interfaces.IModel)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlModel_set_Parent_m5FFEE1518EF3F12F1378AECEAEB41466CCA20DCE_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Interfaces.IModel>::Add(TKey,TValue)
inline void Dictionary_2_Add_m53D84560875155F383C73DA9027DE4CC7AC985D5 (Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Vector3 TriLibCore.Stl.StlProcessor::ReadVector3(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 StlProcessor_ReadVector3_m9D7CCD5D671519356C4115E4BAD80E88EC86539C (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___binaryReader0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TriLibCore.Stl.StlProcessor::GetNormal(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 StlProcessor_GetNormal_m73C3B5FAA18FBA92B56CB69B52B8371076C040DC (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___c2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlProcessor::AddOutputVertex(TriLibCore.Stl.Reader.StlGeometryGroup,System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlProcessor_AddOutputVertex_m0448044639B5A3585B7A2CDB8BFE88703D4FD387 (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* ___geometryGroup0, int32_t ___vertexIndex1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vertex2, const RuntimeMethod* method) ;
// System.Void TriLibCore.ReaderBase::UpdateLoadingPercentage(System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, float ___value0, int32_t ___step1, float ___maxValue2, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Interfaces.IModel>::get_Count()
inline int32_t Dictionary_2_get_Count_mF8582269BDE4C140C0B3D5C60BC07DC39DBA4C4F (Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Interfaces.IModel>::get_Item(TKey)
inline RuntimeObject* Dictionary_2_get_Item_mA658433C78AF42331F861807619CE453560C8A96 (Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Interfaces.IModel>::get_Values()
inline ValueCollection_t52D0D70A98CDE4A09BB9B7D39C2159B31ECAE027* Dictionary_2_get_Values_m56D477CD7C6E64384E53F8B4C44C151CB9CADA48 (Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t52D0D70A98CDE4A09BB9B7D39C2159B31ECAE027* (*) (Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// TSource[] System.Linq.Enumerable::ToArray<TriLibCore.Interfaces.IModel>(System.Collections.Generic.IEnumerable`1<TSource>)
inline IModelU5BU5D_tE19C9CE57A4C086398F86D3E8410C416B390CC76* Enumerable_ToArray_TisIModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB_m036D15DBE03F594018E148803BC38FF2FB06E146 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  IModelU5BU5D_tE19C9CE57A4C086398F86D3E8410C416B390CC76* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared)(___source0, method);
}
// System.Void TriLibCore.Stl.StlModel::set_Children(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlModel_set_Children_m8C26332902AFB18940DAB4060807171A0364EA1E_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Stl.Reader.StlGeometryGroup>::get_Values()
inline ValueCollection_t06DE05054C61B3458F79E9A2C798D5812D926BA1* Dictionary_2_get_Values_mEAF28F0B7E0954C8CF16C2FC21585C9CA1F27C79 (Dictionary_2_t905E5DC1FAFCAD1369228C7CD235A3242C23933D* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t06DE05054C61B3458F79E9A2C798D5812D926BA1* (*) (Dictionary_2_t905E5DC1FAFCAD1369228C7CD235A3242C23933D*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// TSource[] System.Linq.Enumerable::ToArray<TriLibCore.Stl.Reader.StlGeometryGroup>(System.Collections.Generic.IEnumerable`1<TSource>)
inline StlGeometryGroupU5BU5D_tDCFAA3EDF49B9F9FEAC62B179CB23851DCFE8EEB* Enumerable_ToArray_TisStlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2_m5BE5B3204062AC07D37048B3E74576B2E2813ED6 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StlGeometryGroupU5BU5D_tDCFAA3EDF49B9F9FEAC62B179CB23851DCFE8EEB* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared)(___source0, method);
}
// System.Void TriLibCore.Stl.StlRootModel::set_AllGeometryGroups(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IGeometryGroup>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlRootModel_set_AllGeometryGroups_m6754461757172DBEB0986B7A916BBBFFDAD9E173_inline (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Stl.StlModel::get_Children()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* StlModel_get_Children_mCC99BF668D976265E2897D884E1080A14B8219BB_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlRootModel::set_AllModels(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlRootModel_set_AllModels_mED5ABBDE53F3952C9E492CC70CADE0692BA9A7BF_inline (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// TriLibCore.Stl.StlGeometry TriLibCore.Stl.StlProcessor::GetActiveGeometry(TriLibCore.Stl.Reader.StlGeometryGroup,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF* StlProcessor_GetActiveGeometry_m78D6AF02452CDA247B22C8547DD3F6D0B8766FDD (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* ___geometryGroup0, bool ___isQuad1, const RuntimeMethod* method) ;
// System.Void TriLibCore.Geometries.PositionNormalColorVertexData::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector4,UnityEngine.Color,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PositionNormalColorVertexData__ctor_m82C7773DEADADFCF5CBE504966FA243A515C57B7 (PositionNormalColorVertexData_t3B0C1CB04DDC0CB5FFBDE86BA1CB5E9A3FB380F4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal1, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent2, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color3, int32_t ___groupIndex4, const RuntimeMethod* method) ;
// System.Void TriLibCore.Geometries.Geometry::AddVertex<TriLibCore.Geometries.PositionNormalColorVertexData>(TriLibCore.AssetLoaderContext,System.Int32,TVertexData)
inline void Geometry_AddVertex_TisPositionNormalColorVertexData_t3B0C1CB04DDC0CB5FFBDE86BA1CB5E9A3FB380F4_m65CC12757C5C59782DC19A80BFFB829E38ABD9C1 (Geometry_t9DA9B9652E3E92AD194E9898A2EB36E95FE2E147* __this, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___assetLoaderContext0, int32_t ___vertexIndex1, PositionNormalColorVertexData_t3B0C1CB04DDC0CB5FFBDE86BA1CB5E9A3FB380F4 ___vertexData2, const RuntimeMethod* method)
{
	((  void (*) (Geometry_t9DA9B9652E3E92AD194E9898A2EB36E95FE2E147*, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C*, int32_t, PositionNormalColorVertexData_t3B0C1CB04DDC0CB5FFBDE86BA1CB5E9A3FB380F4, const RuntimeMethod*))Geometry_AddVertex_TisPositionNormalColorVertexData_t3B0C1CB04DDC0CB5FFBDE86BA1CB5E9A3FB380F4_m65CC12757C5C59782DC19A80BFFB829E38ABD9C1_gshared)(__this, ___assetLoaderContext0, ___vertexIndex1, ___vertexData2, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single TriLibCore.Stl.StlStreamReader::ReadTokenAsFloat(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StlStreamReader_ReadTokenAsFloat_m30C508ABFBF8FF2F47629BCFFB53C042F4B7F551 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, bool ___required0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlStreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlStreamReader__ctor_m1DC2CC738B9E91B86FE02E6BFD2FA36770C08BE2 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Int64 TriLibCore.Stl.StlStreamReader::ReadToken(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StlStreamReader_ReadToken_m66B4713DAD087A09068A8EF495F3CA3FD9B16822 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, bool ___required0, bool ___ignoreSpaces1, const RuntimeMethod* method) ;
// System.String TriLibCore.Stl.StlStreamReader::ReadTokenAsString(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StlStreamReader_ReadTokenAsString_m48318F7F8AD205DB62D73904EDFFD9EED1C7396D (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, bool ___required0, bool ___ignoreSpaces1, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TriLibCore.Stl.StlProcessor::ReadVector3(TriLibCore.Stl.StlStreamReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 StlProcessor_ReadVector3_m60D50A70CF4B3B8693F29FF96267DBF400EA0A5B (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* ___stlStreamReader0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlProcessor::AddModel(TriLibCore.Interfaces.IModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlProcessor_AddModel_mD074A15E2C251A343E4D0B955563EE85DE37FAF8 (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, RuntimeObject* ___parent0, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<TVertexData> TriLibCore.Geometries.GeometryGroup`1<TriLibCore.Geometries.PositionNormalColorVertexData>::get_VerticesData()
inline RuntimeObject* GeometryGroup_1_get_VerticesData_m90A5BFB1A1F0F3ED0C7C889EDDEC7CD3C296DB3D_inline (GeometryGroup_1_tAB214074D23BF71097A46E9AC61FF11A7B26E283* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GeometryGroup_1_tAB214074D23BF71097A46E9AC61FF11A7B26E283*, const RuntimeMethod*))GeometryGroup_1_get_VerticesData_m90A5BFB1A1F0F3ED0C7C889EDDEC7CD3C296DB3D_gshared_inline)(__this, method);
}
// System.Boolean System.IO.StreamReader::get_EndOfStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamReader_get_EndOfStream_mAE054431BF21158178EAA2A6872F14A9ED6A3C3E (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Stl.Reader.StlGeometryGroup>::.ctor()
inline void Dictionary_2__ctor_m5506E0DCECF49F29806DBE66FA8FBD4C28AACC38 (Dictionary_2_t905E5DC1FAFCAD1369228C7CD235A3242C23933D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t905E5DC1FAFCAD1369228C7CD235A3242C23933D*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,TriLibCore.Interfaces.IModel>::.ctor()
inline void Dictionary_2__ctor_m5F5C68AF90E49C38EB7E07DDE14E85B7C3875390 (Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Stl.StlStreamReader::GetTokenAsFloat(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StlStreamReader_GetTokenAsFloat_mAA1D75FACB25386AF1A9ED7210239ED0369EDD3F (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, float* ___value0, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Stl.StlStreamReader::get_Line()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StlStreamReader_get_Line_mE94255EEFEFED4D8DED8AE024CE752F78FD174EC_inline (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Stl.StlStreamReader::get_Column()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StlStreamReader_get_Column_m78B316197DD99FD46120765F960B450AA0260A91 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String TriLibCore.Stl.StlStreamReader::GetTokenAsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StlStreamReader_GetTokenAsString_m3B5F90A8A2E6492B1F50E55127380D3CB334E611 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_m5920BF3A60EE1FFF0CC117021B4BF2A8114D1AE5 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, float* ___result3, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_m3CB3A8252B2254BF929D207AFA9F2CD4DA3E3F79 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, int32_t* ___result3, const RuntimeMethod* method) ;
// System.Int64 TriLibCore.Utils.HashUtils::GetHash(System.Collections.Generic.IList`1<System.Char>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t HashUtils_GetHash_mA2072A3113F446FBB34B926271575984459E0B0C (RuntimeObject* ___chars0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m8ADB6C6B363A2B58B9BC3CB1939A1BABE0BF064A (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, bool ___detectEncodingFromByteOrderMarks1, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m7712DDC735E99B6833E2666ADFD8A06CB96A58B1 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mE4095A4D9B6E2E82E95CE884443A51635849A740 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, bool ___detectEncodingFromByteOrderMarks2, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mD3E001CD426B3FE451FFA32E7070E34AC1756673 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, bool ___detectEncodingFromByteOrderMarks2, int32_t ___bufferSize3, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m08BA7049EACE030ACE06AB8A8F2CDF2E2AFB55C6 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m0AD738DDCB9A0DE0DFD3DB6B2FE44A41C1EAE677 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, String_t* ___path0, bool ___detectEncodingFromByteOrderMarks1, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m3C693DE567FB306355ECD44489F58699105DDE43 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, String_t* ___path0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mB946592899E393BDD06A093CA3BB87180A590449 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, String_t* ___path0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, bool ___detectEncodingFromByteOrderMarks2, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.String,System.Text.Encoding,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mA95373EEF162CF396A1A20CDF039B29AA2D634EF (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, String_t* ___path0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, bool ___detectEncodingFromByteOrderMarks2, int32_t ___bufferSize3, const RuntimeMethod* method) ;
// System.Void TriLibCore.Geometries.GeometryGroup`1<TriLibCore.Geometries.PositionNormalColorVertexData>::.ctor()
inline void GeometryGroup_1__ctor_m3FD15BB5ACAA8CEFBE862588F2A137241EEF61B5 (GeometryGroup_1_tAB214074D23BF71097A46E9AC61FF11A7B26E283* __this, const RuntimeMethod* method)
{
	((  void (*) (GeometryGroup_1_tAB214074D23BF71097A46E9AC61FF11A7B26E283*, const RuntimeMethod*))GeometryGroup_1__ctor_m3FD15BB5ACAA8CEFBE862588F2A137241EEF61B5_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// TriLibCore.Interfaces.IRootModel TriLibCore.ReaderBase::ReadStream(System.IO.Stream,TriLibCore.AssetLoaderContext,System.String,System.Action`2<TriLibCore.AssetLoaderContext,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReaderBase_ReadStream_m725378DF096B29E0DB3BE3FB9E5F1E37747883F4 (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___assetLoaderContext1, String_t* ___filename2, Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* ___onProgress3, const RuntimeMethod* method) ;
// System.Void TriLibCore.Stl.StlProcessor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlProcessor__ctor_m900A44553FC03D3F3F05833E176C5456FF72A390 (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, const RuntimeMethod* method) ;
// TriLibCore.Interfaces.IRootModel TriLibCore.Stl.StlProcessor::Process(TriLibCore.Stl.Reader.StlReader,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlProcessor_Process_mE9579D6B475D44423897704E91BD2A780B6405CF (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* ___stlReader0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream1, const RuntimeMethod* method) ;
// System.Void TriLibCore.ReaderBase::PostProcessModel(TriLibCore.Interfaces.IRootModel&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderBase_PostProcessModel_mD3BB953DE8BEB5FCA65077455BDA0750F740C667 (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, RuntimeObject** ___model0, const RuntimeMethod* method) ;
// System.Void TriLibCore.ReaderBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderBase__ctor_m5C4FE7A4BC205B65DAB56FF3CC5202D0B04937DA (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
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
// System.Void TriLibCore.Stl.StlGeometry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlGeometry__ctor_m2776540496DA7C76A11B318FB88BB6C62734EE5D (StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF* __this, const RuntimeMethod* method) 
{
	{
		Geometry__ctor_m0F5EBDDAEEB9ED6F66946F16F31BAB22BE44D193(__this, NULL);
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
// System.String TriLibCore.Stl.StlModel::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StlModel_get_Name_m25E9B99DE29E6200C71933B5E52D158E28DCD941 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_Name_mF8213C9BAD85BC9320C876C41ABBF594327F2814 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Boolean TriLibCore.Stl.StlModel::get_Used()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StlModel_get_Used_m1335C33D3F280C7BA81A4EB230C7F933DA6CAAE3 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CUsedU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_Used(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_Used_m73B3A1C81CF7F18D6D2F4B4ADC0F6819331261C2 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CUsedU3Ek__BackingField_1 = L_0;
		return;
	}
}
// UnityEngine.Vector3 TriLibCore.Stl.StlModel::get_LocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 StlModel_get_LocalPosition_mCB155A00E906835D4ED2E42681E71F93637B720E (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CLocalPositionU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_LocalPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_LocalPosition_m5AF9262F57B556B40B23C967CF09785E3BD44C52 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CLocalPositionU3Ek__BackingField_2 = L_0;
		return;
	}
}
// UnityEngine.Quaternion TriLibCore.Stl.StlModel::get_LocalRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 StlModel_get_LocalRotation_mC94B5254507082EEF78E62C751A40BA2BE0AF3EF (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CLocalRotationU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_LocalRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_LocalRotation_mE9C27ACA9705C49C2EEEEC359CF9195A0EADF5B9 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___value0;
		__this->___U3CLocalRotationU3Ek__BackingField_3 = L_0;
		return;
	}
}
// UnityEngine.Vector3 TriLibCore.Stl.StlModel::get_LocalScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 StlModel_get_LocalScale_mA9317004E928DF3BDFC6DF9B17B203B66FC4723B (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CLocalScaleU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_LocalScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_LocalScale_m0709587074F69EEB1DCF2F639318F4C9BE86D840 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CLocalScaleU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean TriLibCore.Stl.StlModel::get_Visibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StlModel_get_Visibility_m41D73429568E441CDE8E96D86EEE88D70D1AB266 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CVisibilityU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_Visibility(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_Visibility_m635AB4624DB7C9E08470800B07ABABD332AF0E01 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CVisibilityU3Ek__BackingField_5 = L_0;
		return;
	}
}
// TriLibCore.Interfaces.IModel TriLibCore.Stl.StlModel::get_Parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlModel_get_Parent_m86D1711C2B33FFB6A7C9B150E9F614718B18E237 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CParentU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_Parent(TriLibCore.Interfaces.IModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_Parent_m5FFEE1518EF3F12F1378AECEAEB41466CCA20DCE (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CParentU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParentU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Stl.StlModel::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlModel_get_Children_mCC99BF668D976265E2897D884E1080A14B8219BB (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CChildrenU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_Children(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_Children_m8C26332902AFB18940DAB4060807171A0364EA1E (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CChildrenU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CChildrenU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Boolean TriLibCore.Stl.StlModel::get_IsBone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StlModel_get_IsBone_mE00017B8AD0B85CFC52CECB34E77BFD5BB7E96D6 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsBoneU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_IsBone(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_IsBone_m3A3DC56944ED27BAF11B1AC1634FA26D80DA09E2 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CIsBoneU3Ek__BackingField_8 = L_0;
		return;
	}
}
// TriLibCore.Interfaces.IGeometryGroup TriLibCore.Stl.StlModel::get_GeometryGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlModel_get_GeometryGroup_mD1F5B1F396068F485FAB980C35ED2DD19989C80F (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CGeometryGroupU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_GeometryGroup(TriLibCore.Interfaces.IGeometryGroup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_GeometryGroup_m32211C6B2E30C396961F21D3E5E81B925AAA444E (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CGeometryGroupU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGeometryGroupU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Stl.StlModel::get_Bones()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlModel_get_Bones_m684557BC45E7AC791A1B30DCE1DB803CD1408BE2 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CBonesU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_Bones(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_Bones_mAA6178D9689B8D839332F71C57A59EA360C5E231 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CBonesU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBonesU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// UnityEngine.Matrix4x4[] TriLibCore.Stl.StlModel::get_BindPoses()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* StlModel_get_BindPoses_m9E24FE74C24EFC85B8A8582B108D2CBB119421DB (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = __this->___U3CBindPosesU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_BindPoses(UnityEngine.Matrix4x4[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_BindPoses_m3E51722DF32A7EC854623CB8CC82D115AB230193 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___value0, const RuntimeMethod* method) 
{
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_0 = ___value0;
		__this->___U3CBindPosesU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBindPosesU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<System.Int32> TriLibCore.Stl.StlModel::get_MaterialIndices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlModel_get_MaterialIndices_m140AFBF45A10411222E47FB5B22AB03D0897EEEC (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CMaterialIndicesU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_MaterialIndices(System.Collections.Generic.IList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_MaterialIndices_m324F349E20CBDA15FD0D369642D5AE3D89332281 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CMaterialIndicesU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMaterialIndicesU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> TriLibCore.Stl.StlModel::get_UserProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* StlModel_get_UserProperties_mFC87C1859174342787C4379A620AAD8177E1BB6B (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = __this->___U3CUserPropertiesU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::set_UserProperties(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel_set_UserProperties_m33ADB762D7FA9D10967DDD33FA5CE6825CCE1748 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___value0, const RuntimeMethod* method) 
{
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___value0;
		__this->___U3CUserPropertiesU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserPropertiesU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
// System.String TriLibCore.Stl.StlModel::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StlModel_ToString_m4565A071E9352293402EE92115472BD57BEFB879 (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = StlModel_get_Name_m25E9B99DE29E6200C71933B5E52D158E28DCD941_inline(__this, NULL);
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlModel__ctor_m6E2FE456538DB2C0EB1C98D3144C193CF6157D1C (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
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
// TriLibCore.Stl.Reader.StlGeometryGroup TriLibCore.Stl.StlProcessor::GetActiveGeometryGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* StlProcessor_GetActiveGeometryGroup_m2BE506EEF7F03897061A0AF246F24D2376ACDD78 (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m60B6520F9A2424BE13CF3767F28B8612538651ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m299AC4E805B5350793D8EBF404877DD870FC4E34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeometryGroup_1_set_Name_m6256B957770AB633839BECA40F9FFF08A1D77C81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* V_1 = NULL;
	{
		String_t* L_0 = __this->____groupName_6;
		V_0 = L_0;
		String_t* L_1 = V_0;
		String_t* L_2 = __this->____lastGeometryGroupName_7;
		bool L_3;
		L_3 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0063;
		}
	}
	{
		Dictionary_2_t905E5DC1FAFCAD1369228C7CD235A3242C23933D* L_4 = __this->____geometryGroups_3;
		String_t* L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_TryGetValue_m299AC4E805B5350793D8EBF404877DD870FC4E34(L_4, L_5, (&V_1), Dictionary_2_TryGetValue_m299AC4E805B5350793D8EBF404877DD870FC4E34_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0055;
		}
	}
	{
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_7 = (StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2*)il2cpp_codegen_object_new(StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		StlGeometryGroup__ctor_mD859B095ED8F9FAAF47A8A34955F3AF5BC81D532(L_7, NULL);
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_8 = L_7;
		String_t* L_9 = V_0;
		NullCheck(L_8);
		GeometryGroup_1_set_Name_m6256B957770AB633839BECA40F9FFF08A1D77C81_inline(L_8, L_9, GeometryGroup_1_set_Name_m6256B957770AB633839BECA40F9FFF08A1D77C81_RuntimeMethod_var);
		V_1 = L_8;
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_10 = V_1;
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_11 = __this->____reader_5;
		NullCheck(L_11);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_12;
		L_12 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_11, NULL);
		NullCheck(L_10);
		VirtualActionInvoker5< AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C*, int32_t, int32_t, int32_t, int32_t >::Invoke(38 /* System.Void TriLibCore.Geometries.GeometryGroup`1<TriLibCore.Geometries.PositionNormalColorVertexData>::Setup(TriLibCore.AssetLoaderContext,System.Int32,System.Int32,System.Int32,System.Int32) */, L_10, L_12, 3, 3, ((int32_t)32), 0);
		Dictionary_2_t905E5DC1FAFCAD1369228C7CD235A3242C23933D* L_13 = __this->____geometryGroups_3;
		String_t* L_14 = V_0;
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_15 = V_1;
		NullCheck(L_13);
		Dictionary_2_Add_m60B6520F9A2424BE13CF3767F28B8612538651ED(L_13, L_14, L_15, Dictionary_2_Add_m60B6520F9A2424BE13CF3767F28B8612538651ED_RuntimeMethod_var);
	}

IL_0055:
	{
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_16 = V_1;
		__this->____activeGeometryGroup_9 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeGeometryGroup_9), (void*)L_16);
		String_t* L_17 = V_0;
		__this->____lastGeometryGroupName_7 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____lastGeometryGroupName_7), (void*)L_17);
	}

IL_0063:
	{
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_18 = __this->____activeGeometryGroup_9;
		return L_18;
	}
}
// TriLibCore.Stl.StlGeometry TriLibCore.Stl.StlProcessor::GetActiveGeometry(TriLibCore.Stl.Reader.StlGeometryGroup,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF* StlProcessor_GetActiveGeometry_m78D6AF02452CDA247B22C8547DD3F6D0B8766FDD (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* ___geometryGroup0, bool ___isQuad1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeometryGroup_1_GetGeometry_TisStlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF_mBCB6275673F4265D1D1756F5DFFDE5A8F95F7BE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____loopNumber_11;
		int32_t L_1 = __this->____lastLoopNumber_8;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0038;
		}
	}
	{
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_2 = ___geometryGroup0;
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_3 = __this->____reader_5;
		NullCheck(L_3);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_4;
		L_4 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_3, NULL);
		int32_t L_5 = __this->____loopNumber_11;
		bool L_6 = ___isQuad1;
		NullCheck(L_2);
		StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF* L_7;
		L_7 = GenericVirtualFuncInvoker3< StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF*, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C*, int32_t, bool >::Invoke(GeometryGroup_1_GetGeometry_TisStlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF_mBCB6275673F4265D1D1756F5DFFDE5A8F95F7BE3_RuntimeMethod_var, L_2, L_4, L_5, L_6);
		__this->____activeGeometry_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeGeometry_10), (void*)L_7);
		int32_t L_8 = __this->____loopNumber_11;
		__this->____lastLoopNumber_8 = L_8;
	}

IL_0038:
	{
		StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF* L_9 = __this->____activeGeometry_10;
		return L_9;
	}
}
// TriLibCore.Interfaces.IRootModel TriLibCore.Stl.StlProcessor::Process(TriLibCore.Stl.Reader.StlReader,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlProcessor_Process_mE9579D6B475D44423897704E91BD2A780B6405CF (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* ___stlReader0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream1, const RuntimeMethod* method) 
{
	{
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_0 = ___stlReader0;
		__this->____reader_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____reader_5), (void*)L_0);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___stream1;
		bool L_2;
		L_2 = StlProcessor_IsBinary_mE4F7A97BD80A074EFD7A1AE76A80F058DFE85742(L_1, NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___stream1;
		RuntimeObject* L_4;
		L_4 = StlProcessor_ParseBinary_m15DAD2962CF54D1F8C652CD1F69C56EDD19A991A(__this, L_3, NULL);
		return L_4;
	}

IL_0017:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = ___stream1;
		RuntimeObject* L_6;
		L_6 = StlProcessor_ParseASCII_m297D902C12F8D0B07F75397F81C1BA6A82B918ED(__this, L_5, NULL);
		return L_6;
	}
}
// UnityEngine.Vector3 TriLibCore.Stl.StlProcessor::GetNormal(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 StlProcessor_GetNormal_m73C3B5FAA18FBA92B56CB69B52B8371076C040DC (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___c2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___b1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___a0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_0, L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___c2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_3, L_4, NULL);
		V_0 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline(L_2, L_6, NULL);
		V_1 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		return L_8;
	}
}
// TriLibCore.Interfaces.IRootModel TriLibCore.Stl.StlProcessor::ParseBinary(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlProcessor_ParseBinary_m15DAD2962CF54D1F8C652CD1F69C56EDD19A991A (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m53D84560875155F383C73DA9027DE4CC7AC985D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mF8582269BDE4C140C0B3D5C60BC07DC39DBA4C4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mA658433C78AF42331F861807619CE453560C8A96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m56D477CD7C6E64384E53F8B4C44C151CB9CADA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mEAF28F0B7E0954C8CF16C2FC21585C9CA1F27C79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisIModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB_m036D15DBE03F594018E148803BC38FF2FB06E146_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisStlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2_m5BE5B3204062AC07D37048B3E74576B2E2813ED6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeometryGroup_1_get_Name_mD09F37F9ADCF0BCC1CAC2CC96CBC03CA98598563_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F4B57D5A155D08E686DEA8A1E7C1992F9C3675B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* V_5 = NULL;
	StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* V_6 = NULL;
	StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* V_7 = NULL;
	uint8_t V_8 = 0x0;
	uint8_t V_9 = 0x0;
	uint8_t V_10 = 0x0;
	uint8_t V_11 = 0x0;
	int32_t V_12 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_15;
	memset((&V_15), 0, sizeof(V_15));
	int16_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	bool V_20 = false;
	int32_t V_21 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_22;
	memset((&V_22), 0, sizeof(V_22));
	StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* G_B13_0 = NULL;
	StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* G_B12_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B14_0;
	memset((&G_B14_0), 0, sizeof(G_B14_0));
	StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* G_B14_1 = NULL;
	{
		V_0 = (bool)0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_1, L_0, NULL);
		V_1 = L_1;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = V_1;
		NullCheck(L_2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3;
		L_3 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(24 /* System.Char[] System.IO.BinaryReader::ReadChars(System.Int32) */, L_2, 6);
		String_t* L_4;
		L_4 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_3, NULL);
		V_2 = L_4;
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_5 = __this->____reader_5;
		NullCheck(L_5);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_6;
		L_6 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_5, NULL);
		NullCheck(L_6);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_7 = L_6->___Options_0;
		NullCheck(L_7);
		bool L_8 = L_7->___ImportColors_18;
		if (!L_8)
		{
			goto IL_0097;
		}
	}
	{
		String_t* L_9 = V_2;
		bool L_10;
		L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_9, _stringLiteral4F4B57D5A155D08E686DEA8A1E7C1992F9C3675B, NULL);
		if (!L_10)
		{
			goto IL_0097;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_11 = V_1;
		NullCheck(L_11);
		uint8_t L_12;
		L_12 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_11);
		V_8 = L_12;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_13 = V_1;
		NullCheck(L_13);
		uint8_t L_14;
		L_14 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_13);
		V_9 = L_14;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_15 = V_1;
		NullCheck(L_15);
		uint8_t L_16;
		L_16 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_15);
		V_10 = L_16;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_17 = V_1;
		NullCheck(L_17);
		uint8_t L_18;
		L_18 = VirtualFuncInvoker0< uint8_t >::Invoke(11 /* System.Byte System.IO.BinaryReader::ReadByte() */, L_17);
		V_11 = L_18;
		uint8_t L_19 = V_8;
		uint8_t L_20 = V_9;
		uint8_t L_21 = V_10;
		uint8_t L_22 = V_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23;
		memset((&L_23), 0, sizeof(L_23));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_23), ((float)(((float)L_19)/(255.0f))), ((float)(((float)L_20)/(255.0f))), ((float)(((float)L_21)/(255.0f))), ((float)(((float)L_22)/(255.0f))), /*hidden argument*/NULL);
		__this->____partColor_21 = L_23;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = __this->____partColor_21;
		__this->____facetColor_22 = L_24;
		V_0 = (bool)1;
	}

IL_0097:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_25 = ___stream0;
		NullCheck(L_25);
		int64_t L_26;
		L_26 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(31 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_25, ((int64_t)((int32_t)80)), 0);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_27 = V_1;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, L_27);
		V_3 = L_28;
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_29 = __this->____reader_5;
		NullCheck(L_29);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_30;
		L_30 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_29, NULL);
		NullCheck(L_30);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_31 = L_30->___Options_0;
		NullCheck(L_31);
		float L_32 = L_31->___ScaleFactor_5;
		V_4 = L_32;
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_33;
		L_33 = StlProcessor_GetActiveGeometryGroup_m2BE506EEF7F03897061A0AF246F24D2376ACDD78(__this, NULL);
		V_5 = L_33;
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_34 = (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142*)il2cpp_codegen_object_new(StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		StlRootModel__ctor_mF3CCCD9F9A1339A398A4FA1EAA0D00B3AD7BB737(L_34, NULL);
		V_6 = L_34;
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_35 = (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA*)il2cpp_codegen_object_new(StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		StlModel__ctor_m6E2FE456538DB2C0EB1C98D3144C193CF6157D1C(L_35, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_36 = L_35;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_36);
		StlModel_set_LocalScale_m0709587074F69EEB1DCF2F639318F4C9BE86D840_inline(L_36, L_37, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_38 = L_36;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39;
		L_39 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NullCheck(L_38);
		StlModel_set_LocalRotation_mE9C27ACA9705C49C2EEEEC359CF9195A0EADF5B9_inline(L_38, L_39, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_40 = L_38;
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_41 = V_5;
		NullCheck(L_40);
		StlModel_set_GeometryGroup_m32211C6B2E30C396961F21D3E5E81B925AAA444E_inline(L_40, L_41, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_42 = L_40;
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_43 = V_5;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = GeometryGroup_1_get_Name_mD09F37F9ADCF0BCC1CAC2CC96CBC03CA98598563_inline(L_43, GeometryGroup_1_get_Name_mD09F37F9ADCF0BCC1CAC2CC96CBC03CA98598563_RuntimeMethod_var);
		NullCheck(L_42);
		StlModel_set_Name_mF8213C9BAD85BC9320C876C41ABBF594327F2814_inline(L_42, L_44, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_45 = L_42;
		NullCheck(L_45);
		StlModel_set_Visibility_m635AB4624DB7C9E08470800B07ABABD332AF0E01_inline(L_45, (bool)1, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_46 = L_45;
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_47 = V_6;
		NullCheck(L_46);
		StlModel_set_Parent_m5FFEE1518EF3F12F1378AECEAEB41466CCA20DCE_inline(L_46, L_47, NULL);
		V_7 = L_46;
		Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* L_48 = __this->____models_4;
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_49 = V_7;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = StlModel_get_Name_m25E9B99DE29E6200C71933B5E52D158E28DCD941_inline(L_49, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_51 = V_7;
		NullCheck(L_48);
		Dictionary_2_Add_m53D84560875155F383C73DA9027DE4CC7AC985D5(L_48, L_50, L_51, Dictionary_2_Add_m53D84560875155F383C73DA9027DE4CC7AC985D5_RuntimeMethod_var);
		V_12 = 0;
		goto IL_02db;
	}

IL_012c:
	{
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_52 = __this->____reader_5;
		NullCheck(L_52);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_53;
		L_53 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_52, NULL);
		NullCheck(L_53);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_54 = L_53->___Options_0;
		NullCheck(L_54);
		bool L_55 = L_54->___ImportNormals_22;
		if (!L_55)
		{
			goto IL_0151;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_56 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = StlProcessor_ReadVector3_m9D7CCD5D671519356C4115E4BAD80E88EC86539C(L_56, NULL);
		__this->____facetNormal_12 = L_57;
		goto IL_0163;
	}

IL_0151:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_58 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = StlProcessor_ReadVector3_m9D7CCD5D671519356C4115E4BAD80E88EC86539C(L_58, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->____facetNormal_12 = L_60;
	}

IL_0163:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_61 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = StlProcessor_ReadVector3_m9D7CCD5D671519356C4115E4BAD80E88EC86539C(L_61, NULL);
		float L_63 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_62, L_63, NULL);
		V_13 = L_64;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_65 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = StlProcessor_ReadVector3_m9D7CCD5D671519356C4115E4BAD80E88EC86539C(L_65, NULL);
		float L_67 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_66, L_67, NULL);
		V_14 = L_68;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_69 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = StlProcessor_ReadVector3_m9D7CCD5D671519356C4115E4BAD80E88EC86539C(L_69, NULL);
		float L_71 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_70, L_71, NULL);
		V_15 = L_72;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_73 = V_1;
		NullCheck(L_73);
		int16_t L_74;
		L_74 = VirtualFuncInvoker0< int16_t >::Invoke(14 /* System.Int16 System.IO.BinaryReader::ReadInt16() */, L_73);
		V_16 = L_74;
		int16_t L_75 = V_16;
		if (!L_75)
		{
			goto IL_023b;
		}
	}
	{
		bool L_76 = V_0;
		if (!L_76)
		{
			goto IL_01d4;
		}
	}
	{
		int16_t L_77 = V_16;
		V_17 = ((int32_t)((int32_t)L_77&((int32_t)31)));
		int16_t L_78 = V_16;
		V_18 = ((int32_t)(((int32_t)((int32_t)L_78&((int32_t)992)))>>5));
		int16_t L_79 = V_16;
		V_19 = ((int32_t)(((int32_t)((int32_t)L_79&((int32_t)31744)))>>((int32_t)10)));
		int16_t L_80 = V_16;
		V_20 = (bool)((((int32_t)((int32_t)(((int32_t)((int32_t)L_80&((int32_t)32768)))>>((int32_t)15)))) == ((int32_t)0))? 1 : 0);
		goto IL_0204;
	}

IL_01d4:
	{
		int16_t L_81 = V_16;
		V_19 = ((int32_t)(((int32_t)((int32_t)L_81&((int32_t)31744)))>>((int32_t)10)));
		int16_t L_82 = V_16;
		V_18 = ((int32_t)(((int32_t)((int32_t)L_82&((int32_t)992)))>>5));
		int16_t L_83 = V_16;
		V_17 = ((int32_t)((int32_t)L_83&((int32_t)31)));
		int16_t L_84 = V_16;
		V_20 = (bool)((((int32_t)((int32_t)(((int32_t)((int32_t)L_84&((int32_t)32768)))>>((int32_t)15)))) == ((int32_t)1))? 1 : 0);
	}

IL_0204:
	{
		bool L_85 = V_20;
		G_B12_0 = __this;
		if (L_85)
		{
			G_B13_0 = __this;
			goto IL_0211;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_86 = __this->____partColor_21;
		G_B14_0 = L_86;
		G_B14_1 = G_B12_0;
		goto IL_0236;
	}

IL_0211:
	{
		int32_t L_87 = V_17;
		int32_t L_88 = V_18;
		int32_t L_89 = V_19;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_90;
		memset((&L_90), 0, sizeof(L_90));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_90), ((float)(((float)L_87)/(32.0f))), ((float)(((float)L_88)/(32.0f))), ((float)(((float)L_89)/(32.0f))), (1.0f), /*hidden argument*/NULL);
		G_B14_0 = L_90;
		G_B14_1 = G_B13_0;
	}

IL_0236:
	{
		NullCheck(G_B14_1);
		G_B14_1->____facetColor_22 = G_B14_0;
	}

IL_023b:
	{
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_91 = __this->____reader_5;
		NullCheck(L_91);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_92;
		L_92 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_91, NULL);
		NullCheck(L_92);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_93 = L_92->___Options_0;
		NullCheck(L_93);
		bool L_94 = L_93->___ImportMeshes_10;
		if (!L_94)
		{
			goto IL_02d5;
		}
	}
	{
		int32_t L_95 = V_12;
		V_21 = ((int32_t)il2cpp_codegen_multiply(L_95, 3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = StlProcessor_GetNormal_m73C3B5FAA18FBA92B56CB69B52B8371076C040DC(L_96, L_97, L_98, NULL);
		V_22 = L_99;
		bool L_100 = ((StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_StaticFields*)il2cpp_codegen_static_fields_for(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var))->___FixInfacingNormals_12;
		if (!L_100)
		{
			goto IL_0283;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101 = __this->____facetNormal_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102 = V_22;
		float L_103;
		L_103 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_101, L_102, NULL);
		if ((!(((float)L_103) > ((float)(0.0f)))))
		{
			goto IL_02ad;
		}
	}

IL_0283:
	{
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_104 = V_5;
		int32_t L_105 = V_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = V_15;
		StlProcessor_AddOutputVertex_m0448044639B5A3585B7A2CDB8BFE88703D4FD387(__this, L_104, L_105, L_106, NULL);
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_107 = V_5;
		int32_t L_108 = V_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109 = V_14;
		StlProcessor_AddOutputVertex_m0448044639B5A3585B7A2CDB8BFE88703D4FD387(__this, L_107, ((int32_t)il2cpp_codegen_add(L_108, 1)), L_109, NULL);
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_110 = V_5;
		int32_t L_111 = V_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112 = V_13;
		StlProcessor_AddOutputVertex_m0448044639B5A3585B7A2CDB8BFE88703D4FD387(__this, L_110, ((int32_t)il2cpp_codegen_add(L_111, 2)), L_112, NULL);
		goto IL_02d5;
	}

IL_02ad:
	{
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_113 = V_5;
		int32_t L_114 = V_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115 = V_13;
		StlProcessor_AddOutputVertex_m0448044639B5A3585B7A2CDB8BFE88703D4FD387(__this, L_113, ((int32_t)il2cpp_codegen_add(L_114, 2)), L_115, NULL);
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_116 = V_5;
		int32_t L_117 = V_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118 = V_14;
		StlProcessor_AddOutputVertex_m0448044639B5A3585B7A2CDB8BFE88703D4FD387(__this, L_116, ((int32_t)il2cpp_codegen_add(L_117, 1)), L_118, NULL);
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_119 = V_5;
		int32_t L_120 = V_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121 = V_15;
		StlProcessor_AddOutputVertex_m0448044639B5A3585B7A2CDB8BFE88703D4FD387(__this, L_119, L_120, L_121, NULL);
	}

IL_02d5:
	{
		int32_t L_122 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_122, 1));
	}

IL_02db:
	{
		int32_t L_123 = V_12;
		int32_t L_124 = V_3;
		if ((((int32_t)L_123) < ((int32_t)L_124)))
		{
			goto IL_012c;
		}
	}
	{
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_125 = __this->____reader_5;
		int32_t L_126 = V_3;
		NullCheck(L_125);
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(L_125, (1.0f), 1, ((float)L_126), NULL);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_127 = V_1;
		NullCheck(L_127);
		VirtualActionInvoker0::Invoke(6 /* System.Void System.IO.BinaryReader::Close() */, L_127);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_128 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129;
		L_129 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_128);
		StlModel_set_LocalScale_m0709587074F69EEB1DCF2F639318F4C9BE86D840_inline(L_128, L_129, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_130 = V_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_131;
		L_131 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NullCheck(L_130);
		StlModel_set_LocalRotation_mE9C27ACA9705C49C2EEEEC359CF9195A0EADF5B9_inline(L_130, L_131, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_132 = V_6;
		NullCheck(L_132);
		StlModel_set_Visibility_m635AB4624DB7C9E08470800B07ABABD332AF0E01_inline(L_132, (bool)1, NULL);
		Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* L_133 = __this->____models_4;
		NullCheck(L_133);
		int32_t L_134;
		L_134 = Dictionary_2_get_Count_mF8582269BDE4C140C0B3D5C60BC07DC39DBA4C4F(L_133, Dictionary_2_get_Count_mF8582269BDE4C140C0B3D5C60BC07DC39DBA4C4F_RuntimeMethod_var);
		if ((!(((uint32_t)L_134) == ((uint32_t)1))))
		{
			goto IL_0349;
		}
	}
	{
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_135 = V_6;
		Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* L_136 = __this->____models_4;
		String_t* L_137 = __this->____lastGeometryGroupName_7;
		NullCheck(L_136);
		RuntimeObject* L_138;
		L_138 = Dictionary_2_get_Item_mA658433C78AF42331F861807619CE453560C8A96(L_136, L_137, Dictionary_2_get_Item_mA658433C78AF42331F861807619CE453560C8A96_RuntimeMethod_var);
		NullCheck(L_138);
		RuntimeObject* L_139;
		L_139 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(16 /* TriLibCore.Interfaces.IGeometryGroup TriLibCore.Interfaces.IModel::get_GeometryGroup() */, IModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB_il2cpp_TypeInfo_var, L_138);
		NullCheck(L_135);
		StlModel_set_GeometryGroup_m32211C6B2E30C396961F21D3E5E81B925AAA444E_inline(L_135, L_139, NULL);
		goto IL_0385;
	}

IL_0349:
	{
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_140 = V_6;
		Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* L_141 = __this->____models_4;
		NullCheck(L_141);
		ValueCollection_t52D0D70A98CDE4A09BB9B7D39C2159B31ECAE027* L_142;
		L_142 = Dictionary_2_get_Values_m56D477CD7C6E64384E53F8B4C44C151CB9CADA48(L_141, Dictionary_2_get_Values_m56D477CD7C6E64384E53F8B4C44C151CB9CADA48_RuntimeMethod_var);
		IModelU5BU5D_tE19C9CE57A4C086398F86D3E8410C416B390CC76* L_143;
		L_143 = Enumerable_ToArray_TisIModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB_m036D15DBE03F594018E148803BC38FF2FB06E146(L_142, Enumerable_ToArray_TisIModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB_m036D15DBE03F594018E148803BC38FF2FB06E146_RuntimeMethod_var);
		NullCheck(L_140);
		StlModel_set_Children_m8C26332902AFB18940DAB4060807171A0364EA1E_inline(L_140, (RuntimeObject*)L_143, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_144 = V_6;
		Dictionary_2_t905E5DC1FAFCAD1369228C7CD235A3242C23933D* L_145 = __this->____geometryGroups_3;
		NullCheck(L_145);
		ValueCollection_t06DE05054C61B3458F79E9A2C798D5812D926BA1* L_146;
		L_146 = Dictionary_2_get_Values_mEAF28F0B7E0954C8CF16C2FC21585C9CA1F27C79(L_145, Dictionary_2_get_Values_mEAF28F0B7E0954C8CF16C2FC21585C9CA1F27C79_RuntimeMethod_var);
		StlGeometryGroupU5BU5D_tDCFAA3EDF49B9F9FEAC62B179CB23851DCFE8EEB* L_147;
		L_147 = Enumerable_ToArray_TisStlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2_m5BE5B3204062AC07D37048B3E74576B2E2813ED6(L_146, Enumerable_ToArray_TisStlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2_m5BE5B3204062AC07D37048B3E74576B2E2813ED6_RuntimeMethod_var);
		NullCheck(L_144);
		StlRootModel_set_AllGeometryGroups_m6754461757172DBEB0986B7A916BBBFFDAD9E173_inline(L_144, (RuntimeObject*)L_147, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_148 = V_6;
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_149 = V_6;
		NullCheck(L_149);
		RuntimeObject* L_150;
		L_150 = StlModel_get_Children_mCC99BF668D976265E2897D884E1080A14B8219BB_inline(L_149, NULL);
		NullCheck(L_148);
		StlRootModel_set_AllModels_mED5ABBDE53F3952C9E492CC70CADE0692BA9A7BF_inline(L_148, L_150, NULL);
	}

IL_0385:
	{
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_151 = V_6;
		return L_151;
	}
}
// System.Void TriLibCore.Stl.StlProcessor::AddOutputVertex(TriLibCore.Stl.Reader.StlGeometryGroup,System.Int32,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlProcessor_AddOutputVertex_m0448044639B5A3585B7A2CDB8BFE88703D4FD387 (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* ___geometryGroup0, int32_t ___vertexIndex1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vertex2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Geometry_AddVertex_TisPositionNormalColorVertexData_t3B0C1CB04DDC0CB5FFBDE86BA1CB5E9A3FB380F4_m65CC12757C5C59782DC19A80BFFB829E38ABD9C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_0 = ___geometryGroup0;
		StlGeometry_t5B0D0CE30519F8725CABBDF0D0DB02921C5FDABF* L_1;
		L_1 = StlProcessor_GetActiveGeometry_m78D6AF02452CDA247B22C8547DD3F6D0B8766FDD(__this, L_0, (bool)0, NULL);
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_2 = __this->____reader_5;
		NullCheck(L_2);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_3;
		L_3 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_2, NULL);
		int32_t L_4 = ___vertexIndex1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___vertex2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->____facetNormal_12;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = __this->____facetColor_22;
		int32_t L_9 = ___vertexIndex1;
		PositionNormalColorVertexData_t3B0C1CB04DDC0CB5FFBDE86BA1CB5E9A3FB380F4 L_10;
		memset((&L_10), 0, sizeof(L_10));
		PositionNormalColorVertexData__ctor_m82C7773DEADADFCF5CBE504966FA243A515C57B7((&L_10), L_5, L_6, L_7, L_8, ((int32_t)(L_9/3)), /*hidden argument*/NULL);
		NullCheck(L_1);
		Geometry_AddVertex_TisPositionNormalColorVertexData_t3B0C1CB04DDC0CB5FFBDE86BA1CB5E9A3FB380F4_m65CC12757C5C59782DC19A80BFFB829E38ABD9C1(L_1, L_3, L_4, L_10, Geometry_AddVertex_TisPositionNormalColorVertexData_t3B0C1CB04DDC0CB5FFBDE86BA1CB5E9A3FB380F4_m65CC12757C5C59782DC19A80BFFB829E38ABD9C1_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.Vector3 TriLibCore.Stl.StlProcessor::ReadVector3(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 StlProcessor_ReadVector3_m9D7CCD5D671519356C4115E4BAD80E88EC86539C (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___binaryReader0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___binaryReader0;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_0);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = ___binaryReader0;
		NullCheck(L_2);
		float L_3;
		L_3 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_2);
		V_0 = L_3;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = ___binaryReader0;
		NullCheck(L_4);
		float L_5;
		L_5 = VirtualFuncInvoker0< float >::Invoke(20 /* System.Single System.IO.BinaryReader::ReadSingle() */, L_4);
		V_1 = L_5;
		float L_6 = V_1;
		float L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_1, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Vector3 TriLibCore.Stl.StlProcessor::ReadVector3(TriLibCore.Stl.StlStreamReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 StlProcessor_ReadVector3_m60D50A70CF4B3B8693F29FF96267DBF400EA0A5B (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* ___stlStreamReader0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_0 = ___stlStreamReader0;
		NullCheck(L_0);
		float L_1;
		L_1 = StlStreamReader_ReadTokenAsFloat_m30C508ABFBF8FF2F47629BCFFB53C042F4B7F551(L_0, (bool)1, NULL);
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_2 = ___stlStreamReader0;
		NullCheck(L_2);
		float L_3;
		L_3 = StlStreamReader_ReadTokenAsFloat_m30C508ABFBF8FF2F47629BCFFB53C042F4B7F551(L_2, (bool)1, NULL);
		V_0 = L_3;
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_4 = ___stlStreamReader0;
		NullCheck(L_4);
		float L_5;
		L_5 = StlStreamReader_ReadTokenAsFloat_m30C508ABFBF8FF2F47629BCFFB53C042F4B7F551(L_4, (bool)1, NULL);
		V_1 = L_5;
		float L_6 = V_1;
		float L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), L_1, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// TriLibCore.Interfaces.IRootModel TriLibCore.Stl.StlProcessor::ParseASCII(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlProcessor_ParseASCII_m297D902C12F8D0B07F75397F81C1BA6A82B918ED (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mF8582269BDE4C140C0B3D5C60BC07DC39DBA4C4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mA658433C78AF42331F861807619CE453560C8A96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m56D477CD7C6E64384E53F8B4C44C151CB9CADA48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mEAF28F0B7E0954C8CF16C2FC21585C9CA1F27C79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisIModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB_m036D15DBE03F594018E148803BC38FF2FB06E146_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisStlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2_m5BE5B3204062AC07D37048B3E74576B2E2813ED6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeometryGroup_1_get_VerticesData_m90A5BFB1A1F0F3ED0C7C889EDDEC7CD3C296DB3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t09990CB31AEE0CFE50A3176F9E78C65B17DB1E0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		s_Il2CppMethodInitialized = true;
	}
	StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* V_0 = NULL;
	int32_t V_1 = 0;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_2 = NULL;
	bool V_3 = false;
	StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* V_4 = NULL;
	int64_t V_5 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* V_8 = NULL;
	int32_t V_9 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	String_t* G_B11_0 = NULL;
	StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* G_B11_1 = NULL;
	String_t* G_B10_0 = NULL;
	StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* G_B10_1 = NULL;
	{
		__this->____loopNumber_11 = 0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_1 = (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5*)il2cpp_codegen_object_new(StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StlStreamReader__ctor_m1DC2CC738B9E91B86FE02E6BFD2FA36770C08BE2(L_1, L_0, NULL);
		V_0 = L_1;
		V_1 = 0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)3);
		V_2 = L_2;
		V_3 = (bool)0;
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_3 = (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142*)il2cpp_codegen_object_new(StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StlRootModel__ctor_mF3CCCD9F9A1339A398A4FA1EAA0D00B3AD7BB737(L_3, NULL);
		V_4 = L_3;
		goto IL_02c9;
	}

IL_0025:
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_4 = V_0;
		NullCheck(L_4);
		int64_t L_5;
		L_5 = StlStreamReader_ReadToken_m66B4713DAD087A09068A8EF495F3CA3FD9B16822(L_4, (bool)0, (bool)0, NULL);
		V_5 = L_5;
		int64_t L_6 = V_5;
		if ((((int64_t)L_6) > ((int64_t)((int64_t)-1367968407301361207LL))))
		{
			goto IL_0071;
		}
	}
	{
		int64_t L_7 = V_5;
		if ((((int64_t)L_7) == ((int64_t)((int64_t)-5513532493766152582LL))))
		{
			goto IL_014a;
		}
	}
	{
		int64_t L_8 = V_5;
		if ((((int64_t)L_8) == ((int64_t)((int64_t)-4898810643358303851LL))))
		{
			goto IL_015d;
		}
	}
	{
		int64_t L_9 = V_5;
		if ((((int64_t)L_9) == ((int64_t)((int64_t)-1367968407301361207LL))))
		{
			goto IL_017b;
		}
	}
	{
		goto IL_02c5;
	}

IL_0071:
	{
		int64_t L_10 = V_5;
		if ((((int64_t)L_10) == ((int64_t)((int64_t)7096547112153259250LL))))
		{
			goto IL_00bc;
		}
	}
	{
		int64_t L_11 = V_5;
		if ((((int64_t)L_11) == ((int64_t)((int64_t)7096547112162183094LL))))
		{
			goto IL_0119;
		}
	}
	{
		int64_t L_12 = V_5;
		if ((!(((uint64_t)L_12) == ((uint64_t)((int64_t)7096547112165690854LL)))))
		{
			goto IL_02c5;
		}
	}
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = StlStreamReader_ReadTokenAsString_m48318F7F8AD205DB62D73904EDFFD9EED1C7396D(L_13, (bool)0, (bool)1, NULL);
		String_t* L_15 = L_14;
		G_B10_0 = L_15;
		G_B10_1 = __this;
		if (L_15)
		{
			G_B11_0 = L_15;
			G_B11_1 = __this;
			goto IL_00b0;
		}
	}
	{
		G_B11_0 = _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044;
		G_B11_1 = G_B10_1;
	}

IL_00b0:
	{
		NullCheck(G_B11_1);
		G_B11_1->____groupName_6 = G_B11_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B11_1->____groupName_6), (void*)G_B11_0);
		V_3 = (bool)0;
		goto IL_02c9;
	}

IL_00bc:
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_16 = V_0;
		NullCheck(L_16);
		int64_t L_17;
		L_17 = StlStreamReader_ReadToken_m66B4713DAD087A09068A8EF495F3CA3FD9B16822(L_16, (bool)1, (bool)0, NULL);
		if ((((int64_t)L_17) == ((int64_t)((int64_t)-1367968407521166068LL))))
		{
			goto IL_00da;
		}
	}
	{
		Exception_t* L_18 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE21886A8FD3908720B58122F94229E548DD3A51F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StlProcessor_ParseASCII_m297D902C12F8D0B07F75397F81C1BA6A82B918ED_RuntimeMethod_var)));
	}

IL_00da:
	{
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_19 = __this->____reader_5;
		NullCheck(L_19);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_20;
		L_20 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_19, NULL);
		NullCheck(L_20);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_21 = L_20->___Options_0;
		NullCheck(L_21);
		bool L_22 = L_21->___ImportNormals_22;
		if (!L_22)
		{
			goto IL_0102;
		}
	}
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_23 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = StlProcessor_ReadVector3_m60D50A70CF4B3B8693F29FF96267DBF400EA0A5B(L_23, NULL);
		__this->____facetNormal_12 = L_24;
		goto IL_02c9;
	}

IL_0102:
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_25 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = StlProcessor_ReadVector3_m60D50A70CF4B3B8693F29FF96267DBF400EA0A5B(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->____facetNormal_12 = L_27;
		goto IL_02c9;
	}

IL_0119:
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_28 = V_0;
		NullCheck(L_28);
		int64_t L_29;
		L_29 = StlStreamReader_ReadToken_m66B4713DAD087A09068A8EF495F3CA3FD9B16822(L_28, (bool)1, (bool)0, NULL);
		if ((((int64_t)L_29) == ((int64_t)((int64_t)6774539739450461193LL))))
		{
			goto IL_0137;
		}
	}
	{
		Exception_t* L_30 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_30);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_30, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral795FA97334306AE47C0C9744A2642732E6FED22D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StlProcessor_ParseASCII_m297D902C12F8D0B07F75397F81C1BA6A82B918ED_RuntimeMethod_var)));
	}

IL_0137:
	{
		int32_t L_31 = __this->____loopNumber_11;
		__this->____loopNumber_11 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		goto IL_02c9;
	}

IL_014a:
	{
		int32_t L_32 = __this->____loopNumber_11;
		__this->____loopNumber_11 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
		goto IL_02c9;
	}

IL_015d:
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_33 = V_0;
		NullCheck(L_33);
		int64_t L_34;
		L_34 = StlStreamReader_ReadToken_m66B4713DAD087A09068A8EF495F3CA3FD9B16822(L_33, (bool)0, (bool)0, NULL);
		bool L_35 = V_3;
		if (L_35)
		{
			goto IL_02c9;
		}
	}
	{
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_36 = V_4;
		StlProcessor_AddModel_mD074A15E2C251A343E4D0B955563EE85DE37FAF8(__this, L_36, NULL);
		V_3 = (bool)1;
		goto IL_02c9;
	}

IL_017b:
	{
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_37 = __this->____reader_5;
		NullCheck(L_37);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_38;
		L_38 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_37, NULL);
		NullCheck(L_38);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_39 = L_38->___Options_0;
		NullCheck(L_39);
		bool L_40 = L_39->___ImportMeshes_10;
		if (!L_40)
		{
			goto IL_02c9;
		}
	}
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_41 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = StlProcessor_ReadVector3_m60D50A70CF4B3B8693F29FF96267DBF400EA0A5B(L_41, NULL);
		V_6 = L_42;
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_43 = __this->____reader_5;
		NullCheck(L_43);
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_44;
		L_44 = ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline(L_43, NULL);
		NullCheck(L_44);
		AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6* L_45 = L_44->___Options_0;
		NullCheck(L_45);
		float L_46 = L_45->___ScaleFactor_5;
		V_7 = L_46;
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_47;
		L_47 = StlProcessor_GetActiveGeometryGroup_m2BE506EEF7F03897061A0AF246F24D2376ACDD78(__this, NULL);
		V_8 = L_47;
		int32_t L_48 = V_1;
		int32_t L_49 = L_48;
		V_1 = ((int32_t)il2cpp_codegen_add(L_49, 1));
		V_9 = ((int32_t)(L_49%3));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_50 = V_2;
		int32_t L_51 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_6;
		float L_53 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_52, L_53, NULL);
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_51), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_54);
		int32_t L_55 = V_9;
		if ((!(((uint32_t)L_55) == ((uint32_t)2))))
		{
			goto IL_02c9;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_56 = V_2;
		NullCheck(L_56);
		int32_t L_57 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_59 = V_2;
		NullCheck(L_59);
		int32_t L_60 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_62 = V_2;
		NullCheck(L_62);
		int32_t L_63 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = StlProcessor_GetNormal_m73C3B5FAA18FBA92B56CB69B52B8371076C040DC(L_58, L_61, L_64, NULL);
		V_10 = L_65;
		bool L_66 = ((StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_StaticFields*)il2cpp_codegen_static_fields_for(StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A_il2cpp_TypeInfo_var))->___FixInfacingNormals_12;
		if (!L_66)
		{
			goto IL_0215;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = __this->____facetNormal_12;
		float L_69;
		L_69 = Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline(L_67, L_68, NULL);
		if ((!(((float)L_69) > ((float)(0.0f)))))
		{
			goto IL_0268;
		}
	}

IL_0215:
	{
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_70 = V_8;
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_71 = V_8;
		NullCheck(L_71);
		RuntimeObject* L_72;
		L_72 = GeometryGroup_1_get_VerticesData_m90A5BFB1A1F0F3ED0C7C889EDDEC7CD3C296DB3D_inline(L_71, GeometryGroup_1_get_VerticesData_m90A5BFB1A1F0F3ED0C7C889EDDEC7CD3C296DB3D_RuntimeMethod_var);
		NullCheck(L_72);
		int32_t L_73;
		L_73 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TriLibCore.Geometries.PositionNormalColorVertexData>::get_Count() */, ICollection_1_t09990CB31AEE0CFE50A3176F9E78C65B17DB1E0C_il2cpp_TypeInfo_var, L_72);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_74 = V_2;
		NullCheck(L_74);
		int32_t L_75 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		StlProcessor_AddOutputVertex_m0448044639B5A3585B7A2CDB8BFE88703D4FD387(__this, L_70, L_73, L_76, NULL);
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_77 = V_8;
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_78 = V_8;
		NullCheck(L_78);
		RuntimeObject* L_79;
		L_79 = GeometryGroup_1_get_VerticesData_m90A5BFB1A1F0F3ED0C7C889EDDEC7CD3C296DB3D_inline(L_78, GeometryGroup_1_get_VerticesData_m90A5BFB1A1F0F3ED0C7C889EDDEC7CD3C296DB3D_RuntimeMethod_var);
		NullCheck(L_79);
		int32_t L_80;
		L_80 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TriLibCore.Geometries.PositionNormalColorVertexData>::get_Count() */, ICollection_1_t09990CB31AEE0CFE50A3176F9E78C65B17DB1E0C_il2cpp_TypeInfo_var, L_79);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_81 = V_2;
		NullCheck(L_81);
		int32_t L_82 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		StlProcessor_AddOutputVertex_m0448044639B5A3585B7A2CDB8BFE88703D4FD387(__this, L_77, L_80, L_83, NULL);
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_84 = V_8;
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_85 = V_8;
		NullCheck(L_85);
		RuntimeObject* L_86;
		L_86 = GeometryGroup_1_get_VerticesData_m90A5BFB1A1F0F3ED0C7C889EDDEC7CD3C296DB3D_inline(L_85, GeometryGroup_1_get_VerticesData_m90A5BFB1A1F0F3ED0C7C889EDDEC7CD3C296DB3D_RuntimeMethod_var);
		NullCheck(L_86);
		int32_t L_87;
		L_87 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TriLibCore.Geometries.PositionNormalColorVertexData>::get_Count() */, ICollection_1_t09990CB31AEE0CFE50A3176F9E78C65B17DB1E0C_il2cpp_TypeInfo_var, L_86);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_88 = V_2;
		NullCheck(L_88);
		int32_t L_89 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		StlProcessor_AddOutputVertex_m0448044639B5A3585B7A2CDB8BFE88703D4FD387(__this, L_84, L_87, L_90, NULL);
		goto IL_02c9;
	}

IL_0268:
	{
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_91 = V_8;
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_92 = V_8;
		NullCheck(L_92);
		RuntimeObject* L_93;
		L_93 = GeometryGroup_1_get_VerticesData_m90A5BFB1A1F0F3ED0C7C889EDDEC7CD3C296DB3D_inline(L_92, GeometryGroup_1_get_VerticesData_m90A5BFB1A1F0F3ED0C7C889EDDEC7CD3C296DB3D_RuntimeMethod_var);
		NullCheck(L_93);
		int32_t L_94;
		L_94 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TriLibCore.Geometries.PositionNormalColorVertexData>::get_Count() */, ICollection_1_t09990CB31AEE0CFE50A3176F9E78C65B17DB1E0C_il2cpp_TypeInfo_var, L_93);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_95 = V_2;
		NullCheck(L_95);
		int32_t L_96 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		StlProcessor_AddOutputVertex_m0448044639B5A3585B7A2CDB8BFE88703D4FD387(__this, L_91, L_94, L_97, NULL);
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_98 = V_8;
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_99 = V_8;
		NullCheck(L_99);
		RuntimeObject* L_100;
		L_100 = GeometryGroup_1_get_VerticesData_m90A5BFB1A1F0F3ED0C7C889EDDEC7CD3C296DB3D_inline(L_99, GeometryGroup_1_get_VerticesData_m90A5BFB1A1F0F3ED0C7C889EDDEC7CD3C296DB3D_RuntimeMethod_var);
		NullCheck(L_100);
		int32_t L_101;
		L_101 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TriLibCore.Geometries.PositionNormalColorVertexData>::get_Count() */, ICollection_1_t09990CB31AEE0CFE50A3176F9E78C65B17DB1E0C_il2cpp_TypeInfo_var, L_100);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_102 = V_2;
		NullCheck(L_102);
		int32_t L_103 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		StlProcessor_AddOutputVertex_m0448044639B5A3585B7A2CDB8BFE88703D4FD387(__this, L_98, L_101, L_104, NULL);
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_105 = V_8;
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_106 = V_8;
		NullCheck(L_106);
		RuntimeObject* L_107;
		L_107 = GeometryGroup_1_get_VerticesData_m90A5BFB1A1F0F3ED0C7C889EDDEC7CD3C296DB3D_inline(L_106, GeometryGroup_1_get_VerticesData_m90A5BFB1A1F0F3ED0C7C889EDDEC7CD3C296DB3D_RuntimeMethod_var);
		NullCheck(L_107);
		int32_t L_108;
		L_108 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TriLibCore.Geometries.PositionNormalColorVertexData>::get_Count() */, ICollection_1_t09990CB31AEE0CFE50A3176F9E78C65B17DB1E0C_il2cpp_TypeInfo_var, L_107);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_109 = V_2;
		NullCheck(L_109);
		int32_t L_110 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		StlProcessor_AddOutputVertex_m0448044639B5A3585B7A2CDB8BFE88703D4FD387(__this, L_105, L_108, L_111, NULL);
		goto IL_02c9;
	}

IL_02bb:
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_112 = V_0;
		NullCheck(L_112);
		int64_t L_113;
		L_113 = StlStreamReader_ReadToken_m66B4713DAD087A09068A8EF495F3CA3FD9B16822(L_112, (bool)0, (bool)0, NULL);
		V_5 = L_113;
	}

IL_02c5:
	{
		int64_t L_114 = V_5;
		if (L_114)
		{
			goto IL_02bb;
		}
	}

IL_02c9:
	{
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_115 = V_0;
		NullCheck(L_115);
		bool L_116;
		L_116 = StreamReader_get_EndOfStream_mAE054431BF21158178EAA2A6872F14A9ED6A3C3E(L_115, NULL);
		if (!L_116)
		{
			goto IL_0025;
		}
	}
	{
		StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* L_117 = __this->____reader_5;
		NullCheck(L_117);
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(L_117, (1.0f), 0, (0.0f), NULL);
		StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* L_118 = V_0;
		NullCheck(L_118);
		VirtualActionInvoker0::Invoke(7 /* System.Void System.IO.TextReader::Close() */, L_118);
		bool L_119 = V_3;
		if (L_119)
		{
			goto IL_02fb;
		}
	}
	{
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_120 = V_4;
		StlProcessor_AddModel_mD074A15E2C251A343E4D0B955563EE85DE37FAF8(__this, L_120, NULL);
	}

IL_02fb:
	{
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_121 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122;
		L_122 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_121);
		StlModel_set_LocalScale_m0709587074F69EEB1DCF2F639318F4C9BE86D840_inline(L_121, L_122, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_123 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_124;
		L_124 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NullCheck(L_123);
		StlModel_set_LocalRotation_mE9C27ACA9705C49C2EEEEC359CF9195A0EADF5B9_inline(L_123, L_124, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_125 = V_4;
		NullCheck(L_125);
		StlModel_set_Visibility_m635AB4624DB7C9E08470800B07ABABD332AF0E01_inline(L_125, (bool)1, NULL);
		Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* L_126 = __this->____models_4;
		NullCheck(L_126);
		int32_t L_127;
		L_127 = Dictionary_2_get_Count_mF8582269BDE4C140C0B3D5C60BC07DC39DBA4C4F(L_126, Dictionary_2_get_Count_mF8582269BDE4C140C0B3D5C60BC07DC39DBA4C4F_RuntimeMethod_var);
		if ((!(((uint32_t)L_127) == ((uint32_t)1))))
		{
			goto IL_0348;
		}
	}
	{
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_128 = V_4;
		Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* L_129 = __this->____models_4;
		String_t* L_130 = __this->____lastGeometryGroupName_7;
		NullCheck(L_129);
		RuntimeObject* L_131;
		L_131 = Dictionary_2_get_Item_mA658433C78AF42331F861807619CE453560C8A96(L_129, L_130, Dictionary_2_get_Item_mA658433C78AF42331F861807619CE453560C8A96_RuntimeMethod_var);
		NullCheck(L_131);
		RuntimeObject* L_132;
		L_132 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(16 /* TriLibCore.Interfaces.IGeometryGroup TriLibCore.Interfaces.IModel::get_GeometryGroup() */, IModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB_il2cpp_TypeInfo_var, L_131);
		NullCheck(L_128);
		StlModel_set_GeometryGroup_m32211C6B2E30C396961F21D3E5E81B925AAA444E_inline(L_128, L_132, NULL);
		goto IL_0384;
	}

IL_0348:
	{
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_133 = V_4;
		Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* L_134 = __this->____models_4;
		NullCheck(L_134);
		ValueCollection_t52D0D70A98CDE4A09BB9B7D39C2159B31ECAE027* L_135;
		L_135 = Dictionary_2_get_Values_m56D477CD7C6E64384E53F8B4C44C151CB9CADA48(L_134, Dictionary_2_get_Values_m56D477CD7C6E64384E53F8B4C44C151CB9CADA48_RuntimeMethod_var);
		IModelU5BU5D_tE19C9CE57A4C086398F86D3E8410C416B390CC76* L_136;
		L_136 = Enumerable_ToArray_TisIModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB_m036D15DBE03F594018E148803BC38FF2FB06E146(L_135, Enumerable_ToArray_TisIModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB_m036D15DBE03F594018E148803BC38FF2FB06E146_RuntimeMethod_var);
		NullCheck(L_133);
		StlModel_set_Children_m8C26332902AFB18940DAB4060807171A0364EA1E_inline(L_133, (RuntimeObject*)L_136, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_137 = V_4;
		Dictionary_2_t905E5DC1FAFCAD1369228C7CD235A3242C23933D* L_138 = __this->____geometryGroups_3;
		NullCheck(L_138);
		ValueCollection_t06DE05054C61B3458F79E9A2C798D5812D926BA1* L_139;
		L_139 = Dictionary_2_get_Values_mEAF28F0B7E0954C8CF16C2FC21585C9CA1F27C79(L_138, Dictionary_2_get_Values_mEAF28F0B7E0954C8CF16C2FC21585C9CA1F27C79_RuntimeMethod_var);
		StlGeometryGroupU5BU5D_tDCFAA3EDF49B9F9FEAC62B179CB23851DCFE8EEB* L_140;
		L_140 = Enumerable_ToArray_TisStlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2_m5BE5B3204062AC07D37048B3E74576B2E2813ED6(L_139, Enumerable_ToArray_TisStlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2_m5BE5B3204062AC07D37048B3E74576B2E2813ED6_RuntimeMethod_var);
		NullCheck(L_137);
		StlRootModel_set_AllGeometryGroups_m6754461757172DBEB0986B7A916BBBFFDAD9E173_inline(L_137, (RuntimeObject*)L_140, NULL);
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_141 = V_4;
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_142 = V_4;
		NullCheck(L_142);
		RuntimeObject* L_143;
		L_143 = StlModel_get_Children_mCC99BF668D976265E2897D884E1080A14B8219BB_inline(L_142, NULL);
		NullCheck(L_141);
		StlRootModel_set_AllModels_mED5ABBDE53F3952C9E492CC70CADE0692BA9A7BF_inline(L_141, L_143, NULL);
	}

IL_0384:
	{
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_144 = V_4;
		return L_144;
	}
}
// System.Void TriLibCore.Stl.StlProcessor::AddModel(TriLibCore.Interfaces.IModel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlProcessor_AddModel_mD074A15E2C251A343E4D0B955563EE85DE37FAF8 (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, RuntimeObject* ___parent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m53D84560875155F383C73DA9027DE4CC7AC985D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeometryGroup_1_get_Name_mD09F37F9ADCF0BCC1CAC2CC96CBC03CA98598563_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* V_0 = NULL;
	StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* V_1 = NULL;
	{
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_0;
		L_0 = StlProcessor_GetActiveGeometryGroup_m2BE506EEF7F03897061A0AF246F24D2376ACDD78(__this, NULL);
		V_0 = L_0;
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_1 = (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA*)il2cpp_codegen_object_new(StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StlModel__ctor_m6E2FE456538DB2C0EB1C98D3144C193CF6157D1C(L_1, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_2);
		StlModel_set_LocalScale_m0709587074F69EEB1DCF2F639318F4C9BE86D840_inline(L_2, L_3, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_4 = L_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		NullCheck(L_4);
		StlModel_set_LocalRotation_mE9C27ACA9705C49C2EEEEC359CF9195A0EADF5B9_inline(L_4, L_5, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_6 = L_4;
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_7 = V_0;
		NullCheck(L_6);
		StlModel_set_GeometryGroup_m32211C6B2E30C396961F21D3E5E81B925AAA444E_inline(L_6, L_7, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_8 = L_6;
		StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = GeometryGroup_1_get_Name_mD09F37F9ADCF0BCC1CAC2CC96CBC03CA98598563_inline(L_9, GeometryGroup_1_get_Name_mD09F37F9ADCF0BCC1CAC2CC96CBC03CA98598563_RuntimeMethod_var);
		NullCheck(L_8);
		StlModel_set_Name_mF8213C9BAD85BC9320C876C41ABBF594327F2814_inline(L_8, L_10, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_11 = L_8;
		NullCheck(L_11);
		StlModel_set_Visibility_m635AB4624DB7C9E08470800B07ABABD332AF0E01_inline(L_11, (bool)1, NULL);
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_12 = L_11;
		RuntimeObject* L_13 = ___parent0;
		NullCheck(L_12);
		StlModel_set_Parent_m5FFEE1518EF3F12F1378AECEAEB41466CCA20DCE_inline(L_12, L_13, NULL);
		V_1 = L_12;
		Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* L_14 = __this->____models_4;
		String_t* L_15 = __this->____groupName_6;
		StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* L_16 = V_1;
		NullCheck(L_14);
		Dictionary_2_Add_m53D84560875155F383C73DA9027DE4CC7AC985D5(L_14, L_15, L_16, Dictionary_2_Add_m53D84560875155F383C73DA9027DE4CC7AC985D5_RuntimeMethod_var);
		return;
	}
}
// System.Boolean TriLibCore.Stl.StlProcessor::IsBinary(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StlProcessor_IsBinary_mE4F7A97BD80A074EFD7A1AE76A80F058DFE85742 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
	}

IL_0002:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(35 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)32))))
		{
			goto IL_0002;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)13))))
		{
			goto IL_0002;
		}
	}
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)10))))
		{
			goto IL_0002;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)9))))
		{
			goto IL_0002;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0023:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = ___stream0;
		NullCheck(L_7);
		int64_t L_8;
		L_8 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(31 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_7, ((int64_t)0), 0);
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Void TriLibCore.Stl.StlProcessor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlProcessor__ctor_m900A44553FC03D3F3F05833E176C5456FF72A390 (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5506E0DCECF49F29806DBE66FA8FBD4C28AACC38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5F5C68AF90E49C38EB7E07DDE14E85B7C3875390_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t905E5DC1FAFCAD1369228C7CD235A3242C23933D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t905E5DC1FAFCAD1369228C7CD235A3242C23933D* L_0 = (Dictionary_2_t905E5DC1FAFCAD1369228C7CD235A3242C23933D*)il2cpp_codegen_object_new(Dictionary_2_t905E5DC1FAFCAD1369228C7CD235A3242C23933D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m5506E0DCECF49F29806DBE66FA8FBD4C28AACC38(L_0, Dictionary_2__ctor_m5506E0DCECF49F29806DBE66FA8FBD4C28AACC38_RuntimeMethod_var);
		__this->____geometryGroups_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____geometryGroups_3), (void*)L_0);
		Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B* L_1 = (Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B*)il2cpp_codegen_object_new(Dictionary_2_tCD882897E065F2BF6F3F9878D136A63B57927F5B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m5F5C68AF90E49C38EB7E07DDE14E85B7C3875390(L_1, Dictionary_2__ctor_m5F5C68AF90E49C38EB7E07DDE14E85B7C3875390_RuntimeMethod_var);
		__this->____models_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____models_4), (void*)L_1);
		__this->____groupName_6 = _stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____groupName_6), (void*)_stringLiteral6F5EC7239B41C242FCB23B64D91DA0070FC1C044);
		__this->____lastLoopNumber_8 = (-1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->____partColor_21 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline(NULL);
		__this->____facetColor_22 = L_3;
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
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Stl.StlRootModel::get_AllModels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlRootModel_get_AllModels_m7B400E2A938FBA1B713F5B638F4D4E5DD1F41320 (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAllModelsU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlRootModel::set_AllModels(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlRootModel_set_AllModels_mED5ABBDE53F3952C9E492CC70CADE0692BA9A7BF (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllModelsU3Ek__BackingField_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllModelsU3Ek__BackingField_14), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IGeometryGroup> TriLibCore.Stl.StlRootModel::get_AllGeometryGroups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlRootModel_get_AllGeometryGroups_m894A6349DF34C591526ED2C3C6E518769A460D57 (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAllGeometryGroupsU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlRootModel::set_AllGeometryGroups(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IGeometryGroup>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlRootModel_set_AllGeometryGroups_m6754461757172DBEB0986B7A916BBBFFDAD9E173 (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllGeometryGroupsU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllGeometryGroupsU3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimation> TriLibCore.Stl.StlRootModel::get_AllAnimations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlRootModel_get_AllAnimations_m983D6197DF21C9AFC9C4ED531E3C3D15CE29A43F (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAllAnimationsU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlRootModel::set_AllAnimations(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlRootModel_set_AllAnimations_mF3974A24AAF1B9E02553DB61087FC2B444AB6B16 (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllAnimationsU3Ek__BackingField_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllAnimationsU3Ek__BackingField_16), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IMaterial> TriLibCore.Stl.StlRootModel::get_AllMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlRootModel_get_AllMaterials_m369A2E061EEEBB5FA02C4C55D3E6CAC8536D4677 (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAllMaterialsU3Ek__BackingField_17;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlRootModel::set_AllMaterials(System.Collections.Generic.IList`1<TriLibCore.Interfaces.IMaterial>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlRootModel_set_AllMaterials_mB225832F17CF5D1032E1916BB6FACA683EDB2E84 (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllMaterialsU3Ek__BackingField_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllMaterialsU3Ek__BackingField_17), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ITexture> TriLibCore.Stl.StlRootModel::get_AllTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlRootModel_get_AllTextures_m43171DBA9C24AB03600029495AF55C695B14C930 (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAllTexturesU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlRootModel::set_AllTextures(System.Collections.Generic.IList`1<TriLibCore.Interfaces.ITexture>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlRootModel_set_AllTextures_mC60F360CDA417F4354120731CD90A23491BDA6C3 (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllTexturesU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllTexturesU3Ek__BackingField_18), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ICamera> TriLibCore.Stl.StlRootModel::get_AllCameras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlRootModel_get_AllCameras_m75A7DE8FE24C05CA5C891F1CED351704E86CB7BF (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAllCamerasU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlRootModel::set_AllCameras(System.Collections.Generic.IList`1<TriLibCore.Interfaces.ICamera>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlRootModel_set_AllCameras_m2E66426E7AB81C6911695E7B947735D484DB9431 (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllCamerasU3Ek__BackingField_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllCamerasU3Ek__BackingField_19), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ILight> TriLibCore.Stl.StlRootModel::get_AllLights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlRootModel_get_AllLights_m2BE07C476BA4C56E4167C5C2A1D7449E6F60AEBD (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAllLightsU3Ek__BackingField_20;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlRootModel::set_AllLights(System.Collections.Generic.IList`1<TriLibCore.Interfaces.ILight>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlRootModel_set_AllLights_m44C346619F80A9FCFA5979F3BF8033F020FE68A2 (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllLightsU3Ek__BackingField_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllLightsU3Ek__BackingField_20), (void*)L_0);
		return;
	}
}
// System.Void TriLibCore.Stl.StlRootModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlRootModel__ctor_mF3CCCD9F9A1339A398A4FA1EAA0D00B3AD7BB737 (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, const RuntimeMethod* method) 
{
	{
		StlModel__ctor_m6E2FE456538DB2C0EB1C98D3144C193CF6157D1C(__this, NULL);
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
// System.Int32 TriLibCore.Stl.StlStreamReader::get_Line()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StlStreamReader_get_Line_mE94255EEFEFED4D8DED8AE024CE752F78FD174EC (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLineU3Ek__BackingField_25;
		return L_0;
	}
}
// System.Void TriLibCore.Stl.StlStreamReader::set_Line(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlStreamReader_set_Line_mBAF946CC6C4CB5BDC48AC3D5050570286FD0C628 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLineU3Ek__BackingField_25 = L_0;
		return;
	}
}
// System.Int32 TriLibCore.Stl.StlStreamReader::get_Column()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StlStreamReader_get_Column_m78B316197DD99FD46120765F960B450AA0260A91 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0;
		L_0 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(18 /* System.IO.Stream System.IO.StreamReader::get_BaseStream() */, __this);
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		int32_t L_2 = __this->____endOfLinePointer_22;
		return ((int32_t)((int64_t)il2cpp_codegen_subtract(L_1, ((int64_t)L_2))));
	}
}
// System.Single TriLibCore.Stl.StlStreamReader::ReadTokenAsFloat(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float StlStreamReader_ReadTokenAsFloat_m30C508ABFBF8FF2F47629BCFFB53C042F4B7F551 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, bool ___required0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		bool L_0 = ___required0;
		int64_t L_1;
		L_1 = StlStreamReader_ReadToken_m66B4713DAD087A09068A8EF495F3CA3FD9B16822(__this, L_0, (bool)0, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		return (-1.0f);
	}

IL_0010:
	{
		bool L_2;
		L_2 = StlStreamReader_GetTokenAsFloat_mAA1D75FACB25386AF1A9ED7210239ED0369EDD3F(__this, (&V_0), NULL);
		if (L_2)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_3;
		L_3 = StlStreamReader_get_Line_mE94255EEFEFED4D8DED8AE024CE752F78FD174EC_inline(__this, NULL);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		int32_t L_6;
		L_6 = StlStreamReader_get_Column_m78B316197DD99FD46120765F960B450AA0260A91(__this, NULL);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_7);
		String_t* L_9;
		L_9 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E84C7CBF5EA8FD2E1EDA86178896A7CB3F34B81)), L_5, L_8, NULL);
		Exception_t* L_10 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StlStreamReader_ReadTokenAsFloat_m30C508ABFBF8FF2F47629BCFFB53C042F4B7F551_RuntimeMethod_var)));
	}

IL_0040:
	{
		float L_11 = V_0;
		return L_11;
	}
}
// System.String TriLibCore.Stl.StlStreamReader::ReadTokenAsString(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StlStreamReader_ReadTokenAsString_m48318F7F8AD205DB62D73904EDFFD9EED1C7396D (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, bool ___required0, bool ___ignoreSpaces1, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___required0;
		bool L_1 = ___ignoreSpaces1;
		int64_t L_2;
		L_2 = StlStreamReader_ReadToken_m66B4713DAD087A09068A8EF495F3CA3FD9B16822(__this, L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_3;
		L_3 = StlStreamReader_GetTokenAsString_m3B5F90A8A2E6492B1F50E55127380D3CB334E611(__this, NULL);
		return L_3;
	}

IL_0011:
	{
		return (String_t*)NULL;
	}
}
// System.Boolean TriLibCore.Stl.StlStreamReader::TokenStartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StlStreamReader_TokenStartsWith_mA82610E51F82E2B87E0ADE90E499875143738B38 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___value0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = __this->____charStream_23;
		NullCheck(L_2);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		V_0 = 0;
		goto IL_002d;
	}

IL_0016:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = __this->____charStream_23;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint16_t L_6 = (uint16_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		String_t* L_7 = ___value0;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		Il2CppChar L_9;
		L_9 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, L_8, NULL);
		if ((((int32_t)L_6) == ((int32_t)L_9)))
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		int32_t L_11 = V_0;
		String_t* L_12 = ___value0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0016;
		}
	}
	{
		return (bool)1;
	}
}
// System.Int32 TriLibCore.Stl.StlStreamReader::GetCharAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StlStreamReader_GetCharAt_m25F369E411A67D8A5D9B05DAB07A212085346505 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->____charStream_23;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
// System.String TriLibCore.Stl.StlStreamReader::GetTokenAsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StlStreamReader_GetTokenAsString_m3B5F90A8A2E6492B1F50E55127380D3CB334E611 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->____charStream_23;
		int32_t L_1 = __this->____charPosition_24;
		String_t* L_2;
		L_2 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_0, 0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean TriLibCore.Stl.StlStreamReader::GetTokenAsFloat(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StlStreamReader_GetTokenAsFloat_mAA1D75FACB25386AF1A9ED7210239ED0369EDD3F (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, float* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->____charStream_23;
		int32_t L_1 = __this->____charPosition_24;
		String_t* L_2;
		L_2 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_0, 0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3;
		L_3 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		float* L_4 = ___value0;
		bool L_5;
		L_5 = Single_TryParse_m5920BF3A60EE1FFF0CC117021B4BF2A8114D1AE5(L_2, ((int32_t)511), L_3, L_4, NULL);
		return L_5;
	}
}
// System.Boolean TriLibCore.Stl.StlStreamReader::GetTokenAsInt(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StlStreamReader_GetTokenAsInt_m4C6E688A16834814001B55475E31CBF196856775 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, int32_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->____charStream_23;
		int32_t L_1 = __this->____charPosition_24;
		String_t* L_2;
		L_2 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_0, 0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3;
		L_3 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		int32_t* L_4 = ___value0;
		bool L_5;
		L_5 = Int32_TryParse_m3CB3A8252B2254BF929D207AFA9F2CD4DA3E3F79(L_2, ((int32_t)511), L_3, L_4, NULL);
		return L_5;
	}
}
// System.Int64 TriLibCore.Stl.StlStreamReader::ReadToken(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StlStreamReader_ReadToken_m66B4713DAD087A09068A8EF495F3CA3FD9B16822 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, bool ___required0, bool ___ignoreSpaces1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	int32_t V_4 = 0;
	Il2CppChar V_5 = 0x0;
	int32_t V_6 = 0;
	int32_t G_B13_0 = 0;
	{
		__this->____charPosition_24 = 0;
		V_0 = (bool)1;
		V_1 = (bool)0;
		goto IL_005b;
	}

IL_000d:
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, __this);
		V_2 = L_0;
		int32_t L_1 = V_2;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_2 = V_2;
		V_3 = ((int32_t)(uint16_t)L_2);
		Il2CppChar L_3 = V_3;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, ((int32_t)9))))
		{
			case 0:
			{
				goto IL_004c;
			}
			case 1:
			{
				goto IL_003f;
			}
			case 2:
			{
				goto IL_0055;
			}
			case 3:
			{
				goto IL_0055;
			}
			case 4:
			{
				goto IL_004c;
			}
		}
	}
	{
		Il2CppChar L_4 = V_3;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)32))))
		{
			goto IL_004c;
		}
	}
	{
		goto IL_0055;
	}

IL_003f:
	{
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, __this);
		V_1 = (bool)1;
		V_0 = (bool)0;
		goto IL_005b;
	}

IL_004c:
	{
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, __this);
		goto IL_005b;
	}

IL_0055:
	{
		V_0 = (bool)0;
		goto IL_005b;
	}

IL_0059:
	{
		V_0 = (bool)0;
	}

IL_005b:
	{
		bool L_7 = V_0;
		if (L_7)
		{
			goto IL_000d;
		}
	}
	{
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_006c;
		}
	}
	{
		bool L_9;
		L_9 = StreamReader_get_EndOfStream_mAE054431BF21158178EAA2A6872F14A9ED6A3C3E(__this, NULL);
		G_B13_0 = ((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		goto IL_006d;
	}

IL_006c:
	{
		G_B13_0 = 0;
	}

IL_006d:
	{
		V_0 = (bool)G_B13_0;
		goto IL_0110;
	}

IL_0073:
	{
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, __this);
		V_4 = L_10;
		int32_t L_11 = V_4;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_010e;
		}
	}
	{
		int32_t L_12 = V_4;
		V_5 = ((int32_t)(uint16_t)L_12);
		Il2CppChar L_13 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_13, ((int32_t)9))))
		{
			case 0:
			{
				goto IL_00bb;
			}
			case 1:
			{
				goto IL_00ae;
			}
			case 2:
			{
				goto IL_00e8;
			}
			case 3:
			{
				goto IL_00e8;
			}
			case 4:
			{
				goto IL_00b2;
			}
		}
	}
	{
		Il2CppChar L_14 = V_5;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)32))))
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00e8;
	}

IL_00ae:
	{
		V_0 = (bool)0;
		goto IL_0110;
	}

IL_00b2:
	{
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, __this);
		goto IL_0110;
	}

IL_00bb:
	{
		bool L_16 = ___ignoreSpaces1;
		if (!L_16)
		{
			goto IL_00e4;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = __this->____charStream_23;
		int32_t L_18 = __this->____charPosition_24;
		V_6 = L_18;
		int32_t L_19 = V_6;
		__this->____charPosition_24 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = V_6;
		Il2CppChar L_21 = V_5;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (Il2CppChar)L_21);
		int32_t L_22;
		L_22 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, __this);
		goto IL_0110;
	}

IL_00e4:
	{
		V_0 = (bool)0;
		goto IL_0110;
	}

IL_00e8:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_23 = __this->____charStream_23;
		int32_t L_24 = __this->____charPosition_24;
		V_6 = L_24;
		int32_t L_25 = V_6;
		__this->____charPosition_24 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		int32_t L_26 = V_6;
		Il2CppChar L_27 = V_5;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (Il2CppChar)L_27);
		int32_t L_28;
		L_28 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, __this);
		goto IL_0110;
	}

IL_010e:
	{
		V_0 = (bool)0;
	}

IL_0110:
	{
		bool L_29 = V_0;
		if (L_29)
		{
			goto IL_0073;
		}
	}
	{
		bool L_30 = ___required0;
		if (!L_30)
		{
			goto IL_0147;
		}
	}
	{
		int32_t L_31 = __this->____charPosition_24;
		if (L_31)
		{
			goto IL_0147;
		}
	}
	{
		int32_t L_32;
		L_32 = StlStreamReader_get_Line_mE94255EEFEFED4D8DED8AE024CE752F78FD174EC_inline(__this, NULL);
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_33);
		int32_t L_35;
		L_35 = StlStreamReader_get_Column_m78B316197DD99FD46120765F960B450AA0260A91(__this, NULL);
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_36);
		String_t* L_38;
		L_38 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3063F5F4FAEA0002A9B169DA0D12D52AC6312C1A)), L_34, L_37, NULL);
		Exception_t* L_39 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_39);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_39, L_38, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StlStreamReader_ReadToken_m66B4713DAD087A09068A8EF495F3CA3FD9B16822_RuntimeMethod_var)));
	}

IL_0147:
	{
		int32_t L_40 = __this->____charPosition_24;
		if (!L_40)
		{
			goto IL_0161;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_41 = __this->____charStream_23;
		int32_t L_42 = __this->____charPosition_24;
		int64_t L_43;
		L_43 = HashUtils_GetHash_mA2072A3113F446FBB34B926271575984459E0B0C((RuntimeObject*)L_41, L_42, NULL);
		return L_43;
	}

IL_0161:
	{
		return ((int64_t)0);
	}
}
// System.Void TriLibCore.Stl.StlStreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlStreamReader__ctor_m1DC2CC738B9E91B86FE02E6BFD2FA36770C08BE2 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->____charStream_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charStream_23), (void*)L_0);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___stream0;
		il2cpp_codegen_runtime_class_init_inline(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(__this, L_1, NULL);
		return;
	}
}
// System.Void TriLibCore.Stl.StlStreamReader::.ctor(System.IO.Stream,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlStreamReader__ctor_m034B0FC2FA03335804B0CA1E4543333C6D55F5D2 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, bool ___detectEncodingFromByteOrderMarks1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->____charStream_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charStream_23), (void*)L_0);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___stream0;
		bool L_2 = ___detectEncodingFromByteOrderMarks1;
		il2cpp_codegen_runtime_class_init_inline(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		StreamReader__ctor_m8ADB6C6B363A2B58B9BC3CB1939A1BABE0BF064A(__this, L_1, L_2, NULL);
		return;
	}
}
// System.Void TriLibCore.Stl.StlStreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlStreamReader__ctor_m439C0BC91DA0056CFE99333A3F46003F3BA249FA (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->____charStream_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charStream_23), (void*)L_0);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___stream0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2 = ___encoding1;
		il2cpp_codegen_runtime_class_init_inline(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		StreamReader__ctor_m7712DDC735E99B6833E2666ADFD8A06CB96A58B1(__this, L_1, L_2, NULL);
		return;
	}
}
// System.Void TriLibCore.Stl.StlStreamReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlStreamReader__ctor_m32AD5AE244673E0BC38ADAD24556915A774A89F8 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, bool ___detectEncodingFromByteOrderMarks2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->____charStream_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charStream_23), (void*)L_0);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___stream0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2 = ___encoding1;
		bool L_3 = ___detectEncodingFromByteOrderMarks2;
		il2cpp_codegen_runtime_class_init_inline(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		StreamReader__ctor_mE4095A4D9B6E2E82E95CE884443A51635849A740(__this, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void TriLibCore.Stl.StlStreamReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlStreamReader__ctor_m91248D2367CA954255DC01B02F049CC8771E9669 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, bool ___detectEncodingFromByteOrderMarks2, int32_t ___bufferSize3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->____charStream_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charStream_23), (void*)L_0);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___stream0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2 = ___encoding1;
		bool L_3 = ___detectEncodingFromByteOrderMarks2;
		int32_t L_4 = ___bufferSize3;
		il2cpp_codegen_runtime_class_init_inline(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		StreamReader__ctor_mD3E001CD426B3FE451FFA32E7070E34AC1756673(__this, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void TriLibCore.Stl.StlStreamReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlStreamReader__ctor_mCA067EB4C12A2A6CBC25626D9FA7B2D91120B776 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, String_t* ___path0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->____charStream_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charStream_23), (void*)L_0);
		String_t* L_1 = ___path0;
		il2cpp_codegen_runtime_class_init_inline(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		StreamReader__ctor_m08BA7049EACE030ACE06AB8A8F2CDF2E2AFB55C6(__this, L_1, NULL);
		return;
	}
}
// System.Void TriLibCore.Stl.StlStreamReader::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlStreamReader__ctor_m3A735D43486C306A2273D84EE67B895D4FACCF03 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, String_t* ___path0, bool ___detectEncodingFromByteOrderMarks1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->____charStream_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charStream_23), (void*)L_0);
		String_t* L_1 = ___path0;
		bool L_2 = ___detectEncodingFromByteOrderMarks1;
		il2cpp_codegen_runtime_class_init_inline(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		StreamReader__ctor_m0AD738DDCB9A0DE0DFD3DB6B2FE44A41C1EAE677(__this, L_1, L_2, NULL);
		return;
	}
}
// System.Void TriLibCore.Stl.StlStreamReader::.ctor(System.String,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlStreamReader__ctor_mE73A348052046582BB63BFA2C531243D92703C81 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, String_t* ___path0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->____charStream_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charStream_23), (void*)L_0);
		String_t* L_1 = ___path0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2 = ___encoding1;
		il2cpp_codegen_runtime_class_init_inline(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		StreamReader__ctor_m3C693DE567FB306355ECD44489F58699105DDE43(__this, L_1, L_2, NULL);
		return;
	}
}
// System.Void TriLibCore.Stl.StlStreamReader::.ctor(System.String,System.Text.Encoding,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlStreamReader__ctor_mA0A64140AFA965AD7ED23BBEB39083ECFCCF11D8 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, String_t* ___path0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, bool ___detectEncodingFromByteOrderMarks2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->____charStream_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charStream_23), (void*)L_0);
		String_t* L_1 = ___path0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2 = ___encoding1;
		bool L_3 = ___detectEncodingFromByteOrderMarks2;
		il2cpp_codegen_runtime_class_init_inline(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		StreamReader__ctor_mB946592899E393BDD06A093CA3BB87180A590449(__this, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void TriLibCore.Stl.StlStreamReader::.ctor(System.String,System.Text.Encoding,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlStreamReader__ctor_mD9FB81837EDD35FDEA4EBEEF111A39F0A01E8D83 (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, String_t* ___path0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, bool ___detectEncodingFromByteOrderMarks2, int32_t ___bufferSize3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->____charStream_23 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charStream_23), (void*)L_0);
		String_t* L_1 = ___path0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_2 = ___encoding1;
		bool L_3 = ___detectEncodingFromByteOrderMarks2;
		int32_t L_4 = ___bufferSize3;
		il2cpp_codegen_runtime_class_init_inline(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		StreamReader__ctor_mA95373EEF162CF396A1A20CDF039B29AA2D634EF(__this, L_1, L_2, L_3, L_4, NULL);
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
// System.Void TriLibCore.Stl.Reader.StlGeometryGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlGeometryGroup__ctor_mD859B095ED8F9FAAF47A8A34955F3AF5BC81D532 (StlGeometryGroup_tC4C086B7428D6920ACA0E2AC1BB3CDC78C96F4A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeometryGroup_1__ctor_m3FD15BB5ACAA8CEFBE862588F2A137241EEF61B5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		GeometryGroup_1__ctor_m3FD15BB5ACAA8CEFBE862588F2A137241EEF61B5(__this, GeometryGroup_1__ctor_m3FD15BB5ACAA8CEFBE862588F2A137241EEF61B5_RuntimeMethod_var);
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
// System.String[] TriLibCore.Stl.Reader.StlReader::GetExtensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* StlReader_GetExtensions_mB2DA064F5DA84ED2ECE5DECB52BF59F0E0225395 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0F9A5767B5106090414D118D94D8CC4F1F188C6);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralB0F9A5767B5106090414D118D94D8CC4F1F188C6);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralB0F9A5767B5106090414D118D94D8CC4F1F188C6);
		return L_1;
	}
}
// System.String TriLibCore.Stl.Reader.StlReader::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StlReader_get_Name_m61B4C05B95CA2ADBE486CD79411580E97CD901BD (StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3007E4D4C9A026A571CD47422BE823D8A32DC2A);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralC3007E4D4C9A026A571CD47422BE823D8A32DC2A;
	}
}
// System.Type TriLibCore.Stl.Reader.StlReader::get_LoadingStepEnumType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* StlReader_get_LoadingStepEnumType_mC352EED7670738FB3BFC9EBB6C98FFC961207830 (StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProcessingSteps_t0ED2265911192A39BA3686E081CB2D9F4DA68078_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ProcessingSteps_t0ED2265911192A39BA3686E081CB2D9F4DA68078_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		return L_1;
	}
}
// TriLibCore.Interfaces.IRootModel TriLibCore.Stl.Reader.StlReader::ReadStream(System.IO.Stream,TriLibCore.AssetLoaderContext,System.String,System.Action`2<TriLibCore.AssetLoaderContext,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlReader_ReadStream_m5C6B1D87BD9D396ACAB6F7BDDFC0E3CA6FFA075C (StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___assetLoaderContext1, String_t* ___filename2, Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* ___onProgress3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_1 = ___assetLoaderContext1;
		String_t* L_2 = ___filename2;
		Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* L_3 = ___onProgress3;
		RuntimeObject* L_4;
		L_4 = ReaderBase_ReadStream_m725378DF096B29E0DB3BE3FB9E5F1E37747883F4(__this, L_0, L_1, L_2, L_3, NULL);
		StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0* L_5 = (StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0*)il2cpp_codegen_object_new(StlProcessor_tFF16A2DB05BAC4F11FAB8C8867950687C61995B0_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		StlProcessor__ctor_m900A44553FC03D3F3F05833E176C5456FF72A390(L_5, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___stream0;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = StlProcessor_Process_mE9579D6B475D44423897704E91BD2A780B6405CF(L_5, __this, L_6, NULL);
		V_0 = L_7;
		ReaderBase_PostProcessModel_mD3BB953DE8BEB5FCA65077455BDA0750F740C667(__this, (&V_0), NULL);
		RuntimeObject* L_8 = V_0;
		return L_8;
	}
}
// TriLibCore.Interfaces.IRootModel TriLibCore.Stl.Reader.StlReader::CreateRootModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StlReader_CreateRootModel_m950B39752C2801E33B58DDD686FF8B2DB6F070EC (StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* L_0 = (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142*)il2cpp_codegen_object_new(StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StlRootModel__ctor_mF3CCCD9F9A1339A398A4FA1EAA0D00B3AD7BB737(L_0, NULL);
		return L_0;
	}
}
// System.Void TriLibCore.Stl.Reader.StlReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StlReader__ctor_m18E86780078062C2974BBA8AF955AFDDD791CAF4 (StlReader_t142A4B8D26855A97FC4FA57D581D5092A1A3FE7A* __this, const RuntimeMethod* method) 
{
	{
		ReaderBase__ctor_m5C4FE7A4BC205B65DAB56FF3CC5202D0B04937DA(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* StlModel_get_Name_m25E9B99DE29E6200C71933B5E52D158E28DCD941_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ReaderBase_get_AssetLoaderContext_mAEAA12FFAAC1C276F35397E563CB157D7CFB36BA_inline (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, const RuntimeMethod* method) 
{
	{
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_0 = __this->___U3CAssetLoaderContextU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_m77F64620D73934C56BEE37A64016DBDCB9D21DB8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___lhs0;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___rhs1;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___lhs0;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___rhs1;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___lhs0;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___rhs1;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlModel_set_LocalScale_m0709587074F69EEB1DCF2F639318F4C9BE86D840_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		__this->___U3CLocalScaleU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlModel_set_LocalRotation_mE9C27ACA9705C49C2EEEEC359CF9195A0EADF5B9_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___value0;
		__this->___U3CLocalRotationU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlModel_set_GeometryGroup_m32211C6B2E30C396961F21D3E5E81B925AAA444E_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CGeometryGroupU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGeometryGroupU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlModel_set_Name_mF8213C9BAD85BC9320C876C41ABBF594327F2814_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlModel_set_Visibility_m635AB4624DB7C9E08470800B07ABABD332AF0E01_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CVisibilityU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlModel_set_Parent_m5FFEE1518EF3F12F1378AECEAEB41466CCA20DCE_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CParentU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParentU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m4688A1A524306675DBDB1E6D483F35E85E3CE6D8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlModel_set_Children_m8C26332902AFB18940DAB4060807171A0364EA1E_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CChildrenU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CChildrenU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlRootModel_set_AllGeometryGroups_m6754461757172DBEB0986B7A916BBBFFDAD9E173_inline (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllGeometryGroupsU3Ek__BackingField_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllGeometryGroupsU3Ek__BackingField_15), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* StlModel_get_Children_mCC99BF668D976265E2897D884E1080A14B8219BB_inline (StlModel_t8BF6A6BC59B892CCDD30EBFD91DA699224ADD9EA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CChildrenU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StlRootModel_set_AllModels_mED5ABBDE53F3952C9E492CC70CADE0692BA9A7BF_inline (StlRootModel_tDC41670D4D8AA87163E57BC13EED265B48D3A142* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CAllModelsU3Ek__BackingField_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllModelsU3Ek__BackingField_14), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m28BB6E19F27D4EE6858D3021A44F62BC74E20C43_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StlStreamReader_get_Line_mE94255EEFEFED4D8DED8AE024CE752F78FD174EC_inline (StlStreamReader_tFFED5E3DDA30F881B1305039B3F58CC186E155C5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLineU3Ek__BackingField_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GeometryGroup_1_set_Name_m6256B957770AB633839BECA40F9FFF08A1D77C81_gshared_inline (GeometryGroup_1_tAB214074D23BF71097A46E9AC61FF11A7B26E283* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GeometryGroup_1_get_Name_mD09F37F9ADCF0BCC1CAC2CC96CBC03CA98598563_gshared_inline (GeometryGroup_1_tAB214074D23BF71097A46E9AC61FF11A7B26E283* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = (String_t*)__this->___U3CNameU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GeometryGroup_1_get_VerticesData_m90A5BFB1A1F0F3ED0C7C889EDDEC7CD3C296DB3D_gshared_inline (GeometryGroup_1_tAB214074D23BF71097A46E9AC61FF11A7B26E283* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CVerticesDataU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
