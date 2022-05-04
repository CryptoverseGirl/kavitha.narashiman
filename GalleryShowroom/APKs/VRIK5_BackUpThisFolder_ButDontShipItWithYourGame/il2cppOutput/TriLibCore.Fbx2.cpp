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
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
// TriLibCore.Pooling.ArrayPool`1<System.Byte>
struct ArrayPool_1_tA814D32D7C3112020287CCE898F896980ADC2086;
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
// System.Collections.Generic.Dictionary`2<TriLibCore.Fbx.FBXAnimationLayer,System.Collections.Generic.SortedSet`1<System.Int64>>
struct Dictionary_2_tB49177EDEA5ECFF24C13CCA52CD1A58D58131EB5;
// System.Collections.Generic.Dictionary`2<TriLibCore.Fbx.FBXAnimationStack,System.Collections.Generic.SortedSet`1<TriLibCore.Fbx.FBXAnimationLayer>>
struct Dictionary_2_tB3587CF77361D420D1DC7210EA1A4B3B312BB628;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,TriLibCore.Interfaces.IModel>
struct Dictionary_2_tE704ACFE7C32537A046D8577F8299D1B52ED0C00;
// System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,System.String>
struct Dictionary_2_t15A9DEF843D5DA84170CD8536BA0EBB039EB4ADF;
// System.Collections.Generic.Dictionary`2<TriLibCore.Interfaces.IModel,UnityEngine.GameObject>
struct Dictionary_2_tADE1FC3F6C786CACD6652C2C7275C3A0FD274A9C;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int64,TriLibCore.Fbx.IFBXObject>
struct Dictionary_2_tE8D0E51AE256AFF2CE801667465D9F47A030908B;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379;
// System.Collections.Generic.Dictionary`2<System.Int64,System.String>
struct Dictionary_2_tAEBFFDB440F054AE9C7C1D99E9D40D111C6253AE;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.HashSet`1<UnityEngine.Texture>
struct HashSet_1_t70836788BCAF42568800A162B9F23937F5309AE8;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t606011D801075A525E02DDE2533126EA96831FCF;
// System.Collections.Generic.IEnumerator`1<System.Double>
struct IEnumerator_1_tC485938B2065194F37223DC3FA35818439FD0233;
// System.Collections.Generic.IEnumerator`1<System.Int16>
struct IEnumerator_1_tE63A1850605587CAFA3FEB2AE63BEDADF9E336A6;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
// System.Collections.Generic.IEnumerator`1<System.Int64>
struct IEnumerator_1_t96C69FC6D3BFF990C18CFAF5A304D4D336E5DD32;
// System.Collections.Generic.IEnumerator`1<System.Single>
struct IEnumerator_1_t736E9F8BD2FD38A5E9EA2E8A510AFED788D05010;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_tDBA96AAC21C7C21D26B68A9F19E6AE4E015D2316;
// System.Collections.Generic.IList`1<System.Byte>
struct IList_1_t958E1E27F44A1E57CF73D43A68F1EF1A1E07FE0C;
// System.Collections.Generic.IList`1<System.Char>
struct IList_1_tF23041AC58956CDAA98A1DA3D23002DBE4EBE278;
// System.Collections.Generic.IList`1<System.Double>
struct IList_1_t37F866E68615F10FC2515F9CD18666C31188DE6F;
// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXAnimationCurve>
struct IList_1_t4F9822737279E2BDE1357E44A994D6426F5ABCD2;
// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXAnimationCurveNode>
struct IList_1_t1DD4697533A64016232970F03E1172ABE2F6D9AD;
// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXAnimationLayer>
struct IList_1_t2619CD52AE93483CDD60F2C725373481AF34C3CA;
// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXBlendShapeGeometryGroup>
struct IList_1_t8EC0E267712FBA478C82643C1C886197D33BF3D3;
// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXDeformer>
struct IList_1_t46DD05C1E1ACC8DDEB74BD29CFFDC72BB2600396;
// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXModel>
struct IList_1_t42C8F0899EF9E073009A4304B50DFA100C654666;
// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXSubDeformer>
struct IList_1_tC84475B43EB88641B712D0B00BC4DBFEBBEA12A9;
// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimation>
struct IList_1_t7A16CD7EF0938B36E4D20182185F284ECA5F93A2;
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
// System.Collections.Generic.IList`1<System.Int16>
struct IList_1_t33D4A6F17EB7EE6F64F4B2D34463698DAD680B55;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1;
// System.Collections.Generic.IList`1<System.Int64>
struct IList_1_tD5BEB2F8A25EFA71E6448F7109F425405B633B1F;
// System.Collections.Generic.IList`1<UnityEngine.Matrix4x4>
struct IList_1_t18ED0F81A86D2B52A6C90C7CBA5971934D55A6F0;
// System.Collections.Generic.IList`1<System.Single>
struct IList_1_t8E7546B74FA2018BF4FA7562464581B7A2E149EA;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.String>
struct KeyCollection_t8FA54A138A1277582692AA89C3353C1FD701B954;
// System.Collections.Generic.List`1<TriLibCore.Interfaces.IContextualizedAction>
struct List_1_t86716DC43840ACBAACF0E5014A0EC4019529570C;
// System.Collections.Generic.List`1<TriLibCore.Interfaces.IModel>
struct List_1_t62A281831D28273651D3773FC1796B24A9B2F9BC;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3;
// System.Collections.Generic.List`1<System.Threading.Tasks.Task>
struct List_1_t84C257E858DDB8EA0B6269E08AAD9A2A2018A551;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.String>
struct ValueCollection_tD7823DFC0260CFDFD2095CF51C5516DE71575B67;
// System.Collections.Generic.Dictionary`2/Entry<System.Int64,System.String>[]
struct EntryU5BU5D_tDA2349E2B26ED9C9C80C6E3FF7327047F0C381D1;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// TriLibCore.Fbx.FBXNode[]
struct FBXNodeU5BU5D_tE2618B0E26EA22A7A9646E49CAC5C891B4C2DBC9;
// TriLibCore.Fbx.FBXProperty[]
struct FBXPropertyU5BU5D_t35243F87F20AE59936641174054399D0F8AFB67E;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// ICSharpCode.SharpZipLib.Checksum.Adler32
struct Adler32_t719B695D8A1A84E2A465697391C35131CA4FB1CD;
// TriLibCore.AssetLoaderContext
struct AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C;
// TriLibCore.AssetLoaderOptions
struct AssetLoaderOptions_t48AC975EC75B1EB3A0523309F6FD3713B4CA93D6;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
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
// TriLibCore.Fbx.ASCII.FBXASCIIReader
struct FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B;
// TriLibCore.Fbx.FBXAnimationCurve
struct FBXAnimationCurve_t231EE593FF73ECE0908ED97A303F7EAFC5D4D45C;
// TriLibCore.Fbx.FBXAnimationCurveNode
struct FBXAnimationCurveNode_t576192536BD712D1A036BD4CA26E65E2AF91D5BB;
// TriLibCore.Fbx.FBXAnimationLayer
struct FBXAnimationLayer_t691446B83D4B681F5922098EBD0E0B2F30A1CB50;
// TriLibCore.Fbx.FBXAnimationStack
struct FBXAnimationStack_t1951A8FC41247D031C5FB2058F47DFFB6FEB4826;
// TriLibCore.Fbx.Binary.FBXBinaryReader
struct FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50;
// TriLibCore.Fbx.FBXBlendShapeGeometryGroup
struct FBXBlendShapeGeometryGroup_t7F48F7377B8F0CEBAFADB748FCECFDA63D99949C;
// TriLibCore.Fbx.FBXBlendShapeSubDeformer
struct FBXBlendShapeSubDeformer_t8ED024CF120BB5964980D664E3E4A8814DC873A9;
// TriLibCore.Fbx.FBXDeformer
struct FBXDeformer_t6205A00C20A32DA310DE01502EDE739CD8AD9BC8;
// TriLibCore.Fbx.FBXDocument
struct FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834;
// TriLibCore.Fbx.FBXGlobalSettings
struct FBXGlobalSettings_t0C07F154075AAF25F09B10FF36073B5A01B8BC28;
// TriLibCore.Fbx.FBXMaterial
struct FBXMaterial_tF187223B7488940E1773EC2749D36BDB16F9C944;
// TriLibCore.Fbx.FBXMatrices
struct FBXMatrices_tDBC0EE205D2B2D729DBA25A18CF3A67388C5030D;
// TriLibCore.Fbx.FBXMatrixBuffer
struct FBXMatrixBuffer_tF111AF67C063DB9EFE066B3E92AB4391B05BAF1F;
// TriLibCore.Fbx.FBXModel
struct FBXModel_t5D448CD22472ADEA4C42B7A9F299C393769E08A4;
// TriLibCore.Fbx.FBXNodeAttribute
struct FBXNodeAttribute_tD64A5CE0BD58841F114311413B61A7AE29C6C593;
// TriLibCore.Fbx.FBXObject
struct FBXObject_t955A55BC5B93846C9089D1A44A2DC3F65FC05671;
// TriLibCore.Fbx.FBXPose
struct FBXPose_t58C887C0A441F315857FDA99BBB3FF3A2E3158C3;
// TriLibCore.Fbx.FBXProcessor
struct FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4;
// TriLibCore.Fbx.FBXRootModel
struct FBXRootModel_t1960D19A6733168B2F9CF5A6235362FD25861775;
// TriLibCore.Fbx.FBXSubDeformer
struct FBXSubDeformer_tD0AE3226DCA22276BBDE337EEBAD3789F1143FDC;
// TriLibCore.Fbx.FBXTexture
struct FBXTexture_t144C224F07D8C26F18E312F7A530F5C15AF1D79D;
// TriLibCore.Fbx.FBXVideo
struct FBXVideo_t5E3B9EE50CF8C48C1694A512180A2CB465E89CD2;
// TriLibCore.Fbx.Reader.FbxReader
struct FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TriLibCore.Fbx.IFBXGeometryGroup
struct IFBXGeometryGroup_t73B4340A18CF543630ED4FDB3149BD9D7B056974;
// TriLibCore.Interfaces.IGeometryGroup
struct IGeometryGroup_tD96DA51C7C61A1D17AF86985D3E39BA7A14A6262;
// TriLibCore.Interfaces.IModel
struct IModel_tB1636FE3764D3ADC10719BBE5EFDD5542F86F6FB;
// TriLibCore.Interfaces.IRootModel
struct IRootModel_t83ED40397FD23448FC9A99336523CC7DE8A841BB;
// ICSharpCode.SharpZipLib.Zip.Compression.Inflater
struct Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494;
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader
struct InflaterDynHeader_tB69F561C81D8F6D536510477A1FC9EFD39DE4EFF;
// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree
struct InflaterHuffmanTree_tB7309822439A9E51BA1EF5544BF706DB30F7C71F;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer
struct InflaterInputBuffer_t947724C1CD4D44B75584D59D1ECA71C121D62129;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream
struct InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow
struct OutputWindow_tAA96562C1DB1269206CBF4CDFC8ACE36C26A99E8;
// TriLibCore.Fbx.PropertyAccessorByte
struct PropertyAccessorByte_t3A1E04FFC4110354C2453EFA806F97FC6CEDB899;
// TriLibCore.Fbx.PropertyAccessorDouble
struct PropertyAccessorDouble_t189D059F98C03914177E9547477777DC527180B5;
// TriLibCore.Fbx.PropertyAccessorFloat
struct PropertyAccessorFloat_t1442C7AC1ECC61647B8B16289FAD0AC5A072D96B;
// TriLibCore.Fbx.PropertyAccessorIEE754
struct PropertyAccessorIEE754_t0C46BCCB2920674DF4B0DA353E76ECECBC30819C;
// TriLibCore.Fbx.PropertyAccessorInt
struct PropertyAccessorInt_t24E4E4DFF80422C4D86DD9E20FB16D192D7343F3;
// TriLibCore.Fbx.PropertyAccessorLong
struct PropertyAccessorLong_t9A62C22AD09C973ACA178BE1BAC3A8FFB805C8A7;
// TriLibCore.Fbx.PropertyAccessorShort
struct PropertyAccessorShort_t8DF6A20D36578B83FD65BEF805562CF32F999DC8;
// TriLibCore.ReaderBase
struct ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator
struct StreamManipulator_t626C6631E1D9BD1EAA5FDB4987C79A2F34A92689;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyAccessorIEnumerator_1_t132A7FDC9F7EEB025D6C21FF07F9E037A5D8412D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyAccessorIEnumerator_1_t507F53FFDEAE6189449897018F3198188410DEB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyAccessorIEnumerator_1_t81284489B090B3086F8560CFF14FCFA37CD50F96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyAccessorIEnumerator_1_t99D6ABB7ECAA7EDD17341582A28BF20268F5C71D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyAccessorIEnumerator_1_tA87B54345A2924A4BB0DE1D0D4BE147D24B9056D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyAccessorIEnumerator_1_tC80F58CC2A95871A7E8891567EEE4DAAC636E0A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3063F5F4FAEA0002A9B169DA0D12D52AC6312C1A;
IL2CPP_EXTERN_C String_t* _stringLiteral4A6331918BBD32293C65EC7C39BE183F558B0111;
IL2CPP_EXTERN_C String_t* _stringLiteral59A855EBCC658B736BF700F291E16BCDE82179CC;
IL2CPP_EXTERN_C String_t* _stringLiteral931D7B3EADF2ABC99B546F64E928640DD28E17B2;
IL2CPP_EXTERN_C String_t* _stringLiteralAB374E66CE847851999FA3E5D11259A9E2B44195;
IL2CPP_EXTERN_C String_t* _stringLiteralAF9B10C2E201D9B3CE0452AB6969B5912DBD0D42;
IL2CPP_EXTERN_C String_t* _stringLiteralB94DD1963BC6E8F27D446B420BEA01FE03FD8C2B;
IL2CPP_EXTERN_C String_t* _stringLiteralD5C5B51FDBB849EDCED35D213FC930CC6B328429;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDE1FB695AC2C100C3535AD096A8F2F55A29C7BC7;
IL2CPP_EXTERN_C String_t* _stringLiteralEE17426A533F8CAB2BECCE4D29123F6B09106045;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mDCA553F82ED7197C585BCF9A578D6918E560BC7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m9C5F90E7F1FC1D9BEC1BDF3BB64D919A69E382B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FBXASCIIReader_ReadNode_mD0B13F651A7A4B2C320F97780487910AC89131A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FBXASCIIReader_ReadToken_mD39313B199B70530F016ACFA4AAE8841BE903959_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FBXBinaryReader_ReadDocument_m27AFF3DF4C3E9C70713109A0A2FB0FA293674E64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FBXBinaryReader_ReadNode_m7B76CA3D4E6C170ADDBC95526EEB5A823900C92E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FBXBinaryReader_ReadStringEx_m9FC9DD7CD2CBFCD8D4F15FC652C5B99423BF8390_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FBXBinaryReader_SkipStringEx_mCC66E0E7BDF4C7F65EF9BB62CE92B8CBFA874148_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FbxReader_ParseASCII_m9B2DF8EBC9701E3DA1CAFC1067057815F487066F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FbxReader_ParseBinary_m8B56277ECB7EEE23D9D8477378311DAC78DD5515_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorByte_Add_mAFC49C1DBE7203D3A9DBFAB3ABA5BA0BE13904DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorByte_Clear_m648D5D7C9EC8B28DA5C419E96E28A69BD6E1998C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorByte_Contains_m6D9A922B2C0C224FD1A8324B3D7328E2A189D6B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorByte_IndexOf_mDEB7FFF72A7C72084150E7E51A98A3B46FA06D10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorByte_Insert_m6104AD8296D35F593835A492E2707DEDCA0189A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorByte_RemoveAt_mD003C4326C542792EE62A67D518B44C08EA5DE16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorByte_Remove_m7774F101D57F6543F3057BD4BAF6C5A2D7CE6241_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorByte_set_Item_mA767343463C886938EE75EAFB259B969AF6FE184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorDouble_Add_mAE1735D14F3AA39C070B7CFF7D2D376453851ACE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorDouble_Clear_mEF8B26DAEC1AA884F3174D820B0BB4933AD5F4D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorDouble_Contains_m35D360656DAFE79EA025141CA19D86EF834E7EE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorDouble_IndexOf_m7DA059EE56C40EB0703D3859F3053D074C923311_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorDouble_Insert_mEB967E3D782C721D44C788453CD124976B0A11D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorDouble_RemoveAt_m7932C49E6F6D9D1D96E5F7655639650EEDDEB64A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorDouble_Remove_mDAD3E51DCDFAF51CC1045AE05EDED18355A8B6BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorDouble_set_Item_m8CA12BC5B805E259A5A91BB1A7A98EC44FF517DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorFloat_Add_mCCAD275FD92B9DD4E171845E9B1E4B3E8D9255ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorFloat_Clear_m3D2A56B0A4BBCC34D46ADD148EEAB561A5C9FBD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorFloat_Contains_mA19DBB936B8A684E19E995DFEC0629E6BFAA9C8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorFloat_IndexOf_m08F29119B0358F6727AEB21AC99F6A06D91FAAA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorFloat_Insert_m60FADFA183D69CE64EE67C9C2DA05C1AE28215F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorFloat_RemoveAt_mCD6754C94D601525E93F0BD570898E2AFB886C9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorFloat_Remove_mF265557EEFE8866385B6280859AF5C87402A1022_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorFloat_set_Item_m030F64C16AAC2FDD5A546AC3FC8307C53C06B79D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorIEE754_Add_mBD9C6FB19DD5EE7A9054A642FE6C17AF7D11226D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorIEE754_Clear_mA0A2150C21DFCC7E74C4A68D00CE206A20F48433_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorIEE754_Contains_m64AC75313103A83FA655C79D6D1643789CC85426_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorIEE754_IndexOf_m59FB427A9B4BC4FF9B3DF2AA2B14BF5BFF16E552_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorIEE754_Insert_m46AA71328F9D5F4E36474318EC72B32FAC57130C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorIEE754_RemoveAt_mDC0DC08B153E2A2F2954ECB13281376EA30E2D91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorIEE754_Remove_mF9938772EEFE6996F36F4AD6E2CB22DDD0357F76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorIEE754_set_Item_m14570F3B3A020CD7D15485930032DC6C9F55D687_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorIEnumerator_1__ctor_m10ADEEA2B95198A97E5327E47BFAB5720EA81883_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorIEnumerator_1__ctor_m13F6A2E033696DC706279AE3A91D02A64206AC4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorIEnumerator_1__ctor_m52017FEBE78CFF4A3918E710C90AFBB0AE6B434F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorIEnumerator_1__ctor_m698626BC437191FDC212DB020833A50A9A35807A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorIEnumerator_1__ctor_m807FB04952574C23B9ECCFF282D11027CB4022CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorIEnumerator_1__ctor_m885514EA1BD585E7096456986DE47D98FFC4D9DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorInt_Add_m1C14F9F8818E6843CC0DD32437D07C3394B6F4E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorInt_Clear_m696554C189B6C8E1769E5967C00C121F2D127D11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorInt_Contains_m0212669CC333E58F25DC8371F45DEB094EE8170E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorInt_IndexOf_m4BD1C6F598845DC91FBB46DA5E391E2272BF946D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorInt_Insert_mBD22A1188780CA0DA1B4F63F6113CB9091E6E14C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorInt_RemoveAt_m5C75A6097020E302ADB4B78EB3321412B7EAAE00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorInt_Remove_mD200B41DF3E14BDBF1AA25CB049E348300AA2DE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorInt_set_Item_mE396544801031052CB78036FA969BBFB4DC019DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorLong_Add_m5E36E9519465EFB1B6C70C0D6BFF6B18C365714D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorLong_Clear_m5CDEF0C6CE3BFDB9815CB8CC76D19BFE5E7D531E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorLong_Contains_mA2EF2BA51E321E94EC45365F3C3FAB3EE6E9C378_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorLong_IndexOf_m049151611E62CCC45723DE7E25636EDDA7397F19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorLong_Insert_m6E624085B34F1BE033200EEF0134ACD783519358_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorLong_RemoveAt_mE5EC5A508E67591F480F9FFE2AB04D55B1431F78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorLong_Remove_m2023A6FD815BDF767964553127FCBC4CF8DA1851_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorLong_set_Item_m4A792FFF42650916E4AB115B9EC9830A0F8ABE11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorShort_Add_mB213E015451E9AA91BFACD19CD43522DDFAB8DF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorShort_Clear_m7879EF8C9C6A06B16EAF6C22BD0518C5C21079C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorShort_Contains_mD53684A5299F2257D5D6F7C1E333FDCD8CAFBF1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorShort_IndexOf_mDC14357ADFD90AC26E6006E2E64BD1AF8C11C6AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorShort_Insert_m7EC96C6A89F2DEB37371B8FFE955F742C6998326_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorShort_RemoveAt_m55AA2E6A236358D101272E6CBC782A334533C8AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorShort_Remove_m0FE173DE48A774FC2C5717100CA47A72CC0E968C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyAccessorShort_set_Item_mA9E40465930AB75103C53BA6F29209913482988C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ProcessingSteps_t650107FDF5C3F52BB4A5B9D62AA93F417D0E5316_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int64,System.String>
struct Dictionary_2_tAEBFFDB440F054AE9C7C1D99E9D40D111C6253AE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDA2349E2B26ED9C9C80C6E3FF7327047F0C381D1* ____entries_1;
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
	KeyCollection_t8FA54A138A1277582692AA89C3353C1FD701B954* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tD7823DFC0260CFDFD2095CF51C5516DE71575B67* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t88E38A44A76B866A9AA5C7EC673E6DE694C7E5BD  : public RuntimeObject
{
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

// TriLibCore.Fbx.FBXProcessor
struct FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4  : public RuntimeObject
{
	// TriLibCore.Fbx.FBXDocument TriLibCore.Fbx.FBXProcessor::_document
	FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* ____document_4;
	// TriLibCore.Fbx.FBXNode[] TriLibCore.Fbx.FBXProcessor::Nodes
	FBXNodeU5BU5D_tE2618B0E26EA22A7A9646E49CAC5C891B4C2DBC9* ___Nodes_5;
	// TriLibCore.Fbx.FBXProperty[] TriLibCore.Fbx.FBXProcessor::Properties
	FBXPropertyU5BU5D_t35243F87F20AE59936641174054399D0F8AFB67E* ___Properties_6;
	// TriLibCore.Fbx.Reader.FbxReader TriLibCore.Fbx.FBXProcessor::Reader
	FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E* ___Reader_7;
	// System.Int32 TriLibCore.Fbx.FBXProcessor::ActiveBasePropertyIndex
	int32_t ___ActiveBasePropertyIndex_8;
	// System.Int32 TriLibCore.Fbx.FBXProcessor::ActiveDataSize
	int32_t ___ActiveDataSize_9;
	// System.Int32 TriLibCore.Fbx.FBXProcessor::ActiveSubDataSize
	int32_t ___ActiveSubDataSize_10;
	// System.IO.BinaryReader TriLibCore.Fbx.FBXProcessor::ActiveBinaryReader
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___ActiveBinaryReader_11;
	// TriLibCore.Fbx.ASCII.FBXASCIIReader TriLibCore.Fbx.FBXProcessor::ActiveASCIIReader
	FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* ___ActiveASCIIReader_12;
	// System.Int32 TriLibCore.Fbx.FBXProcessor::_nodeIndex
	int32_t ____nodeIndex_13;
	// System.Int32 TriLibCore.Fbx.FBXProcessor::<PropertiesCount>k__BackingField
	int32_t ___U3CPropertiesCountU3Ek__BackingField_14;
	// System.Collections.Generic.Dictionary`2<System.Int64,System.String> TriLibCore.Fbx.FBXProcessor::Strings
	Dictionary_2_tAEBFFDB440F054AE9C7C1D99E9D40D111C6253AE* ___Strings_15;
	// TriLibCore.Fbx.Binary.FBXBinaryReader TriLibCore.Fbx.FBXProcessor::FBXBinaryReader
	FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50* ___FBXBinaryReader_16;
	// System.Int32[] TriLibCore.Fbx.FBXProcessor::_vertexIndicesBuffer
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____vertexIndicesBuffer_19;
};

// ICSharpCode.SharpZipLib.Zip.Compression.Inflater
struct Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494  : public RuntimeObject
{
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::mode
	int32_t ___mode_17;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::readAdler
	int32_t ___readAdler_18;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::neededBits
	int32_t ___neededBits_19;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::repLength
	int32_t ___repLength_20;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::repDist
	int32_t ___repDist_21;
	// System.Int32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::uncomprLen
	int32_t ___uncomprLen_22;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::isLastBlock
	bool ___isLastBlock_23;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::totalOut
	int64_t ___totalOut_24;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::totalIn
	int64_t ___totalIn_25;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Inflater::noHeader
	bool ___noHeader_26;
	// ICSharpCode.SharpZipLib.Zip.Compression.Streams.StreamManipulator ICSharpCode.SharpZipLib.Zip.Compression.Inflater::input
	StreamManipulator_t626C6631E1D9BD1EAA5FDB4987C79A2F34A92689* ___input_27;
	// ICSharpCode.SharpZipLib.Zip.Compression.Streams.OutputWindow ICSharpCode.SharpZipLib.Zip.Compression.Inflater::outputWindow
	OutputWindow_tAA96562C1DB1269206CBF4CDFC8ACE36C26A99E8* ___outputWindow_28;
	// ICSharpCode.SharpZipLib.Zip.Compression.InflaterDynHeader ICSharpCode.SharpZipLib.Zip.Compression.Inflater::dynHeader
	InflaterDynHeader_tB69F561C81D8F6D536510477A1FC9EFD39DE4EFF* ___dynHeader_29;
	// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree ICSharpCode.SharpZipLib.Zip.Compression.Inflater::litlenTree
	InflaterHuffmanTree_tB7309822439A9E51BA1EF5544BF706DB30F7C71F* ___litlenTree_30;
	// ICSharpCode.SharpZipLib.Zip.Compression.InflaterHuffmanTree ICSharpCode.SharpZipLib.Zip.Compression.Inflater::distTree
	InflaterHuffmanTree_tB7309822439A9E51BA1EF5544BF706DB30F7C71F* ___distTree_31;
	// ICSharpCode.SharpZipLib.Checksum.Adler32 ICSharpCode.SharpZipLib.Zip.Compression.Inflater::adler
	Adler32_t719B695D8A1A84E2A465697391C35131CA4FB1CD* ___adler_32;
};

struct Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494_StaticFields
{
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.Inflater::CPLENS
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___CPLENS_0;
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.Inflater::CPLEXT
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___CPLEXT_1;
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.Inflater::CPDIST
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___CPDIST_2;
	// System.Int32[] ICSharpCode.SharpZipLib.Zip.Compression.Inflater::CPDEXT
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___CPDEXT_3;
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

// System.Nullable`1<System.Double>
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	double ___value_1;
};

// TriLibCore.Fbx.PropertyAccessorIEnumerator`1<System.Byte>
struct PropertyAccessorIEnumerator_1_t507F53FFDEAE6189449897018F3198188410DEB2 
{
	// System.Collections.Generic.IList`1<T> TriLibCore.Fbx.PropertyAccessorIEnumerator`1::_list
	RuntimeObject* ____list_0;
	// System.Int32 TriLibCore.Fbx.PropertyAccessorIEnumerator`1::_listIndex
	int32_t ____listIndex_1;
};

// TriLibCore.Fbx.PropertyAccessorIEnumerator`1<System.Double>
struct PropertyAccessorIEnumerator_1_tA87B54345A2924A4BB0DE1D0D4BE147D24B9056D 
{
	// System.Collections.Generic.IList`1<T> TriLibCore.Fbx.PropertyAccessorIEnumerator`1::_list
	RuntimeObject* ____list_0;
	// System.Int32 TriLibCore.Fbx.PropertyAccessorIEnumerator`1::_listIndex
	int32_t ____listIndex_1;
};

// TriLibCore.Fbx.PropertyAccessorIEnumerator`1<System.Int16>
struct PropertyAccessorIEnumerator_1_t99D6ABB7ECAA7EDD17341582A28BF20268F5C71D 
{
	// System.Collections.Generic.IList`1<T> TriLibCore.Fbx.PropertyAccessorIEnumerator`1::_list
	RuntimeObject* ____list_0;
	// System.Int32 TriLibCore.Fbx.PropertyAccessorIEnumerator`1::_listIndex
	int32_t ____listIndex_1;
};

// TriLibCore.Fbx.PropertyAccessorIEnumerator`1<System.Int32>
struct PropertyAccessorIEnumerator_1_tC80F58CC2A95871A7E8891567EEE4DAAC636E0A6 
{
	// System.Collections.Generic.IList`1<T> TriLibCore.Fbx.PropertyAccessorIEnumerator`1::_list
	RuntimeObject* ____list_0;
	// System.Int32 TriLibCore.Fbx.PropertyAccessorIEnumerator`1::_listIndex
	int32_t ____listIndex_1;
};

// TriLibCore.Fbx.PropertyAccessorIEnumerator`1<System.Int64>
struct PropertyAccessorIEnumerator_1_t81284489B090B3086F8560CFF14FCFA37CD50F96 
{
	// System.Collections.Generic.IList`1<T> TriLibCore.Fbx.PropertyAccessorIEnumerator`1::_list
	RuntimeObject* ____list_0;
	// System.Int32 TriLibCore.Fbx.PropertyAccessorIEnumerator`1::_listIndex
	int32_t ____listIndex_1;
};

// TriLibCore.Fbx.PropertyAccessorIEnumerator`1<System.Single>
struct PropertyAccessorIEnumerator_1_t132A7FDC9F7EEB025D6C21FF07F9E037A5D8412D 
{
	// System.Collections.Generic.IList`1<T> TriLibCore.Fbx.PropertyAccessorIEnumerator`1::_list
	RuntimeObject* ____list_0;
	// System.Int32 TriLibCore.Fbx.PropertyAccessorIEnumerator`1::_listIndex
	int32_t ____listIndex_1;
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

// TriLibCore.Fbx.Binary.FBXBinaryReader
struct FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50  : public BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158
{
	// System.Char[] TriLibCore.Fbx.Binary.FBXBinaryReader::Chars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___Chars_11;
	// System.Byte[] TriLibCore.Fbx.Binary.FBXBinaryReader::Buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Buffer_12;
	// TriLibCore.ReaderBase TriLibCore.Fbx.Binary.FBXBinaryReader::_reader
	ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* ____reader_13;
	// System.Boolean TriLibCore.Fbx.Binary.FBXBinaryReader::_is64Bits
	bool ____is64Bits_14;
	// System.Int32 TriLibCore.Fbx.Binary.FBXBinaryReader::_version
	int32_t ____version_15;
	// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream TriLibCore.Fbx.Binary.FBXBinaryReader::InflaterInputStream
	InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2* ___InflaterInputStream_16;
	// ICSharpCode.SharpZipLib.Zip.Compression.Inflater TriLibCore.Fbx.Binary.FBXBinaryReader::Inflater
	Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494* ___Inflater_17;
	// TriLibCore.Fbx.FBXProcessor TriLibCore.Fbx.Binary.FBXBinaryReader::_processor
	FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* ____processor_18;
};

// TriLibCore.Fbx.FBXProperties
struct FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 
{
	// System.Int32 TriLibCore.Fbx.FBXProperties::<PropertiesCount>k__BackingField
	int32_t ___U3CPropertiesCountU3Ek__BackingField_0;
	// TriLibCore.Fbx.FBXProcessor TriLibCore.Fbx.FBXProperties::<Processor>k__BackingField
	FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* ___U3CProcessorU3Ek__BackingField_1;
	// System.Int32 TriLibCore.Fbx.FBXProperties::BasePropertyIndex
	int32_t ___BasePropertyIndex_2;
	// System.Int32 TriLibCore.Fbx.FBXProperties::ArrayLength
	int32_t ___ArrayLength_3;
};
// Native definition for P/Invoke marshalling of TriLibCore.Fbx.FBXProperties
struct FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418_marshaled_pinvoke
{
	int32_t ___U3CPropertiesCountU3Ek__BackingField_0;
	FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* ___U3CProcessorU3Ek__BackingField_1;
	int32_t ___BasePropertyIndex_2;
	int32_t ___ArrayLength_3;
};
// Native definition for COM marshalling of TriLibCore.Fbx.FBXProperties
struct FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418_marshaled_com
{
	int32_t ___U3CPropertiesCountU3Ek__BackingField_0;
	FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* ___U3CProcessorU3Ek__BackingField_1;
	int32_t ___BasePropertyIndex_2;
	int32_t ___ArrayLength_3;
};

// TriLibCore.Fbx.FBXProperty
struct FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 
{
	// TriLibCore.Pooling.ArrayPool`1<System.Byte> TriLibCore.Fbx.FBXProperty::Decoded
	ArrayPool_1_tA814D32D7C3112020287CCE898F896980ADC2086* ___Decoded_0;
	// System.Int32 TriLibCore.Fbx.FBXProperty::ArrayLength
	int32_t ___ArrayLength_1;
	// System.Boolean TriLibCore.Fbx.FBXProperty::Encoded
	bool ___Encoded_2;
	// System.Int32 TriLibCore.Fbx.FBXProperty::CompressedLength
	int32_t ___CompressedLength_3;
	// System.Char TriLibCore.Fbx.FBXProperty::PropertyType
	Il2CppChar ___PropertyType_4;
	// System.Int64 TriLibCore.Fbx.FBXProperty::Position
	int64_t ___Position_5;
	// System.Int64 TriLibCore.Fbx.FBXProperty::OriginalPosition
	int64_t ___OriginalPosition_6;
	// System.IO.BinaryReader TriLibCore.Fbx.FBXProperty::DecodedBinaryReader
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___DecodedBinaryReader_7;
	// System.IO.Stream TriLibCore.Fbx.FBXProperty::DecodedMemoryStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___DecodedMemoryStream_8;
	// System.String TriLibCore.Fbx.FBXProperty::StringValue
	String_t* ___StringValue_9;
};
// Native definition for P/Invoke marshalling of TriLibCore.Fbx.FBXProperty
struct FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8_marshaled_pinvoke
{
	ArrayPool_1_tA814D32D7C3112020287CCE898F896980ADC2086* ___Decoded_0;
	int32_t ___ArrayLength_1;
	int32_t ___Encoded_2;
	int32_t ___CompressedLength_3;
	uint8_t ___PropertyType_4;
	int64_t ___Position_5;
	int64_t ___OriginalPosition_6;
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___DecodedBinaryReader_7;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___DecodedMemoryStream_8;
	char* ___StringValue_9;
};
// Native definition for COM marshalling of TriLibCore.Fbx.FBXProperty
struct FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8_marshaled_com
{
	ArrayPool_1_tA814D32D7C3112020287CCE898F896980ADC2086* ___Decoded_0;
	int32_t ___ArrayLength_1;
	int32_t ___Encoded_2;
	int32_t ___CompressedLength_3;
	uint8_t ___PropertyType_4;
	int64_t ___Position_5;
	int64_t ___OriginalPosition_6;
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___DecodedBinaryReader_7;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___DecodedMemoryStream_8;
	Il2CppChar* ___StringValue_9;
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

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// TriLibCore.Fbx.FBXNode
struct FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D 
{
	// System.String TriLibCore.Fbx.FBXNode::Name
	String_t* ___Name_0;
	// TriLibCore.Fbx.FBXProperties TriLibCore.Fbx.FBXNode::Properties
	FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 ___Properties_1;
	// System.Int32 TriLibCore.Fbx.FBXNode::NodesCount
	int32_t ___NodesCount_2;
	// System.Int32 TriLibCore.Fbx.FBXNode::NameHashCode
	int32_t ___NameHashCode_3;
	// System.Int32 TriLibCore.Fbx.FBXNode::NextNodeIndex
	int32_t ___NextNodeIndex_4;
	// System.Int32 TriLibCore.Fbx.FBXNode::FirstNodeIndex
	int32_t ___FirstNodeIndex_5;
	// TriLibCore.Fbx.FBXProcessor TriLibCore.Fbx.FBXNode::_processor
	FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* ____processor_6;
};
// Native definition for P/Invoke marshalling of TriLibCore.Fbx.FBXNode
struct FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D_marshaled_pinvoke
{
	char* ___Name_0;
	FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418_marshaled_pinvoke ___Properties_1;
	int32_t ___NodesCount_2;
	int32_t ___NameHashCode_3;
	int32_t ___NextNodeIndex_4;
	int32_t ___FirstNodeIndex_5;
	FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* ____processor_6;
};
// Native definition for COM marshalling of TriLibCore.Fbx.FBXNode
struct FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D_marshaled_com
{
	Il2CppChar* ___Name_0;
	FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418_marshaled_com ___Properties_1;
	int32_t ___NodesCount_2;
	int32_t ___NameHashCode_3;
	int32_t ___NextNodeIndex_4;
	int32_t ___FirstNodeIndex_5;
	FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* ____processor_6;
};

// TriLibCore.Fbx.FBXObject
struct FBXObject_t955A55BC5B93846C9089D1A44A2DC3F65FC05671  : public RuntimeObject
{
	// System.String TriLibCore.Fbx.FBXObject::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Boolean TriLibCore.Fbx.FBXObject::<Used>k__BackingField
	bool ___U3CUsedU3Ek__BackingField_1;
	// TriLibCore.Fbx.FBXDocument TriLibCore.Fbx.FBXObject::<Document>k__BackingField
	FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* ___U3CDocumentU3Ek__BackingField_2;
	// System.Int64 TriLibCore.Fbx.FBXObject::<Id>k__BackingField
	int64_t ___U3CIdU3Ek__BackingField_3;
	// TriLibCore.Fbx.FBXObjectType TriLibCore.Fbx.FBXObject::<ObjectType>k__BackingField
	int32_t ___U3CObjectTypeU3Ek__BackingField_4;
	// System.String TriLibCore.Fbx.FBXObject::<Class>k__BackingField
	String_t* ___U3CClassU3Ek__BackingField_5;
	// TriLibCore.Fbx.FBXProperties TriLibCore.Fbx.FBXObject::<Properties>k__BackingField
	FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 ___U3CPropertiesU3Ek__BackingField_6;
};

// TriLibCore.Fbx.Reader.FbxReader
struct FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E  : public ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449
{
	// System.Byte[] TriLibCore.Fbx.Reader.FbxReader::_fileBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____fileBuffer_18;
};

struct FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E_StaticFields
{
	// System.Boolean TriLibCore.Fbx.Reader.FbxReader::FBXCompatibilityMode
	bool ___FBXCompatibilityMode_12;
	// TriLibCore.Fbx.Reader.FBXPivotMode TriLibCore.Fbx.Reader.FbxReader::PivotMode
	int32_t ___PivotMode_13;
	// System.Boolean TriLibCore.Fbx.Reader.FbxReader::EnableSpecularMaterials
	bool ___EnableSpecularMaterials_14;
	// System.Nullable`1<System.Double> TriLibCore.Fbx.Reader.FbxReader::FBXConversionPrecision
	Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___FBXConversionPrecision_15;
	// System.Boolean TriLibCore.Fbx.Reader.FbxReader::MergeSingleChildDocument
	bool ___MergeSingleChildDocument_16;
	// System.Boolean TriLibCore.Fbx.Reader.FbxReader::BufferizeStream
	bool ___BufferizeStream_17;
};

// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream
struct InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::<IsStreamOwner>k__BackingField
	bool ___U3CIsStreamOwnerU3Ek__BackingField_5;
	// ICSharpCode.SharpZipLib.Zip.Compression.Inflater ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::inf
	Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494* ___inf_6;
	// ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputBuffer ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::inputBuffer
	InflaterInputBuffer_t947724C1CD4D44B75584D59D1ECA71C121D62129* ___inputBuffer_7;
	// System.IO.Stream ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::baseInputStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___baseInputStream_8;
	// System.Int64 ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::csize
	int64_t ___csize_9;
	// System.Boolean ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::isClosed
	bool ___isClosed_10;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_14;
};

// TriLibCore.Fbx.PropertyAccessorByte
struct PropertyAccessorByte_t3A1E04FFC4110354C2453EFA806F97FC6CEDB899  : public RuntimeObject
{
	// TriLibCore.Fbx.FBXProperties TriLibCore.Fbx.PropertyAccessorByte::_properties
	FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 ____properties_0;
	// System.Boolean TriLibCore.Fbx.PropertyAccessorByte::<IsReadOnly>k__BackingField
	bool ___U3CIsReadOnlyU3Ek__BackingField_1;
};

// TriLibCore.Fbx.PropertyAccessorDouble
struct PropertyAccessorDouble_t189D059F98C03914177E9547477777DC527180B5  : public RuntimeObject
{
	// TriLibCore.Fbx.FBXProperties TriLibCore.Fbx.PropertyAccessorDouble::_properties
	FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 ____properties_0;
	// System.Boolean TriLibCore.Fbx.PropertyAccessorDouble::<IsReadOnly>k__BackingField
	bool ___U3CIsReadOnlyU3Ek__BackingField_1;
};

// TriLibCore.Fbx.PropertyAccessorFloat
struct PropertyAccessorFloat_t1442C7AC1ECC61647B8B16289FAD0AC5A072D96B  : public RuntimeObject
{
	// TriLibCore.Fbx.FBXProperties TriLibCore.Fbx.PropertyAccessorFloat::_properties
	FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 ____properties_0;
	// System.Boolean TriLibCore.Fbx.PropertyAccessorFloat::<IsReadOnly>k__BackingField
	bool ___U3CIsReadOnlyU3Ek__BackingField_1;
};

// TriLibCore.Fbx.PropertyAccessorIEE754
struct PropertyAccessorIEE754_t0C46BCCB2920674DF4B0DA353E76ECECBC30819C  : public RuntimeObject
{
	// TriLibCore.Fbx.FBXProperties TriLibCore.Fbx.PropertyAccessorIEE754::_properties
	FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 ____properties_0;
	// System.Byte[] TriLibCore.Fbx.PropertyAccessorIEE754::_bytesInt
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____bytesInt_1;
	// System.Boolean TriLibCore.Fbx.PropertyAccessorIEE754::<IsReadOnly>k__BackingField
	bool ___U3CIsReadOnlyU3Ek__BackingField_2;
};

// TriLibCore.Fbx.PropertyAccessorInt
struct PropertyAccessorInt_t24E4E4DFF80422C4D86DD9E20FB16D192D7343F3  : public RuntimeObject
{
	// TriLibCore.Fbx.FBXProperties TriLibCore.Fbx.PropertyAccessorInt::_properties
	FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 ____properties_0;
	// System.Boolean TriLibCore.Fbx.PropertyAccessorInt::<IsReadOnly>k__BackingField
	bool ___U3CIsReadOnlyU3Ek__BackingField_1;
};

// TriLibCore.Fbx.PropertyAccessorLong
struct PropertyAccessorLong_t9A62C22AD09C973ACA178BE1BAC3A8FFB805C8A7  : public RuntimeObject
{
	// TriLibCore.Fbx.FBXProperties TriLibCore.Fbx.PropertyAccessorLong::_properties
	FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 ____properties_0;
	// System.Boolean TriLibCore.Fbx.PropertyAccessorLong::<IsReadOnly>k__BackingField
	bool ___U3CIsReadOnlyU3Ek__BackingField_1;
};

// TriLibCore.Fbx.PropertyAccessorShort
struct PropertyAccessorShort_t8DF6A20D36578B83FD65BEF805562CF32F999DC8  : public RuntimeObject
{
	// TriLibCore.Fbx.FBXProperties TriLibCore.Fbx.PropertyAccessorShort::_properties
	FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 ____properties_0;
	// System.Boolean TriLibCore.Fbx.PropertyAccessorShort::<IsReadOnly>k__BackingField
	bool ___U3CIsReadOnlyU3Ek__BackingField_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// TriLibCore.Fbx.ASCII.FBXASCIIReader
struct FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B  : public StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B
{
	// System.Char[] TriLibCore.Fbx.ASCII.FBXASCIIReader::_charStream
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charStream_30;
	// System.Int32 TriLibCore.Fbx.ASCII.FBXASCIIReader::_charPosition
	int32_t ____charPosition_31;
	// System.Int32 TriLibCore.Fbx.ASCII.FBXASCIIReader::_position
	int32_t ____position_32;
	// System.Int32 TriLibCore.Fbx.ASCII.FBXASCIIReader::_endOfLinePosition
	int32_t ____endOfLinePosition_33;
	// System.Int64 TriLibCore.Fbx.ASCII.FBXASCIIReader::_lastToken
	int64_t ____lastToken_34;
	// TriLibCore.Fbx.FBXProcessor TriLibCore.Fbx.ASCII.FBXASCIIReader::_processor
	FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* ____processor_35;
	// System.Int32 TriLibCore.Fbx.ASCII.FBXASCIIReader::<Line>k__BackingField
	int32_t ___U3CLineU3Ek__BackingField_40;
};

// TriLibCore.Fbx.FBXModel
struct FBXModel_t5D448CD22472ADEA4C42B7A9F299C393769E08A4  : public FBXObject_t955A55BC5B93846C9089D1A44A2DC3F65FC05671
{
	// TriLibCore.Fbx.FBXRotationOrder TriLibCore.Fbx.FBXModel::RotationOrder
	int32_t ___RotationOrder_7;
	// TriLibCore.Fbx.FBXInheritType TriLibCore.Fbx.FBXModel::InheritType
	int32_t ___InheritType_8;
	// System.Boolean TriLibCore.Fbx.FBXModel::VisibilityInheritance
	bool ___VisibilityInheritance_9;
	// TriLibCore.Fbx.FBXMatrices TriLibCore.Fbx.FBXModel::Matrices
	FBXMatrices_tDBC0EE205D2B2D729DBA25A18CF3A67388C5030D* ___Matrices_10;
	// UnityEngine.Vector3 TriLibCore.Fbx.FBXModel::_localPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____localPosition_11;
	// UnityEngine.Quaternion TriLibCore.Fbx.FBXModel::_localRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ____localRotation_12;
	// UnityEngine.Vector3 TriLibCore.Fbx.FBXModel::_localScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____localScale_13;
	// System.Boolean TriLibCore.Fbx.FBXModel::<IsBone>k__BackingField
	bool ___U3CIsBoneU3Ek__BackingField_14;
	// TriLibCore.Interfaces.IGeometryGroup TriLibCore.Fbx.FBXModel::<GeometryGroup>k__BackingField
	RuntimeObject* ___U3CGeometryGroupU3Ek__BackingField_15;
	// TriLibCore.Interfaces.IModel TriLibCore.Fbx.FBXModel::_parent
	RuntimeObject* ____parent_16;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Fbx.FBXModel::<Children>k__BackingField
	RuntimeObject* ___U3CChildrenU3Ek__BackingField_17;
	// System.Int32 TriLibCore.Fbx.FBXModel::ChildrenCount
	int32_t ___ChildrenCount_18;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Fbx.FBXModel::<Bones>k__BackingField
	RuntimeObject* ___U3CBonesU3Ek__BackingField_19;
	// System.Int32 TriLibCore.Fbx.FBXModel::BonesCount
	int32_t ___BonesCount_20;
	// System.Collections.Generic.IList`1<UnityEngine.Matrix4x4> TriLibCore.Fbx.FBXModel::BindPosesList
	RuntimeObject* ___BindPosesList_21;
	// UnityEngine.Matrix4x4[] TriLibCore.Fbx.FBXModel::<BindPoses>k__BackingField
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___U3CBindPosesU3Ek__BackingField_22;
	// System.Collections.Generic.IList`1<System.Int32> TriLibCore.Fbx.FBXModel::<MaterialIndices>k__BackingField
	RuntimeObject* ___U3CMaterialIndicesU3Ek__BackingField_23;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> TriLibCore.Fbx.FBXModel::<UserProperties>k__BackingField
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___U3CUserPropertiesU3Ek__BackingField_24;
	// System.Collections.Generic.IList`1<System.Int32> TriLibCore.Fbx.FBXModel::AllMaterialIndices
	RuntimeObject* ___AllMaterialIndices_25;
	// System.Int32 TriLibCore.Fbx.FBXModel::AllMaterialIndicesCount
	int32_t ___AllMaterialIndicesCount_26;
	// TriLibCore.Fbx.FBXTexture TriLibCore.Fbx.FBXModel::DiffuseTexture
	FBXTexture_t144C224F07D8C26F18E312F7A530F5C15AF1D79D* ___DiffuseTexture_27;
	// UnityEngine.Vector3 TriLibCore.Fbx.FBXModel::Pivot
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Pivot_28;
	// System.Collections.Generic.Dictionary`2<TriLibCore.Fbx.FBXAnimationStack,System.Collections.Generic.SortedSet`1<TriLibCore.Fbx.FBXAnimationLayer>> TriLibCore.Fbx.FBXModel::Layers
	Dictionary_2_tB3587CF77361D420D1DC7210EA1A4B3B312BB628* ___Layers_29;
	// System.Collections.Generic.Dictionary`2<TriLibCore.Fbx.FBXAnimationLayer,System.Collections.Generic.SortedSet`1<System.Int64>> TriLibCore.Fbx.FBXModel::AnimatedTimes
	Dictionary_2_tB49177EDEA5ECFF24C13CCA52CD1A58D58131EB5* ___AnimatedTimes_30;
	// System.Boolean TriLibCore.Fbx.FBXModel::_visibility
	bool ____visibility_31;
};

// TriLibCore.Fbx.FBXVideo
struct FBXVideo_t5E3B9EE50CF8C48C1694A512180A2CB465E89CD2  : public FBXObject_t955A55BC5B93846C9089D1A44A2DC3F65FC05671
{
	// UnityEngine.Color TriLibCore.Fbx.FBXVideo::Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color_7;
	// System.Int64 TriLibCore.Fbx.FBXVideo::ClipIn
	int64_t ___ClipIn_8;
	// System.Int64 TriLibCore.Fbx.FBXVideo::ClipOut
	int64_t ___ClipOut_9;
	// System.Boolean TriLibCore.Fbx.FBXVideo::Mute
	bool ___Mute_10;
	// System.Boolean TriLibCore.Fbx.FBXVideo::ImageSequence
	bool ___ImageSequence_11;
	// System.Int32 TriLibCore.Fbx.FBXVideo::ImageSequenceOffset
	int32_t ___ImageSequenceOffset_12;
	// System.Single TriLibCore.Fbx.FBXVideo::FrameRate
	float ___FrameRate_13;
	// System.Int32 TriLibCore.Fbx.FBXVideo::LastFrame
	int32_t ___LastFrame_14;
	// System.Int32 TriLibCore.Fbx.FBXVideo::Width
	int32_t ___Width_15;
	// System.Int32 TriLibCore.Fbx.FBXVideo::Height
	int32_t ___Height_16;
	// System.Int32 TriLibCore.Fbx.FBXVideo::StartFrame
	int32_t ___StartFrame_17;
	// System.Int32 TriLibCore.Fbx.FBXVideo::StopFrame
	int32_t ___StopFrame_18;
	// System.String TriLibCore.Fbx.FBXVideo::Path
	String_t* ___Path_19;
	// System.String TriLibCore.Fbx.FBXVideo::RelPath
	String_t* ___RelPath_20;
	// System.Single TriLibCore.Fbx.FBXVideo::PlayOffset
	float ___PlayOffset_21;
	// System.Int64 TriLibCore.Fbx.FBXVideo::Offset
	int64_t ___Offset_22;
	// TriLibCore.Fbx.FBXInterlaceMode TriLibCore.Fbx.FBXVideo::InterlaceMode
	int32_t ___InterlaceMode_23;
	// System.Boolean TriLibCore.Fbx.FBXVideo::FreeRunning
	bool ___FreeRunning_24;
	// System.Boolean TriLibCore.Fbx.FBXVideo::Loop
	bool ___Loop_25;
	// TriLibCore.Fbx.FBXAccessMode TriLibCore.Fbx.FBXVideo::AccessMode
	int32_t ___AccessMode_26;
	// System.String TriLibCore.Fbx.FBXVideo::Type
	String_t* ___Type_27;
	// System.Boolean TriLibCore.Fbx.FBXVideo::UseMipMap
	bool ___UseMipMap_28;
	// System.String TriLibCore.Fbx.FBXVideo::Filename
	String_t* ___Filename_29;
	// System.String TriLibCore.Fbx.FBXVideo::RelativeFilename
	String_t* ___RelativeFilename_30;
	// System.Byte[] TriLibCore.Fbx.FBXVideo::Content
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Content_31;
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

// TriLibCore.Fbx.FBXRootModel
struct FBXRootModel_t1960D19A6733168B2F9CF5A6235362FD25861775  : public FBXModel_t5D448CD22472ADEA4C42B7A9F299C393769E08A4
{
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IModel> TriLibCore.Fbx.FBXRootModel::<AllModels>k__BackingField
	RuntimeObject* ___U3CAllModelsU3Ek__BackingField_32;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IAnimation> TriLibCore.Fbx.FBXRootModel::<AllAnimations>k__BackingField
	RuntimeObject* ___U3CAllAnimationsU3Ek__BackingField_33;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IMaterial> TriLibCore.Fbx.FBXRootModel::<AllMaterials>k__BackingField
	RuntimeObject* ___U3CAllMaterialsU3Ek__BackingField_34;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.IGeometryGroup> TriLibCore.Fbx.FBXRootModel::<AllGeometryGroups>k__BackingField
	RuntimeObject* ___U3CAllGeometryGroupsU3Ek__BackingField_35;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ITexture> TriLibCore.Fbx.FBXRootModel::<AllTextures>k__BackingField
	RuntimeObject* ___U3CAllTexturesU3Ek__BackingField_36;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ICamera> TriLibCore.Fbx.FBXRootModel::<AllCameras>k__BackingField
	RuntimeObject* ___U3CAllCamerasU3Ek__BackingField_37;
	// System.Collections.Generic.IList`1<TriLibCore.Interfaces.ILight> TriLibCore.Fbx.FBXRootModel::<AllLights>k__BackingField
	RuntimeObject* ___U3CAllLightsU3Ek__BackingField_38;
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// TriLibCore.Fbx.FBXDocument
struct FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834  : public FBXRootModel_t1960D19A6733168B2F9CF5A6235362FD25861775
{
	// System.Int32 TriLibCore.Fbx.FBXDocument::Version
	int32_t ___Version_41;
	// System.Boolean TriLibCore.Fbx.FBXDocument::IsBinary
	bool ___IsBinary_42;
	// TriLibCore.Fbx.FBXGlobalSettings TriLibCore.Fbx.FBXDocument::GlobalSettings
	FBXGlobalSettings_t0C07F154075AAF25F09B10FF36073B5A01B8BC28* ___GlobalSettings_43;
	// TriLibCore.Fbx.FBXModel TriLibCore.Fbx.FBXDocument::ModelDefinition
	FBXModel_t5D448CD22472ADEA4C42B7A9F299C393769E08A4* ___ModelDefinition_44;
	// TriLibCore.Fbx.FBXAnimationLayer TriLibCore.Fbx.FBXDocument::AnimationLayerDefinition
	FBXAnimationLayer_t691446B83D4B681F5922098EBD0E0B2F30A1CB50* ___AnimationLayerDefinition_45;
	// TriLibCore.Fbx.FBXAnimationCurve TriLibCore.Fbx.FBXDocument::AnimationCurveDefinition
	FBXAnimationCurve_t231EE593FF73ECE0908ED97A303F7EAFC5D4D45C* ___AnimationCurveDefinition_46;
	// TriLibCore.Fbx.FBXAnimationCurveNode TriLibCore.Fbx.FBXDocument::AnimationCurveNodeDefinition
	FBXAnimationCurveNode_t576192536BD712D1A036BD4CA26E65E2AF91D5BB* ___AnimationCurveNodeDefinition_47;
	// TriLibCore.Fbx.FBXAnimationStack TriLibCore.Fbx.FBXDocument::AnimationStackDefinition
	FBXAnimationStack_t1951A8FC41247D031C5FB2058F47DFFB6FEB4826* ___AnimationStackDefinition_48;
	// TriLibCore.Fbx.FBXDeformer TriLibCore.Fbx.FBXDocument::DeformerDefinition
	FBXDeformer_t6205A00C20A32DA310DE01502EDE739CD8AD9BC8* ___DeformerDefinition_49;
	// TriLibCore.Fbx.FBXPose TriLibCore.Fbx.FBXDocument::PoseDefinition
	FBXPose_t58C887C0A441F315857FDA99BBB3FF3A2E3158C3* ___PoseDefinition_50;
	// TriLibCore.Fbx.FBXMaterial TriLibCore.Fbx.FBXDocument::MaterialDefinition
	FBXMaterial_tF187223B7488940E1773EC2749D36BDB16F9C944* ___MaterialDefinition_51;
	// TriLibCore.Fbx.FBXVideo TriLibCore.Fbx.FBXDocument::VideoDefinition
	FBXVideo_t5E3B9EE50CF8C48C1694A512180A2CB465E89CD2* ___VideoDefinition_52;
	// TriLibCore.Fbx.FBXTexture TriLibCore.Fbx.FBXDocument::TextureDefinition
	FBXTexture_t144C224F07D8C26F18E312F7A530F5C15AF1D79D* ___TextureDefinition_53;
	// TriLibCore.Fbx.FBXBlendShapeGeometryGroup TriLibCore.Fbx.FBXDocument::BlendShapeGeometryGroupDefinition
	FBXBlendShapeGeometryGroup_t7F48F7377B8F0CEBAFADB748FCECFDA63D99949C* ___BlendShapeGeometryGroupDefinition_54;
	// TriLibCore.Fbx.IFBXGeometryGroup TriLibCore.Fbx.FBXDocument::GeometryGroupDefinition
	RuntimeObject* ___GeometryGroupDefinition_55;
	// TriLibCore.Fbx.FBXBlendShapeSubDeformer TriLibCore.Fbx.FBXDocument::BlendShapeChannelDefinition
	FBXBlendShapeSubDeformer_t8ED024CF120BB5964980D664E3E4A8814DC873A9* ___BlendShapeChannelDefinition_56;
	// TriLibCore.Fbx.FBXSubDeformer TriLibCore.Fbx.FBXDocument::SubDeformerDefinition
	FBXSubDeformer_tD0AE3226DCA22276BBDE337EEBAD3789F1143FDC* ___SubDeformerDefinition_57;
	// TriLibCore.Fbx.FBXNodeAttribute TriLibCore.Fbx.FBXDocument::NodeAttributeDefinition
	FBXNodeAttribute_tD64A5CE0BD58841F114311413B61A7AE29C6C593* ___NodeAttributeDefinition_58;
	// System.Collections.Generic.Dictionary`2<System.Int64,TriLibCore.Fbx.IFBXObject> TriLibCore.Fbx.FBXDocument::Objects
	Dictionary_2_tE8D0E51AE256AFF2CE801667465D9F47A030908B* ___Objects_59;
	// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXModel> TriLibCore.Fbx.FBXDocument::Models
	RuntimeObject* ___Models_60;
	// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXDeformer> TriLibCore.Fbx.FBXDocument::Deformers
	RuntimeObject* ___Deformers_61;
	// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXSubDeformer> TriLibCore.Fbx.FBXDocument::SubDeformers
	RuntimeObject* ___SubDeformers_62;
	// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXAnimationCurveNode> TriLibCore.Fbx.FBXDocument::AnimationCurveNodes
	RuntimeObject* ___AnimationCurveNodes_63;
	// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXAnimationCurve> TriLibCore.Fbx.FBXDocument::AnimationCurves
	RuntimeObject* ___AnimationCurves_64;
	// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXAnimationLayer> TriLibCore.Fbx.FBXDocument::AnimationLayers
	RuntimeObject* ___AnimationLayers_65;
	// System.Collections.Generic.IList`1<TriLibCore.Fbx.FBXBlendShapeGeometryGroup> TriLibCore.Fbx.FBXDocument::BlendShapeGeometryGroups
	RuntimeObject* ___BlendShapeGeometryGroups_66;
	// System.Int32 TriLibCore.Fbx.FBXDocument::ModelsCount
	int32_t ___ModelsCount_67;
	// System.Int32 TriLibCore.Fbx.FBXDocument::MaterialsCount
	int32_t ___MaterialsCount_68;
	// System.Int32 TriLibCore.Fbx.FBXDocument::VideosCount
	int32_t ___VideosCount_69;
	// System.Int32 TriLibCore.Fbx.FBXDocument::TexturesCount
	int32_t ___TexturesCount_70;
	// System.Int32 TriLibCore.Fbx.FBXDocument::LayeredTexturesCount
	int32_t ___LayeredTexturesCount_71;
	// System.Int32 TriLibCore.Fbx.FBXDocument::GeometriesCount
	int32_t ___GeometriesCount_72;
	// System.Int32 TriLibCore.Fbx.FBXDocument::AnimationStacksCount
	int32_t ___AnimationStacksCount_73;
	// System.Int32 TriLibCore.Fbx.FBXDocument::AnimationLayersCount
	int32_t ___AnimationLayersCount_74;
	// System.Int32 TriLibCore.Fbx.FBXDocument::AnimationCurvesCount
	int32_t ___AnimationCurvesCount_75;
	// System.Int32 TriLibCore.Fbx.FBXDocument::AnimationCurveNodesCount
	int32_t ___AnimationCurveNodesCount_76;
	// System.Int32 TriLibCore.Fbx.FBXDocument::DeformersCount
	int32_t ___DeformersCount_77;
	// System.Int32 TriLibCore.Fbx.FBXDocument::SubDeformersCount
	int32_t ___SubDeformersCount_78;
	// System.Int32 TriLibCore.Fbx.FBXDocument::ObjectsCount
	int32_t ___ObjectsCount_79;
	// System.Int32 TriLibCore.Fbx.FBXDocument::ConnectedGeometriesCount
	int32_t ___ConnectedGeometriesCount_80;
	// System.Int32 TriLibCore.Fbx.FBXDocument::CamerasCount
	int32_t ___CamerasCount_81;
	// System.Int32 TriLibCore.Fbx.FBXDocument::LightsCount
	int32_t ___LightsCount_82;
	// TriLibCore.Fbx.FBXMatrixBuffer TriLibCore.Fbx.FBXDocument::MatrixBuffer
	FBXMatrixBuffer_tF111AF67C063DB9EFE066B3E92AB4391B05BAF1F* ___MatrixBuffer_83;
	// System.Boolean TriLibCore.Fbx.FBXDocument::NewTC
	bool ___NewTC_84;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
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
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
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


// System.Void TriLibCore.Fbx.PropertyAccessorIEnumerator`1<System.Byte>::.ctor(System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorIEnumerator_1__ctor_m13F6A2E033696DC706279AE3A91D02A64206AC4D_gshared (PropertyAccessorIEnumerator_1_t507F53FFDEAE6189449897018F3198188410DEB2* __this, RuntimeObject* ___list0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.PropertyAccessorIEnumerator`1<System.Int16>::.ctor(System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorIEnumerator_1__ctor_m10ADEEA2B95198A97E5327E47BFAB5720EA81883_gshared (PropertyAccessorIEnumerator_1_t99D6ABB7ECAA7EDD17341582A28BF20268F5C71D* __this, RuntimeObject* ___list0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.PropertyAccessorIEnumerator`1<System.Single>::.ctor(System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorIEnumerator_1__ctor_m885514EA1BD585E7096456986DE47D98FFC4D9DC_gshared (PropertyAccessorIEnumerator_1_t132A7FDC9F7EEB025D6C21FF07F9E037A5D8412D* __this, RuntimeObject* ___list0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.PropertyAccessorIEnumerator`1<System.Int32>::.ctor(System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorIEnumerator_1__ctor_m698626BC437191FDC212DB020833A50A9A35807A_gshared (PropertyAccessorIEnumerator_1_tC80F58CC2A95871A7E8891567EEE4DAAC636E0A6* __this, RuntimeObject* ___list0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.PropertyAccessorIEnumerator`1<System.Int64>::.ctor(System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorIEnumerator_1__ctor_m52017FEBE78CFF4A3918E710C90AFBB0AE6B434F_gshared (PropertyAccessorIEnumerator_1_t81284489B090B3086F8560CFF14FCFA37CD50F96* __this, RuntimeObject* ___list0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.PropertyAccessorIEnumerator`1<System.Double>::.ctor(System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorIEnumerator_1__ctor_m807FB04952574C23B9ECCFF282D11027CB4022CD_gshared (PropertyAccessorIEnumerator_1_tA87B54345A2924A4BB0DE1D0D4BE147D24B9056D* __this, RuntimeObject* ___list0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m9A4D60A27A7CAA492BE4A9AC1EB250802FDDF5A4_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, int64_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mF6ABB6369C9A6394AE57424BE839FE87809B4102_gshared (Dictionary_2_t4A0148843FDD82FE00634A604A772FC4EE3A0379* __this, int64_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;

// System.Void TriLibCore.Fbx.FBXObject::.ctor(TriLibCore.Fbx.FBXDocument,System.String,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXObject__ctor_mD1FE978E4457290FC9C98E8E15DBEB7D5D4F0C0E (FBXObject_t955A55BC5B93846C9089D1A44A2DC3F65FC05671* __this, FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* ___document0, String_t* ___name1, int64_t ___objectId2, String_t* ___objectClass3, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.FBXObject::set_ObjectType(TriLibCore.Fbx.FBXObjectType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FBXObject_set_ObjectType_m7926F17FD0F2D46EFB8C784FB2344DEA1DCAE24A_inline (FBXObject_t955A55BC5B93846C9089D1A44A2DC3F65FC05671* __this, int32_t ___value0, const RuntimeMethod* method) ;
// TriLibCore.Fbx.FBXDocument TriLibCore.Fbx.FBXObject::get_Document()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* FBXObject_get_Document_m3C861F05648C2807DB9DEB69D06FEB1615CDE989_inline (FBXObject_t955A55BC5B93846C9089D1A44A2DC3F65FC05671* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.PropertyAccessorIEnumerator`1<System.Byte>::.ctor(System.Collections.Generic.IList`1<T>)
inline void PropertyAccessorIEnumerator_1__ctor_m13F6A2E033696DC706279AE3A91D02A64206AC4D (PropertyAccessorIEnumerator_1_t507F53FFDEAE6189449897018F3198188410DEB2* __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	((  void (*) (PropertyAccessorIEnumerator_1_t507F53FFDEAE6189449897018F3198188410DEB2*, RuntimeObject*, const RuntimeMethod*))PropertyAccessorIEnumerator_1__ctor_m13F6A2E033696DC706279AE3A91D02A64206AC4D_gshared)(__this, ___list0, method);
}
// System.Collections.Generic.IEnumerator`1<System.Byte> TriLibCore.Fbx.PropertyAccessorByte::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorByte_GetEnumerator_m0CEC0EE1DFBA9926652B838388F72EB35D64CD8C (PropertyAccessorByte_t3A1E04FFC4110354C2453EFA806F97FC6CEDB899* __this, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Byte TriLibCore.Fbx.PropertyAccessorByte::GetElement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PropertyAccessorByte_GetElement_mBAF530E2CA25A3BD699AD74B7793BFC14481DCFB (PropertyAccessorByte_t3A1E04FFC4110354C2453EFA806F97FC6CEDB899* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Fbx.PropertyAccessorByte::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorByte_get_Count_m248A77D652A9BF16734BE54219C5F5EAC9D3C360 (PropertyAccessorByte_t3A1E04FFC4110354C2453EFA806F97FC6CEDB899* __this, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Fbx.FBXProperties::GetPropertyArrayLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXProperties_GetPropertyArrayLength_mD43333FAA9443D29CC2A86C914E75F7D2DF57EC9 (FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* __this, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Fbx.FBXProperties::get_IsASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FBXProperties_get_IsASCII_m412715B4396F75F7B1127FD4A4B44AC3BC963420 (FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* __this, const RuntimeMethod* method) ;
// System.Byte TriLibCore.Fbx.FBXProperties::ASCIIGetByteValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t FBXProperties_ASCIIGetByteValue_mEE859B6C1DC74635CE3954D26BF992EEFBB22F72 (FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* __this, int32_t ___index0, const RuntimeMethod* method) ;
// TriLibCore.Fbx.FBXProcessor TriLibCore.Fbx.FBXProperties::get_Processor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline (FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* __this, const RuntimeMethod* method) ;
// TriLibCore.Fbx.FBXProperty TriLibCore.Fbx.FBXProcessor::LoadArrayProperty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 FBXProcessor_LoadArrayProperty_mB08E43868A94F68E25F8DC291BF74851374FFD0C (FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* __this, int32_t ___basePropertyIndex0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.FBXProcessor::SetActiveBinaryReader(TriLibCore.Fbx.FBXProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXProcessor_SetActiveBinaryReader_m8C8111F52EB6DC3DD76E5F2F39F9A2695764B868 (FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* __this, FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 ___activeProperty0, const RuntimeMethod* method) ;
// System.Byte TriLibCore.Fbx.FBXProperties::BinaryConvertByteValue(System.IO.BinaryReader,TriLibCore.Fbx.FBXProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t FBXProperties_BinaryConvertByteValue_m80C1705B7E82FAE4750F6D65FADC42AE6FD3B742 (FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___binaryReader0, FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 ___binaryProperty1, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.PropertyAccessorIEnumerator`1<System.Int16>::.ctor(System.Collections.Generic.IList`1<T>)
inline void PropertyAccessorIEnumerator_1__ctor_m10ADEEA2B95198A97E5327E47BFAB5720EA81883 (PropertyAccessorIEnumerator_1_t99D6ABB7ECAA7EDD17341582A28BF20268F5C71D* __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	((  void (*) (PropertyAccessorIEnumerator_1_t99D6ABB7ECAA7EDD17341582A28BF20268F5C71D*, RuntimeObject*, const RuntimeMethod*))PropertyAccessorIEnumerator_1__ctor_m10ADEEA2B95198A97E5327E47BFAB5720EA81883_gshared)(__this, ___list0, method);
}
// System.Collections.Generic.IEnumerator`1<System.Int16> TriLibCore.Fbx.PropertyAccessorShort::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorShort_GetEnumerator_m9C4184C792895C2EF4BABD954964E416C9FC0DA4 (PropertyAccessorShort_t8DF6A20D36578B83FD65BEF805562CF32F999DC8* __this, const RuntimeMethod* method) ;
// System.Int16 TriLibCore.Fbx.PropertyAccessorShort::GetElement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PropertyAccessorShort_GetElement_m21FD1368E6B6DEF31B2D03E006DA07E7A6657778 (PropertyAccessorShort_t8DF6A20D36578B83FD65BEF805562CF32F999DC8* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Fbx.PropertyAccessorShort::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorShort_get_Count_m7778AE2F440E033D26ECAC2174D79C054CCEDCE3 (PropertyAccessorShort_t8DF6A20D36578B83FD65BEF805562CF32F999DC8* __this, const RuntimeMethod* method) ;
// System.Int16 TriLibCore.Fbx.FBXProperties::ASCIIGetShortValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t FBXProperties_ASCIIGetShortValue_m51DDC9F9C39A3A7DC82D1C1482928EE416CD9B45 (FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int16 TriLibCore.Fbx.FBXProperties::BinaryConvertShortValue(System.IO.BinaryReader,TriLibCore.Fbx.FBXProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t FBXProperties_BinaryConvertShortValue_m6E83F8CE430AE92BC9CE1A9CB08407695D5E2A74 (FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___binaryReader0, FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 ___binaryProperty1, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.PropertyAccessorIEnumerator`1<System.Single>::.ctor(System.Collections.Generic.IList`1<T>)
inline void PropertyAccessorIEnumerator_1__ctor_m885514EA1BD585E7096456986DE47D98FFC4D9DC (PropertyAccessorIEnumerator_1_t132A7FDC9F7EEB025D6C21FF07F9E037A5D8412D* __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	((  void (*) (PropertyAccessorIEnumerator_1_t132A7FDC9F7EEB025D6C21FF07F9E037A5D8412D*, RuntimeObject*, const RuntimeMethod*))PropertyAccessorIEnumerator_1__ctor_m885514EA1BD585E7096456986DE47D98FFC4D9DC_gshared)(__this, ___list0, method);
}
// System.Collections.Generic.IEnumerator`1<System.Single> TriLibCore.Fbx.PropertyAccessorIEE754::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorIEE754_GetEnumerator_mA6FECF69D50702B86D10F00937E845DB91DE1171 (PropertyAccessorIEE754_t0C46BCCB2920674DF4B0DA353E76ECECBC30819C* __this, const RuntimeMethod* method) ;
// System.Single TriLibCore.Fbx.PropertyAccessorIEE754::GetElement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyAccessorIEE754_GetElement_mAEDF6D2F614A73FF653B089BD2FD07F4D809D893 (PropertyAccessorIEE754_t0C46BCCB2920674DF4B0DA353E76ECECBC30819C* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Fbx.PropertyAccessorIEE754::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorIEE754_get_Count_m3DBE759D8CC11737529D4AA5739849E4AEE4A54C (PropertyAccessorIEE754_t0C46BCCB2920674DF4B0DA353E76ECECBC30819C* __this, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Fbx.FBXProperties::ASCIIGetIntValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXProperties_ASCIIGetIntValue_mD5B6A00346736642E5944098176C6A9715E60592 (FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Fbx.FBXProperties::BinaryConvertIntValue(System.IO.BinaryReader,TriLibCore.Fbx.FBXProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXProperties_BinaryConvertIntValue_m5271B4E15B0F3ED92CFB92DE359B8CDC9993C709 (FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___binaryReader0, FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 ___binaryProperty1, const RuntimeMethod* method) ;
// System.Byte[] TriLibCore.Fbx.PropertyAccessorIEE754::GetBytesInt(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PropertyAccessorIEE754_GetBytesInt_m1809276B604FF35FE75043EF51F3B2E063952CEB (PropertyAccessorIEE754_t0C46BCCB2920674DF4B0DA353E76ECECBC30819C* __this, int32_t ___value0, int32_t ___offset1, const RuntimeMethod* method) ;
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BitConverter_ToSingle_m385AA8335F6A788C1AD54295BA8352FFADD91F36 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_m684B090AA2F895FD91821CA8684CBC11D784E4DD_inline (float ___f0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.PropertyAccessorIEnumerator`1<System.Int32>::.ctor(System.Collections.Generic.IList`1<T>)
inline void PropertyAccessorIEnumerator_1__ctor_m698626BC437191FDC212DB020833A50A9A35807A (PropertyAccessorIEnumerator_1_tC80F58CC2A95871A7E8891567EEE4DAAC636E0A6* __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	((  void (*) (PropertyAccessorIEnumerator_1_tC80F58CC2A95871A7E8891567EEE4DAAC636E0A6*, RuntimeObject*, const RuntimeMethod*))PropertyAccessorIEnumerator_1__ctor_m698626BC437191FDC212DB020833A50A9A35807A_gshared)(__this, ___list0, method);
}
// System.Collections.Generic.IEnumerator`1<System.Int32> TriLibCore.Fbx.PropertyAccessorInt::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorInt_GetEnumerator_mBB1428C9E22A3A29F1D9ECFCA21FD6F77301720F (PropertyAccessorInt_t24E4E4DFF80422C4D86DD9E20FB16D192D7343F3* __this, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Fbx.PropertyAccessorInt::GetElement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorInt_GetElement_m601D35A0D8860914D136AE3CD434BE51E404C7FB (PropertyAccessorInt_t24E4E4DFF80422C4D86DD9E20FB16D192D7343F3* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Fbx.PropertyAccessorInt::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorInt_get_Count_m0C89ED9BBF123AF37C9647E9D08743150C453D88 (PropertyAccessorInt_t24E4E4DFF80422C4D86DD9E20FB16D192D7343F3* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.PropertyAccessorIEnumerator`1<System.Int64>::.ctor(System.Collections.Generic.IList`1<T>)
inline void PropertyAccessorIEnumerator_1__ctor_m52017FEBE78CFF4A3918E710C90AFBB0AE6B434F (PropertyAccessorIEnumerator_1_t81284489B090B3086F8560CFF14FCFA37CD50F96* __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	((  void (*) (PropertyAccessorIEnumerator_1_t81284489B090B3086F8560CFF14FCFA37CD50F96*, RuntimeObject*, const RuntimeMethod*))PropertyAccessorIEnumerator_1__ctor_m52017FEBE78CFF4A3918E710C90AFBB0AE6B434F_gshared)(__this, ___list0, method);
}
// System.Collections.Generic.IEnumerator`1<System.Int64> TriLibCore.Fbx.PropertyAccessorLong::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorLong_GetEnumerator_m12B3301EE1B107A05C091AB0E1CC76E0C3804458 (PropertyAccessorLong_t9A62C22AD09C973ACA178BE1BAC3A8FFB805C8A7* __this, const RuntimeMethod* method) ;
// System.Int64 TriLibCore.Fbx.PropertyAccessorLong::GetElement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t PropertyAccessorLong_GetElement_m296C57EACB6F02ABEB4471B17EB24503791DE6D0 (PropertyAccessorLong_t9A62C22AD09C973ACA178BE1BAC3A8FFB805C8A7* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Fbx.PropertyAccessorLong::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorLong_get_Count_m4848D70EC610CBA6E351059DFA38F3D565B89DF9 (PropertyAccessorLong_t9A62C22AD09C973ACA178BE1BAC3A8FFB805C8A7* __this, const RuntimeMethod* method) ;
// System.Int64 TriLibCore.Fbx.FBXProperties::ASCIIGetLongValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FBXProperties_ASCIIGetLongValue_m7AAAE670097E8A2E4D8CC45E10D2FB8825731B15 (FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int64 TriLibCore.Fbx.FBXProperties::BinaryConvertLongValue(System.IO.BinaryReader,TriLibCore.Fbx.FBXProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FBXProperties_BinaryConvertLongValue_m3127F020BCF8033861FF1A83AF15F32AACCF6123 (FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___binaryReader0, FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 ___binaryProperty1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Single> TriLibCore.Fbx.PropertyAccessorFloat::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorFloat_GetEnumerator_mC7CA3AD0597A0B85F4037019EFF259A7BBF1D425 (PropertyAccessorFloat_t1442C7AC1ECC61647B8B16289FAD0AC5A072D96B* __this, const RuntimeMethod* method) ;
// System.Single TriLibCore.Fbx.PropertyAccessorFloat::GetElement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyAccessorFloat_GetElement_mA56ED47BACBFA0BBA492E270FD5AA697850A5EF0 (PropertyAccessorFloat_t1442C7AC1ECC61647B8B16289FAD0AC5A072D96B* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Fbx.PropertyAccessorFloat::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorFloat_get_Count_m0AA67B6688957CA7F3B2E57EACE0882A5A05879C (PropertyAccessorFloat_t1442C7AC1ECC61647B8B16289FAD0AC5A072D96B* __this, const RuntimeMethod* method) ;
// System.Single TriLibCore.Fbx.FBXProperties::ASCIIGetFloatValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FBXProperties_ASCIIGetFloatValue_m73F67724B2EFDA0EF8AAA9D64DC918E2436A40BA (FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Single TriLibCore.Fbx.FBXProperties::BinaryConvertFloatValue(System.IO.BinaryReader,TriLibCore.Fbx.FBXProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FBXProperties_BinaryConvertFloatValue_mB5117FA192902F469E2A916625E117648D95FBE9 (FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___binaryReader0, FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 ___binaryProperty1, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.PropertyAccessorIEnumerator`1<System.Double>::.ctor(System.Collections.Generic.IList`1<T>)
inline void PropertyAccessorIEnumerator_1__ctor_m807FB04952574C23B9ECCFF282D11027CB4022CD (PropertyAccessorIEnumerator_1_tA87B54345A2924A4BB0DE1D0D4BE147D24B9056D* __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	((  void (*) (PropertyAccessorIEnumerator_1_tA87B54345A2924A4BB0DE1D0D4BE147D24B9056D*, RuntimeObject*, const RuntimeMethod*))PropertyAccessorIEnumerator_1__ctor_m807FB04952574C23B9ECCFF282D11027CB4022CD_gshared)(__this, ___list0, method);
}
// System.Collections.Generic.IEnumerator`1<System.Double> TriLibCore.Fbx.PropertyAccessorDouble::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorDouble_GetEnumerator_m9F6C9FED59EA7039C0F615AAD3881AD89F9A6694 (PropertyAccessorDouble_t189D059F98C03914177E9547477777DC527180B5* __this, const RuntimeMethod* method) ;
// System.Double TriLibCore.Fbx.PropertyAccessorDouble::GetElement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PropertyAccessorDouble_GetElement_m23682071BF27DDD51AA30507127971F691D4DFAE (PropertyAccessorDouble_t189D059F98C03914177E9547477777DC527180B5* __this, int32_t ___i0, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Fbx.PropertyAccessorDouble::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorDouble_get_Count_mD1726F34A29A7ACEF3A1CF4C1CB12FABE08D7197 (PropertyAccessorDouble_t189D059F98C03914177E9547477777DC527180B5* __this, const RuntimeMethod* method) ;
// System.Double TriLibCore.Fbx.FBXProperties::ASCIIGetDoubleValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double FBXProperties_ASCIIGetDoubleValue_m80150CE66E655F21CB5F37689DF79FF9822C0C07 (FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Double TriLibCore.Fbx.FBXProperties::BinaryConvertDoubleValue(System.IO.BinaryReader,TriLibCore.Fbx.FBXProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double FBXProperties_BinaryConvertDoubleValue_mA84CDC06DFFEC83B053D0F22152A0C4FCA12C94E (FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* __this, BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___binaryReader0, FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 ___binaryProperty1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// TriLibCore.Interfaces.IRootModel TriLibCore.ReaderBase::ReadStream(System.IO.Stream,TriLibCore.AssetLoaderContext,System.String,System.Action`2<TriLibCore.AssetLoaderContext,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReaderBase_ReadStream_m725378DF096B29E0DB3BE3FB9E5F1E37747883F4 (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___assetLoaderContext1, String_t* ___filename2, Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* ___onProgress3, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Fbx.Reader.FbxReader::IsBinary(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FbxReader_IsBinary_mC3D42B93BA7470C717A2C494339A25E9ED374274 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// TriLibCore.Interfaces.IRootModel TriLibCore.Fbx.Reader.FbxReader::ParseBinary(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FbxReader_ParseBinary_m8B56277ECB7EEE23D9D8477378311DAC78DD5515 (FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Void TriLibCore.ReaderBase::PostProcessModel(TriLibCore.Interfaces.IRootModel&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderBase_PostProcessModel_mD3BB953DE8BEB5FCA65077455BDA0750F740C667 (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, RuntimeObject** ___model0, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Fbx.Reader.FbxReader::IsASCII(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FbxReader_IsASCII_mA2096AAE6899624441FDEB02509ED99ED7EB883C (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// TriLibCore.Interfaces.IRootModel TriLibCore.Fbx.Reader.FbxReader::ParseASCII(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FbxReader_ParseASCII_m9B2DF8EBC9701E3DA1CAFC1067057815F487066F (FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.FBXDocument::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXDocument__ctor_m725644F1B4CBB463A84BA6C11C0B8990847B2390 (FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.FBXProcessor::.ctor(TriLibCore.Fbx.Reader.FbxReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXProcessor__ctor_m9CE53C2B543FA782A9F365B4EDFC3DB87BFB7977 (FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* __this, FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E* ___reader0, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.Binary.FBXBinaryReader::.ctor(System.IO.Stream,TriLibCore.ReaderBase,TriLibCore.Fbx.FBXProcessor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXBinaryReader__ctor_mE643C5E24AF0209662FD47E0FA56FFCF9CB56554 (FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___inputStream0, ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* ___reader1, FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* ___processor2, const RuntimeMethod* method) ;
// TriLibCore.Fbx.FBXNode TriLibCore.Fbx.Binary.FBXBinaryReader::ReadDocument()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D FBXBinaryReader_ReadDocument_m27AFF3DF4C3E9C70713109A0A2FB0FA293674E64 (FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50* __this, const RuntimeMethod* method) ;
// TriLibCore.Fbx.FBXRootModel TriLibCore.Fbx.FBXProcessor::Process(TriLibCore.Fbx.FBXNode,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBXRootModel_t1960D19A6733168B2F9CF5A6235362FD25861775* FBXProcessor_Process_mD196AFB65D13AA7C75FE1409F327F5913214E902 (FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* __this, FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D ___rootNode0, bool ___isBinary1, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.Binary.FBXBinaryReader::Unload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXBinaryReader_Unload_m849A9163DF9496C688291EA217710B09C28E0E00 (FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50* __this, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader_Dispose_mAFF1A9CE9A73D148270FFA1F896992EB52D36078 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.ASCII.FBXASCIIReader::.ctor(TriLibCore.Fbx.FBXProcessor,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXASCIIReader__ctor_mEB75301BADCB18697945E53B545B3A5B5E9787C7 (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* ___processor0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream1, const RuntimeMethod* method) ;
// TriLibCore.Fbx.FBXNode TriLibCore.Fbx.ASCII.FBXASCIIReader::ReadDocument()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D FBXASCIIReader_ReadDocument_m42A06BB831534E44B0CFDE179264545AC4875724 (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.ReaderBase::UpdateLoadingPercentage(System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, float ___value0, int32_t ___step1, float ___maxValue2, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Extensions.StreamExtensions::MatchRegex(System.IO.Stream,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamExtensions_MatchRegex_m60B9844183B77F4532A15735399C1CAD90A518A5 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___patterns1, const RuntimeMethod* method) ;
// System.Void TriLibCore.ReaderBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderBase__ctor_m5C4FE7A4BC205B65DAB56FF3CC5202D0B04937DA (ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* __this, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream,System.Text.Encoding,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m5B206ED513B0AECC14E4AF5A7B42AE5C4885334E (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___encoding1, bool ___leaveOpen2, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Inflater::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inflater__ctor_m5183A7AAD2E39FFDCEE42A83E207181960B95FF9 (Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494* __this, bool ___noHeader0, const RuntimeMethod* method) ;
// System.Void ICSharpCode.SharpZipLib.Zip.Compression.Streams.InflaterInputStream::.ctor(System.IO.Stream,ICSharpCode.SharpZipLib.Zip.Compression.Inflater)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InflaterInputStream__ctor_mAEA971E711654A0AFB588ABE8512960D41F3E3D0 (InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___baseInputStream0, Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494* ___inf1, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.Binary.FBXBinaryReader::CountNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXBinaryReader_CountNodes_mEFFEBD8557116B771B275FFCD87AA43EDDF4F463 (FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50* __this, const RuntimeMethod* method) ;
// TriLibCore.Fbx.FBXNode TriLibCore.Fbx.Binary.FBXBinaryReader::ReadRootNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D FBXBinaryReader_ReadRootNode_m588BA96B26A31C30F9A70229130034A770D39CD6 (FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50* __this, const RuntimeMethod* method) ;
// System.Boolean TriLibCore.Fbx.Binary.FBXBinaryReader::CountChildNodes(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FBXBinaryReader_CountChildNodes_mCBAAD8D4DBBECD855F5BCC757BA5E061B374C4DF (FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50* __this, int32_t* ___childCount0, int32_t* ___propertiesCount1, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.FBXProcessor::SetupNodesBuffer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXProcessor_SetupNodesBuffer_m2FEDDAC01B76B83414E1FB4EB68488B9785DB581 (FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* __this, int32_t ___totalNodesCount0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.FBXProcessor::SetupPropertiesBuffer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXProcessor_SetupPropertiesBuffer_m9637F357680676046CD8BA98989E83B525CD0ABB (FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* __this, int32_t ___totalPropertiesCount0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.Binary.FBXBinaryReader::SkipStringEx()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXBinaryReader_SkipStringEx_mCC66E0E7BDF4C7F65EF9BB62CE92B8CBFA874148 (FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50* __this, const RuntimeMethod* method) ;
// System.Int32 System.IO.BinaryReader::Read7BitEncodedInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BinaryReader_Read7BitEncodedInt_mAC30887A2BB23F481A73FA61A487159F855D34F5 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Int64 TriLibCore.Fbx.FBXProcessor::GetHash(System.Collections.Generic.IList`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FBXProcessor_GetHash_mF0A8531E6C4C6C3AB94D68C57CE909F58D0DD91F (RuntimeObject* ___bytes0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int64,System.String>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m9C5F90E7F1FC1D9BEC1BDF3BB64D919A69E382B9 (Dictionary_2_tAEBFFDB440F054AE9C7C1D99E9D40D111C6253AE* __this, int64_t ___key0, String_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tAEBFFDB440F054AE9C7C1D99E9D40D111C6253AE*, int64_t, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_m9A4D60A27A7CAA492BE4A9AC1EB250802FDDF5A4_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mDCA553F82ED7197C585BCF9A578D6918E560BC7F (Dictionary_2_tAEBFFDB440F054AE9C7C1D99E9D40D111C6253AE* __this, int64_t ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAEBFFDB440F054AE9C7C1D99E9D40D111C6253AE*, int64_t, String_t*, const RuntimeMethod*))Dictionary_2_Add_mF6ABB6369C9A6394AE57424BE839FE87809B4102_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 TriLibCore.Fbx.Binary.FBXBinaryReader::ReadNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXBinaryReader_ReadNode_m7B76CA3D4E6C170ADDBC95526EEB5A823900C92E (FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.FBXProcessor::SetNodeNext(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXProcessor_SetNodeNext_m8630F0DDE868E67E1C3EBE3BE0F8ABBA8BF5484C (FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* __this, int32_t ___nodeIndex0, int32_t ___nextNodeIndex1, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.FBXProperties::.ctor(TriLibCore.Fbx.FBXProcessor,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXProperties__ctor_m9FAEE6F003B0285D473D3E241974FC3C9EBFE67C (FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* __this, FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* ___processor0, int32_t ___propertiesCount1, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.FBXNode::.ctor(TriLibCore.Fbx.FBXProcessor,System.String,TriLibCore.Fbx.FBXProperties,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXNode__ctor_m2C94779116978D9259AEC195A9DA56655873E08B (FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D* __this, FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* ___processor0, String_t* ___name1, FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 ___properties2, int32_t ___nodesCount3, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Fbx.FBXProcessor::AddNode(TriLibCore.Fbx.FBXNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXProcessor_AddNode_m39374DBF94E11AB90240A841029D230D62AC872D (FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* __this, FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D ___node0, const RuntimeMethod* method) ;
// System.String TriLibCore.Fbx.Binary.FBXBinaryReader::ReadStringEx()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXBinaryReader_ReadStringEx_m9FC9DD7CD2CBFCD8D4F15FC652C5B99423BF8390 (FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.FBXProcessor::AddProperty(TriLibCore.Fbx.FBXProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXProcessor_AddProperty_m013216FFEAA69120137545F668B3CA08405BDCA3 (FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* __this, FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 ___property0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Fbx.ASCII.FBXASCIIReader::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FBXASCIIReader_get_Position_m76F4A434B38CFB82C811F0B9DE368DCE3AD04386_inline (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, const RuntimeMethod* method) ;
// System.Int32 System.IO.StreamReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StreamReader_Read_mB7DF78E453DA180AF0E360278016505417C7874E (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Fbx.ASCII.FBXASCIIReader::ReadAllNodes(System.Int32&,System.Int32&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXASCIIReader_ReadAllNodes_mD1FE99994685F3FCCEF4B906535C7DD60EE833FB (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, int32_t* ___nodesCount0, int32_t* ___propertiesCount1, int32_t* ___firstNodeIndex2, bool ___countOnly3, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.ASCII.FBXASCIIReader::set_Line(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FBXASCIIReader_set_Line_mE08C30A6FC84BBB7853BA38C2F43C3FF1985568D_inline (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.ASCII.FBXASCIIReader::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXASCIIReader_Reset_m8CF2362E2F36664A014BA12944E0FDCAADF145E9 (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.ASCII.FBXASCIIReader::ReadAndProcessNode(System.Int32&,System.Int32&,System.Int32&,System.Boolean,System.Boolean,System.Int32&,System.Int32&,System.Int32&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXASCIIReader_ReadAndProcessNode_m543AE69BAD6C7A30E769E8F9D6E470669BBC9903 (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, int32_t* ___nodesCount0, int32_t* ___propertiesCount1, int32_t* ___firstNodeIndex2, bool ___countOnly3, bool ___isArrayParent4, int32_t* ___lastNodeIndex5, int32_t* ___innerNodesCount6, int32_t* ___basePropertyIndex7, String_t* ___path8, const RuntimeMethod* method) ;
// System.Boolean System.IO.StreamReader::get_EndOfStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamReader_get_EndOfStream_mAE054431BF21158178EAA2A6872F14A9ED6A3C3E (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, const RuntimeMethod* method) ;
// System.Int64 TriLibCore.Fbx.ASCII.FBXASCIIReader::ReadNextValidToken(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FBXASCIIReader_ReadNextValidToken_m5DF338491BAA166E8A3F52BE37C5F3F528693514 (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, bool ___required0, bool ___ignoreSpace1, const RuntimeMethod* method) ;
// TriLibCore.Fbx.FBXNode TriLibCore.Fbx.ASCII.FBXASCIIReader::ReadNode(System.Int32&,System.Int32&,System.Boolean,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D FBXASCIIReader_ReadNode_mD0B13F651A7A4B2C320F97780487910AC89131A5 (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, int32_t* ___nodesCount0, int32_t* ___propertiesCount1, bool ___countOnly2, bool ___isArrayChild3, String_t* ___path4, const RuntimeMethod* method) ;
// System.String TriLibCore.Fbx.ASCII.FBXASCIIReader::GetTokenAsString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXASCIIReader_GetTokenAsString_m2B53FD9EEF3D77E59B0F62EAD51ED4119513BB12 (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, bool ___isString0, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Fbx.FBXProcessor::get_PropertiesCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FBXProcessor_get_PropertiesCount_mD3C7369713E84F01A93BE54947EE62B2FC2C05DE_inline (FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* __this, const RuntimeMethod* method) ;
// System.Int64 TriLibCore.Fbx.ASCII.FBXASCIIReader::ReadToken(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FBXASCIIReader_ReadToken_mD39313B199B70530F016ACFA4AAE8841BE903959 (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, bool ___required0, bool ___ignoreSpaces1, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.FBXProperties::.ctor(TriLibCore.Fbx.FBXProcessor,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXProperties__ctor_m26D28D238479767B133F249512E1A3BB2EBC5D60 (FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* __this, FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* ___processor0, int32_t ___propertiesCount1, int32_t ___basePropertyIndex2, int32_t ___arrayLength3, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Fbx.ASCII.FBXASCIIReader::get_Line()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FBXASCIIReader_get_Line_mB5EA9E821739B8DC013A8D2269BF3A083EAC5896_inline (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, const RuntimeMethod* method) ;
// System.Int32 TriLibCore.Fbx.ASCII.FBXASCIIReader::get_Column()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXASCIIReader_get_Column_m12D1A65A1FC389FCB7C1E33634C85A34C140C193 (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Int64 TriLibCore.Utils.HashUtils::GetHash(System.Collections.Generic.IList`1<System.Char>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t HashUtils_GetHash_mA2072A3113F446FBB34B926271575984459E0B0C (RuntimeObject* ___chars0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void TriLibCore.Fbx.ASCII.FBXASCIIReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXASCIIReader__ctor_m82D87FA13F0891600A48EF51B48267BED814456A (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.BitConverter::SingleToInt32Bits(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mA1902D40966CA4C89A8974B10E5680A06E88566B_inline (float ___value0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TriLibCore.Fbx.FBXVideo::.ctor(TriLibCore.Fbx.FBXDocument,System.String,System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXVideo__ctor_mAACAA5B83165C540A35EF24D42E12199EC744BD1 (FBXVideo_t5E3B9EE50CF8C48C1694A512180A2CB465E89CD2* __this, FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* ___document0, String_t* ___name1, int64_t ___objectId2, String_t* ___objectClass3, const RuntimeMethod* method) 
{
	{
		FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* L_0 = ___document0;
		String_t* L_1 = ___name1;
		int64_t L_2 = ___objectId2;
		String_t* L_3 = ___objectClass3;
		FBXObject__ctor_mD1FE978E4457290FC9C98E8E15DBEB7D5D4F0C0E(__this, L_0, L_1, L_2, L_3, NULL);
		FBXObject_set_ObjectType_m7926F17FD0F2D46EFB8C784FB2344DEA1DCAE24A_inline(__this, 5, NULL);
		int64_t L_4 = ___objectId2;
		if ((((int64_t)L_4) <= ((int64_t)((int64_t)(-1)))))
		{
			goto IL_001d;
		}
	}
	{
		VirtualActionInvoker0::Invoke(18 /* System.Void TriLibCore.Fbx.FBXObject::LoadDefinition() */, __this);
	}

IL_001d:
	{
		return;
	}
}
// System.Void TriLibCore.Fbx.FBXVideo::LoadDefinition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXVideo_LoadDefinition_m318FB7C55890C40C0987E18956E4C68BD7E25F9F (FBXVideo_t5E3B9EE50CF8C48C1694A512180A2CB465E89CD2* __this, const RuntimeMethod* method) 
{
	{
		FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* L_0;
		L_0 = FBXObject_get_Document_m3C861F05648C2807DB9DEB69D06FEB1615CDE989_inline(__this, NULL);
		NullCheck(L_0);
		FBXVideo_t5E3B9EE50CF8C48C1694A512180A2CB465E89CD2* L_1 = L_0->___VideoDefinition_52;
		if (!L_1)
		{
			goto IL_01c8;
		}
	}
	{
		FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* L_2;
		L_2 = FBXObject_get_Document_m3C861F05648C2807DB9DEB69D06FEB1615CDE989_inline(__this, NULL);
		NullCheck(L_2);
		FBXVideo_t5E3B9EE50CF8C48C1694A512180A2CB465E89CD2* L_3 = L_2->___VideoDefinition_52;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = L_3->___Color_7;
		__this->___Color_7 = L_4;
		FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* L_5;
		L_5 = FBXObject_get_Document_m3C861F05648C2807DB9DEB69D06FEB1615CDE989_inline(__this, NULL);
		NullCheck(L_5);
		FBXVideo_t5E3B9EE50CF8C48C1694A512180A2CB465E89CD2* L_6 = L_5->___VideoDefinition_52;
		NullCheck(L_6);
		int64_t L_7 = L_6->___ClipIn_8;
		__this->___ClipIn_8 = L_7;
		FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* L_8;
		L_8 = FBXObject_get_Document_m3C861F05648C2807DB9DEB69D06FEB1615CDE989_inline(__this, NULL);
		NullCheck(L_8);
		FBXVideo_t5E3B9EE50CF8C48C1694A512180A2CB465E89CD2* L_9 = L_8->___VideoDefinition_52;
		NullCheck(L_9);
		int64_t L_10 = L_9->___ClipOut_9;
		__this->___ClipOut_9 = L_10;
		FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* L_11;
		L_11 = FBXObject_get_Document_m3C861F05648C2807DB9DEB69D06FEB1615CDE989_inline(__this, NULL);
		NullCheck(L_11);
		FBXVideo_t5E3B9EE50CF8C48C1694A512180A2CB465E89CD2* L_12 = L_11->___VideoDefinition_52;
		NullCheck(L_12);
		bool L_13 = L_12->___Mute_10;
		__this->___Mute_10 = L_13;
		FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* L_14;
		L_14 = FBXObject_get_Document_m3C861F05648C2807DB9DEB69D06FEB1615CDE989_inline(__this, NULL);
		NullCheck(L_14);
		FBXVideo_t5E3B9EE50CF8C48C1694A512180A2CB465E89CD2* L_15 = L_14->___VideoDefinition_52;
		NullCheck(L_15);
		bool L_16 = L_15->___ImageSequence_11;
		__this->___ImageSequence_11 = L_16;
		FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* L_17;
		L_17 = FBXObject_get_Document_m3C861F05648C2807DB9DEB69D06FEB1615CDE989_inline(__this, NULL);
		NullCheck(L_17);
		FBXVideo_t5E3B9EE50CF8C48C1694A512180A2CB465E89CD2* L_18 = L_17->___VideoDefinition_52;
		NullCheck(L_18);
		int32_t L_19 = L_18->___ImageSequenceOffset_12;
		__this->___ImageSequenceOffset_12 = L_19;
		FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* L_20;
		L_20 = FBXObject_get_Document_m3C861F05648C2807DB9DEB69D06FEB1615CDE989_inline(__this, NULL);
		NullCheck(L_20);
		FBXVideo_t5E3B9EE50CF8C48C1694A512180A2CB465E89CD2* L_21 = L_20->___VideoDefinition_52;
		NullCheck(L_21);
		float L_22 = L_21->___FrameRate_13;
		__this->___FrameRate_13 = L_22;
		FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* L_23;
		L_23 = FBXObject_get_Document_m3C861F05648C2807DB9DEB69D06FEB1615CDE989_inline(__this, NULL);
		NullCheck(L_23);
		FBXVideo_t5E3B9EE50CF8C48C1694A512180A2CB465E89CD2* L_24 = L_23->___VideoDefinition_52;
		NullCheck(L_24);
		int32_t L_25 = L_24->___LastFrame_14;
		__this->___LastFrame_14 = L_25;
		FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* L_26;
		L_26 = FBXObject_get_Document_m3C861F05648C2807DB9DEB69D06FEB1615CDE989_inline(__this, NULL);
		NullCheck(L_26);
		FBXVideo_t5E3B9EE50CF8C48C1694A512180A2CB465E89CD2* L_27 = L_26->___VideoDefinition_52;
		NullCheck(L_27);
		int32_t L_28 = L_27->___Width_15;
		__this->___Width_15 = L_28;
		FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* L_29;
		L_29 = FBXObject_get_Document_m3C861F05648C2807DB9DEB69D06FEB1615CDE989_inline(__this, NULL);
		NullCheck(L_29);
		FBXVideo_t5E3B9EE50CF8C48C1694A512180A2CB465E89CD2* L_30 = L_29->___VideoDefinition_52;
		NullCheck(L_30);
		int32_t L_31 = L_30->___Height_16;
		__this->___Height_16 = L_31;
		FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* L_32;
		L_32 = FBXObject_get_Document_m3C861F05648C2807DB9DEB69D06FEB1615CDE989_inline(__this, NULL);
		NullCheck(L_32);
		FBXVideo_t5E3B9EE50CF8C48C1694A512180A2CB465E89CD2* L_33 = L_32->___VideoDefinition_52;
		NullCheck(L_33);
		int32_t L_34 = L_33->___StartFrame_17;
		__this->___StartFrame_17 = L_34;
		FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* L_35;
		L_35 = FBXObject_get_Document_m3C861F05648C2807DB9DEB69D06FEB1615CDE989_inline(__this, NULL);
		NullCheck(L_35);
		FBXVideo_t5E3B9EE50CF8C48C1694A512180A2CB465E89CD2* L_36 = L_35->___VideoDefinition_52;
		NullCheck(L_36);
		int32_t L_37 = L_36->___StopFrame_18;
		__this->___StopFrame_18 = L_37;
		FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* L_38;
		L_38 = FBXObject_get_Document_m3C861F05648C2807DB9DEB69D06FEB1615CDE989_inline(__this, NULL);
		NullCheck(L_38);
		FBXVideo_t5E3B9EE50CF8C48C1694A512180A2CB465E89CD2* L_39 = L_38->___VideoDefinition_52;
		NullCheck(L_39);
		String_t* L_40 = L_39->___Path_19;
		__this->___Path_19 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Path_19), (void*)L_40);
		FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* L_41;
		L_41 = FBXObject_get_Document_m3C861F05648C2807DB9DEB69D06FEB1615CDE989_inline(__this, NULL);
		NullCheck(L_41);
		FBXVideo_t5E3B9EE50CF8C48C1694A512180A2CB465E89CD2* L_42 = L_41->___VideoDefinition_52;
		NullCheck(L_42);
		String_t* L_43 = L_42->___RelPath_20;
		__this->___RelPath_20 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RelPath_20), (void*)L_43);
		FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* L_44;
		L_44 = FBXObject_get_Document_m3C861F05648C2807DB9DEB69D06FEB1615CDE989_inline(__this, NULL);
		NullCheck(L_44);
		FBXVideo_t5E3B9EE50CF8C48C1694A512180A2CB465E89CD2* L_45 = L_44->___VideoDefinition_52;
		NullCheck(L_45);
		float L_46 = L_45->___PlayOffset_21;
		__this->___PlayOffset_21 = L_46;
		FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* L_47;
		L_47 = FBXObject_get_Document_m3C861F05648C2807DB9DEB69D06FEB1615CDE989_inline(__this, NULL);
		NullCheck(L_47);
		FBXVideo_t5E3B9EE50CF8C48C1694A512180A2CB465E89CD2* L_48 = L_47->___VideoDefinition_52;
		NullCheck(L_48);
		int64_t L_49 = L_48->___Offset_22;
		__this->___Offset_22 = L_49;
		FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* L_50;
		L_50 = FBXObject_get_Document_m3C861F05648C2807DB9DEB69D06FEB1615CDE989_inline(__this, NULL);
		NullCheck(L_50);
		FBXVideo_t5E3B9EE50CF8C48C1694A512180A2CB465E89CD2* L_51 = L_50->___VideoDefinition_52;
		NullCheck(L_51);
		int32_t L_52 = L_51->___InterlaceMode_23;
		__this->___InterlaceMode_23 = L_52;
		FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* L_53;
		L_53 = FBXObject_get_Document_m3C861F05648C2807DB9DEB69D06FEB1615CDE989_inline(__this, NULL);
		NullCheck(L_53);
		FBXVideo_t5E3B9EE50CF8C48C1694A512180A2CB465E89CD2* L_54 = L_53->___VideoDefinition_52;
		NullCheck(L_54);
		bool L_55 = L_54->___FreeRunning_24;
		__this->___FreeRunning_24 = L_55;
		FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* L_56;
		L_56 = FBXObject_get_Document_m3C861F05648C2807DB9DEB69D06FEB1615CDE989_inline(__this, NULL);
		NullCheck(L_56);
		FBXVideo_t5E3B9EE50CF8C48C1694A512180A2CB465E89CD2* L_57 = L_56->___VideoDefinition_52;
		NullCheck(L_57);
		bool L_58 = L_57->___Loop_25;
		__this->___Loop_25 = L_58;
		FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* L_59;
		L_59 = FBXObject_get_Document_m3C861F05648C2807DB9DEB69D06FEB1615CDE989_inline(__this, NULL);
		NullCheck(L_59);
		FBXVideo_t5E3B9EE50CF8C48C1694A512180A2CB465E89CD2* L_60 = L_59->___VideoDefinition_52;
		NullCheck(L_60);
		int32_t L_61 = L_60->___AccessMode_26;
		__this->___AccessMode_26 = L_61;
	}

IL_01c8:
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
// System.Void TriLibCore.Fbx.PropertyAccessorByte::.ctor(TriLibCore.Fbx.FBXProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorByte__ctor_mB6083D373AFC2DDD5CBA40F17171D753DECE1AFD (PropertyAccessorByte_t3A1E04FFC4110354C2453EFA806F97FC6CEDB899* __this, FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 ___properties0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 L_0 = ___properties0;
		__this->____properties_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____properties_0))->___U3CProcessorU3Ek__BackingField_1), (void*)NULL);
		__this->___U3CIsReadOnlyU3Ek__BackingField_1 = (bool)1;
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Byte> TriLibCore.Fbx.PropertyAccessorByte::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorByte_GetEnumerator_m0CEC0EE1DFBA9926652B838388F72EB35D64CD8C (PropertyAccessorByte_t3A1E04FFC4110354C2453EFA806F97FC6CEDB899* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyAccessorIEnumerator_1__ctor_m13F6A2E033696DC706279AE3A91D02A64206AC4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyAccessorIEnumerator_1_t507F53FFDEAE6189449897018F3198188410DEB2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyAccessorIEnumerator_1_t507F53FFDEAE6189449897018F3198188410DEB2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		PropertyAccessorIEnumerator_1__ctor_m13F6A2E033696DC706279AE3A91D02A64206AC4D((&L_0), __this, /*hidden argument*/PropertyAccessorIEnumerator_1__ctor_m13F6A2E033696DC706279AE3A91D02A64206AC4D_RuntimeMethod_var);
		PropertyAccessorIEnumerator_1_t507F53FFDEAE6189449897018F3198188410DEB2 L_1 = L_0;
		RuntimeObject* L_2 = Box(PropertyAccessorIEnumerator_1_t507F53FFDEAE6189449897018F3198188410DEB2_il2cpp_TypeInfo_var, &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Collections.IEnumerator TriLibCore.Fbx.PropertyAccessorByte::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorByte_System_Collections_IEnumerable_GetEnumerator_m1F9C2BF570D9AE2771AFF51424BE71C29A4F59EF (PropertyAccessorByte_t3A1E04FFC4110354C2453EFA806F97FC6CEDB899* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = PropertyAccessorByte_GetEnumerator_m0CEC0EE1DFBA9926652B838388F72EB35D64CD8C(__this, NULL);
		return L_0;
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorByte::Add(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorByte_Add_mAFC49C1DBE7203D3A9DBFAB3ABA5BA0BE13904DE (PropertyAccessorByte_t3A1E04FFC4110354C2453EFA806F97FC6CEDB899* __this, uint8_t ___item0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorByte_Add_mAFC49C1DBE7203D3A9DBFAB3ABA5BA0BE13904DE_RuntimeMethod_var)));
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorByte::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorByte_Clear_m648D5D7C9EC8B28DA5C419E96E28A69BD6E1998C (PropertyAccessorByte_t3A1E04FFC4110354C2453EFA806F97FC6CEDB899* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorByte_Clear_m648D5D7C9EC8B28DA5C419E96E28A69BD6E1998C_RuntimeMethod_var)));
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorByte::Contains(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorByte_Contains_m6D9A922B2C0C224FD1A8324B3D7328E2A189D6B7 (PropertyAccessorByte_t3A1E04FFC4110354C2453EFA806F97FC6CEDB899* __this, uint8_t ___item0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorByte_Contains_m6D9A922B2C0C224FD1A8324B3D7328E2A189D6B7_RuntimeMethod_var)));
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorByte::CopyTo(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorByte_CopyTo_mE7B98D0B7093A33BC42C34A2AFF43AC25D366DE3 (PropertyAccessorByte_t3A1E04FFC4110354C2453EFA806F97FC6CEDB899* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0014;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		int32_t L_1 = ___arrayIndex1;
		int32_t L_2 = V_0;
		int32_t L_3 = V_0;
		uint8_t L_4;
		L_4 = PropertyAccessorByte_GetElement_mBAF530E2CA25A3BD699AD74B7793BFC14481DCFB(__this, L_3, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (uint8_t)L_4);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0014:
	{
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = PropertyAccessorByte_get_Count_m248A77D652A9BF16734BE54219C5F5EAC9D3C360(__this, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorByte::Remove(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorByte_Remove_m7774F101D57F6543F3057BD4BAF6C5A2D7CE6241 (PropertyAccessorByte_t3A1E04FFC4110354C2453EFA806F97FC6CEDB899* __this, uint8_t ___item0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorByte_Remove_m7774F101D57F6543F3057BD4BAF6C5A2D7CE6241_RuntimeMethod_var)));
	}
}
// System.Int32 TriLibCore.Fbx.PropertyAccessorByte::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorByte_get_Count_m248A77D652A9BF16734BE54219C5F5EAC9D3C360 (PropertyAccessorByte_t3A1E04FFC4110354C2453EFA806F97FC6CEDB899* __this, const RuntimeMethod* method) 
{
	{
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_0 = (&__this->____properties_0);
		int32_t L_1;
		L_1 = FBXProperties_GetPropertyArrayLength_mD43333FAA9443D29CC2A86C914E75F7D2DF57EC9(L_0, NULL);
		return L_1;
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorByte::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorByte_get_IsReadOnly_m4127380762B968FF48D568BE9240CDBD0FD0721B (PropertyAccessorByte_t3A1E04FFC4110354C2453EFA806F97FC6CEDB899* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsReadOnlyU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Int32 TriLibCore.Fbx.PropertyAccessorByte::IndexOf(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorByte_IndexOf_mDEB7FFF72A7C72084150E7E51A98A3B46FA06D10 (PropertyAccessorByte_t3A1E04FFC4110354C2453EFA806F97FC6CEDB899* __this, uint8_t ___item0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorByte_IndexOf_mDEB7FFF72A7C72084150E7E51A98A3B46FA06D10_RuntimeMethod_var)));
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorByte::Insert(System.Int32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorByte_Insert_m6104AD8296D35F593835A492E2707DEDCA0189A0 (PropertyAccessorByte_t3A1E04FFC4110354C2453EFA806F97FC6CEDB899* __this, int32_t ___index0, uint8_t ___item1, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorByte_Insert_m6104AD8296D35F593835A492E2707DEDCA0189A0_RuntimeMethod_var)));
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorByte::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorByte_RemoveAt_mD003C4326C542792EE62A67D518B44C08EA5DE16 (PropertyAccessorByte_t3A1E04FFC4110354C2453EFA806F97FC6CEDB899* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorByte_RemoveAt_mD003C4326C542792EE62A67D518B44C08EA5DE16_RuntimeMethod_var)));
	}
}
// System.Byte TriLibCore.Fbx.PropertyAccessorByte::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PropertyAccessorByte_get_Item_m80339FDA2466F488EC14C592F2F0B9CA56DD6A44 (PropertyAccessorByte_t3A1E04FFC4110354C2453EFA806F97FC6CEDB899* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		uint8_t L_1;
		L_1 = PropertyAccessorByte_GetElement_mBAF530E2CA25A3BD699AD74B7793BFC14481DCFB(__this, L_0, NULL);
		return L_1;
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorByte::set_Item(System.Int32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorByte_set_Item_mA767343463C886938EE75EAFB259B969AF6FE184 (PropertyAccessorByte_t3A1E04FFC4110354C2453EFA806F97FC6CEDB899* __this, int32_t ___index0, uint8_t ___value1, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorByte_set_Item_mA767343463C886938EE75EAFB259B969AF6FE184_RuntimeMethod_var)));
	}
}
// System.Byte TriLibCore.Fbx.PropertyAccessorByte::GetElement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t PropertyAccessorByte_GetElement_mBAF530E2CA25A3BD699AD74B7793BFC14481DCFB (PropertyAccessorByte_t3A1E04FFC4110354C2453EFA806F97FC6CEDB899* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_0 = (&__this->____properties_0);
		bool L_1;
		L_1 = FBXProperties_get_IsASCII_m412715B4396F75F7B1127FD4A4B44AC3BC963420(L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_2 = (&__this->____properties_0);
		int32_t L_3 = ___i0;
		uint8_t L_4;
		L_4 = FBXProperties_ASCIIGetByteValue_mEE859B6C1DC74635CE3954D26BF992EEFBB22F72(L_2, L_3, NULL);
		return L_4;
	}

IL_001a:
	{
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_5 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_6;
		L_6 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_5, NULL);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_7 = (&__this->____properties_0);
		int32_t L_8 = L_7->___BasePropertyIndex_2;
		NullCheck(L_6);
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_9;
		L_9 = FBXProcessor_LoadArrayProperty_mB08E43868A94F68E25F8DC291BF74851374FFD0C(L_6, L_8, NULL);
		V_0 = L_9;
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_10 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_11;
		L_11 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_10, NULL);
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_12 = V_0;
		NullCheck(L_11);
		FBXProcessor_SetActiveBinaryReader_m8C8111F52EB6DC3DD76E5F2F39F9A2695764B868(L_11, L_12, NULL);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_13 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_14;
		L_14 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_13, NULL);
		NullCheck(L_14);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_15 = L_14->___ActiveBinaryReader_11;
		NullCheck(L_15);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_16;
		L_16 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_15);
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_17 = V_0;
		int64_t L_18 = L_17.___Position_5;
		int32_t L_19 = ___i0;
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_20 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_21;
		L_21 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_20, NULL);
		NullCheck(L_21);
		int32_t L_22 = L_21->___ActiveSubDataSize_10;
		NullCheck(L_16);
		int64_t L_23;
		L_23 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(31 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_16, ((int64_t)il2cpp_codegen_add(L_18, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_19, L_22))))), 0);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_24 = (&__this->____properties_0);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_25 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_26;
		L_26 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_25, NULL);
		NullCheck(L_26);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_27 = L_26->___ActiveBinaryReader_11;
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_28 = V_0;
		uint8_t L_29;
		L_29 = FBXProperties_BinaryConvertByteValue_m80C1705B7E82FAE4750F6D65FADC42AE6FD3B742(L_24, L_27, L_28, NULL);
		return L_29;
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
// System.Void TriLibCore.Fbx.PropertyAccessorShort::.ctor(TriLibCore.Fbx.FBXProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorShort__ctor_mA56DBCAE811AE75EA8A266C911AD817D3A153EFB (PropertyAccessorShort_t8DF6A20D36578B83FD65BEF805562CF32F999DC8* __this, FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 ___properties0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 L_0 = ___properties0;
		__this->____properties_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____properties_0))->___U3CProcessorU3Ek__BackingField_1), (void*)NULL);
		__this->___U3CIsReadOnlyU3Ek__BackingField_1 = (bool)1;
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Int16> TriLibCore.Fbx.PropertyAccessorShort::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorShort_GetEnumerator_m9C4184C792895C2EF4BABD954964E416C9FC0DA4 (PropertyAccessorShort_t8DF6A20D36578B83FD65BEF805562CF32F999DC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyAccessorIEnumerator_1__ctor_m10ADEEA2B95198A97E5327E47BFAB5720EA81883_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyAccessorIEnumerator_1_t99D6ABB7ECAA7EDD17341582A28BF20268F5C71D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyAccessorIEnumerator_1_t99D6ABB7ECAA7EDD17341582A28BF20268F5C71D L_0;
		memset((&L_0), 0, sizeof(L_0));
		PropertyAccessorIEnumerator_1__ctor_m10ADEEA2B95198A97E5327E47BFAB5720EA81883((&L_0), __this, /*hidden argument*/PropertyAccessorIEnumerator_1__ctor_m10ADEEA2B95198A97E5327E47BFAB5720EA81883_RuntimeMethod_var);
		PropertyAccessorIEnumerator_1_t99D6ABB7ECAA7EDD17341582A28BF20268F5C71D L_1 = L_0;
		RuntimeObject* L_2 = Box(PropertyAccessorIEnumerator_1_t99D6ABB7ECAA7EDD17341582A28BF20268F5C71D_il2cpp_TypeInfo_var, &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Collections.IEnumerator TriLibCore.Fbx.PropertyAccessorShort::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorShort_System_Collections_IEnumerable_GetEnumerator_m97825D060E965352052DD076B642116F9A17F344 (PropertyAccessorShort_t8DF6A20D36578B83FD65BEF805562CF32F999DC8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = PropertyAccessorShort_GetEnumerator_m9C4184C792895C2EF4BABD954964E416C9FC0DA4(__this, NULL);
		return L_0;
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorShort::Add(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorShort_Add_mB213E015451E9AA91BFACD19CD43522DDFAB8DF5 (PropertyAccessorShort_t8DF6A20D36578B83FD65BEF805562CF32F999DC8* __this, int16_t ___item0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorShort_Add_mB213E015451E9AA91BFACD19CD43522DDFAB8DF5_RuntimeMethod_var)));
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorShort::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorShort_Clear_m7879EF8C9C6A06B16EAF6C22BD0518C5C21079C3 (PropertyAccessorShort_t8DF6A20D36578B83FD65BEF805562CF32F999DC8* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorShort_Clear_m7879EF8C9C6A06B16EAF6C22BD0518C5C21079C3_RuntimeMethod_var)));
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorShort::Contains(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorShort_Contains_mD53684A5299F2257D5D6F7C1E333FDCD8CAFBF1A (PropertyAccessorShort_t8DF6A20D36578B83FD65BEF805562CF32F999DC8* __this, int16_t ___item0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorShort_Contains_mD53684A5299F2257D5D6F7C1E333FDCD8CAFBF1A_RuntimeMethod_var)));
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorShort::CopyTo(System.Int16[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorShort_CopyTo_m2126F92A594CCAF29A6AC2E10BA8C7F066490D19 (PropertyAccessorShort_t8DF6A20D36578B83FD65BEF805562CF32F999DC8* __this, Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0014;
	}

IL_0004:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_0 = ___array0;
		int32_t L_1 = ___arrayIndex1;
		int32_t L_2 = V_0;
		int32_t L_3 = V_0;
		int16_t L_4;
		L_4 = PropertyAccessorShort_GetElement_m21FD1368E6B6DEF31B2D03E006DA07E7A6657778(__this, L_3, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (int16_t)L_4);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0014:
	{
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = PropertyAccessorShort_get_Count_m7778AE2F440E033D26ECAC2174D79C054CCEDCE3(__this, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorShort::Remove(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorShort_Remove_m0FE173DE48A774FC2C5717100CA47A72CC0E968C (PropertyAccessorShort_t8DF6A20D36578B83FD65BEF805562CF32F999DC8* __this, int16_t ___item0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorShort_Remove_m0FE173DE48A774FC2C5717100CA47A72CC0E968C_RuntimeMethod_var)));
	}
}
// System.Int32 TriLibCore.Fbx.PropertyAccessorShort::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorShort_get_Count_m7778AE2F440E033D26ECAC2174D79C054CCEDCE3 (PropertyAccessorShort_t8DF6A20D36578B83FD65BEF805562CF32F999DC8* __this, const RuntimeMethod* method) 
{
	{
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_0 = (&__this->____properties_0);
		int32_t L_1;
		L_1 = FBXProperties_GetPropertyArrayLength_mD43333FAA9443D29CC2A86C914E75F7D2DF57EC9(L_0, NULL);
		return L_1;
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorShort::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorShort_get_IsReadOnly_m6B8831FFD75277EE503547ACD9E6B71417C3EDA6 (PropertyAccessorShort_t8DF6A20D36578B83FD65BEF805562CF32F999DC8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsReadOnlyU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Int32 TriLibCore.Fbx.PropertyAccessorShort::IndexOf(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorShort_IndexOf_mDC14357ADFD90AC26E6006E2E64BD1AF8C11C6AB (PropertyAccessorShort_t8DF6A20D36578B83FD65BEF805562CF32F999DC8* __this, int16_t ___item0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorShort_IndexOf_mDC14357ADFD90AC26E6006E2E64BD1AF8C11C6AB_RuntimeMethod_var)));
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorShort::Insert(System.Int32,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorShort_Insert_m7EC96C6A89F2DEB37371B8FFE955F742C6998326 (PropertyAccessorShort_t8DF6A20D36578B83FD65BEF805562CF32F999DC8* __this, int32_t ___index0, int16_t ___item1, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorShort_Insert_m7EC96C6A89F2DEB37371B8FFE955F742C6998326_RuntimeMethod_var)));
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorShort::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorShort_RemoveAt_m55AA2E6A236358D101272E6CBC782A334533C8AA (PropertyAccessorShort_t8DF6A20D36578B83FD65BEF805562CF32F999DC8* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorShort_RemoveAt_m55AA2E6A236358D101272E6CBC782A334533C8AA_RuntimeMethod_var)));
	}
}
// System.Int16 TriLibCore.Fbx.PropertyAccessorShort::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PropertyAccessorShort_get_Item_m9E20D77EF7BEC76B888373054C2341C0F7471C0C (PropertyAccessorShort_t8DF6A20D36578B83FD65BEF805562CF32F999DC8* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		int16_t L_1;
		L_1 = PropertyAccessorShort_GetElement_m21FD1368E6B6DEF31B2D03E006DA07E7A6657778(__this, L_0, NULL);
		return L_1;
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorShort::set_Item(System.Int32,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorShort_set_Item_mA9E40465930AB75103C53BA6F29209913482988C (PropertyAccessorShort_t8DF6A20D36578B83FD65BEF805562CF32F999DC8* __this, int32_t ___index0, int16_t ___value1, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorShort_set_Item_mA9E40465930AB75103C53BA6F29209913482988C_RuntimeMethod_var)));
	}
}
// System.Int16 TriLibCore.Fbx.PropertyAccessorShort::GetElement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t PropertyAccessorShort_GetElement_m21FD1368E6B6DEF31B2D03E006DA07E7A6657778 (PropertyAccessorShort_t8DF6A20D36578B83FD65BEF805562CF32F999DC8* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_0 = (&__this->____properties_0);
		bool L_1;
		L_1 = FBXProperties_get_IsASCII_m412715B4396F75F7B1127FD4A4B44AC3BC963420(L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_2 = (&__this->____properties_0);
		int32_t L_3 = ___i0;
		int16_t L_4;
		L_4 = FBXProperties_ASCIIGetShortValue_m51DDC9F9C39A3A7DC82D1C1482928EE416CD9B45(L_2, L_3, NULL);
		return L_4;
	}

IL_001a:
	{
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_5 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_6;
		L_6 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_5, NULL);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_7 = (&__this->____properties_0);
		int32_t L_8 = L_7->___BasePropertyIndex_2;
		NullCheck(L_6);
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_9;
		L_9 = FBXProcessor_LoadArrayProperty_mB08E43868A94F68E25F8DC291BF74851374FFD0C(L_6, L_8, NULL);
		V_0 = L_9;
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_10 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_11;
		L_11 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_10, NULL);
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_12 = V_0;
		NullCheck(L_11);
		FBXProcessor_SetActiveBinaryReader_m8C8111F52EB6DC3DD76E5F2F39F9A2695764B868(L_11, L_12, NULL);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_13 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_14;
		L_14 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_13, NULL);
		NullCheck(L_14);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_15 = L_14->___ActiveBinaryReader_11;
		NullCheck(L_15);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_16;
		L_16 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_15);
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_17 = V_0;
		int64_t L_18 = L_17.___Position_5;
		int32_t L_19 = ___i0;
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_20 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_21;
		L_21 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_20, NULL);
		NullCheck(L_21);
		int32_t L_22 = L_21->___ActiveSubDataSize_10;
		NullCheck(L_16);
		int64_t L_23;
		L_23 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(31 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_16, ((int64_t)il2cpp_codegen_add(L_18, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_19, L_22))))), 0);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_24 = (&__this->____properties_0);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_25 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_26;
		L_26 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_25, NULL);
		NullCheck(L_26);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_27 = L_26->___ActiveBinaryReader_11;
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_28 = V_0;
		int16_t L_29;
		L_29 = FBXProperties_BinaryConvertShortValue_m6E83F8CE430AE92BC9CE1A9CB08407695D5E2A74(L_24, L_27, L_28, NULL);
		return L_29;
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
// System.Byte[] TriLibCore.Fbx.PropertyAccessorIEE754::GetBytesInt(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* PropertyAccessorIEE754_GetBytesInt_m1809276B604FF35FE75043EF51F3B2E063952CEB (PropertyAccessorIEE754_t0C46BCCB2920674DF4B0DA353E76ECECBC30819C* __this, int32_t ___value0, int32_t ___offset1, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____bytesInt_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		int32_t L_2 = ___offset1;
		NullCheck(L_1);
		V_0 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)));
		uint8_t* L_3 = V_0;
		int32_t L_4 = ___value0;
		*((int32_t*)((uintptr_t)L_3)) = (int32_t)L_4;
		V_0 = (uint8_t*)((uintptr_t)0);
		return L_1;
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorIEE754::.ctor(TriLibCore.Fbx.FBXProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorIEE754__ctor_m194700C45AB9DF1C4FB3E4225C8D97781375FA76 (PropertyAccessorIEE754_t0C46BCCB2920674DF4B0DA353E76ECECBC30819C* __this, FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 ___properties0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 L_0 = ___properties0;
		__this->____properties_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____properties_0))->___U3CProcessorU3Ek__BackingField_1), (void*)NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->____bytesInt_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____bytesInt_1), (void*)L_1);
		__this->___U3CIsReadOnlyU3Ek__BackingField_2 = (bool)1;
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Single> TriLibCore.Fbx.PropertyAccessorIEE754::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorIEE754_GetEnumerator_mA6FECF69D50702B86D10F00937E845DB91DE1171 (PropertyAccessorIEE754_t0C46BCCB2920674DF4B0DA353E76ECECBC30819C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyAccessorIEnumerator_1__ctor_m885514EA1BD585E7096456986DE47D98FFC4D9DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyAccessorIEnumerator_1_t132A7FDC9F7EEB025D6C21FF07F9E037A5D8412D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyAccessorIEnumerator_1_t132A7FDC9F7EEB025D6C21FF07F9E037A5D8412D L_0;
		memset((&L_0), 0, sizeof(L_0));
		PropertyAccessorIEnumerator_1__ctor_m885514EA1BD585E7096456986DE47D98FFC4D9DC((&L_0), __this, /*hidden argument*/PropertyAccessorIEnumerator_1__ctor_m885514EA1BD585E7096456986DE47D98FFC4D9DC_RuntimeMethod_var);
		PropertyAccessorIEnumerator_1_t132A7FDC9F7EEB025D6C21FF07F9E037A5D8412D L_1 = L_0;
		RuntimeObject* L_2 = Box(PropertyAccessorIEnumerator_1_t132A7FDC9F7EEB025D6C21FF07F9E037A5D8412D_il2cpp_TypeInfo_var, &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Collections.IEnumerator TriLibCore.Fbx.PropertyAccessorIEE754::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorIEE754_System_Collections_IEnumerable_GetEnumerator_mF45E5F4B40F28B53C541CD941DC7B42452D19EE2 (PropertyAccessorIEE754_t0C46BCCB2920674DF4B0DA353E76ECECBC30819C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = PropertyAccessorIEE754_GetEnumerator_mA6FECF69D50702B86D10F00937E845DB91DE1171(__this, NULL);
		return L_0;
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorIEE754::Add(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorIEE754_Add_mBD9C6FB19DD5EE7A9054A642FE6C17AF7D11226D (PropertyAccessorIEE754_t0C46BCCB2920674DF4B0DA353E76ECECBC30819C* __this, float ___item0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorIEE754_Add_mBD9C6FB19DD5EE7A9054A642FE6C17AF7D11226D_RuntimeMethod_var)));
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorIEE754::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorIEE754_Clear_mA0A2150C21DFCC7E74C4A68D00CE206A20F48433 (PropertyAccessorIEE754_t0C46BCCB2920674DF4B0DA353E76ECECBC30819C* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorIEE754_Clear_mA0A2150C21DFCC7E74C4A68D00CE206A20F48433_RuntimeMethod_var)));
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorIEE754::Contains(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorIEE754_Contains_m64AC75313103A83FA655C79D6D1643789CC85426 (PropertyAccessorIEE754_t0C46BCCB2920674DF4B0DA353E76ECECBC30819C* __this, float ___item0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorIEE754_Contains_m64AC75313103A83FA655C79D6D1643789CC85426_RuntimeMethod_var)));
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorIEE754::CopyTo(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorIEE754_CopyTo_m271FAC18BF3DB75E313D829A2E96AD7CD9C9BA17 (PropertyAccessorIEE754_t0C46BCCB2920674DF4B0DA353E76ECECBC30819C* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0014;
	}

IL_0004:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___array0;
		int32_t L_1 = ___arrayIndex1;
		int32_t L_2 = V_0;
		int32_t L_3 = V_0;
		float L_4;
		L_4 = PropertyAccessorIEE754_GetElement_mAEDF6D2F614A73FF653B089BD2FD07F4D809D893(__this, L_3, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (float)L_4);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0014:
	{
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = PropertyAccessorIEE754_get_Count_m3DBE759D8CC11737529D4AA5739849E4AEE4A54C(__this, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorIEE754::Remove(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorIEE754_Remove_mF9938772EEFE6996F36F4AD6E2CB22DDD0357F76 (PropertyAccessorIEE754_t0C46BCCB2920674DF4B0DA353E76ECECBC30819C* __this, float ___item0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorIEE754_Remove_mF9938772EEFE6996F36F4AD6E2CB22DDD0357F76_RuntimeMethod_var)));
	}
}
// System.Int32 TriLibCore.Fbx.PropertyAccessorIEE754::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorIEE754_get_Count_m3DBE759D8CC11737529D4AA5739849E4AEE4A54C (PropertyAccessorIEE754_t0C46BCCB2920674DF4B0DA353E76ECECBC30819C* __this, const RuntimeMethod* method) 
{
	{
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_0 = (&__this->____properties_0);
		int32_t L_1;
		L_1 = FBXProperties_GetPropertyArrayLength_mD43333FAA9443D29CC2A86C914E75F7D2DF57EC9(L_0, NULL);
		return L_1;
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorIEE754::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorIEE754_get_IsReadOnly_m1DE49AB9D1CC5778DAAE8DE5D097618279D1F7DB (PropertyAccessorIEE754_t0C46BCCB2920674DF4B0DA353E76ECECBC30819C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsReadOnlyU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Int32 TriLibCore.Fbx.PropertyAccessorIEE754::IndexOf(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorIEE754_IndexOf_m59FB427A9B4BC4FF9B3DF2AA2B14BF5BFF16E552 (PropertyAccessorIEE754_t0C46BCCB2920674DF4B0DA353E76ECECBC30819C* __this, float ___item0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorIEE754_IndexOf_m59FB427A9B4BC4FF9B3DF2AA2B14BF5BFF16E552_RuntimeMethod_var)));
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorIEE754::Insert(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorIEE754_Insert_m46AA71328F9D5F4E36474318EC72B32FAC57130C (PropertyAccessorIEE754_t0C46BCCB2920674DF4B0DA353E76ECECBC30819C* __this, int32_t ___index0, float ___item1, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorIEE754_Insert_m46AA71328F9D5F4E36474318EC72B32FAC57130C_RuntimeMethod_var)));
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorIEE754::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorIEE754_RemoveAt_mDC0DC08B153E2A2F2954ECB13281376EA30E2D91 (PropertyAccessorIEE754_t0C46BCCB2920674DF4B0DA353E76ECECBC30819C* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorIEE754_RemoveAt_mDC0DC08B153E2A2F2954ECB13281376EA30E2D91_RuntimeMethod_var)));
	}
}
// System.Single TriLibCore.Fbx.PropertyAccessorIEE754::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyAccessorIEE754_get_Item_m909582579E2C29416B48FF985E00677C55C2D8C6 (PropertyAccessorIEE754_t0C46BCCB2920674DF4B0DA353E76ECECBC30819C* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		float L_1;
		L_1 = PropertyAccessorIEE754_GetElement_mAEDF6D2F614A73FF653B089BD2FD07F4D809D893(__this, L_0, NULL);
		return L_1;
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorIEE754::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorIEE754_set_Item_m14570F3B3A020CD7D15485930032DC6C9F55D687 (PropertyAccessorIEE754_t0C46BCCB2920674DF4B0DA353E76ECECBC30819C* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorIEE754_set_Item_m14570F3B3A020CD7D15485930032DC6C9F55D687_RuntimeMethod_var)));
	}
}
// System.Single TriLibCore.Fbx.PropertyAccessorIEE754::GetElement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyAccessorIEE754_GetElement_mAEDF6D2F614A73FF653B089BD2FD07F4D809D893 (PropertyAccessorIEE754_t0C46BCCB2920674DF4B0DA353E76ECECBC30819C* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_0 = (&__this->____properties_0);
		bool L_1;
		L_1 = FBXProperties_get_IsASCII_m412715B4396F75F7B1127FD4A4B44AC3BC963420(L_0, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_2 = (&__this->____properties_0);
		int32_t L_3 = ___i0;
		int32_t L_4;
		L_4 = FBXProperties_ASCIIGetIntValue_mD5B6A00346736642E5944098176C6A9715E60592(L_2, L_3, NULL);
		V_0 = L_4;
		goto IL_009f;
	}

IL_001f:
	{
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_5 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_6;
		L_6 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_5, NULL);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_7 = (&__this->____properties_0);
		int32_t L_8 = L_7->___BasePropertyIndex_2;
		NullCheck(L_6);
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_9;
		L_9 = FBXProcessor_LoadArrayProperty_mB08E43868A94F68E25F8DC291BF74851374FFD0C(L_6, L_8, NULL);
		V_2 = L_9;
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_10 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_11;
		L_11 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_10, NULL);
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_12 = V_2;
		NullCheck(L_11);
		FBXProcessor_SetActiveBinaryReader_m8C8111F52EB6DC3DD76E5F2F39F9A2695764B868(L_11, L_12, NULL);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_13 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_14;
		L_14 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_13, NULL);
		NullCheck(L_14);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_15 = L_14->___ActiveBinaryReader_11;
		NullCheck(L_15);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_16;
		L_16 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_15);
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_17 = V_2;
		int64_t L_18 = L_17.___Position_5;
		int32_t L_19 = ___i0;
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_20 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_21;
		L_21 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_20, NULL);
		NullCheck(L_21);
		int32_t L_22 = L_21->___ActiveSubDataSize_10;
		NullCheck(L_16);
		int64_t L_23;
		L_23 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(31 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_16, ((int64_t)il2cpp_codegen_add(L_18, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_19, L_22))))), 0);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_24 = (&__this->____properties_0);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_25 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_26;
		L_26 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_25, NULL);
		NullCheck(L_26);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_27 = L_26->___ActiveBinaryReader_11;
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_28 = V_2;
		int32_t L_29;
		L_29 = FBXProperties_BinaryConvertIntValue_m5271B4E15B0F3ED92CFB92DE359B8CDC9993C709(L_24, L_27, L_28, NULL);
		V_0 = L_29;
	}

IL_009f:
	{
		int32_t L_30 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31;
		L_31 = PropertyAccessorIEE754_GetBytesInt_m1809276B604FF35FE75043EF51F3B2E063952CEB(__this, L_30, 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		float L_32;
		L_32 = BitConverter_ToSingle_m385AA8335F6A788C1AD54295BA8352FFADD91F36(L_31, 0, NULL);
		V_1 = L_32;
		float L_33 = V_1;
		bool L_34;
		L_34 = Single_IsNaN_m684B090AA2F895FD91821CA8684CBC11D784E4DD_inline(L_33, NULL);
		if (!L_34)
		{
			goto IL_00bc;
		}
	}
	{
		V_1 = (0.0f);
	}

IL_00bc:
	{
		float L_35 = V_1;
		return L_35;
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
// System.Void TriLibCore.Fbx.PropertyAccessorInt::.ctor(TriLibCore.Fbx.FBXProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorInt__ctor_m7639D3DA555591A505C37F34802397E0DAD858D7 (PropertyAccessorInt_t24E4E4DFF80422C4D86DD9E20FB16D192D7343F3* __this, FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 ___properties0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 L_0 = ___properties0;
		__this->____properties_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____properties_0))->___U3CProcessorU3Ek__BackingField_1), (void*)NULL);
		__this->___U3CIsReadOnlyU3Ek__BackingField_1 = (bool)1;
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Int32> TriLibCore.Fbx.PropertyAccessorInt::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorInt_GetEnumerator_mBB1428C9E22A3A29F1D9ECFCA21FD6F77301720F (PropertyAccessorInt_t24E4E4DFF80422C4D86DD9E20FB16D192D7343F3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyAccessorIEnumerator_1__ctor_m698626BC437191FDC212DB020833A50A9A35807A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyAccessorIEnumerator_1_tC80F58CC2A95871A7E8891567EEE4DAAC636E0A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyAccessorIEnumerator_1_tC80F58CC2A95871A7E8891567EEE4DAAC636E0A6 L_0;
		memset((&L_0), 0, sizeof(L_0));
		PropertyAccessorIEnumerator_1__ctor_m698626BC437191FDC212DB020833A50A9A35807A((&L_0), __this, /*hidden argument*/PropertyAccessorIEnumerator_1__ctor_m698626BC437191FDC212DB020833A50A9A35807A_RuntimeMethod_var);
		PropertyAccessorIEnumerator_1_tC80F58CC2A95871A7E8891567EEE4DAAC636E0A6 L_1 = L_0;
		RuntimeObject* L_2 = Box(PropertyAccessorIEnumerator_1_tC80F58CC2A95871A7E8891567EEE4DAAC636E0A6_il2cpp_TypeInfo_var, &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Collections.IEnumerator TriLibCore.Fbx.PropertyAccessorInt::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorInt_System_Collections_IEnumerable_GetEnumerator_m0DE7CE0BEF3548208B36D570524D7E01E2BD7E11 (PropertyAccessorInt_t24E4E4DFF80422C4D86DD9E20FB16D192D7343F3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = PropertyAccessorInt_GetEnumerator_mBB1428C9E22A3A29F1D9ECFCA21FD6F77301720F(__this, NULL);
		return L_0;
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorInt::Add(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorInt_Add_m1C14F9F8818E6843CC0DD32437D07C3394B6F4E7 (PropertyAccessorInt_t24E4E4DFF80422C4D86DD9E20FB16D192D7343F3* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorInt_Add_m1C14F9F8818E6843CC0DD32437D07C3394B6F4E7_RuntimeMethod_var)));
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorInt::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorInt_Clear_m696554C189B6C8E1769E5967C00C121F2D127D11 (PropertyAccessorInt_t24E4E4DFF80422C4D86DD9E20FB16D192D7343F3* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorInt_Clear_m696554C189B6C8E1769E5967C00C121F2D127D11_RuntimeMethod_var)));
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorInt::Contains(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorInt_Contains_m0212669CC333E58F25DC8371F45DEB094EE8170E (PropertyAccessorInt_t24E4E4DFF80422C4D86DD9E20FB16D192D7343F3* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorInt_Contains_m0212669CC333E58F25DC8371F45DEB094EE8170E_RuntimeMethod_var)));
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorInt::CopyTo(System.Int32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorInt_CopyTo_mD5BA2DF764C9E239F1B72451A1F75930994E2DAC (PropertyAccessorInt_t24E4E4DFF80422C4D86DD9E20FB16D192D7343F3* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0014;
	}

IL_0004:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___array0;
		int32_t L_1 = ___arrayIndex1;
		int32_t L_2 = V_0;
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = PropertyAccessorInt_GetElement_m601D35A0D8860914D136AE3CD434BE51E404C7FB(__this, L_3, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (int32_t)L_4);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0014:
	{
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = PropertyAccessorInt_get_Count_m0C89ED9BBF123AF37C9647E9D08743150C453D88(__this, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorInt::Remove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorInt_Remove_mD200B41DF3E14BDBF1AA25CB049E348300AA2DE5 (PropertyAccessorInt_t24E4E4DFF80422C4D86DD9E20FB16D192D7343F3* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorInt_Remove_mD200B41DF3E14BDBF1AA25CB049E348300AA2DE5_RuntimeMethod_var)));
	}
}
// System.Int32 TriLibCore.Fbx.PropertyAccessorInt::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorInt_get_Count_m0C89ED9BBF123AF37C9647E9D08743150C453D88 (PropertyAccessorInt_t24E4E4DFF80422C4D86DD9E20FB16D192D7343F3* __this, const RuntimeMethod* method) 
{
	{
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_0 = (&__this->____properties_0);
		int32_t L_1;
		L_1 = FBXProperties_GetPropertyArrayLength_mD43333FAA9443D29CC2A86C914E75F7D2DF57EC9(L_0, NULL);
		return L_1;
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorInt::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorInt_get_IsReadOnly_m20707F1D40D5580A816E2D8009E2CF245AAE7C3D (PropertyAccessorInt_t24E4E4DFF80422C4D86DD9E20FB16D192D7343F3* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsReadOnlyU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Int32 TriLibCore.Fbx.PropertyAccessorInt::IndexOf(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorInt_IndexOf_m4BD1C6F598845DC91FBB46DA5E391E2272BF946D (PropertyAccessorInt_t24E4E4DFF80422C4D86DD9E20FB16D192D7343F3* __this, int32_t ___item0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorInt_IndexOf_m4BD1C6F598845DC91FBB46DA5E391E2272BF946D_RuntimeMethod_var)));
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorInt::Insert(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorInt_Insert_mBD22A1188780CA0DA1B4F63F6113CB9091E6E14C (PropertyAccessorInt_t24E4E4DFF80422C4D86DD9E20FB16D192D7343F3* __this, int32_t ___index0, int32_t ___item1, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorInt_Insert_mBD22A1188780CA0DA1B4F63F6113CB9091E6E14C_RuntimeMethod_var)));
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorInt::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorInt_RemoveAt_m5C75A6097020E302ADB4B78EB3321412B7EAAE00 (PropertyAccessorInt_t24E4E4DFF80422C4D86DD9E20FB16D192D7343F3* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorInt_RemoveAt_m5C75A6097020E302ADB4B78EB3321412B7EAAE00_RuntimeMethod_var)));
	}
}
// System.Int32 TriLibCore.Fbx.PropertyAccessorInt::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorInt_get_Item_mD8E6C79896E17011626DD51BC640FB81A8752C48 (PropertyAccessorInt_t24E4E4DFF80422C4D86DD9E20FB16D192D7343F3* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1;
		L_1 = PropertyAccessorInt_GetElement_m601D35A0D8860914D136AE3CD434BE51E404C7FB(__this, L_0, NULL);
		return L_1;
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorInt::set_Item(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorInt_set_Item_mE396544801031052CB78036FA969BBFB4DC019DD (PropertyAccessorInt_t24E4E4DFF80422C4D86DD9E20FB16D192D7343F3* __this, int32_t ___index0, int32_t ___value1, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorInt_set_Item_mE396544801031052CB78036FA969BBFB4DC019DD_RuntimeMethod_var)));
	}
}
// System.Int32 TriLibCore.Fbx.PropertyAccessorInt::GetElement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorInt_GetElement_m601D35A0D8860914D136AE3CD434BE51E404C7FB (PropertyAccessorInt_t24E4E4DFF80422C4D86DD9E20FB16D192D7343F3* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_0 = (&__this->____properties_0);
		bool L_1;
		L_1 = FBXProperties_get_IsASCII_m412715B4396F75F7B1127FD4A4B44AC3BC963420(L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_2 = (&__this->____properties_0);
		int32_t L_3 = ___i0;
		int32_t L_4;
		L_4 = FBXProperties_ASCIIGetIntValue_mD5B6A00346736642E5944098176C6A9715E60592(L_2, L_3, NULL);
		return L_4;
	}

IL_001a:
	{
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_5 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_6;
		L_6 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_5, NULL);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_7 = (&__this->____properties_0);
		int32_t L_8 = L_7->___BasePropertyIndex_2;
		NullCheck(L_6);
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_9;
		L_9 = FBXProcessor_LoadArrayProperty_mB08E43868A94F68E25F8DC291BF74851374FFD0C(L_6, L_8, NULL);
		V_0 = L_9;
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_10 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_11;
		L_11 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_10, NULL);
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_12 = V_0;
		NullCheck(L_11);
		FBXProcessor_SetActiveBinaryReader_m8C8111F52EB6DC3DD76E5F2F39F9A2695764B868(L_11, L_12, NULL);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_13 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_14;
		L_14 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_13, NULL);
		NullCheck(L_14);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_15 = L_14->___ActiveBinaryReader_11;
		NullCheck(L_15);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_16;
		L_16 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_15);
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_17 = V_0;
		int64_t L_18 = L_17.___Position_5;
		int32_t L_19 = ___i0;
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_20 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_21;
		L_21 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_20, NULL);
		NullCheck(L_21);
		int32_t L_22 = L_21->___ActiveSubDataSize_10;
		NullCheck(L_16);
		int64_t L_23;
		L_23 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(31 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_16, ((int64_t)il2cpp_codegen_add(L_18, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_19, L_22))))), 0);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_24 = (&__this->____properties_0);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_25 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_26;
		L_26 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_25, NULL);
		NullCheck(L_26);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_27 = L_26->___ActiveBinaryReader_11;
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_28 = V_0;
		int32_t L_29;
		L_29 = FBXProperties_BinaryConvertIntValue_m5271B4E15B0F3ED92CFB92DE359B8CDC9993C709(L_24, L_27, L_28, NULL);
		return L_29;
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
// System.Void TriLibCore.Fbx.PropertyAccessorLong::.ctor(TriLibCore.Fbx.FBXProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorLong__ctor_mD1D46DFE590685668413F4D1AD9303F716D8C66B (PropertyAccessorLong_t9A62C22AD09C973ACA178BE1BAC3A8FFB805C8A7* __this, FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 ___properties0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 L_0 = ___properties0;
		__this->____properties_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____properties_0))->___U3CProcessorU3Ek__BackingField_1), (void*)NULL);
		__this->___U3CIsReadOnlyU3Ek__BackingField_1 = (bool)1;
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Int64> TriLibCore.Fbx.PropertyAccessorLong::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorLong_GetEnumerator_m12B3301EE1B107A05C091AB0E1CC76E0C3804458 (PropertyAccessorLong_t9A62C22AD09C973ACA178BE1BAC3A8FFB805C8A7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyAccessorIEnumerator_1__ctor_m52017FEBE78CFF4A3918E710C90AFBB0AE6B434F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyAccessorIEnumerator_1_t81284489B090B3086F8560CFF14FCFA37CD50F96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyAccessorIEnumerator_1_t81284489B090B3086F8560CFF14FCFA37CD50F96 L_0;
		memset((&L_0), 0, sizeof(L_0));
		PropertyAccessorIEnumerator_1__ctor_m52017FEBE78CFF4A3918E710C90AFBB0AE6B434F((&L_0), __this, /*hidden argument*/PropertyAccessorIEnumerator_1__ctor_m52017FEBE78CFF4A3918E710C90AFBB0AE6B434F_RuntimeMethod_var);
		PropertyAccessorIEnumerator_1_t81284489B090B3086F8560CFF14FCFA37CD50F96 L_1 = L_0;
		RuntimeObject* L_2 = Box(PropertyAccessorIEnumerator_1_t81284489B090B3086F8560CFF14FCFA37CD50F96_il2cpp_TypeInfo_var, &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Collections.IEnumerator TriLibCore.Fbx.PropertyAccessorLong::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorLong_System_Collections_IEnumerable_GetEnumerator_m3DE414DE6F36E9C0F1266E201FEEE86258C8CAE9 (PropertyAccessorLong_t9A62C22AD09C973ACA178BE1BAC3A8FFB805C8A7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = PropertyAccessorLong_GetEnumerator_m12B3301EE1B107A05C091AB0E1CC76E0C3804458(__this, NULL);
		return L_0;
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorLong::Add(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorLong_Add_m5E36E9519465EFB1B6C70C0D6BFF6B18C365714D (PropertyAccessorLong_t9A62C22AD09C973ACA178BE1BAC3A8FFB805C8A7* __this, int64_t ___item0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorLong_Add_m5E36E9519465EFB1B6C70C0D6BFF6B18C365714D_RuntimeMethod_var)));
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorLong::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorLong_Clear_m5CDEF0C6CE3BFDB9815CB8CC76D19BFE5E7D531E (PropertyAccessorLong_t9A62C22AD09C973ACA178BE1BAC3A8FFB805C8A7* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorLong_Clear_m5CDEF0C6CE3BFDB9815CB8CC76D19BFE5E7D531E_RuntimeMethod_var)));
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorLong::Contains(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorLong_Contains_mA2EF2BA51E321E94EC45365F3C3FAB3EE6E9C378 (PropertyAccessorLong_t9A62C22AD09C973ACA178BE1BAC3A8FFB805C8A7* __this, int64_t ___item0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorLong_Contains_mA2EF2BA51E321E94EC45365F3C3FAB3EE6E9C378_RuntimeMethod_var)));
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorLong::CopyTo(System.Int64[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorLong_CopyTo_m35BFF45BC5FDA872D5DC851642A4879B3D36E88D (PropertyAccessorLong_t9A62C22AD09C973ACA178BE1BAC3A8FFB805C8A7* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0014;
	}

IL_0004:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_0 = ___array0;
		int32_t L_1 = ___arrayIndex1;
		int32_t L_2 = V_0;
		int32_t L_3 = V_0;
		int64_t L_4;
		L_4 = PropertyAccessorLong_GetElement_m296C57EACB6F02ABEB4471B17EB24503791DE6D0(__this, L_3, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (int64_t)L_4);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0014:
	{
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = PropertyAccessorLong_get_Count_m4848D70EC610CBA6E351059DFA38F3D565B89DF9(__this, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorLong::Remove(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorLong_Remove_m2023A6FD815BDF767964553127FCBC4CF8DA1851 (PropertyAccessorLong_t9A62C22AD09C973ACA178BE1BAC3A8FFB805C8A7* __this, int64_t ___item0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorLong_Remove_m2023A6FD815BDF767964553127FCBC4CF8DA1851_RuntimeMethod_var)));
	}
}
// System.Int32 TriLibCore.Fbx.PropertyAccessorLong::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorLong_get_Count_m4848D70EC610CBA6E351059DFA38F3D565B89DF9 (PropertyAccessorLong_t9A62C22AD09C973ACA178BE1BAC3A8FFB805C8A7* __this, const RuntimeMethod* method) 
{
	{
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_0 = (&__this->____properties_0);
		int32_t L_1;
		L_1 = FBXProperties_GetPropertyArrayLength_mD43333FAA9443D29CC2A86C914E75F7D2DF57EC9(L_0, NULL);
		return L_1;
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorLong::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorLong_get_IsReadOnly_mB47A8FC70ACC61267C10345748AD9C8FEB1795F4 (PropertyAccessorLong_t9A62C22AD09C973ACA178BE1BAC3A8FFB805C8A7* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsReadOnlyU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Int32 TriLibCore.Fbx.PropertyAccessorLong::IndexOf(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorLong_IndexOf_m049151611E62CCC45723DE7E25636EDDA7397F19 (PropertyAccessorLong_t9A62C22AD09C973ACA178BE1BAC3A8FFB805C8A7* __this, int64_t ___item0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorLong_IndexOf_m049151611E62CCC45723DE7E25636EDDA7397F19_RuntimeMethod_var)));
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorLong::Insert(System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorLong_Insert_m6E624085B34F1BE033200EEF0134ACD783519358 (PropertyAccessorLong_t9A62C22AD09C973ACA178BE1BAC3A8FFB805C8A7* __this, int32_t ___index0, int64_t ___item1, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorLong_Insert_m6E624085B34F1BE033200EEF0134ACD783519358_RuntimeMethod_var)));
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorLong::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorLong_RemoveAt_mE5EC5A508E67591F480F9FFE2AB04D55B1431F78 (PropertyAccessorLong_t9A62C22AD09C973ACA178BE1BAC3A8FFB805C8A7* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorLong_RemoveAt_mE5EC5A508E67591F480F9FFE2AB04D55B1431F78_RuntimeMethod_var)));
	}
}
// System.Int64 TriLibCore.Fbx.PropertyAccessorLong::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t PropertyAccessorLong_get_Item_m53A56EF50B7D0D0581BA0762A7630F6B4A517A68 (PropertyAccessorLong_t9A62C22AD09C973ACA178BE1BAC3A8FFB805C8A7* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		int64_t L_1;
		L_1 = PropertyAccessorLong_GetElement_m296C57EACB6F02ABEB4471B17EB24503791DE6D0(__this, L_0, NULL);
		return L_1;
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorLong::set_Item(System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorLong_set_Item_m4A792FFF42650916E4AB115B9EC9830A0F8ABE11 (PropertyAccessorLong_t9A62C22AD09C973ACA178BE1BAC3A8FFB805C8A7* __this, int32_t ___index0, int64_t ___value1, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorLong_set_Item_m4A792FFF42650916E4AB115B9EC9830A0F8ABE11_RuntimeMethod_var)));
	}
}
// System.Int64 TriLibCore.Fbx.PropertyAccessorLong::GetElement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t PropertyAccessorLong_GetElement_m296C57EACB6F02ABEB4471B17EB24503791DE6D0 (PropertyAccessorLong_t9A62C22AD09C973ACA178BE1BAC3A8FFB805C8A7* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_0 = (&__this->____properties_0);
		bool L_1;
		L_1 = FBXProperties_get_IsASCII_m412715B4396F75F7B1127FD4A4B44AC3BC963420(L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_2 = (&__this->____properties_0);
		int32_t L_3 = ___i0;
		int64_t L_4;
		L_4 = FBXProperties_ASCIIGetLongValue_m7AAAE670097E8A2E4D8CC45E10D2FB8825731B15(L_2, L_3, NULL);
		return L_4;
	}

IL_001a:
	{
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_5 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_6;
		L_6 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_5, NULL);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_7 = (&__this->____properties_0);
		int32_t L_8 = L_7->___BasePropertyIndex_2;
		NullCheck(L_6);
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_9;
		L_9 = FBXProcessor_LoadArrayProperty_mB08E43868A94F68E25F8DC291BF74851374FFD0C(L_6, L_8, NULL);
		V_0 = L_9;
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_10 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_11;
		L_11 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_10, NULL);
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_12 = V_0;
		NullCheck(L_11);
		FBXProcessor_SetActiveBinaryReader_m8C8111F52EB6DC3DD76E5F2F39F9A2695764B868(L_11, L_12, NULL);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_13 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_14;
		L_14 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_13, NULL);
		NullCheck(L_14);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_15 = L_14->___ActiveBinaryReader_11;
		NullCheck(L_15);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_16;
		L_16 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_15);
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_17 = V_0;
		int64_t L_18 = L_17.___Position_5;
		int32_t L_19 = ___i0;
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_20 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_21;
		L_21 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_20, NULL);
		NullCheck(L_21);
		int32_t L_22 = L_21->___ActiveSubDataSize_10;
		NullCheck(L_16);
		int64_t L_23;
		L_23 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(31 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_16, ((int64_t)il2cpp_codegen_add(L_18, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_19, L_22))))), 0);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_24 = (&__this->____properties_0);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_25 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_26;
		L_26 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_25, NULL);
		NullCheck(L_26);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_27 = L_26->___ActiveBinaryReader_11;
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_28 = V_0;
		int64_t L_29;
		L_29 = FBXProperties_BinaryConvertLongValue_m3127F020BCF8033861FF1A83AF15F32AACCF6123(L_24, L_27, L_28, NULL);
		return L_29;
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
// System.Void TriLibCore.Fbx.PropertyAccessorFloat::.ctor(TriLibCore.Fbx.FBXProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorFloat__ctor_mBF196988D5427DC01A7AE6DBBAD01197658973E1 (PropertyAccessorFloat_t1442C7AC1ECC61647B8B16289FAD0AC5A072D96B* __this, FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 ___properties0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 L_0 = ___properties0;
		__this->____properties_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____properties_0))->___U3CProcessorU3Ek__BackingField_1), (void*)NULL);
		__this->___U3CIsReadOnlyU3Ek__BackingField_1 = (bool)1;
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Single> TriLibCore.Fbx.PropertyAccessorFloat::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorFloat_GetEnumerator_mC7CA3AD0597A0B85F4037019EFF259A7BBF1D425 (PropertyAccessorFloat_t1442C7AC1ECC61647B8B16289FAD0AC5A072D96B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyAccessorIEnumerator_1__ctor_m885514EA1BD585E7096456986DE47D98FFC4D9DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyAccessorIEnumerator_1_t132A7FDC9F7EEB025D6C21FF07F9E037A5D8412D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyAccessorIEnumerator_1_t132A7FDC9F7EEB025D6C21FF07F9E037A5D8412D L_0;
		memset((&L_0), 0, sizeof(L_0));
		PropertyAccessorIEnumerator_1__ctor_m885514EA1BD585E7096456986DE47D98FFC4D9DC((&L_0), __this, /*hidden argument*/PropertyAccessorIEnumerator_1__ctor_m885514EA1BD585E7096456986DE47D98FFC4D9DC_RuntimeMethod_var);
		PropertyAccessorIEnumerator_1_t132A7FDC9F7EEB025D6C21FF07F9E037A5D8412D L_1 = L_0;
		RuntimeObject* L_2 = Box(PropertyAccessorIEnumerator_1_t132A7FDC9F7EEB025D6C21FF07F9E037A5D8412D_il2cpp_TypeInfo_var, &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Collections.IEnumerator TriLibCore.Fbx.PropertyAccessorFloat::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorFloat_System_Collections_IEnumerable_GetEnumerator_mBDDBDC474AF4DF6387659F4BAFA992106606869E (PropertyAccessorFloat_t1442C7AC1ECC61647B8B16289FAD0AC5A072D96B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = PropertyAccessorFloat_GetEnumerator_mC7CA3AD0597A0B85F4037019EFF259A7BBF1D425(__this, NULL);
		return L_0;
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorFloat::Add(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorFloat_Add_mCCAD275FD92B9DD4E171845E9B1E4B3E8D9255ED (PropertyAccessorFloat_t1442C7AC1ECC61647B8B16289FAD0AC5A072D96B* __this, float ___item0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorFloat_Add_mCCAD275FD92B9DD4E171845E9B1E4B3E8D9255ED_RuntimeMethod_var)));
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorFloat::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorFloat_Clear_m3D2A56B0A4BBCC34D46ADD148EEAB561A5C9FBD6 (PropertyAccessorFloat_t1442C7AC1ECC61647B8B16289FAD0AC5A072D96B* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorFloat_Clear_m3D2A56B0A4BBCC34D46ADD148EEAB561A5C9FBD6_RuntimeMethod_var)));
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorFloat::Contains(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorFloat_Contains_mA19DBB936B8A684E19E995DFEC0629E6BFAA9C8C (PropertyAccessorFloat_t1442C7AC1ECC61647B8B16289FAD0AC5A072D96B* __this, float ___item0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorFloat_Contains_mA19DBB936B8A684E19E995DFEC0629E6BFAA9C8C_RuntimeMethod_var)));
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorFloat::CopyTo(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorFloat_CopyTo_mCBD4A7064D7E5BF47D2D310D1F9CCD122CEEBE36 (PropertyAccessorFloat_t1442C7AC1ECC61647B8B16289FAD0AC5A072D96B* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0014;
	}

IL_0004:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___array0;
		int32_t L_1 = ___arrayIndex1;
		int32_t L_2 = V_0;
		int32_t L_3 = V_0;
		float L_4;
		L_4 = PropertyAccessorFloat_GetElement_mA56ED47BACBFA0BBA492E270FD5AA697850A5EF0(__this, L_3, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (float)L_4);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0014:
	{
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = PropertyAccessorFloat_get_Count_m0AA67B6688957CA7F3B2E57EACE0882A5A05879C(__this, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorFloat::Remove(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorFloat_Remove_mF265557EEFE8866385B6280859AF5C87402A1022 (PropertyAccessorFloat_t1442C7AC1ECC61647B8B16289FAD0AC5A072D96B* __this, float ___item0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorFloat_Remove_mF265557EEFE8866385B6280859AF5C87402A1022_RuntimeMethod_var)));
	}
}
// System.Int32 TriLibCore.Fbx.PropertyAccessorFloat::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorFloat_get_Count_m0AA67B6688957CA7F3B2E57EACE0882A5A05879C (PropertyAccessorFloat_t1442C7AC1ECC61647B8B16289FAD0AC5A072D96B* __this, const RuntimeMethod* method) 
{
	{
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_0 = (&__this->____properties_0);
		int32_t L_1;
		L_1 = FBXProperties_GetPropertyArrayLength_mD43333FAA9443D29CC2A86C914E75F7D2DF57EC9(L_0, NULL);
		return L_1;
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorFloat::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorFloat_get_IsReadOnly_m9CECFEC5DD0B62BD32B7D9DBEF717F6B1F98F36B (PropertyAccessorFloat_t1442C7AC1ECC61647B8B16289FAD0AC5A072D96B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsReadOnlyU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Int32 TriLibCore.Fbx.PropertyAccessorFloat::IndexOf(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorFloat_IndexOf_m08F29119B0358F6727AEB21AC99F6A06D91FAAA8 (PropertyAccessorFloat_t1442C7AC1ECC61647B8B16289FAD0AC5A072D96B* __this, float ___item0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorFloat_IndexOf_m08F29119B0358F6727AEB21AC99F6A06D91FAAA8_RuntimeMethod_var)));
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorFloat::Insert(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorFloat_Insert_m60FADFA183D69CE64EE67C9C2DA05C1AE28215F4 (PropertyAccessorFloat_t1442C7AC1ECC61647B8B16289FAD0AC5A072D96B* __this, int32_t ___index0, float ___item1, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorFloat_Insert_m60FADFA183D69CE64EE67C9C2DA05C1AE28215F4_RuntimeMethod_var)));
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorFloat::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorFloat_RemoveAt_mCD6754C94D601525E93F0BD570898E2AFB886C9F (PropertyAccessorFloat_t1442C7AC1ECC61647B8B16289FAD0AC5A072D96B* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorFloat_RemoveAt_mCD6754C94D601525E93F0BD570898E2AFB886C9F_RuntimeMethod_var)));
	}
}
// System.Single TriLibCore.Fbx.PropertyAccessorFloat::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyAccessorFloat_get_Item_m41B0954400C5C9746AE847DB5620C0DBFE8206A6 (PropertyAccessorFloat_t1442C7AC1ECC61647B8B16289FAD0AC5A072D96B* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		float L_1;
		L_1 = PropertyAccessorFloat_GetElement_mA56ED47BACBFA0BBA492E270FD5AA697850A5EF0(__this, L_0, NULL);
		return L_1;
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorFloat::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorFloat_set_Item_m030F64C16AAC2FDD5A546AC3FC8307C53C06B79D (PropertyAccessorFloat_t1442C7AC1ECC61647B8B16289FAD0AC5A072D96B* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorFloat_set_Item_m030F64C16AAC2FDD5A546AC3FC8307C53C06B79D_RuntimeMethod_var)));
	}
}
// System.Single TriLibCore.Fbx.PropertyAccessorFloat::GetElement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PropertyAccessorFloat_GetElement_mA56ED47BACBFA0BBA492E270FD5AA697850A5EF0 (PropertyAccessorFloat_t1442C7AC1ECC61647B8B16289FAD0AC5A072D96B* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_0 = (&__this->____properties_0);
		bool L_1;
		L_1 = FBXProperties_get_IsASCII_m412715B4396F75F7B1127FD4A4B44AC3BC963420(L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_2 = (&__this->____properties_0);
		int32_t L_3 = ___i0;
		float L_4;
		L_4 = FBXProperties_ASCIIGetFloatValue_m73F67724B2EFDA0EF8AAA9D64DC918E2436A40BA(L_2, L_3, NULL);
		return L_4;
	}

IL_001a:
	{
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_5 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_6;
		L_6 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_5, NULL);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_7 = (&__this->____properties_0);
		int32_t L_8 = L_7->___BasePropertyIndex_2;
		NullCheck(L_6);
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_9;
		L_9 = FBXProcessor_LoadArrayProperty_mB08E43868A94F68E25F8DC291BF74851374FFD0C(L_6, L_8, NULL);
		V_0 = L_9;
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_10 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_11;
		L_11 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_10, NULL);
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_12 = V_0;
		NullCheck(L_11);
		FBXProcessor_SetActiveBinaryReader_m8C8111F52EB6DC3DD76E5F2F39F9A2695764B868(L_11, L_12, NULL);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_13 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_14;
		L_14 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_13, NULL);
		NullCheck(L_14);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_15 = L_14->___ActiveBinaryReader_11;
		NullCheck(L_15);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_16;
		L_16 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_15);
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_17 = V_0;
		int64_t L_18 = L_17.___Position_5;
		int32_t L_19 = ___i0;
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_20 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_21;
		L_21 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_20, NULL);
		NullCheck(L_21);
		int32_t L_22 = L_21->___ActiveSubDataSize_10;
		NullCheck(L_16);
		int64_t L_23;
		L_23 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(31 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_16, ((int64_t)il2cpp_codegen_add(L_18, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_19, L_22))))), 0);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_24 = (&__this->____properties_0);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_25 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_26;
		L_26 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_25, NULL);
		NullCheck(L_26);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_27 = L_26->___ActiveBinaryReader_11;
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_28 = V_0;
		float L_29;
		L_29 = FBXProperties_BinaryConvertFloatValue_mB5117FA192902F469E2A916625E117648D95FBE9(L_24, L_27, L_28, NULL);
		return L_29;
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
// System.Void TriLibCore.Fbx.PropertyAccessorDouble::.ctor(TriLibCore.Fbx.FBXProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorDouble__ctor_m204CA79674ECFA30CBDE5FF0736E78E9DE64B0F6 (PropertyAccessorDouble_t189D059F98C03914177E9547477777DC527180B5* __this, FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 ___properties0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 L_0 = ___properties0;
		__this->____properties_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____properties_0))->___U3CProcessorU3Ek__BackingField_1), (void*)NULL);
		__this->___U3CIsReadOnlyU3Ek__BackingField_1 = (bool)1;
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Double> TriLibCore.Fbx.PropertyAccessorDouble::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorDouble_GetEnumerator_m9F6C9FED59EA7039C0F615AAD3881AD89F9A6694 (PropertyAccessorDouble_t189D059F98C03914177E9547477777DC527180B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyAccessorIEnumerator_1__ctor_m807FB04952574C23B9ECCFF282D11027CB4022CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyAccessorIEnumerator_1_tA87B54345A2924A4BB0DE1D0D4BE147D24B9056D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyAccessorIEnumerator_1_tA87B54345A2924A4BB0DE1D0D4BE147D24B9056D L_0;
		memset((&L_0), 0, sizeof(L_0));
		PropertyAccessorIEnumerator_1__ctor_m807FB04952574C23B9ECCFF282D11027CB4022CD((&L_0), __this, /*hidden argument*/PropertyAccessorIEnumerator_1__ctor_m807FB04952574C23B9ECCFF282D11027CB4022CD_RuntimeMethod_var);
		PropertyAccessorIEnumerator_1_tA87B54345A2924A4BB0DE1D0D4BE147D24B9056D L_1 = L_0;
		RuntimeObject* L_2 = Box(PropertyAccessorIEnumerator_1_tA87B54345A2924A4BB0DE1D0D4BE147D24B9056D_il2cpp_TypeInfo_var, &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Collections.IEnumerator TriLibCore.Fbx.PropertyAccessorDouble::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyAccessorDouble_System_Collections_IEnumerable_GetEnumerator_mF554D30A3A35A764449AF428496417B6EF1068FA (PropertyAccessorDouble_t189D059F98C03914177E9547477777DC527180B5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = PropertyAccessorDouble_GetEnumerator_m9F6C9FED59EA7039C0F615AAD3881AD89F9A6694(__this, NULL);
		return L_0;
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorDouble::Add(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorDouble_Add_mAE1735D14F3AA39C070B7CFF7D2D376453851ACE (PropertyAccessorDouble_t189D059F98C03914177E9547477777DC527180B5* __this, double ___item0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorDouble_Add_mAE1735D14F3AA39C070B7CFF7D2D376453851ACE_RuntimeMethod_var)));
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorDouble::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorDouble_Clear_mEF8B26DAEC1AA884F3174D820B0BB4933AD5F4D1 (PropertyAccessorDouble_t189D059F98C03914177E9547477777DC527180B5* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorDouble_Clear_mEF8B26DAEC1AA884F3174D820B0BB4933AD5F4D1_RuntimeMethod_var)));
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorDouble::Contains(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorDouble_Contains_m35D360656DAFE79EA025141CA19D86EF834E7EE3 (PropertyAccessorDouble_t189D059F98C03914177E9547477777DC527180B5* __this, double ___item0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorDouble_Contains_m35D360656DAFE79EA025141CA19D86EF834E7EE3_RuntimeMethod_var)));
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorDouble::CopyTo(System.Double[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorDouble_CopyTo_mB756B573A525006E9A9372D455DEEF1653371CC3 (PropertyAccessorDouble_t189D059F98C03914177E9547477777DC527180B5* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0014;
	}

IL_0004:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___array0;
		int32_t L_1 = ___arrayIndex1;
		int32_t L_2 = V_0;
		int32_t L_3 = V_0;
		double L_4;
		L_4 = PropertyAccessorDouble_GetElement_m23682071BF27DDD51AA30507127971F691D4DFAE(__this, L_3, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (double)L_4);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0014:
	{
		int32_t L_6 = V_0;
		int32_t L_7;
		L_7 = PropertyAccessorDouble_get_Count_mD1726F34A29A7ACEF3A1CF4C1CB12FABE08D7197(__this, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorDouble::Remove(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorDouble_Remove_mDAD3E51DCDFAF51CC1045AE05EDED18355A8B6BF (PropertyAccessorDouble_t189D059F98C03914177E9547477777DC527180B5* __this, double ___item0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorDouble_Remove_mDAD3E51DCDFAF51CC1045AE05EDED18355A8B6BF_RuntimeMethod_var)));
	}
}
// System.Int32 TriLibCore.Fbx.PropertyAccessorDouble::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorDouble_get_Count_mD1726F34A29A7ACEF3A1CF4C1CB12FABE08D7197 (PropertyAccessorDouble_t189D059F98C03914177E9547477777DC527180B5* __this, const RuntimeMethod* method) 
{
	{
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_0 = (&__this->____properties_0);
		int32_t L_1;
		L_1 = FBXProperties_GetPropertyArrayLength_mD43333FAA9443D29CC2A86C914E75F7D2DF57EC9(L_0, NULL);
		return L_1;
	}
}
// System.Boolean TriLibCore.Fbx.PropertyAccessorDouble::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyAccessorDouble_get_IsReadOnly_mB5AB1148785DC104CA1D709790A6FD9DF011911A (PropertyAccessorDouble_t189D059F98C03914177E9547477777DC527180B5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsReadOnlyU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Int32 TriLibCore.Fbx.PropertyAccessorDouble::IndexOf(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyAccessorDouble_IndexOf_m7DA059EE56C40EB0703D3859F3053D074C923311 (PropertyAccessorDouble_t189D059F98C03914177E9547477777DC527180B5* __this, double ___item0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorDouble_IndexOf_m7DA059EE56C40EB0703D3859F3053D074C923311_RuntimeMethod_var)));
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorDouble::Insert(System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorDouble_Insert_mEB967E3D782C721D44C788453CD124976B0A11D8 (PropertyAccessorDouble_t189D059F98C03914177E9547477777DC527180B5* __this, int32_t ___index0, double ___item1, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorDouble_Insert_mEB967E3D782C721D44C788453CD124976B0A11D8_RuntimeMethod_var)));
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorDouble::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorDouble_RemoveAt_m7932C49E6F6D9D1D96E5F7655639650EEDDEB64A (PropertyAccessorDouble_t189D059F98C03914177E9547477777DC527180B5* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorDouble_RemoveAt_m7932C49E6F6D9D1D96E5F7655639650EEDDEB64A_RuntimeMethod_var)));
	}
}
// System.Double TriLibCore.Fbx.PropertyAccessorDouble::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PropertyAccessorDouble_get_Item_mA01ED6FAB9576B6B28167140E58FCFE97084234A (PropertyAccessorDouble_t189D059F98C03914177E9547477777DC527180B5* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		double L_1;
		L_1 = PropertyAccessorDouble_GetElement_m23682071BF27DDD51AA30507127971F691D4DFAE(__this, L_0, NULL);
		return L_1;
	}
}
// System.Void TriLibCore.Fbx.PropertyAccessorDouble::set_Item(System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAccessorDouble_set_Item_m8CA12BC5B805E259A5A91BB1A7A98EC44FF517DA (PropertyAccessorDouble_t189D059F98C03914177E9547477777DC527180B5* __this, int32_t ___index0, double ___value1, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PropertyAccessorDouble_set_Item_m8CA12BC5B805E259A5A91BB1A7A98EC44FF517DA_RuntimeMethod_var)));
	}
}
// System.Double TriLibCore.Fbx.PropertyAccessorDouble::GetElement(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PropertyAccessorDouble_GetElement_m23682071BF27DDD51AA30507127971F691D4DFAE (PropertyAccessorDouble_t189D059F98C03914177E9547477777DC527180B5* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_0 = (&__this->____properties_0);
		bool L_1;
		L_1 = FBXProperties_get_IsASCII_m412715B4396F75F7B1127FD4A4B44AC3BC963420(L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_2 = (&__this->____properties_0);
		int32_t L_3 = ___i0;
		double L_4;
		L_4 = FBXProperties_ASCIIGetDoubleValue_m80150CE66E655F21CB5F37689DF79FF9822C0C07(L_2, L_3, NULL);
		return L_4;
	}

IL_001a:
	{
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_5 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_6;
		L_6 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_5, NULL);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_7 = (&__this->____properties_0);
		int32_t L_8 = L_7->___BasePropertyIndex_2;
		NullCheck(L_6);
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_9;
		L_9 = FBXProcessor_LoadArrayProperty_mB08E43868A94F68E25F8DC291BF74851374FFD0C(L_6, L_8, NULL);
		V_0 = L_9;
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_10 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_11;
		L_11 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_10, NULL);
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_12 = V_0;
		NullCheck(L_11);
		FBXProcessor_SetActiveBinaryReader_m8C8111F52EB6DC3DD76E5F2F39F9A2695764B868(L_11, L_12, NULL);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_13 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_14;
		L_14 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_13, NULL);
		NullCheck(L_14);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_15 = L_14->___ActiveBinaryReader_11;
		NullCheck(L_15);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_16;
		L_16 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_15);
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_17 = V_0;
		int64_t L_18 = L_17.___Position_5;
		int32_t L_19 = ___i0;
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_20 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_21;
		L_21 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_20, NULL);
		NullCheck(L_21);
		int32_t L_22 = L_21->___ActiveSubDataSize_10;
		NullCheck(L_16);
		int64_t L_23;
		L_23 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(31 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_16, ((int64_t)il2cpp_codegen_add(L_18, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_19, L_22))))), 0);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_24 = (&__this->____properties_0);
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* L_25 = (&__this->____properties_0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_26;
		L_26 = FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline(L_25, NULL);
		NullCheck(L_26);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_27 = L_26->___ActiveBinaryReader_11;
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_28 = V_0;
		double L_29;
		L_29 = FBXProperties_BinaryConvertDoubleValue_mA84CDC06DFFEC83B053D0F22152A0C4FCA12C94E(L_24, L_27, L_28, NULL);
		return L_29;
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
// System.Type TriLibCore.Fbx.Reader.FbxReader::get_LoadingStepEnumType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* FbxReader_get_LoadingStepEnumType_mAA1DD08EA42C888CEDABF8FB1679A40BC5E9B327 (FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProcessingSteps_t650107FDF5C3F52BB4A5B9D62AA93F417D0E5316_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ProcessingSteps_t650107FDF5C3F52BB4A5B9D62AA93F417D0E5316_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		return L_1;
	}
}
// System.String[] TriLibCore.Fbx.Reader.FbxReader::GetExtensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* FbxReader_GetExtensions_mE25B49FBB65D9D0F4FD5B4349B7B38E465FC4EF9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5C5B51FDBB849EDCED35D213FC930CC6B328429);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralD5C5B51FDBB849EDCED35D213FC930CC6B328429);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD5C5B51FDBB849EDCED35D213FC930CC6B328429);
		return L_1;
	}
}
// System.String TriLibCore.Fbx.Reader.FbxReader::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FbxReader_get_Name_m66680BDEDCDC00D0814FE590CF8100F541CEBA73 (FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF9B10C2E201D9B3CE0452AB6969B5912DBD0D42);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralAF9B10C2E201D9B3CE0452AB6969B5912DBD0D42;
	}
}
// TriLibCore.Interfaces.IRootModel TriLibCore.Fbx.Reader.FbxReader::ReadStream(System.IO.Stream,TriLibCore.AssetLoaderContext,System.String,System.Action`2<TriLibCore.AssetLoaderContext,System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FbxReader_ReadStream_m0011DE05358203A69A741D2EA6EC9DAE5FD742E0 (FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* ___assetLoaderContext1, String_t* ___filename2, Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* ___onProgress3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		AssetLoaderContext_t94854AA4BCC0F8C2A92047DD2CC6BF830001DD2C* L_1 = ___assetLoaderContext1;
		String_t* L_2 = ___filename2;
		Action_2_t5A98318AA2335D7048A849A249280B64AD125DCD* L_3 = ___onProgress3;
		RuntimeObject* L_4;
		L_4 = ReaderBase_ReadStream_m725378DF096B29E0DB3BE3FB9E5F1E37747883F4(__this, L_0, L_1, L_2, L_3, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = ___stream0;
		il2cpp_codegen_runtime_class_init_inline(FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = FbxReader_IsBinary_mC3D42B93BA7470C717A2C494339A25E9ED374274(L_5, NULL);
		if (!L_6)
		{
			goto IL_0026;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = ___stream0;
		RuntimeObject* L_8;
		L_8 = FbxReader_ParseBinary_m8B56277ECB7EEE23D9D8477378311DAC78DD5515(__this, L_7, NULL);
		V_0 = L_8;
		ReaderBase_PostProcessModel_mD3BB953DE8BEB5FCA65077455BDA0750F740C667(__this, (&V_0), NULL);
		RuntimeObject* L_9 = V_0;
		return L_9;
	}

IL_0026:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_10 = ___stream0;
		il2cpp_codegen_runtime_class_init_inline(FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = FbxReader_IsASCII_mA2096AAE6899624441FDEB02509ED99ED7EB883C(L_10, NULL);
		if (!L_11)
		{
			goto IL_0040;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_12 = ___stream0;
		RuntimeObject* L_13;
		L_13 = FbxReader_ParseASCII_m9B2DF8EBC9701E3DA1CAFC1067057815F487066F(__this, L_12, NULL);
		V_1 = L_13;
		ReaderBase_PostProcessModel_mD3BB953DE8BEB5FCA65077455BDA0750F740C667(__this, (&V_1), NULL);
		RuntimeObject* L_14 = V_1;
		return L_14;
	}

IL_0040:
	{
		return (RuntimeObject*)NULL;
	}
}
// TriLibCore.Interfaces.IRootModel TriLibCore.Fbx.Reader.FbxReader::CreateRootModel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FbxReader_CreateRootModel_mA714ABFC798FE1605825E6FDF57844C6781C10C6 (FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* L_0 = (FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834*)il2cpp_codegen_object_new(FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		FBXDocument__ctor_m725644F1B4CBB463A84BA6C11C0B8990847B2390(L_0, NULL);
		return L_0;
	}
}
// TriLibCore.Interfaces.IRootModel TriLibCore.Fbx.Reader.FbxReader::ParseBinary(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FbxReader_ParseBinary_m8B56277ECB7EEE23D9D8477378311DAC78DD5515 (FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FbxReader_ParseBinary_m8B56277ECB7EEE23D9D8477378311DAC78DD5515_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* V_0 = NULL;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_1 = NULL;
	FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50* V_2 = NULL;
	FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_0 = (FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4*)il2cpp_codegen_object_new(FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		FBXProcessor__ctor_m9CE53C2B543FA782A9F365B4EDFC3DB87BFB7977(L_0, __this, NULL);
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E_il2cpp_TypeInfo_var);
		bool L_1 = ((FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E_StaticFields*)il2cpp_codegen_static_fields_for(FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E_il2cpp_TypeInfo_var))->___BufferizeStream_17;
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___stream0;
		if (((MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)IsInstClass((RuntimeObject*)L_2, MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var)))
		{
			goto IL_004b;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___stream0;
		NullCheck(L_3);
		int64_t L_4;
		L_4 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_3);
		if ((int64_t)(L_4) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), FbxReader_ParseBinary_m8B56277ECB7EEE23D9D8477378311DAC78DD5515_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)L_4));
		__this->____fileBuffer_18 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fileBuffer_18), (void*)L_5);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___stream0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->____fileBuffer_18;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = ___stream0;
		NullCheck(L_8);
		int64_t L_9;
		L_9 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_8);
		NullCheck(L_6);
		int32_t L_10;
		L_10 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_6, L_7, 0, ((int32_t)L_9));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->____fileBuffer_18;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_12 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_12, L_11, NULL);
		V_1 = L_12;
		goto IL_004d;
	}

IL_004b:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_13 = ___stream0;
		V_1 = L_13;
	}

IL_004d:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_14 = V_1;
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_15 = V_0;
		FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50* L_16 = (FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50*)il2cpp_codegen_object_new(FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		FBXBinaryReader__ctor_mE643C5E24AF0209662FD47E0FA56FFCF9CB56554(L_16, L_14, __this, L_15, NULL);
		V_2 = L_16;
		FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50* L_17 = V_2;
		NullCheck(L_17);
		FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D L_18;
		L_18 = FBXBinaryReader_ReadDocument_m27AFF3DF4C3E9C70713109A0A2FB0FA293674E64(L_17, NULL);
		V_3 = L_18;
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_19 = V_0;
		FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D L_20 = V_3;
		NullCheck(L_19);
		FBXRootModel_t1960D19A6733168B2F9CF5A6235362FD25861775* L_21;
		L_21 = FBXProcessor_Process_mD196AFB65D13AA7C75FE1409F327F5913214E902(L_19, L_20, (bool)1, NULL);
		FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50* L_22 = V_2;
		NullCheck(L_22);
		FBXBinaryReader_Unload_m849A9163DF9496C688291EA217710B09C28E0E00(L_22, NULL);
		FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50* L_23 = V_2;
		NullCheck(L_23);
		BinaryReader_Dispose_mAFF1A9CE9A73D148270FFA1F896992EB52D36078(L_23, NULL);
		return L_21;
	}
}
// TriLibCore.Interfaces.IRootModel TriLibCore.Fbx.Reader.FbxReader::ParseASCII(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FbxReader_ParseASCII_m9B2DF8EBC9701E3DA1CAFC1067057815F487066F (FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FbxReader_ParseASCII_m9B2DF8EBC9701E3DA1CAFC1067057815F487066F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_0 = NULL;
	FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D V_1;
	memset((&V_1), 0, sizeof(V_1));
	FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* G_B3_0 = NULL;
	FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* G_B1_0 = NULL;
	FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* G_B2_0 = NULL;
	FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* G_B4_0 = NULL;
	{
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_0 = (FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4*)il2cpp_codegen_object_new(FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		FBXProcessor__ctor_m9CE53C2B543FA782A9F365B4EDFC3DB87BFB7977(L_0, __this, NULL);
		il2cpp_codegen_runtime_class_init_inline(FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E_il2cpp_TypeInfo_var);
		bool L_1 = ((FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E_StaticFields*)il2cpp_codegen_static_fields_for(FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E_il2cpp_TypeInfo_var))->___BufferizeStream_17;
		G_B1_0 = L_0;
		if (!L_1)
		{
			G_B3_0 = L_0;
			goto IL_004a;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___stream0;
		G_B2_0 = G_B1_0;
		if (((MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)IsInstClass((RuntimeObject*)L_2, MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var)))
		{
			G_B3_0 = G_B1_0;
			goto IL_004a;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3 = ___stream0;
		NullCheck(L_3);
		int64_t L_4;
		L_4 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_3);
		if ((int64_t)(L_4) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), FbxReader_ParseASCII_m9B2DF8EBC9701E3DA1CAFC1067057815F487066F_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)L_4));
		__this->____fileBuffer_18 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____fileBuffer_18), (void*)L_5);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___stream0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->____fileBuffer_18;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = ___stream0;
		NullCheck(L_8);
		int64_t L_9;
		L_9 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_8);
		NullCheck(L_6);
		int32_t L_10;
		L_10 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_6, L_7, 0, ((int32_t)L_9));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->____fileBuffer_18;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_12 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_12, L_11, NULL);
		V_0 = L_12;
		G_B4_0 = G_B2_0;
		goto IL_004c;
	}

IL_004a:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_13 = ___stream0;
		V_0 = L_13;
		G_B4_0 = G_B3_0;
	}

IL_004c:
	{
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_14 = G_B4_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_15 = V_0;
		FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* L_16 = (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B*)il2cpp_codegen_object_new(FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		FBXASCIIReader__ctor_mEB75301BADCB18697945E53B545B3A5B5E9787C7(L_16, L_14, L_15, NULL);
		NullCheck(L_16);
		FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D L_17;
		L_17 = FBXASCIIReader_ReadDocument_m42A06BB831534E44B0CFDE179264545AC4875724(L_16, NULL);
		V_1 = L_17;
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(__this, (1.0f), 0, (0.0f), NULL);
		FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D L_18 = V_1;
		NullCheck(L_14);
		FBXRootModel_t1960D19A6733168B2F9CF5A6235362FD25861775* L_19;
		L_19 = FBXProcessor_Process_mD196AFB65D13AA7C75FE1409F327F5913214E902(L_14, L_18, (bool)0, NULL);
		return L_19;
	}
}
// System.Boolean TriLibCore.Fbx.Reader.FbxReader::IsBinary(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FbxReader_IsBinary_mC3D42B93BA7470C717A2C494339A25E9ED374274 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE17426A533F8CAB2BECCE4D29123F6B09106045);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		V_0 = (bool)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		V_1 = L_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___stream0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, 0, ((int32_t)18));
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4;
		L_4 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(35 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_4, L_5);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralEE17426A533F8CAB2BECCE4D29123F6B09106045, NULL);
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_002e:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = ___stream0;
		NullCheck(L_8);
		int64_t L_9;
		L_9 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(31 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_8, ((int64_t)0), 0);
		bool L_10 = V_0;
		return L_10;
	}
}
// System.Boolean TriLibCore.Fbx.Reader.FbxReader::IsASCII(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FbxReader_IsASCII_mA2096AAE6899624441FDEB02509ED99ED7EB883C (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A6331918BBD32293C65EC7C39BE183F558B0111);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral4A6331918BBD32293C65EC7C39BE183F558B0111);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4A6331918BBD32293C65EC7C39BE183F558B0111);
		bool L_3;
		L_3 = StreamExtensions_MatchRegex_m60B9844183B77F4532A15735399C1CAD90A518A5(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Void TriLibCore.Fbx.Reader.FbxReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FbxReader__ctor_mE5B6FD7107C7FA9E7D7D8BA04D0F5925EB16966D (FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E* __this, const RuntimeMethod* method) 
{
	{
		ReaderBase__ctor_m5C4FE7A4BC205B65DAB56FF3CC5202D0B04937DA(__this, NULL);
		return;
	}
}
// System.Void TriLibCore.Fbx.Reader.FbxReader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FbxReader__cctor_m829F809531485982205F6574DEE35132618795D6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E_StaticFields*)il2cpp_codegen_static_fields_for(FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E_il2cpp_TypeInfo_var))->___FBXCompatibilityMode_12 = (bool)1;
		((FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E_StaticFields*)il2cpp_codegen_static_fields_for(FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E_il2cpp_TypeInfo_var))->___PivotMode_13 = 1;
		((FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E_StaticFields*)il2cpp_codegen_static_fields_for(FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E_il2cpp_TypeInfo_var))->___EnableSpecularMaterials_14 = (bool)0;
		((FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E_StaticFields*)il2cpp_codegen_static_fields_for(FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E_il2cpp_TypeInfo_var))->___MergeSingleChildDocument_16 = (bool)0;
		((FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E_StaticFields*)il2cpp_codegen_static_fields_for(FbxReader_tE700A81D60B645F9D6FB1F9EC41B7DA7E644AF4E_il2cpp_TypeInfo_var))->___BufferizeStream_17 = (bool)1;
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
// System.Void TriLibCore.Fbx.Binary.FBXBinaryReader::Unload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXBinaryReader_Unload_m849A9163DF9496C688291EA217710B09C28E0E00 (FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50* __this, const RuntimeMethod* method) 
{
	{
		InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2* L_0 = __this->___InflaterInputStream_16;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2* L_1 = __this->___InflaterInputStream_16;
		NullCheck(L_1);
		Stream_Dispose_mCDB42F32A17541CCA6D3A5906827A401570B07A8(L_1, NULL);
		__this->___InflaterInputStream_16 = (InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___InflaterInputStream_16), (void*)(InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2*)NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void TriLibCore.Fbx.Binary.FBXBinaryReader::.ctor(System.IO.Stream,TriLibCore.ReaderBase,TriLibCore.Fbx.FBXProcessor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXBinaryReader__ctor_mE643C5E24AF0209662FD47E0FA56FFCF9CB56554 (FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___inputStream0, ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* ___reader1, FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* ___processor2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->___Chars_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Chars_11), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->___Buffer_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Buffer_12), (void*)L_1);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___inputStream0;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_3;
		L_3 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		BinaryReader__ctor_m5B206ED513B0AECC14E4AF5A7B42AE5C4885334E(__this, L_2, L_3, (bool)1, NULL);
		ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* L_4 = ___reader1;
		__this->____reader_13 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____reader_13), (void*)L_4);
		Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494* L_5 = (Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494*)il2cpp_codegen_object_new(Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Inflater__ctor_m5183A7AAD2E39FFDCEE42A83E207181960B95FF9(L_5, (bool)1, NULL);
		__this->___Inflater_17 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Inflater_17), (void*)L_5);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___inputStream0;
		Inflater_t2F41C3E2608A77A69EDAB071BCA9752305595494* L_7 = __this->___Inflater_17;
		InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2* L_8 = (InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2*)il2cpp_codegen_object_new(InflaterInputStream_t25453CA4D454447A9D30F0011CCE23037B465EA2_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		InflaterInputStream__ctor_mAEA971E711654A0AFB588ABE8512960D41F3E3D0(L_8, L_6, L_7, NULL);
		__this->___InflaterInputStream_16 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___InflaterInputStream_16), (void*)L_8);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_9 = ___processor2;
		__this->____processor_18 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____processor_18), (void*)L_9);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_10 = __this->____processor_18;
		NullCheck(L_10);
		L_10->___FBXBinaryReader_16 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___FBXBinaryReader_16), (void*)__this);
		return;
	}
}
// TriLibCore.Fbx.FBXNode TriLibCore.Fbx.Binary.FBXBinaryReader::ReadDocument()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D FBXBinaryReader_ReadDocument_m27AFF3DF4C3E9C70713109A0A2FB0FA293674E64 (FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0;
		L_0 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, __this);
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(31 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_0, ((int64_t)((int32_t)23)), 0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, __this);
		__this->____version_15 = L_2;
		int32_t L_3 = __this->____version_15;
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)7000))))
		{
			goto IL_0034;
		}
	}
	{
		Exception_t* L_4 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB374E66CE847851999FA3E5D11259A9E2B44195)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FBXBinaryReader_ReadDocument_m27AFF3DF4C3E9C70713109A0A2FB0FA293674E64_RuntimeMethod_var)));
	}

IL_0034:
	{
		int32_t L_5 = __this->____version_15;
		__this->____is64Bits_14 = (bool)((((int32_t)((((int32_t)L_5) < ((int32_t)((int32_t)7500)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		FBXBinaryReader_CountNodes_mEFFEBD8557116B771B275FFCD87AA43EDDF4F463(__this, NULL);
		FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D L_6;
		L_6 = FBXBinaryReader_ReadRootNode_m588BA96B26A31C30F9A70229130034A770D39CD6(__this, NULL);
		return L_6;
	}
}
// System.Boolean TriLibCore.Fbx.Binary.FBXBinaryReader::BinaryIsEncoded(TriLibCore.Fbx.FBXProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FBXBinaryReader_BinaryIsEncoded_m05C841A296C5566BEA86E7D3DCEDE43AF868C8F9 (FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 ___binaryProperty0, const RuntimeMethod* method) 
{
	{
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_0 = ___binaryProperty0;
		Il2CppChar L_1 = L_0.___PropertyType_4;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)82))))
		{
			goto IL_001b;
		}
	}
	{
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_2 = ___binaryProperty0;
		Il2CppChar L_3 = L_2.___PropertyType_4;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)83))))
		{
			goto IL_001b;
		}
	}
	{
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_4 = ___binaryProperty0;
		bool L_5 = L_4.___Encoded_2;
		return L_5;
	}

IL_001b:
	{
		return (bool)0;
	}
}
// System.Void TriLibCore.Fbx.Binary.FBXBinaryReader::CountNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXBinaryReader_CountNodes_mEFFEBD8557116B771B275FFCD87AA43EDDF4F463 (FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 1;
		V_1 = 0;
		goto IL_0012;
	}

IL_0006:
	{
		bool L_0;
		L_0 = FBXBinaryReader_CountChildNodes_mCBAAD8D4DBBECD855F5BCC757BA5E061B374C4DF(__this, (&V_0), (&V_1), NULL);
		if (!L_0)
		{
			goto IL_002a;
		}
	}

IL_0012:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1;
		L_1 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, __this);
		NullCheck(L_1);
		int64_t L_2;
		L_2 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_1);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3;
		L_3 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, __this);
		NullCheck(L_3);
		int64_t L_4;
		L_4 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_3);
		if ((((int64_t)L_2) < ((int64_t)L_4)))
		{
			goto IL_0006;
		}
	}

IL_002a:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5;
		L_5 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, __this);
		NullCheck(L_5);
		int64_t L_6;
		L_6 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(31 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_5, ((int64_t)((int32_t)27)), 0);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_7 = __this->____processor_18;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		FBXProcessor_SetupNodesBuffer_m2FEDDAC01B76B83414E1FB4EB68488B9785DB581(L_7, L_8, NULL);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_9 = __this->____processor_18;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		FBXProcessor_SetupPropertiesBuffer_m9637F357680676046CD8BA98989E83B525CD0ABB(L_9, L_10, NULL);
		return;
	}
}
// System.Boolean TriLibCore.Fbx.Binary.FBXBinaryReader::CountChildNodes(System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FBXBinaryReader_CountChildNodes_mCBAAD8D4DBBECD855F5BCC757BA5E061B374C4DF (FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50* __this, int32_t* ___childCount0, int32_t* ___propertiesCount1, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	{
		bool L_0 = __this->____is64Bits_14;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(18 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, __this);
		V_0 = L_1;
		int64_t L_2;
		L_2 = VirtualFuncInvoker0< int64_t >::Invoke(18 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, __this);
		V_1 = L_2;
		int64_t L_3;
		L_3 = VirtualFuncInvoker0< int64_t >::Invoke(18 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, __this);
		V_2 = L_3;
		goto IL_0037;
	}

IL_001f:
	{
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, __this);
		V_0 = ((int64_t)L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, __this);
		V_1 = ((int64_t)L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, __this);
		V_2 = ((int64_t)L_6);
	}

IL_0037:
	{
		int32_t* L_7 = ___propertiesCount1;
		int32_t* L_8 = ___propertiesCount1;
		int32_t L_9 = *((int32_t*)L_8);
		int64_t L_10 = V_1;
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add(L_9, ((int32_t)L_10)));
		FBXBinaryReader_SkipStringEx_mCC66E0E7BDF4C7F65EF9BB62CE92B8CBFA874148(__this, NULL);
		int64_t L_11 = V_0;
		if (L_11)
		{
			goto IL_004f;
		}
	}
	{
		int64_t L_12 = V_1;
		if (L_12)
		{
			goto IL_004f;
		}
	}
	{
		int64_t L_13 = V_2;
		if (L_13)
		{
			goto IL_004f;
		}
	}
	{
		return (bool)0;
	}

IL_004f:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_14;
		L_14 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, __this);
		int64_t L_15 = V_2;
		NullCheck(L_14);
		int64_t L_16;
		L_16 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(31 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_14, L_15, 1);
		goto IL_0069;
	}

IL_005f:
	{
		int32_t* L_17 = ___childCount0;
		int32_t* L_18 = ___propertiesCount1;
		bool L_19;
		L_19 = FBXBinaryReader_CountChildNodes_mCBAAD8D4DBBECD855F5BCC757BA5E061B374C4DF(__this, L_17, L_18, NULL);
		if (!L_19)
		{
			goto IL_0077;
		}
	}

IL_0069:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_20;
		L_20 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, __this);
		NullCheck(L_20);
		int64_t L_21;
		L_21 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_20);
		int64_t L_22 = V_0;
		if ((((int64_t)L_21) < ((int64_t)L_22)))
		{
			goto IL_005f;
		}
	}

IL_0077:
	{
		int32_t* L_23 = ___childCount0;
		int32_t* L_24 = ___childCount0;
		int32_t L_25 = *((int32_t*)L_24);
		*((int32_t*)L_23) = (int32_t)((int32_t)il2cpp_codegen_add(L_25, 1));
		return (bool)1;
	}
}
// System.Void TriLibCore.Fbx.Binary.FBXBinaryReader::SkipStringEx()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXBinaryReader_SkipStringEx_mCC66E0E7BDF4C7F65EF9BB62CE92B8CBFA874148 (FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = BinaryReader_Read7BitEncodedInt_mAC30887A2BB23F481A73FA61A487159F855D34F5(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_001a;
		}
	}
	{
		Exception_t* L_2 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59A855EBCC658B736BF700F291E16BCDE82179CC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FBXBinaryReader_SkipStringEx_mCC66E0E7BDF4C7F65EF9BB62CE92B8CBFA874148_RuntimeMethod_var)));
	}

IL_001a:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3;
		L_3 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, __this);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int64_t L_5;
		L_5 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(31 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_3, ((int64_t)L_4), 1);
		return;
	}
}
// System.String TriLibCore.Fbx.Binary.FBXBinaryReader::ReadStringEx()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXBinaryReader_ReadStringEx_m9FC9DD7CD2CBFCD8D4F15FC652C5B99423BF8390 (FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mDCA553F82ED7197C585BCF9A578D6918E560BC7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m9C5F90E7F1FC1D9BEC1BDF3BB64D919A69E382B9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t G_B9_0 = 0;
	{
		int32_t L_0;
		L_0 = BinaryReader_Read7BitEncodedInt_mAC30887A2BB23F481A73FA61A487159F855D34F5(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000d:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)1024))))
		{
			goto IL_0020;
		}
	}
	{
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59A855EBCC658B736BF700F291E16BCDE82179CC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FBXBinaryReader_ReadStringEx_m9FC9DD7CD2CBFCD8D4F15FC652C5B99423BF8390_RuntimeMethod_var)));
	}

IL_0020:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___Buffer_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___Buffer_12;
		NullCheck(L_5);
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_4, 0, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = __this->___Chars_11;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = __this->___Chars_11;
		NullCheck(L_7);
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_6, 0, ((int32_t)(((RuntimeArray*)L_7)->max_length)), NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8;
		L_8 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, __this);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___Buffer_12;
		int32_t L_10 = V_0;
		NullCheck(L_8);
		int32_t L_11;
		L_11 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(33 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, 0, L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___Buffer_12;
		int32_t L_13 = V_0;
		int64_t L_14;
		L_14 = FBXProcessor_GetHash_mF0A8531E6C4C6C3AB94D68C57CE909F58D0DD91F((RuntimeObject*)L_12, L_13, NULL);
		V_1 = L_14;
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_15 = __this->____processor_18;
		NullCheck(L_15);
		Dictionary_2_tAEBFFDB440F054AE9C7C1D99E9D40D111C6253AE* L_16 = L_15->___Strings_15;
		int64_t L_17 = V_1;
		NullCheck(L_16);
		bool L_18;
		L_18 = Dictionary_2_TryGetValue_m9C5F90E7F1FC1D9BEC1BDF3BB64D919A69E382B9(L_16, L_17, (&V_2), Dictionary_2_TryGetValue_m9C5F90E7F1FC1D9BEC1BDF3BB64D919A69E382B9_RuntimeMethod_var);
		if (L_18)
		{
			goto IL_00e6;
		}
	}
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_19;
		L_19 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___Buffer_12;
		int32_t L_21 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_22 = __this->___Chars_11;
		NullCheck(L_19);
		int32_t L_23;
		L_23 = VirtualFuncInvoker5< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(26 /* System.Int32 System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32) */, L_19, L_20, 0, L_21, L_22, 0);
		V_3 = 0;
		V_4 = 0;
	}

IL_009d:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_24 = __this->___Chars_11;
		int32_t L_25 = V_3;
		int32_t L_26 = L_25;
		V_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		NullCheck(L_24);
		int32_t L_27 = L_26;
		uint16_t L_28 = (uint16_t)(L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		if (!L_28)
		{
			goto IL_00ae;
		}
	}
	{
		G_B9_0 = 0;
		goto IL_00b2;
	}

IL_00ae:
	{
		int32_t L_29 = V_4;
		G_B9_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00b2:
	{
		V_4 = G_B9_0;
		int32_t L_30 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = __this->___Buffer_12;
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_32 = V_4;
		if ((((int32_t)L_32) < ((int32_t)2)))
		{
			goto IL_009d;
		}
	}

IL_00c4:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_33 = __this->___Chars_11;
		int32_t L_34 = V_3;
		String_t* L_35;
		L_35 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_33, 0, ((int32_t)il2cpp_codegen_subtract(L_34, 2)), NULL);
		V_2 = L_35;
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_36 = __this->____processor_18;
		NullCheck(L_36);
		Dictionary_2_tAEBFFDB440F054AE9C7C1D99E9D40D111C6253AE* L_37 = L_36->___Strings_15;
		int64_t L_38 = V_1;
		String_t* L_39 = V_2;
		NullCheck(L_37);
		Dictionary_2_Add_mDCA553F82ED7197C585BCF9A578D6918E560BC7F(L_37, L_38, L_39, Dictionary_2_Add_mDCA553F82ED7197C585BCF9A578D6918E560BC7F_RuntimeMethod_var);
	}

IL_00e6:
	{
		String_t* L_40 = V_2;
		return L_40;
	}
}
// TriLibCore.Fbx.FBXNode TriLibCore.Fbx.Binary.FBXBinaryReader::ReadRootNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D FBXBinaryReader_ReadRootNode_m588BA96B26A31C30F9A70229130034A770D39CD6 (FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB94DD1963BC6E8F27D446B420BEA01FE03FD8C2B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		V_0 = (-1);
		V_1 = (-1);
		V_2 = 0;
		goto IL_005f;
	}

IL_0008:
	{
		ReaderBase_tF4CA317DE26742ECCE011521FF46AC6E30980449* L_0 = __this->____reader_13;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1;
		L_1 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, __this);
		NullCheck(L_1);
		int64_t L_2;
		L_2 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_1);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3;
		L_3 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, __this);
		NullCheck(L_3);
		int64_t L_4;
		L_4 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_3);
		NullCheck(L_0);
		ReaderBase_UpdateLoadingPercentage_m10601D3AC7D2C0CD2F66F204E89ED0430E312D0C(L_0, ((float)(((float)L_2)/((float)L_4))), 0, (0.0f), NULL);
		int32_t L_5;
		L_5 = FBXBinaryReader_ReadNode_m7B76CA3D4E6C170ADDBC95526EEB5A823900C92E(__this, NULL);
		V_4 = L_5;
		int32_t L_6 = V_4;
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_0077;
		}
	}
	{
		int32_t L_7 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_9 = V_4;
		V_0 = L_9;
	}

IL_004a:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_005c;
		}
	}
	{
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_11 = __this->____processor_18;
		int32_t L_12 = V_1;
		int32_t L_13 = V_4;
		NullCheck(L_11);
		FBXProcessor_SetNodeNext_m8630F0DDE868E67E1C3EBE3BE0F8ABBA8BF5484C(L_11, L_12, L_13, NULL);
	}

IL_005c:
	{
		int32_t L_14 = V_4;
		V_1 = L_14;
	}

IL_005f:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_15;
		L_15 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, __this);
		NullCheck(L_15);
		int64_t L_16;
		L_16 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_15);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_17;
		L_17 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, __this);
		NullCheck(L_17);
		int64_t L_18;
		L_18 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_17);
		if ((((int64_t)L_16) < ((int64_t)L_18)))
		{
			goto IL_0008;
		}
	}

IL_0077:
	{
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_19 = __this->____processor_18;
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_20 = __this->____processor_18;
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 L_21;
		memset((&L_21), 0, sizeof(L_21));
		FBXProperties__ctor_m9FAEE6F003B0285D473D3E241974FC3C9EBFE67C((&L_21), L_20, 0, /*hidden argument*/NULL);
		int32_t L_22 = V_2;
		FBXNode__ctor_m2C94779116978D9259AEC195A9DA56655873E08B((&V_3), L_19, _stringLiteralB94DD1963BC6E8F27D446B420BEA01FE03FD8C2B, L_21, L_22, NULL);
		int32_t L_23 = V_0;
		if ((((int32_t)L_23) == ((int32_t)(-1))))
		{
			goto IL_00a2;
		}
	}
	{
		int32_t L_24 = V_0;
		(&V_3)->___FirstNodeIndex_5 = L_24;
	}

IL_00a2:
	{
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_25 = __this->____processor_18;
		FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D L_26 = V_3;
		NullCheck(L_25);
		int32_t L_27;
		L_27 = FBXProcessor_AddNode_m39374DBF94E11AB90240A841029D230D62AC872D(L_25, L_26, NULL);
		FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D L_28 = V_3;
		return L_28;
	}
}
// System.Int32 TriLibCore.Fbx.Binary.FBXBinaryReader::ReadNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXBinaryReader_ReadNode_m7B76CA3D4E6C170ADDBC95526EEB5A823900C92E (FBXBinaryReader_t110389465EA442F21954581FA8C9774171074C50* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	String_t* V_2 = NULL;
	FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Il2CppChar V_8 = 0x0;
	FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D V_12;
	memset((&V_12), 0, sizeof(V_12));
	{
		bool L_0 = __this->____is64Bits_14;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		int64_t L_1;
		L_1 = VirtualFuncInvoker0< int64_t >::Invoke(18 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, __this);
		V_0 = L_1;
		int64_t L_2;
		L_2 = VirtualFuncInvoker0< int64_t >::Invoke(18 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, __this);
		V_1 = L_2;
		int64_t L_3;
		L_3 = VirtualFuncInvoker0< int64_t >::Invoke(18 /* System.Int64 System.IO.BinaryReader::ReadInt64() */, __this);
		goto IL_0036;
	}

IL_001f:
	{
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, __this);
		V_0 = ((int64_t)L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, __this);
		V_1 = ((int64_t)L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, __this);
	}

IL_0036:
	{
		String_t* L_7;
		L_7 = FBXBinaryReader_ReadStringEx_m9FC9DD7CD2CBFCD8D4F15FC652C5B99423BF8390(__this, NULL);
		V_2 = L_7;
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_8 = __this->____processor_18;
		int64_t L_9 = V_1;
		FBXProperties__ctor_m9FAEE6F003B0285D473D3E241974FC3C9EBFE67C((&V_3), L_8, ((int32_t)L_9), NULL);
		int64_t L_10 = V_1;
		if ((((int64_t)L_10) <= ((int64_t)((int64_t)0))))
		{
			goto IL_0239;
		}
	}
	{
		V_7 = 0;
		goto IL_0230;
	}

IL_005c:
	{
		Il2CppChar L_11;
		L_11 = VirtualFuncInvoker0< Il2CppChar >::Invoke(13 /* System.Char System.IO.BinaryReader::ReadChar() */, __this);
		V_8 = L_11;
		il2cpp_codegen_initobj((&V_9), sizeof(FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8));
		Il2CppChar L_12 = V_8;
		(&V_9)->___PropertyType_4 = L_12;
		Il2CppChar L_13 = V_8;
		if ((!(((uint32_t)L_13) <= ((uint32_t)((int32_t)83)))))
		{
			goto IL_008c;
		}
	}
	{
		Il2CppChar L_14 = V_8;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)82))))
		{
			goto IL_00cd;
		}
	}
	{
		Il2CppChar L_15 = V_8;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)83))))
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_016c;
	}

IL_008c:
	{
		Il2CppChar L_16 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_16, ((int32_t)98))))
		{
			case 0:
			{
				goto IL_0116;
			}
			case 1:
			{
				goto IL_0116;
			}
			case 2:
			{
				goto IL_0116;
			}
			case 3:
			{
				goto IL_016c;
			}
			case 4:
			{
				goto IL_0116;
			}
			case 5:
			{
				goto IL_016c;
			}
			case 6:
			{
				goto IL_016c;
			}
			case 7:
			{
				goto IL_0116;
			}
			case 8:
			{
				goto IL_016c;
			}
			case 9:
			{
				goto IL_016c;
			}
			case 10:
			{
				goto IL_0116;
			}
		}
	}
	{
		Il2CppChar L_17 = V_8;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)121))))
		{
			goto IL_0116;
		}
	}
	{
		goto IL_016c;
	}

IL_00cd:
	{
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, __this);
		(&V_9)->___ArrayLength_1 = L_18;
		(&V_9)->___Encoded_2 = (bool)0;
		(&V_9)->___CompressedLength_3 = 0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_19;
		L_19 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, __this);
		NullCheck(L_19);
		int64_t L_20;
		L_20 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_19);
		(&V_9)->___Position_5 = L_20;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_21;
		L_21 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, __this);
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_22 = V_9;
		int32_t L_23 = L_22.___ArrayLength_1;
		NullCheck(L_21);
		int64_t L_24;
		L_24 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(31 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_21, ((int64_t)L_23), 1);
		goto IL_020f;
	}

IL_0116:
	{
		int32_t L_25;
		L_25 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, __this);
		(&V_9)->___ArrayLength_1 = L_25;
		int32_t L_26;
		L_26 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, __this);
		(&V_9)->___Encoded_2 = (bool)((((int32_t)L_26) == ((int32_t)1))? 1 : 0);
		int32_t L_27;
		L_27 = VirtualFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.BinaryReader::ReadInt32() */, __this);
		(&V_9)->___CompressedLength_3 = L_27;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_28;
		L_28 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, __this);
		NullCheck(L_28);
		int64_t L_29;
		L_29 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_28);
		(&V_9)->___Position_5 = L_29;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_30;
		L_30 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, __this);
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_31 = V_9;
		int32_t L_32 = L_31.___CompressedLength_3;
		NullCheck(L_30);
		int64_t L_33;
		L_33 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(31 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_30, ((int64_t)L_32), 1);
		goto IL_020f;
	}

IL_016c:
	{
		Il2CppChar L_34 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_34, ((int32_t)66))))
		{
			case 0:
			{
				goto IL_01aa;
			}
			case 1:
			{
				goto IL_01aa;
			}
			case 2:
			{
				goto IL_01b9;
			}
			case 3:
			{
				goto IL_01be;
			}
			case 4:
			{
				goto IL_01b4;
			}
			case 5:
			{
				goto IL_01be;
			}
			case 6:
			{
				goto IL_01be;
			}
			case 7:
			{
				goto IL_01b4;
			}
			case 8:
			{
				goto IL_01be;
			}
			case 9:
			{
				goto IL_01be;
			}
			case 10:
			{
				goto IL_01b9;
			}
		}
	}
	{
		Il2CppChar L_35 = V_8;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)89))))
		{
			goto IL_01af;
		}
	}
	{
		goto IL_01be;
	}

IL_01aa:
	{
		V_10 = 1;
		goto IL_01d5;
	}

IL_01af:
	{
		V_10 = 2;
		goto IL_01d5;
	}

IL_01b4:
	{
		V_10 = 4;
		goto IL_01d5;
	}

IL_01b9:
	{
		V_10 = 8;
		goto IL_01d5;
	}

IL_01be:
	{
		Il2CppChar L_36 = V_8;
		Il2CppChar L_37 = L_36;
		RuntimeObject* L_38 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)), &L_37);
		String_t* L_39;
		L_39 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral931D7B3EADF2ABC99B546F64E928640DD28E17B2)), L_38, NULL);
		Exception_t* L_40 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_40);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_40, L_39, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FBXBinaryReader_ReadNode_m7B76CA3D4E6C170ADDBC95526EEB5A823900C92E_RuntimeMethod_var)));
	}

IL_01d5:
	{
		(&V_9)->___ArrayLength_1 = 1;
		(&V_9)->___Encoded_2 = (bool)0;
		(&V_9)->___CompressedLength_3 = 0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_41;
		L_41 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, __this);
		NullCheck(L_41);
		int64_t L_42;
		L_42 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_41);
		(&V_9)->___Position_5 = L_42;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_43;
		L_43 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, __this);
		int32_t L_44 = V_10;
		NullCheck(L_43);
		int64_t L_45;
		L_45 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(31 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_43, ((int64_t)L_44), 1);
	}

IL_020f:
	{
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_46 = V_9;
		int64_t L_47 = L_46.___Position_5;
		(&V_9)->___OriginalPosition_6 = L_47;
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_48 = __this->____processor_18;
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_49 = V_9;
		NullCheck(L_48);
		FBXProcessor_AddProperty_m013216FFEAA69120137545F668B3CA08405BDCA3(L_48, L_49, NULL);
		int32_t L_50 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_0230:
	{
		int32_t L_51 = V_7;
		int64_t L_52 = V_1;
		if ((((int64_t)((int64_t)L_51)) < ((int64_t)L_52)))
		{
			goto IL_005c;
		}
	}

IL_0239:
	{
		V_4 = (-1);
		V_5 = (-1);
		V_6 = 0;
		goto IL_0278;
	}

IL_0244:
	{
		int32_t L_53;
		L_53 = FBXBinaryReader_ReadNode_m7B76CA3D4E6C170ADDBC95526EEB5A823900C92E(__this, NULL);
		V_11 = L_53;
		int32_t L_54 = V_11;
		if ((((int32_t)L_54) == ((int32_t)(-1))))
		{
			goto IL_0286;
		}
	}
	{
		int32_t L_55 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_55, 1));
		int32_t L_56 = V_4;
		if ((!(((uint32_t)L_56) == ((uint32_t)(-1)))))
		{
			goto IL_0260;
		}
	}
	{
		int32_t L_57 = V_11;
		V_4 = L_57;
	}

IL_0260:
	{
		int32_t L_58 = V_5;
		if ((((int32_t)L_58) == ((int32_t)(-1))))
		{
			goto IL_0274;
		}
	}
	{
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_59 = __this->____processor_18;
		int32_t L_60 = V_5;
		int32_t L_61 = V_11;
		NullCheck(L_59);
		FBXProcessor_SetNodeNext_m8630F0DDE868E67E1C3EBE3BE0F8ABBA8BF5484C(L_59, L_60, L_61, NULL);
	}

IL_0274:
	{
		int32_t L_62 = V_11;
		V_5 = L_62;
	}

IL_0278:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_63;
		L_63 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, __this);
		NullCheck(L_63);
		int64_t L_64;
		L_64 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_63);
		int64_t L_65 = V_0;
		if ((((int64_t)L_64) < ((int64_t)L_65)))
		{
			goto IL_0244;
		}
	}

IL_0286:
	{
		String_t* L_66 = V_2;
		bool L_67;
		L_67 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_66, NULL);
		if (L_67)
		{
			goto IL_02bb;
		}
	}
	{
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_68 = __this->____processor_18;
		String_t* L_69 = V_2;
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 L_70 = V_3;
		int32_t L_71 = V_6;
		FBXNode__ctor_m2C94779116978D9259AEC195A9DA56655873E08B((&V_12), L_68, L_69, L_70, L_71, NULL);
		int32_t L_72 = V_4;
		if ((((int32_t)L_72) == ((int32_t)(-1))))
		{
			goto IL_02ad;
		}
	}
	{
		int32_t L_73 = V_4;
		(&V_12)->___FirstNodeIndex_5 = L_73;
	}

IL_02ad:
	{
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_74 = __this->____processor_18;
		FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D L_75 = V_12;
		NullCheck(L_74);
		int32_t L_76;
		L_76 = FBXProcessor_AddNode_m39374DBF94E11AB90240A841029D230D62AC872D(L_74, L_75, NULL);
		return L_76;
	}

IL_02bb:
	{
		return (-1);
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
// System.Int32 TriLibCore.Fbx.ASCII.FBXASCIIReader::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXASCIIReader_get_Position_m76F4A434B38CFB82C811F0B9DE368DCE3AD04386 (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____position_32;
		return L_0;
	}
}
// System.Int32 TriLibCore.Fbx.ASCII.FBXASCIIReader::get_Line()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXASCIIReader_get_Line_mB5EA9E821739B8DC013A8D2269BF3A083EAC5896 (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLineU3Ek__BackingField_40;
		return L_0;
	}
}
// System.Void TriLibCore.Fbx.ASCII.FBXASCIIReader::set_Line(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXASCIIReader_set_Line_mE08C30A6FC84BBB7853BA38C2F43C3FF1985568D (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLineU3Ek__BackingField_40 = L_0;
		return;
	}
}
// System.Int32 TriLibCore.Fbx.ASCII.FBXASCIIReader::get_Column()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXASCIIReader_get_Column_m12D1A65A1FC389FCB7C1E33634C85A34C140C193 (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = FBXASCIIReader_get_Position_m76F4A434B38CFB82C811F0B9DE368DCE3AD04386_inline(__this, NULL);
		int32_t L_1 = __this->____endOfLinePosition_33;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
// System.Int32 TriLibCore.Fbx.ASCII.FBXASCIIReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXASCIIReader_Read_m9A05C2F570C74B8D0247B7A8E56B67828B0F03FF (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____position_32;
		__this->____position_32 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1;
		L_1 = StreamReader_Read_mB7DF78E453DA180AF0E360278016505417C7874E(__this, NULL);
		return L_1;
	}
}
// TriLibCore.Fbx.FBXNode TriLibCore.Fbx.ASCII.FBXASCIIReader::ReadDocument()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D FBXASCIIReader_ReadDocument_m42A06BB831534E44B0CFDE179264545AC4875724 (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB94DD1963BC6E8F27D446B420BEA01FE03FD8C2B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D V_4;
	memset((&V_4), 0, sizeof(V_4));
	FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		V_0 = 1;
		V_1 = 0;
		V_2 = (-1);
		int32_t L_0;
		L_0 = FBXASCIIReader_ReadAllNodes_mD1FE99994685F3FCCEF4B906535C7DD60EE833FB(__this, (&V_0), (&V_1), (&V_2), (bool)1, NULL);
		V_3 = L_0;
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_1 = __this->____processor_35;
		NullCheck(L_1);
		L_1->___ActiveASCIIReader_12 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___ActiveASCIIReader_12), (void*)__this);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_2 = __this->____processor_35;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		FBXProcessor_SetupNodesBuffer_m2FEDDAC01B76B83414E1FB4EB68488B9785DB581(L_2, L_3, NULL);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_4 = __this->____processor_35;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		FBXProcessor_SetupPropertiesBuffer_m9637F357680676046CD8BA98989E83B525CD0ABB(L_4, L_5, NULL);
		V_0 = 1;
		V_1 = 0;
		V_2 = (-1);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_6 = __this->____processor_35;
		il2cpp_codegen_initobj((&V_5), sizeof(FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418));
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 L_7 = V_5;
		int32_t L_8 = V_3;
		FBXNode__ctor_m2C94779116978D9259AEC195A9DA56655873E08B((&V_4), L_6, _stringLiteralB94DD1963BC6E8F27D446B420BEA01FE03FD8C2B, L_7, L_8, NULL);
		int32_t L_9;
		L_9 = FBXASCIIReader_ReadAllNodes_mD1FE99994685F3FCCEF4B906535C7DD60EE833FB(__this, (&V_0), (&V_1), (&V_2), (bool)0, NULL);
		int32_t L_10 = V_2;
		(&V_4)->___FirstNodeIndex_5 = L_10;
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_11 = __this->____processor_35;
		FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = FBXProcessor_AddNode_m39374DBF94E11AB90240A841029D230D62AC872D(L_11, L_12, NULL);
		FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D L_14 = V_4;
		return L_14;
	}
}
// System.Void TriLibCore.Fbx.ASCII.FBXASCIIReader::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXASCIIReader_Reset_m8CF2362E2F36664A014BA12944E0FDCAADF145E9 (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, const RuntimeMethod* method) 
{
	{
		FBXASCIIReader_set_Line_mE08C30A6FC84BBB7853BA38C2F43C3FF1985568D_inline(__this, 0, NULL);
		__this->____position_32 = 0;
		__this->____endOfLinePosition_33 = 0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0;
		L_0 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(18 /* System.IO.Stream System.IO.StreamReader::get_BaseStream() */, __this);
		NullCheck(L_0);
		int64_t L_1;
		L_1 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(31 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_0, ((int64_t)0), 0);
		return;
	}
}
// System.Int32 TriLibCore.Fbx.ASCII.FBXASCIIReader::ReadAllNodes(System.Int32&,System.Int32&,System.Int32&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FBXASCIIReader_ReadAllNodes_mD1FE99994685F3FCCEF4B906535C7DD60EE833FB (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, int32_t* ___nodesCount0, int32_t* ___propertiesCount1, int32_t* ___firstNodeIndex2, bool ___countOnly3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		FBXASCIIReader_Reset_m8CF2362E2F36664A014BA12944E0FDCAADF145E9(__this, NULL);
		V_0 = (-1);
		V_1 = 0;
		V_2 = (-1);
		V_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0027;
	}

IL_0014:
	{
		int32_t* L_0 = ___nodesCount0;
		int32_t* L_1 = ___propertiesCount1;
		int32_t* L_2 = ___firstNodeIndex2;
		bool L_3 = ___countOnly3;
		String_t* L_4 = V_3;
		FBXASCIIReader_ReadAndProcessNode_m543AE69BAD6C7A30E769E8F9D6E470669BBC9903(__this, L_0, L_1, L_2, L_3, (bool)0, (&V_0), (&V_1), (&V_2), L_4, NULL);
	}

IL_0027:
	{
		bool L_5;
		L_5 = StreamReader_get_EndOfStream_mAE054431BF21158178EAA2A6872F14A9ED6A3C3E(__this, NULL);
		if (!L_5)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
// System.Void TriLibCore.Fbx.ASCII.FBXASCIIReader::ReadAndProcessNode(System.Int32&,System.Int32&,System.Int32&,System.Boolean,System.Boolean,System.Int32&,System.Int32&,System.Int32&,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXASCIIReader_ReadAndProcessNode_m543AE69BAD6C7A30E769E8F9D6E470669BBC9903 (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, int32_t* ___nodesCount0, int32_t* ___propertiesCount1, int32_t* ___firstNodeIndex2, bool ___countOnly3, bool ___isArrayParent4, int32_t* ___lastNodeIndex5, int32_t* ___innerNodesCount6, int32_t* ___basePropertyIndex7, String_t* ___path8, const RuntimeMethod* method) 
{
	FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		int64_t L_0;
		L_0 = FBXASCIIReader_ReadNextValidToken_m5DF338491BAA166E8A3F52BE37C5F3F528693514(__this, (bool)0, (bool)0, NULL);
		int64_t L_1 = __this->____lastToken_34;
		if ((((int64_t)L_1) == ((int64_t)((int64_t)34902897112120632LL))))
		{
			goto IL_0022;
		}
	}
	{
		bool L_2;
		L_2 = StreamReader_get_EndOfStream_mAE054431BF21158178EAA2A6872F14A9ED6A3C3E(__this, NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}

IL_0022:
	{
		return;
	}

IL_0023:
	{
		int32_t* L_3 = ___nodesCount0;
		int32_t* L_4 = ___propertiesCount1;
		bool L_5 = ___countOnly3;
		bool L_6 = ___isArrayParent4;
		String_t* L_7 = ___path8;
		FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D L_8;
		L_8 = FBXASCIIReader_ReadNode_mD0B13F651A7A4B2C320F97780487910AC89131A5(__this, L_3, L_4, L_5, L_6, L_7, NULL);
		V_0 = L_8;
		bool L_9 = ___countOnly3;
		if (L_9)
		{
			goto IL_0073;
		}
	}
	{
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_10 = __this->____processor_35;
		FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = FBXProcessor_AddNode_m39374DBF94E11AB90240A841029D230D62AC872D(L_10, L_11, NULL);
		V_1 = L_12;
		int32_t* L_13 = ___lastNodeIndex5;
		int32_t L_14 = *((int32_t*)L_13);
		if ((!(((uint32_t)L_14) == ((uint32_t)(-1)))))
		{
			goto IL_0060;
		}
	}
	{
		bool L_15 = ___isArrayParent4;
		if (!L_15)
		{
			goto IL_005b;
		}
	}
	{
		int32_t* L_16 = ___basePropertyIndex7;
		FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D L_17 = V_0;
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 L_18 = L_17.___Properties_1;
		int32_t L_19 = L_18.___BasePropertyIndex_2;
		*((int32_t*)L_16) = (int32_t)L_19;
	}

IL_005b:
	{
		int32_t* L_20 = ___firstNodeIndex2;
		int32_t L_21 = V_1;
		*((int32_t*)L_20) = (int32_t)L_21;
		goto IL_006f;
	}

IL_0060:
	{
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_22 = __this->____processor_35;
		int32_t* L_23 = ___lastNodeIndex5;
		int32_t L_24 = *((int32_t*)L_23);
		int32_t L_25 = V_1;
		NullCheck(L_22);
		FBXProcessor_SetNodeNext_m8630F0DDE868E67E1C3EBE3BE0F8ABBA8BF5484C(L_22, L_24, L_25, NULL);
	}

IL_006f:
	{
		int32_t* L_26 = ___lastNodeIndex5;
		int32_t L_27 = V_1;
		*((int32_t*)L_26) = (int32_t)L_27;
	}

IL_0073:
	{
		int32_t* L_28 = ___innerNodesCount6;
		int32_t* L_29 = ___innerNodesCount6;
		int32_t L_30 = *((int32_t*)L_29);
		*((int32_t*)L_28) = (int32_t)((int32_t)il2cpp_codegen_add(L_30, 1));
		return;
	}
}
// TriLibCore.Fbx.FBXNode TriLibCore.Fbx.ASCII.FBXASCIIReader::ReadNode(System.Int32&,System.Int32&,System.Boolean,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D FBXASCIIReader_ReadNode_mD0B13F651A7A4B2C320F97780487910AC89131A5 (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, int32_t* ___nodesCount0, int32_t* ___propertiesCount1, bool ___countOnly2, bool ___isArrayChild3, String_t* ___path4, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 V_13;
	memset((&V_13), 0, sizeof(V_13));
	FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8* G_B14_0 = NULL;
	FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8* G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8* G_B15_1 = NULL;
	{
		String_t* L_0;
		L_0 = FBXASCIIReader_GetTokenAsString_m2B53FD9EEF3D77E59B0F62EAD51ED4119513BB12(__this, (bool)0, NULL);
		V_0 = L_0;
		int64_t L_1;
		L_1 = FBXASCIIReader_ReadNextValidToken_m5DF338491BAA166E8A3F52BE37C5F3F528693514(__this, (bool)1, (bool)0, NULL);
		int64_t L_2 = __this->____lastToken_34;
		if ((((int64_t)L_2) == ((int64_t)((int64_t)34902897112120565LL))))
		{
			goto IL_002d;
		}
	}
	{
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDE1FB695AC2C100C3535AD096A8F2F55A29C7BC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FBXASCIIReader_ReadNode_mD0B13F651A7A4B2C320F97780487910AC89131A5_RuntimeMethod_var)));
	}

IL_002d:
	{
		V_1 = (-1);
		V_2 = (-1);
		V_3 = 0;
		V_4 = (bool)0;
		int64_t L_4;
		L_4 = FBXASCIIReader_ReadNextValidToken_m5DF338491BAA166E8A3F52BE37C5F3F528693514(__this, (bool)0, (bool)0, NULL);
		goto IL_014a;
	}

IL_0044:
	{
		int64_t L_5 = __this->____lastToken_34;
		if ((((int64_t)L_5) == ((int64_t)((int64_t)34902897112120551LL))))
		{
			goto IL_0122;
		}
	}
	{
		int64_t L_6 = __this->____lastToken_34;
		if (!L_6)
		{
			goto IL_0122;
		}
	}
	{
		bool L_7 = ___isArrayChild3;
		if (L_7)
		{
			goto IL_0097;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = __this->____charStream_30;
		NullCheck(L_8);
		int32_t L_9 = 0;
		uint16_t L_10 = (uint16_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_0097;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = __this->____charStream_30;
		int32_t L_12 = __this->____charPosition_31;
		String_t* L_13;
		L_13 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, L_11, 1, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), NULL);
		bool L_14;
		L_14 = Int32_TryParse_mFC6BFCB86964E2BCA4052155B10983837A695EA4(L_13, (&V_1), NULL);
		V_4 = (bool)1;
		goto IL_0122;
	}

IL_0097:
	{
		bool L_15 = ___countOnly2;
		if (L_15)
		{
			goto IL_011e;
		}
	}
	{
		il2cpp_codegen_initobj((&V_11), sizeof(FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16 = __this->____charStream_30;
		NullCheck(L_16);
		int32_t L_17 = 0;
		uint16_t L_18 = (uint16_t)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_12 = (bool)((((int32_t)L_18) == ((int32_t)((int32_t)34)))? 1 : 0);
		bool L_19 = V_12;
		if (!L_19)
		{
			goto IL_00c0;
		}
	}
	{
		int32_t L_20 = __this->____charPosition_31;
		if ((((int32_t)L_20) > ((int32_t)1)))
		{
			goto IL_00c4;
		}
	}

IL_00c0:
	{
		bool L_21 = V_12;
		if (L_21)
		{
			goto IL_0101;
		}
	}

IL_00c4:
	{
		bool L_22 = V_12;
		String_t* L_23;
		L_23 = FBXASCIIReader_GetTokenAsString_m2B53FD9EEF3D77E59B0F62EAD51ED4119513BB12(__this, L_22, NULL);
		(&V_11)->___StringValue_9 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_11)->___StringValue_9), (void*)L_23);
		bool L_24 = V_12;
		G_B13_0 = (&V_11);
		if (L_24)
		{
			G_B14_0 = (&V_11);
			goto IL_00e1;
		}
	}
	{
		int32_t L_25 = __this->____charPosition_31;
		G_B15_0 = L_25;
		G_B15_1 = G_B13_0;
		goto IL_00e9;
	}

IL_00e1:
	{
		int32_t L_26 = __this->____charPosition_31;
		G_B15_0 = ((int32_t)il2cpp_codegen_subtract(L_26, 2));
		G_B15_1 = G_B14_0;
	}

IL_00e9:
	{
		G_B15_1->___ArrayLength_1 = G_B15_0;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_27;
		L_27 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(18 /* System.IO.Stream System.IO.StreamReader::get_BaseStream() */, __this);
		(&V_11)->___DecodedMemoryStream_8 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_11)->___DecodedMemoryStream_8), (void*)L_27);
		int32_t L_28 = V_1;
		if ((!(((uint32_t)L_28) == ((uint32_t)(-1)))))
		{
			goto IL_0101;
		}
	}
	{
		V_1 = 1;
	}

IL_0101:
	{
		int32_t L_29 = V_2;
		if ((!(((uint32_t)L_29) == ((uint32_t)(-1)))))
		{
			goto IL_0111;
		}
	}
	{
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_30 = __this->____processor_35;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = FBXProcessor_get_PropertiesCount_mD3C7369713E84F01A93BE54947EE62B2FC2C05DE_inline(L_30, NULL);
		V_2 = L_31;
	}

IL_0111:
	{
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_32 = __this->____processor_35;
		FBXProperty_t4A335F9B7A2971C2B2AA897B793C06A1849E9BD8 L_33 = V_11;
		NullCheck(L_32);
		FBXProcessor_AddProperty_m013216FFEAA69120137545F668B3CA08405BDCA3(L_32, L_33, NULL);
	}

IL_011e:
	{
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0122:
	{
		int64_t L_35 = __this->____lastToken_34;
		V_10 = (bool)((((int64_t)L_35) == ((int64_t)((int64_t)34902897112120551LL)))? 1 : 0);
	}

IL_0135:
	{
		int64_t L_36;
		L_36 = FBXASCIIReader_ReadToken_mD39313B199B70530F016ACFA4AAE8841BE903959(__this, (bool)0, (bool)0, NULL);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_014a;
		}
	}
	{
		int64_t L_38 = __this->____lastToken_34;
		if (!L_38)
		{
			goto IL_0135;
		}
	}

IL_014a:
	{
		bool L_39 = ___isArrayChild3;
		if (!L_39)
		{
			goto IL_0162;
		}
	}
	{
		int64_t L_40 = __this->____lastToken_34;
		if ((!(((uint64_t)L_40) == ((uint64_t)((int64_t)34902897112120632LL)))))
		{
			goto IL_0044;
		}
	}

IL_0162:
	{
		bool L_41 = ___isArrayChild3;
		if (L_41)
		{
			goto IL_0182;
		}
	}
	{
		int64_t L_42 = __this->____lastToken_34;
		if (!L_42)
		{
			goto IL_0182;
		}
	}
	{
		int64_t L_43 = __this->____lastToken_34;
		if ((!(((uint64_t)L_43) == ((uint64_t)((int64_t)34902897112120630LL)))))
		{
			goto IL_0044;
		}
	}

IL_0182:
	{
		int32_t* L_44 = ___propertiesCount1;
		int32_t* L_45 = ___propertiesCount1;
		int32_t L_46 = *((int32_t*)L_45);
		int32_t L_47 = V_3;
		*((int32_t*)L_44) = (int32_t)((int32_t)il2cpp_codegen_add(L_46, L_47));
		V_5 = (-1);
		V_6 = (-1);
		V_7 = 0;
		int64_t L_48 = __this->____lastToken_34;
		V_8 = (bool)((((int64_t)L_48) == ((int64_t)((int64_t)34902897112120630LL)))? 1 : 0);
		bool L_49 = ___isArrayChild3;
		if (L_49)
		{
			goto IL_01e8;
		}
	}
	{
		goto IL_01bf;
	}

IL_01aa:
	{
		int32_t* L_50 = ___nodesCount0;
		int32_t* L_51 = ___propertiesCount1;
		bool L_52 = ___countOnly2;
		bool L_53 = V_4;
		String_t* L_54 = ___path4;
		FBXASCIIReader_ReadAndProcessNode_m543AE69BAD6C7A30E769E8F9D6E470669BBC9903(__this, L_50, L_51, (&V_5), L_52, L_53, (&V_6), (&V_7), (&V_2), L_54, NULL);
	}

IL_01bf:
	{
		bool L_55;
		L_55 = StreamReader_get_EndOfStream_mAE054431BF21158178EAA2A6872F14A9ED6A3C3E(__this, NULL);
		if (L_55)
		{
			goto IL_01e8;
		}
	}
	{
		bool L_56 = V_8;
		if (!L_56)
		{
			goto IL_01dc;
		}
	}
	{
		int64_t L_57 = __this->____lastToken_34;
		if ((!(((uint64_t)L_57) == ((uint64_t)((int64_t)34902897112120632LL)))))
		{
			goto IL_01aa;
		}
	}

IL_01dc:
	{
		bool L_58 = V_8;
		if (L_58)
		{
			goto IL_01e8;
		}
	}
	{
		int64_t L_59 = __this->____lastToken_34;
		if (L_59)
		{
			goto IL_01aa;
		}
	}

IL_01e8:
	{
		il2cpp_codegen_initobj((&V_9), sizeof(FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D));
		bool L_60 = ___countOnly2;
		if (L_60)
		{
			goto IL_021e;
		}
	}
	{
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_61 = __this->____processor_35;
		int32_t L_62 = V_3;
		int32_t L_63 = V_2;
		int32_t L_64 = V_1;
		FBXProperties__ctor_m26D28D238479767B133F249512E1A3BB2EBC5D60((&V_13), L_61, L_62, L_63, L_64, NULL);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_65 = __this->____processor_35;
		String_t* L_66 = V_0;
		FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418 L_67 = V_13;
		int32_t L_68 = V_7;
		FBXNode__ctor_m2C94779116978D9259AEC195A9DA56655873E08B((&V_9), L_65, L_66, L_67, L_68, NULL);
		int32_t L_69 = V_5;
		(&V_9)->___FirstNodeIndex_5 = L_69;
	}

IL_021e:
	{
		bool L_70 = V_8;
		if (!L_70)
		{
			goto IL_023b;
		}
	}
	{
		int64_t L_71 = __this->____lastToken_34;
		if ((!(((uint64_t)L_71) == ((uint64_t)((int64_t)34902897112120632LL)))))
		{
			goto IL_023b;
		}
	}
	{
		__this->____lastToken_34 = ((int64_t)0);
	}

IL_023b:
	{
		int32_t* L_72 = ___nodesCount0;
		int32_t* L_73 = ___nodesCount0;
		int32_t L_74 = *((int32_t*)L_73);
		*((int32_t*)L_72) = (int32_t)((int32_t)il2cpp_codegen_add(L_74, 1));
		FBXNode_t54F7549A02850CCDB0C55E0896BEE3EDFE679A1D L_75 = V_9;
		return L_75;
	}
}
// System.String TriLibCore.Fbx.ASCII.FBXASCIIReader::GetTokenAsString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FBXASCIIReader_GetTokenAsString_m2B53FD9EEF3D77E59B0F62EAD51ED4119513BB12 (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, bool ___isString0, const RuntimeMethod* method) 
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* G_B2_0 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* G_B5_1 = NULL;
	int32_t G_B4_0 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* G_B4_1 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* G_B6_2 = NULL;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = __this->____charStream_30;
		bool L_1 = ___isString0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_000d:
	{
		bool L_2 = ___isString0;
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		if (L_2)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			goto IL_0018;
		}
	}
	{
		int32_t L_3 = __this->____charPosition_31;
		G_B6_0 = L_3;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0020;
	}

IL_0018:
	{
		int32_t L_4 = __this->____charPosition_31;
		G_B6_0 = ((int32_t)il2cpp_codegen_subtract(L_4, 2));
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0020:
	{
		String_t* L_5;
		L_5 = String_CreateString_mB7B3AC2AF28010538650051A9000369B1CD6BAB6(NULL, G_B6_2, G_B6_1, G_B6_0, NULL);
		return L_5;
	}
}
// System.Int64 TriLibCore.Fbx.ASCII.FBXASCIIReader::ReadNextValidToken(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FBXASCIIReader_ReadNextValidToken_m5DF338491BAA166E8A3F52BE37C5F3F528693514 (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, bool ___required0, bool ___ignoreSpace1, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;

IL_0000:
	{
		bool L_0 = ___ignoreSpace1;
		int64_t L_1;
		L_1 = FBXASCIIReader_ReadToken_mD39313B199B70530F016ACFA4AAE8841BE903959(__this, (bool)0, L_0, NULL);
		V_0 = L_1;
		int64_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		bool L_3;
		L_3 = StreamReader_get_EndOfStream_mAE054431BF21158178EAA2A6872F14A9ED6A3C3E(__this, NULL);
		if (!L_3)
		{
			goto IL_0000;
		}
	}

IL_0014:
	{
		int64_t L_4 = V_0;
		return L_4;
	}
}
// System.Int64 TriLibCore.Fbx.ASCII.FBXASCIIReader::ReadToken(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FBXASCIIReader_ReadToken_mD39313B199B70530F016ACFA4AAE8841BE903959 (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, bool ___required0, bool ___ignoreSpaces1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	Il2CppChar V_5 = 0x0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Il2CppChar V_9 = 0x0;
	int32_t G_B32_0 = 0;
	int64_t G_B71_0 = 0;
	{
		__this->____charPosition_31 = 0;
	}

IL_0007:
	{
		V_0 = (bool)0;
		V_1 = (bool)1;
		V_2 = (bool)0;
		goto IL_00f9;
	}

IL_0012:
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, __this);
		V_4 = L_0;
		int32_t L_1 = V_4;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_00f7;
		}
	}
	{
		int32_t L_2 = V_4;
		V_5 = ((int32_t)(uint16_t)L_2);
		Il2CppChar L_3 = V_5;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)34)))))
		{
			goto IL_0071;
		}
	}
	{
		Il2CppChar L_4 = V_5;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)13)))))
		{
			goto IL_005d;
		}
	}
	{
		Il2CppChar L_5 = V_5;
		if (!L_5)
		{
			goto IL_00ea;
		}
	}
	{
		Il2CppChar L_6 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, ((int32_t)9))))
		{
			case 0:
			{
				goto IL_00ea;
			}
			case 1:
			{
				goto IL_0099;
			}
			case 2:
			{
				goto IL_00f3;
			}
			case 3:
			{
				goto IL_00f3;
			}
			case 4:
			{
				goto IL_00ea;
			}
		}
	}
	{
		goto IL_00f3;
	}

IL_005d:
	{
		Il2CppChar L_7 = V_5;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)32))))
		{
			goto IL_00ea;
		}
	}
	{
		Il2CppChar L_8 = V_5;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)34))))
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_00f3;
	}

IL_0071:
	{
		Il2CppChar L_9 = V_5;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)58)))))
		{
			goto IL_0085;
		}
	}
	{
		Il2CppChar L_10 = V_5;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)44))))
		{
			goto IL_00ca;
		}
	}
	{
		Il2CppChar L_11 = V_5;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)58))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_00f3;
	}

IL_0085:
	{
		Il2CppChar L_12 = V_5;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)59))))
		{
			goto IL_00ce;
		}
	}
	{
		Il2CppChar L_13 = V_5;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)123))))
		{
			goto IL_00ca;
		}
	}
	{
		Il2CppChar L_14 = V_5;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)125))))
		{
			goto IL_00ca;
		}
	}
	{
		goto IL_00f3;
	}

IL_0099:
	{
		int32_t L_15;
		L_15 = FBXASCIIReader_get_Position_m76F4A434B38CFB82C811F0B9DE368DCE3AD04386_inline(__this, NULL);
		__this->____endOfLinePosition_33 = L_15;
		int32_t L_16;
		L_16 = FBXASCIIReader_get_Line_mB5EA9E821739B8DC013A8D2269BF3A083EAC5896_inline(__this, NULL);
		V_6 = L_16;
		int32_t L_17 = V_6;
		FBXASCIIReader_set_Line_mE08C30A6FC84BBB7853BA38C2F43C3FF1985568D_inline(__this, ((int32_t)il2cpp_codegen_add(L_17, 1)), NULL);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, __this);
		V_2 = (bool)1;
		V_1 = (bool)0;
		goto IL_00f9;
	}

IL_00c4:
	{
		V_0 = (bool)1;
		V_1 = (bool)0;
		goto IL_00f9;
	}

IL_00ca:
	{
		V_1 = (bool)0;
		goto IL_00f9;
	}

IL_00ce:
	{
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, __this);
		V_7 = L_19;
		int32_t L_20 = V_7;
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_21 = V_7;
		V_5 = ((int32_t)(uint16_t)L_21);
		Il2CppChar L_22 = V_5;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00ce;
		}
	}

IL_00e6:
	{
		V_1 = (bool)0;
		goto IL_00f9;
	}

IL_00ea:
	{
		int32_t L_23;
		L_23 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, __this);
		goto IL_00f9;
	}

IL_00f3:
	{
		V_1 = (bool)0;
		goto IL_00f9;
	}

IL_00f7:
	{
		V_1 = (bool)0;
	}

IL_00f9:
	{
		bool L_24 = V_1;
		if (L_24)
		{
			goto IL_0012;
		}
	}
	{
		bool L_25 = V_2;
		if (L_25)
		{
			goto IL_010d;
		}
	}
	{
		bool L_26;
		L_26 = StreamReader_get_EndOfStream_mAE054431BF21158178EAA2A6872F14A9ED6A3C3E(__this, NULL);
		G_B32_0 = ((((int32_t)L_26) == ((int32_t)0))? 1 : 0);
		goto IL_010e;
	}

IL_010d:
	{
		G_B32_0 = 0;
	}

IL_010e:
	{
		V_1 = (bool)G_B32_0;
		goto IL_02b0;
	}

IL_0114:
	{
		int32_t L_27;
		L_27 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, __this);
		V_8 = L_27;
		bool L_28 = V_0;
		if (L_28)
		{
			goto IL_0128;
		}
	}
	{
		int32_t L_29 = V_8;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)59))))
		{
			goto IL_0007;
		}
	}

IL_0128:
	{
		int32_t L_30 = V_8;
		if ((((int32_t)L_30) < ((int32_t)0)))
		{
			goto IL_02ae;
		}
	}
	{
		int32_t L_31 = V_8;
		V_9 = ((int32_t)(uint16_t)L_31);
		bool L_32 = V_0;
		if (!L_32)
		{
			goto IL_019c;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_33 = __this->____charStream_30;
		int32_t L_34 = __this->____charPosition_31;
		V_6 = L_34;
		int32_t L_35 = V_6;
		__this->____charPosition_31 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		int32_t L_36 = V_6;
		Il2CppChar L_37 = V_9;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (Il2CppChar)L_37);
		Il2CppChar L_38 = V_9;
		if ((!(((uint32_t)L_38) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0179;
		}
	}
	{
		int32_t L_39;
		L_39 = FBXASCIIReader_get_Position_m76F4A434B38CFB82C811F0B9DE368DCE3AD04386_inline(__this, NULL);
		__this->____endOfLinePosition_33 = L_39;
		int32_t L_40;
		L_40 = FBXASCIIReader_get_Line_mB5EA9E821739B8DC013A8D2269BF3A083EAC5896_inline(__this, NULL);
		V_6 = L_40;
		int32_t L_41 = V_6;
		FBXASCIIReader_set_Line_mE08C30A6FC84BBB7853BA38C2F43C3FF1985568D_inline(__this, ((int32_t)il2cpp_codegen_add(L_41, 1)), NULL);
	}

IL_0179:
	{
		int32_t L_42;
		L_42 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, __this);
		Il2CppChar L_43 = V_9;
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_02b0;
		}
	}
	{
		int32_t L_44 = __this->____charPosition_31;
		if ((((int32_t)L_44) <= ((int32_t)1)))
		{
			goto IL_02b0;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_02b0;
	}

IL_019c:
	{
		Il2CppChar L_45 = V_9;
		if ((!(((uint32_t)L_45) <= ((uint32_t)((int32_t)32)))))
		{
			goto IL_01d5;
		}
	}
	{
		Il2CppChar L_46 = V_9;
		if (!L_46)
		{
			goto IL_0252;
		}
	}
	{
		Il2CppChar L_47 = V_9;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_47, ((int32_t)9))))
		{
			case 0:
			{
				goto IL_025b;
			}
			case 1:
			{
				goto IL_01fd;
			}
			case 2:
			{
				goto IL_0288;
			}
			case 3:
			{
				goto IL_0288;
			}
			case 4:
			{
				goto IL_0252;
			}
		}
	}
	{
		Il2CppChar L_48 = V_9;
		if ((((int32_t)L_48) == ((int32_t)((int32_t)32))))
		{
			goto IL_025b;
		}
	}
	{
		goto IL_0288;
	}

IL_01d5:
	{
		Il2CppChar L_49 = V_9;
		if ((!(((uint32_t)L_49) <= ((uint32_t)((int32_t)58)))))
		{
			goto IL_01ec;
		}
	}
	{
		Il2CppChar L_50 = V_9;
		if ((((int32_t)L_50) == ((int32_t)((int32_t)44))))
		{
			goto IL_0222;
		}
	}
	{
		Il2CppChar L_51 = V_9;
		if ((((int32_t)L_51) == ((int32_t)((int32_t)58))))
		{
			goto IL_0222;
		}
	}
	{
		goto IL_0288;
	}

IL_01ec:
	{
		Il2CppChar L_52 = V_9;
		if ((((int32_t)L_52) == ((int32_t)((int32_t)123))))
		{
			goto IL_0222;
		}
	}
	{
		Il2CppChar L_53 = V_9;
		if ((((int32_t)L_53) == ((int32_t)((int32_t)125))))
		{
			goto IL_0222;
		}
	}
	{
		goto IL_0288;
	}

IL_01fd:
	{
		int32_t L_54;
		L_54 = FBXASCIIReader_get_Position_m76F4A434B38CFB82C811F0B9DE368DCE3AD04386_inline(__this, NULL);
		__this->____endOfLinePosition_33 = L_54;
		int32_t L_55;
		L_55 = FBXASCIIReader_get_Line_mB5EA9E821739B8DC013A8D2269BF3A083EAC5896_inline(__this, NULL);
		V_6 = L_55;
		int32_t L_56 = V_6;
		FBXASCIIReader_set_Line_mE08C30A6FC84BBB7853BA38C2F43C3FF1985568D_inline(__this, ((int32_t)il2cpp_codegen_add(L_56, 1)), NULL);
		V_1 = (bool)0;
		goto IL_02b0;
	}

IL_0222:
	{
		int32_t L_57 = __this->____charPosition_31;
		if (L_57)
		{
			goto IL_024e;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_58 = __this->____charStream_30;
		int32_t L_59 = __this->____charPosition_31;
		V_6 = L_59;
		int32_t L_60 = V_6;
		__this->____charPosition_31 = ((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = V_6;
		Il2CppChar L_62 = V_9;
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (Il2CppChar)L_62);
		int32_t L_63;
		L_63 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, __this);
	}

IL_024e:
	{
		V_1 = (bool)0;
		goto IL_02b0;
	}

IL_0252:
	{
		int32_t L_64;
		L_64 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, __this);
		goto IL_02b0;
	}

IL_025b:
	{
		bool L_65 = ___ignoreSpaces1;
		if (!L_65)
		{
			goto IL_0284;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_66 = __this->____charStream_30;
		int32_t L_67 = __this->____charPosition_31;
		V_6 = L_67;
		int32_t L_68 = V_6;
		__this->____charPosition_31 = ((int32_t)il2cpp_codegen_add(L_68, 1));
		int32_t L_69 = V_6;
		Il2CppChar L_70 = V_9;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(L_69), (Il2CppChar)L_70);
		int32_t L_71;
		L_71 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, __this);
		goto IL_02b0;
	}

IL_0284:
	{
		V_1 = (bool)0;
		goto IL_02b0;
	}

IL_0288:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_72 = __this->____charStream_30;
		int32_t L_73 = __this->____charPosition_31;
		V_6 = L_73;
		int32_t L_74 = V_6;
		__this->____charPosition_31 = ((int32_t)il2cpp_codegen_add(L_74, 1));
		int32_t L_75 = V_6;
		Il2CppChar L_76 = V_9;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(L_75), (Il2CppChar)L_76);
		int32_t L_77;
		L_77 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, __this);
		goto IL_02b0;
	}

IL_02ae:
	{
		V_1 = (bool)0;
	}

IL_02b0:
	{
		bool L_78 = V_1;
		if (L_78)
		{
			goto IL_0114;
		}
	}
	{
		bool L_79 = ___required0;
		if (!L_79)
		{
			goto IL_02e7;
		}
	}
	{
		int32_t L_80 = __this->____charPosition_31;
		if (L_80)
		{
			goto IL_02e7;
		}
	}
	{
		int32_t L_81;
		L_81 = FBXASCIIReader_get_Line_mB5EA9E821739B8DC013A8D2269BF3A083EAC5896_inline(__this, NULL);
		int32_t L_82 = L_81;
		RuntimeObject* L_83 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_82);
		int32_t L_84;
		L_84 = FBXASCIIReader_get_Column_m12D1A65A1FC389FCB7C1E33634C85A34C140C193(__this, NULL);
		int32_t L_85 = L_84;
		RuntimeObject* L_86 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_85);
		String_t* L_87;
		L_87 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3063F5F4FAEA0002A9B169DA0D12D52AC6312C1A)), L_83, L_86, NULL);
		Exception_t* L_88 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_88);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_88, L_87, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_88, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FBXASCIIReader_ReadToken_mD39313B199B70530F016ACFA4AAE8841BE903959_RuntimeMethod_var)));
	}

IL_02e7:
	{
		int32_t L_89 = __this->____charPosition_31;
		if (!L_89)
		{
			goto IL_0302;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_90 = __this->____charStream_30;
		int32_t L_91 = __this->____charPosition_31;
		int64_t L_92;
		L_92 = HashUtils_GetHash_mA2072A3113F446FBB34B926271575984459E0B0C((RuntimeObject*)L_90, L_91, NULL);
		G_B71_0 = L_92;
		goto IL_0304;
	}

IL_0302:
	{
		G_B71_0 = ((int64_t)0);
	}

IL_0304:
	{
		V_3 = G_B71_0;
		int64_t L_93 = V_3;
		__this->____lastToken_34 = L_93;
		int64_t L_94 = V_3;
		return L_94;
	}
}
// System.Void TriLibCore.Fbx.ASCII.FBXASCIIReader::.ctor(TriLibCore.Fbx.FBXProcessor,System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXASCIIReader__ctor_mEB75301BADCB18697945E53B545B3A5B5E9787C7 (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* ___processor0, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream1, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream1;
		FBXASCIIReader__ctor_m82D87FA13F0891600A48EF51B48267BED814456A(__this, L_0, NULL);
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_1 = ___processor0;
		__this->____processor_35 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____processor_35), (void*)L_1);
		return;
	}
}
// System.Void TriLibCore.Fbx.ASCII.FBXASCIIReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FBXASCIIReader__ctor_m82D87FA13F0891600A48EF51B48267BED814456A (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1048576));
		__this->____charStream_30 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____charStream_30), (void*)L_0);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = ___stream0;
		il2cpp_codegen_runtime_class_init_inline(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(__this, L_1, NULL);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_mF67AA7B6692B9F88DE8C1CE7DFF127CDB281EBD0 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FBXObject_set_ObjectType_m7926F17FD0F2D46EFB8C784FB2344DEA1DCAE24A_inline (FBXObject_t955A55BC5B93846C9089D1A44A2DC3F65FC05671* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CObjectTypeU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* FBXObject_get_Document_m3C861F05648C2807DB9DEB69D06FEB1615CDE989_inline (FBXObject_t955A55BC5B93846C9089D1A44A2DC3F65FC05671* __this, const RuntimeMethod* method) 
{
	{
		FBXDocument_tA0771F5AD083A394E4AC5D57E4C612BFA26ED834* L_0 = __this->___U3CDocumentU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* FBXProperties_get_Processor_mBFD247CE63F4102E29CC43CF5AC1625FBFD1B75A_inline (FBXProperties_t5943184AD6922C0B01A0D71557CB584C3CFCB418* __this, const RuntimeMethod* method) 
{
	{
		FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* L_0 = __this->___U3CProcessorU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_m684B090AA2F895FD91821CA8684CBC11D784E4DD_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mA1902D40966CA4C89A8974B10E5680A06E88566B_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) > ((int32_t)((int32_t)2139095040)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FBXASCIIReader_get_Position_m76F4A434B38CFB82C811F0B9DE368DCE3AD04386_inline (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____position_32;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FBXASCIIReader_set_Line_mE08C30A6FC84BBB7853BA38C2F43C3FF1985568D_inline (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLineU3Ek__BackingField_40 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FBXProcessor_get_PropertiesCount_mD3C7369713E84F01A93BE54947EE62B2FC2C05DE_inline (FBXProcessor_t0DFB3E71E578C546A42206E0D5CAE78764C563F4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CPropertiesCountU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FBXASCIIReader_get_Line_mB5EA9E821739B8DC013A8D2269BF3A083EAC5896_inline (FBXASCIIReader_t708E1B27365A8EA390B9216EDCE3A9A84A359C3B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLineU3Ek__BackingField_40;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mA1902D40966CA4C89A8974B10E5680A06E88566B_inline (float ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *((int32_t*)((uintptr_t)(&___value0)));
		return L_0;
	}
}
