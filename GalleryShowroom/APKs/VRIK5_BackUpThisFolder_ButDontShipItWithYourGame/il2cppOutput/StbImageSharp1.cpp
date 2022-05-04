#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1*, T2*, T3*, T4*, T5, T6>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5 p5, T6 p6)
	{
		void* params[6] = { p1, p2, p3, p4, &p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerActionInvoker7;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerActionInvoker7<T1*, T2*, T3*, T4*, T5*, T6, T7>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6 p6, T7 p7)
	{
		void* params[7] = { p1, p2, p3, p4, p5, &p6, &p7 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2*, T3*, T4, T5>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4, T5 p5)
	{
		R ret;
		void* params[5] = { p1, p2, p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2*, T3*, T4*, T5, T6>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5 p5, T6 p6)
	{
		R ret;
		void* params[6] = { p1, p2, p3, p4, &p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.IEnumerable`1<StbImageSharp.AnimatedFrameResult>
struct IEnumerable_1_t1AE2F77037745A1D84F0EFDFD33552E66D9FE079;
// System.Collections.Generic.IEnumerator`1<StbImageSharp.AnimatedFrameResult>
struct IEnumerator_1_tAD47A96D6054C51B1B8A5C892447F8ED375BA198;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// Hebron.Runtime.UnsafeArray1D`1<System.Int32>
struct UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933;
// Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__gif_lzw>
struct UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE;
// Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__huffman>
struct UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA;
// Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__jpeg/unnamed1>
struct UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A;
// Hebron.Runtime.UnsafeArray2D`1<System.Byte>
struct UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4;
// Hebron.Runtime.UnsafeArray2D`1<System.Int16>
struct UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794;
// Hebron.Runtime.UnsafeArray2D`1<System.UInt16>
struct UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF;
// Hebron.Runtime.UnsafeArray1D`1<System.Byte>[]
struct UnsafeArray1D_1U5BU5D_t220DC4C289564FBE7D184AE542EB9E05B037BC66;
// Hebron.Runtime.UnsafeArray1D`1<System.Int16>[]
struct UnsafeArray1D_1U5BU5D_t0821AF1CF7518A71162EF4994FBEC614A035B3A7;
// Hebron.Runtime.UnsafeArray1D`1<System.UInt16>[]
struct UnsafeArray1D_1U5BU5D_t4748D8DC93DBE63F9BDD18376ADC4866F956E9D9;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// StbImageSharp.StbImage/stbi__gif_lzw[]
struct stbi__gif_lzwU5BU5D_tB5A2B5B4D4201620767C50C204468DF525E515EA;
// StbImageSharp.StbImage/stbi__huffman[]
struct stbi__huffmanU5BU5D_tE287877D7CE84F85179E8AC62EBBEEF8C5018D7D;
// StbImageSharp.StbImage/stbi__jpeg/unnamed1[]
struct unnamed1U5BU5D_t2B4E41863CB26AD2BBF0696E3942CC235C404500;
// StbImageSharp.AnimatedFrameResult
struct AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41;
// StbImageSharp.AnimatedGifEnumerable
struct AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E;
// StbImageSharp.AnimatedGifEnumerator
struct AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
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
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// StbImageSharp.ImageResult
struct ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4;
// StbImageSharp.ImageResultFloat
struct ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB;
// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175;
// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// StbImageSharp.StbImage/delegate0
struct delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9;
// StbImageSharp.StbImage/delegate1
struct delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42;
// StbImageSharp.StbImage/delegate2
struct delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F;
// StbImageSharp.StbImage/stbi__context
struct stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7;
// StbImageSharp.StbImage/stbi__gif
struct stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4;
// StbImageSharp.StbImage/stbi__gif_lzw
struct stbi__gif_lzw_t50321AB205854CBA2DA47AAF2C14535018D79584;
// StbImageSharp.StbImage/stbi__huffman
struct stbi__huffman_t6DEAA8DAB0C7E7B906ED693F3B02A4FB88BC8D7F;
// StbImageSharp.StbImage/stbi__jpeg
struct stbi__jpeg_t783B73264C160BDD8FD99C2A40E683EBEDDB2402;
// StbImageSharp.StbImage/stbi__png
struct stbi__png_tCBD935AEB160DD127D2005952F7C0255B2FDA04F;
// StbImageSharp.StbImage/stbi__resample
struct stbi__resample_tEFE16727AD25AA174BB9F4C254785074D3FE8ED4;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// StbImageSharp.StbImage/stbi__jpeg/unnamed1
struct unnamed1_tFFCD00E633D511D08F0102AF033EAEF84DB82DF1;

IL2CPP_EXTERN_C RuntimeClass* AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStats_t3120D9400408AA1F1DB9A37883AEC4A64F7D1A5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2;
IL2CPP_EXTERN_C String_t* _stringLiteral183398DCEBD6A7242F3CF59B61DC81600BBF26E8;
IL2CPP_EXTERN_C String_t* _stringLiteral401602777C44EA69B5FF9AB6AB2D47AEEC89D2AA;
IL2CPP_EXTERN_C String_t* _stringLiteral47025BE0E94E1A7B34293597C96154C064A21D9F;
IL2CPP_EXTERN_C String_t* _stringLiteral6E9AEBB5505B4A1DBC166711562BE9408419A24D;
IL2CPP_EXTERN_C String_t* _stringLiteralCABEE06640F48AF21CAAB5EE9823A731DD58DD03;
IL2CPP_EXTERN_C String_t* _stringLiteralCAD8623838274740D6497489F547CE972C42A942;
IL2CPP_EXTERN_C String_t* _stringLiteralE75F4F4A9D67BC98BA7DB8DBE3C519516572DA4E;
IL2CPP_EXTERN_C String_t* _stringLiteralEC3193CD1F34C7323A6EB465B808BBAB8FAD271A;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914;
IL2CPP_EXTERN_C const RuntimeMethod* AnimatedGifEnumerator_Reset_mA8BA523F4758E19A93AD2CA8F99DD9B7187CD39E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimatedGifEnumerator__ctor_m426872B178B1C6F692C3C12ACE4FCB23BE2EACB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Half_CompareTo_m9EC79B9359AD9C276FA4F1850C015053F486058F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Half_Sign_mE875FA4FD6D98F57417C7AC9E5F84ECEADCE67C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Half_System_IConvertible_ToChar_m7511F58D164EE1F5BEECDEAC63D7746DC7933A92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Half_System_IConvertible_ToDateTime_mF0C63EC935FD9BF89F21636569F73F046BC729AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageResultFloat_FromResult_m1BF48A9D5006184C2173CFD49EAB6781D2802FD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImageResult_FromResult_mC0E37192B7934A165DD767CAE3D1B13D4D52E5D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m2290BB1875E64452A7C9959B7E71F75E5B39F701_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeArray1D_1__ctor_m742DAE97CC04FF2A5C951005E7E1DEAE976FD4B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeArray1D_1__ctor_m75FD4AC5FDF39ECCC52B84F34324B535D1455001_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeArray1D_1__ctor_m80391CAC93DAF529FDA5AC99D18457B15FD0007B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeArray1D_1__ctor_mF515A01BB21FA30A4F292F4417C31C5E8B88F46E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeArray1D_1_op_Implicit_m3953EBEAB1CAF26B950DBB41269ECA873EAC93D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeArray1D_1_op_Implicit_m3C6E8A65A09DC199AAB09D86CB8D1E571960DEFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeArray1D_1_op_Implicit_mC0306D7987021F342456F05565A07CFB3377FB38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeArray1D_1_op_Implicit_mFBA6F467B8CC0C2F8C27331728FDA1FED5C3B71C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeArray2D_1__ctor_m3A58CFC7D1EED7D3D5087499656F8833CB720624_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeArray2D_1__ctor_m4B656CBF9E31CBD022740B8F979CE85FDBE33B20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeArray2D_1__ctor_m5ED6464C063FDB0E310BC0AC417ACCE4B08D7A41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeArray2D_1_op_Implicit_m2371B12B5957DF0D3A54AF1CAE6608F1C9F2106B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeArray2D_1_op_Implicit_m9C7B1989C81845401B0660019E9F33460E6A7EC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeArray2D_1_op_Implicit_mC5C089568D8BDF3C1377060081B48C7F3DEDF9D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* stbi__context__ctor_mC829A0366DACB27129BF977D4B90B9C2326DD40F_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t63D37A524A2DA723EE4B6332B007EEBEE9A2F22C 
{
};

// StbImageSharp.AnimatedGifEnumerable
struct AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E  : public RuntimeObject
{
	// System.IO.Stream StbImageSharp.AnimatedGifEnumerable::_input
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____input_0;
	// StbImageSharp.ColorComponents StbImageSharp.AnimatedGifEnumerable::<ColorComponents>k__BackingField
	int32_t ___U3CColorComponentsU3Ek__BackingField_1;
};

// StbImageSharp.AnimatedGifEnumerator
struct AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B  : public RuntimeObject
{
	// StbImageSharp.StbImage/stbi__context StbImageSharp.AnimatedGifEnumerator::_context
	stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* ____context_0;
	// StbImageSharp.StbImage/stbi__gif StbImageSharp.AnimatedGifEnumerator::_gif
	stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* ____gif_1;
	// StbImageSharp.ColorComponents StbImageSharp.AnimatedGifEnumerator::<ColorComponents>k__BackingField
	int32_t ___U3CColorComponentsU3Ek__BackingField_2;
	// StbImageSharp.AnimatedFrameResult StbImageSharp.AnimatedGifEnumerator::<Current>k__BackingField
	AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* ___U3CCurrentU3Ek__BackingField_3;
};
struct Il2CppArrayBounds;

// Hebron.Runtime.CRuntime
struct CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F  : public RuntimeObject
{
};

struct CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_StaticFields
{
	// System.String Hebron.Runtime.CRuntime::numbers
	String_t* ___numbers_0;
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

// SystemHalf.HalfHelper
struct HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C  : public RuntimeObject
{
};

struct HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields
{
	// System.UInt32[] SystemHalf.HalfHelper::MantissaTable
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___MantissaTable_0;
	// System.UInt32[] SystemHalf.HalfHelper::ExponentTable
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___ExponentTable_1;
	// System.UInt16[] SystemHalf.HalfHelper::OffsetTable
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___OffsetTable_2;
	// System.UInt16[] SystemHalf.HalfHelper::BaseTable
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___BaseTable_3;
	// System.SByte[] SystemHalf.HalfHelper::ShiftTable
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___ShiftTable_4;
};

// StbImageSharp.ImageResult
struct ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4  : public RuntimeObject
{
	// System.Int32 StbImageSharp.ImageResult::<Width>k__BackingField
	int32_t ___U3CWidthU3Ek__BackingField_0;
	// System.Int32 StbImageSharp.ImageResult::<Height>k__BackingField
	int32_t ___U3CHeightU3Ek__BackingField_1;
	// StbImageSharp.ColorComponents StbImageSharp.ImageResult::<SourceComp>k__BackingField
	int32_t ___U3CSourceCompU3Ek__BackingField_2;
	// StbImageSharp.ColorComponents StbImageSharp.ImageResult::<Comp>k__BackingField
	int32_t ___U3CCompU3Ek__BackingField_3;
	// System.Byte[] StbImageSharp.ImageResult::<Data>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CDataU3Ek__BackingField_4;
};

// StbImageSharp.ImageResultFloat
struct ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB  : public RuntimeObject
{
	// System.Int32 StbImageSharp.ImageResultFloat::<Width>k__BackingField
	int32_t ___U3CWidthU3Ek__BackingField_0;
	// System.Int32 StbImageSharp.ImageResultFloat::<Height>k__BackingField
	int32_t ___U3CHeightU3Ek__BackingField_1;
	// StbImageSharp.ColorComponents StbImageSharp.ImageResultFloat::<SourceComp>k__BackingField
	int32_t ___U3CSourceCompU3Ek__BackingField_2;
	// StbImageSharp.ColorComponents StbImageSharp.ImageResultFloat::<Comp>k__BackingField
	int32_t ___U3CCompU3Ek__BackingField_3;
	// System.Single[] StbImageSharp.ImageResultFloat::<Data>k__BackingField
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___U3CDataU3Ek__BackingField_4;
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

// Hebron.Runtime.MemoryStats
struct MemoryStats_t3120D9400408AA1F1DB9A37883AEC4A64F7D1A5E  : public RuntimeObject
{
};

struct MemoryStats_t3120D9400408AA1F1DB9A37883AEC4A64F7D1A5E_StaticFields
{
	// System.Int32 Hebron.Runtime.MemoryStats::_allocations
	int32_t ____allocations_0;
};

// StbImageSharp.StbImage
struct StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A  : public RuntimeObject
{
};

struct StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_StaticFields
{
	// System.String StbImageSharp.StbImage::stbi__g_failure_reason
	String_t* ___stbi__g_failure_reason_0;
	// System.Char[] StbImageSharp.StbImage::stbi__parse_png_file_invalid_chunk
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___stbi__parse_png_file_invalid_chunk_1;
	// System.Byte[] StbImageSharp.StbImage::stbi__compute_huffman_codes_length_dezigzag
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___stbi__compute_huffman_codes_length_dezigzag_12;
	// System.Int32 StbImageSharp.StbImage::stbi__de_iphone_flag_global
	int32_t ___stbi__de_iphone_flag_global_13;
	// System.Int32 StbImageSharp.StbImage::stbi__de_iphone_flag_local
	int32_t ___stbi__de_iphone_flag_local_14;
	// System.Int32 StbImageSharp.StbImage::stbi__de_iphone_flag_set
	int32_t ___stbi__de_iphone_flag_set_15;
	// System.Single StbImageSharp.StbImage::stbi__h2l_gamma_i
	float ___stbi__h2l_gamma_i_16;
	// System.Single StbImageSharp.StbImage::stbi__h2l_scale_i
	float ___stbi__h2l_scale_i_17;
	// System.Single StbImageSharp.StbImage::stbi__l2h_gamma
	float ___stbi__l2h_gamma_18;
	// System.Single StbImageSharp.StbImage::stbi__l2h_scale
	float ___stbi__l2h_scale_19;
	// System.Byte[] StbImageSharp.StbImage::stbi__process_frame_header_rgb
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___stbi__process_frame_header_rgb_20;
	// System.Byte[] StbImageSharp.StbImage::stbi__process_marker_tag
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___stbi__process_marker_tag_21;
	// System.Int32[] StbImageSharp.StbImage::stbi__shiftsigned_mul_table
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___stbi__shiftsigned_mul_table_22;
	// System.Int32[] StbImageSharp.StbImage::stbi__shiftsigned_shift_table
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___stbi__shiftsigned_shift_table_23;
	// System.Int32 StbImageSharp.StbImage::stbi__unpremultiply_on_load_global
	int32_t ___stbi__unpremultiply_on_load_global_24;
	// System.Int32 StbImageSharp.StbImage::stbi__unpremultiply_on_load_local
	int32_t ___stbi__unpremultiply_on_load_local_25;
	// System.Int32 StbImageSharp.StbImage::stbi__unpremultiply_on_load_set
	int32_t ___stbi__unpremultiply_on_load_set_26;
	// System.Int32 StbImageSharp.StbImage::stbi__vertically_flip_on_load_global
	int32_t ___stbi__vertically_flip_on_load_global_27;
	// System.Int32 StbImageSharp.StbImage::stbi__vertically_flip_on_load_local
	int32_t ___stbi__vertically_flip_on_load_local_28;
	// System.Int32 StbImageSharp.StbImage::stbi__vertically_flip_on_load_set
	int32_t ___stbi__vertically_flip_on_load_set_29;
	// System.UInt32[] StbImageSharp.StbImage::stbi__bmask
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___stbi__bmask_30;
	// System.Int32[] StbImageSharp.StbImage::stbi__jbias
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___stbi__jbias_31;
	// System.Byte[] StbImageSharp.StbImage::stbi__jpeg_dezigzag
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___stbi__jpeg_dezigzag_32;
	// System.Byte[] StbImageSharp.StbImage::first_row_filter
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___first_row_filter_40;
	// System.Byte[] StbImageSharp.StbImage::stbi__check_png_header_png_sig
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___stbi__check_png_header_png_sig_41;
	// System.Byte[] StbImageSharp.StbImage::stbi__depth_scale_table
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___stbi__depth_scale_table_42;
	// System.Byte[] StbImageSharp.StbImage::stbi__zdefault_distance
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___stbi__zdefault_distance_43;
	// System.Byte[] StbImageSharp.StbImage::stbi__zdefault_length
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___stbi__zdefault_length_44;
	// System.Int32[] StbImageSharp.StbImage::stbi__zdist_base
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___stbi__zdist_base_45;
	// System.Int32[] StbImageSharp.StbImage::stbi__zdist_extra
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___stbi__zdist_extra_46;
	// System.Int32[] StbImageSharp.StbImage::stbi__zlength_base
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___stbi__zlength_base_47;
	// System.Int32[] StbImageSharp.StbImage::stbi__zlength_extra
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___stbi__zlength_extra_48;
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

// StbImageSharp.StbImage/stbi__context
struct stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7  : public RuntimeObject
{
	// System.Byte[] StbImageSharp.StbImage/stbi__context::_tempBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____tempBuffer_0;
	// System.Int32 StbImageSharp.StbImage/stbi__context::img_n
	int32_t ___img_n_1;
	// System.Int32 StbImageSharp.StbImage/stbi__context::img_out_n
	int32_t ___img_out_n_2;
	// System.UInt32 StbImageSharp.StbImage/stbi__context::img_x
	uint32_t ___img_x_3;
	// System.UInt32 StbImageSharp.StbImage/stbi__context::img_y
	uint32_t ___img_y_4;
	// System.IO.Stream StbImageSharp.StbImage/stbi__context::<Stream>k__BackingField
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___U3CStreamU3Ek__BackingField_5;
};

// StbImageSharp.StbImage/stbi__gif
struct stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4  : public RuntimeObject
{
	// System.Byte* StbImageSharp.StbImage/stbi__gif::_out_
	uint8_t* ____out__0;
	// System.Byte* StbImageSharp.StbImage/stbi__gif::background
	uint8_t* ___background_1;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::bgindex
	int32_t ___bgindex_2;
	// StbImageSharp.StbImage/stbi__gif_lzw* StbImageSharp.StbImage/stbi__gif::codes
	stbi__gif_lzw_t50321AB205854CBA2DA47AAF2C14535018D79584* ___codes_3;
	// Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__gif_lzw> StbImageSharp.StbImage/stbi__gif::codesArray
	UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE* ___codesArray_4;
	// System.Byte* StbImageSharp.StbImage/stbi__gif::color_table
	uint8_t* ___color_table_5;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::cur_x
	int32_t ___cur_x_6;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::cur_y
	int32_t ___cur_y_7;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::delay
	int32_t ___delay_8;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::eflags
	int32_t ___eflags_9;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::flags
	int32_t ___flags_10;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::h
	int32_t ___h_11;
	// System.Byte* StbImageSharp.StbImage/stbi__gif::history
	uint8_t* ___history_12;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::lflags
	int32_t ___lflags_13;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::line_size
	int32_t ___line_size_14;
	// System.Byte** StbImageSharp.StbImage/stbi__gif::lpal
	uint8_t** ___lpal_15;
	// Hebron.Runtime.UnsafeArray2D`1<System.Byte> StbImageSharp.StbImage/stbi__gif::lpalArray
	UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4* ___lpalArray_16;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::max_x
	int32_t ___max_x_17;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::max_y
	int32_t ___max_y_18;
	// System.Byte** StbImageSharp.StbImage/stbi__gif::pal
	uint8_t** ___pal_19;
	// Hebron.Runtime.UnsafeArray2D`1<System.Byte> StbImageSharp.StbImage/stbi__gif::palArray
	UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4* ___palArray_20;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::parse
	int32_t ___parse_21;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::ratio
	int32_t ___ratio_22;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::start_x
	int32_t ___start_x_23;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::start_y
	int32_t ___start_y_24;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::step
	int32_t ___step_25;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::transparent
	int32_t ___transparent_26;
	// System.Int32 StbImageSharp.StbImage/stbi__gif::w
	int32_t ___w_27;
};

// StbImageSharp.StbImage/stbi__jpeg
struct stbi__jpeg_t783B73264C160BDD8FD99C2A40E683EBEDDB2402  : public RuntimeObject
{
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::app14_color_transform
	int32_t ___app14_color_transform_0;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::code_bits
	int32_t ___code_bits_1;
	// System.UInt32 StbImageSharp.StbImage/stbi__jpeg::code_buffer
	uint32_t ___code_buffer_2;
	// System.UInt16** StbImageSharp.StbImage/stbi__jpeg::dequant
	uint16_t** ___dequant_3;
	// Hebron.Runtime.UnsafeArray2D`1<System.UInt16> StbImageSharp.StbImage/stbi__jpeg::dequantArray
	UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF* ___dequantArray_4;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::eob_run
	int32_t ___eob_run_5;
	// System.Int16** StbImageSharp.StbImage/stbi__jpeg::fast_ac
	int16_t** ___fast_ac_6;
	// Hebron.Runtime.UnsafeArray2D`1<System.Int16> StbImageSharp.StbImage/stbi__jpeg::fast_acArray
	UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794* ___fast_acArray_7;
	// StbImageSharp.StbImage/stbi__huffman* StbImageSharp.StbImage/stbi__jpeg::huff_ac
	stbi__huffman_t6DEAA8DAB0C7E7B906ED693F3B02A4FB88BC8D7F* ___huff_ac_8;
	// Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__huffman> StbImageSharp.StbImage/stbi__jpeg::huff_acArray
	UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA* ___huff_acArray_9;
	// StbImageSharp.StbImage/stbi__huffman* StbImageSharp.StbImage/stbi__jpeg::huff_dc
	stbi__huffman_t6DEAA8DAB0C7E7B906ED693F3B02A4FB88BC8D7F* ___huff_dc_10;
	// Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__huffman> StbImageSharp.StbImage/stbi__jpeg::huff_dcArray
	UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA* ___huff_dcArray_11;
	// StbImageSharp.StbImage/delegate0 StbImageSharp.StbImage/stbi__jpeg::idct_block_kernel
	delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9* ___idct_block_kernel_12;
	// StbImageSharp.StbImage/stbi__jpeg/unnamed1* StbImageSharp.StbImage/stbi__jpeg::img_comp
	unnamed1_tFFCD00E633D511D08F0102AF033EAEF84DB82DF1* ___img_comp_13;
	// Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__jpeg/unnamed1> StbImageSharp.StbImage/stbi__jpeg::img_compArray
	UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A* ___img_compArray_14;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::img_h_max
	int32_t ___img_h_max_15;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::img_mcu_h
	int32_t ___img_mcu_h_16;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::img_mcu_w
	int32_t ___img_mcu_w_17;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::img_mcu_x
	int32_t ___img_mcu_x_18;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::img_mcu_y
	int32_t ___img_mcu_y_19;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::img_v_max
	int32_t ___img_v_max_20;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::jfif
	int32_t ___jfif_21;
	// System.Byte StbImageSharp.StbImage/stbi__jpeg::marker
	uint8_t ___marker_22;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::nomore
	int32_t ___nomore_23;
	// System.Int32* StbImageSharp.StbImage/stbi__jpeg::order
	int32_t* ___order_24;
	// Hebron.Runtime.UnsafeArray1D`1<System.Int32> StbImageSharp.StbImage/stbi__jpeg::orderArray
	UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933* ___orderArray_25;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::progressive
	int32_t ___progressive_26;
	// StbImageSharp.StbImage/delegate2 StbImageSharp.StbImage/stbi__jpeg::resample_row_hv_2_kernel
	delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F* ___resample_row_hv_2_kernel_27;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::restart_interval
	int32_t ___restart_interval_28;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::rgb
	int32_t ___rgb_29;
	// StbImageSharp.StbImage/stbi__context StbImageSharp.StbImage/stbi__jpeg::s
	stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* ___s_30;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::scan_n
	int32_t ___scan_n_31;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::spec_end
	int32_t ___spec_end_32;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::spec_start
	int32_t ___spec_start_33;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::succ_high
	int32_t ___succ_high_34;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::succ_low
	int32_t ___succ_low_35;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg::todo
	int32_t ___todo_36;
	// StbImageSharp.StbImage/delegate1 StbImageSharp.StbImage/stbi__jpeg::YCbCr_to_RGB_kernel
	delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42* ___YCbCr_to_RGB_kernel_37;
};

// StbImageSharp.StbImage/stbi__png
struct stbi__png_tCBD935AEB160DD127D2005952F7C0255B2FDA04F  : public RuntimeObject
{
	// System.Byte* StbImageSharp.StbImage/stbi__png::_out_
	uint8_t* ____out__0;
	// System.Int32 StbImageSharp.StbImage/stbi__png::depth
	int32_t ___depth_1;
	// System.Byte* StbImageSharp.StbImage/stbi__png::expanded
	uint8_t* ___expanded_2;
	// System.Byte* StbImageSharp.StbImage/stbi__png::idata
	uint8_t* ___idata_3;
	// StbImageSharp.StbImage/stbi__context StbImageSharp.StbImage/stbi__png::s
	stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* ___s_4;
};

// StbImageSharp.StbImage/stbi__resample
struct stbi__resample_tEFE16727AD25AA174BB9F4C254785074D3FE8ED4  : public RuntimeObject
{
	// System.Int32 StbImageSharp.StbImage/stbi__resample::hs
	int32_t ___hs_0;
	// System.Byte* StbImageSharp.StbImage/stbi__resample::line0
	uint8_t* ___line0_1;
	// System.Byte* StbImageSharp.StbImage/stbi__resample::line1
	uint8_t* ___line1_2;
	// StbImageSharp.StbImage/delegate2 StbImageSharp.StbImage/stbi__resample::resample
	delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F* ___resample_3;
	// System.Int32 StbImageSharp.StbImage/stbi__resample::vs
	int32_t ___vs_4;
	// System.Int32 StbImageSharp.StbImage/stbi__resample::w_lores
	int32_t ___w_lores_5;
	// System.Int32 StbImageSharp.StbImage/stbi__resample::ypos
	int32_t ___ypos_6;
	// System.Int32 StbImageSharp.StbImage/stbi__resample::ystep
	int32_t ___ystep_7;
};

// StbImageSharp.AnimatedFrameResult
struct AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41  : public ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4
{
	// System.Int32 StbImageSharp.AnimatedFrameResult::<DelayInMs>k__BackingField
	int32_t ___U3CDelayInMsU3Ek__BackingField_5;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// SystemHalf.Half
struct Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 
{
	// System.UInt16 SystemHalf.Half::Value
	uint16_t ___Value_0;
};

struct Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_StaticFields
{
	// SystemHalf.Half SystemHalf.Half::Epsilon
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___Epsilon_1;
	// SystemHalf.Half SystemHalf.Half::MaxValue
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___MaxValue_2;
	// SystemHalf.Half SystemHalf.Half::MinValue
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___MinValue_3;
	// SystemHalf.Half SystemHalf.Half::NaN
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___NaN_4;
	// SystemHalf.Half SystemHalf.Half::NegativeInfinity
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___NegativeInfinity_5;
	// SystemHalf.Half SystemHalf.Half::PositiveInfinity
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___PositiveInfinity_6;
};

// StbImageSharp.ImageInfo
struct ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C 
{
	// System.Int32 StbImageSharp.ImageInfo::Width
	int32_t ___Width_0;
	// System.Int32 StbImageSharp.ImageInfo::Height
	int32_t ___Height_1;
	// StbImageSharp.ColorComponents StbImageSharp.ImageInfo::ColorComponents
	int32_t ___ColorComponents_2;
	// System.Int32 StbImageSharp.ImageInfo::BitsPerChannel
	int32_t ___BitsPerChannel_3;
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

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
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

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=124
struct __StaticArrayInitTypeSizeU3D124_t9FAD538EC11CC303C45220E1547C1E92DC5E7940 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D124_t9FAD538EC11CC303C45220E1547C1E92DC5E7940__padding[124];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_t359A8FF192786412EB0870773A023EF19E7B83DB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t359A8FF192786412EB0870773A023EF19E7B83DB__padding[128];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=19
struct __StaticArrayInitTypeSizeU3D19_t5589C48E49CA054DFDADD530BD4FE5DA90E1351D 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D19_t5589C48E49CA054DFDADD530BD4FE5DA90E1351D__padding[19];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288
struct __StaticArrayInitTypeSizeU3D288_tB38B4224032671F40D3AF231F6D3E9A3AB46217C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D288_tB38B4224032671F40D3AF231F6D3E9A3AB46217C__padding[288];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3
struct __StaticArrayInitTypeSizeU3D3_t4163E34A7D06F8C964ED17C35882E1B7EFDA0894 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D3_t4163E34A7D06F8C964ED17C35882E1B7EFDA0894__padding[3];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tB0219EF63295A20A039D1CD892BB143A81B92541 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tB0219EF63295A20A039D1CD892BB143A81B92541__padding[32];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
struct __StaticArrayInitTypeSizeU3D36_t14F4C5B2ADAF1F5BA2732D56C8B023D7F8294BCC 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_t14F4C5B2ADAF1F5BA2732D56C8B023D7F8294BCC__padding[36];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5
struct __StaticArrayInitTypeSizeU3D5_tC1F6D711158DBDED87D75A12E5F8A77C529961D8 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D5_tC1F6D711158DBDED87D75A12E5F8A77C529961D8__padding[5];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6
struct __StaticArrayInitTypeSizeU3D6_tB8038ACD9F5AE15D04B86955781E81EAC647325A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_tB8038ACD9F5AE15D04B86955781E81EAC647325A__padding[6];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct __StaticArrayInitTypeSizeU3D64_t47E0416979C28EDE5E725E64685E2CDE1A7866A9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t47E0416979C28EDE5E725E64685E2CDE1A7866A9__padding[64];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68
struct __StaticArrayInitTypeSizeU3D68_t2802E91BC788DD006C1DEC745A4CFC203BB19610 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D68_t2802E91BC788DD006C1DEC745A4CFC203BB19610__padding[68];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=79
struct __StaticArrayInitTypeSizeU3D79_t2115F2EF531D1799843ECBDFAA686AAC42D22093 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D79_t2115F2EF531D1799843ECBDFAA686AAC42D22093__padding[79];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9
struct __StaticArrayInitTypeSizeU3D9_t676B9CDD70AE69DE0625C32889D961A2DC9EFCF8 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D9_t676B9CDD70AE69DE0625C32889D961A2DC9EFCF8__padding[9];
	};
};

// StbImageSharp.StbImage/stbi__bmp_data
struct stbi__bmp_data_tA952327F9D16C7AC3996DBB265DD9FF3CA82D660 
{
	// System.Int32 StbImageSharp.StbImage/stbi__bmp_data::bpp
	int32_t ___bpp_0;
	// System.Int32 StbImageSharp.StbImage/stbi__bmp_data::offset
	int32_t ___offset_1;
	// System.Int32 StbImageSharp.StbImage/stbi__bmp_data::hsz
	int32_t ___hsz_2;
	// System.UInt32 StbImageSharp.StbImage/stbi__bmp_data::mr
	uint32_t ___mr_3;
	// System.UInt32 StbImageSharp.StbImage/stbi__bmp_data::mg
	uint32_t ___mg_4;
	// System.UInt32 StbImageSharp.StbImage/stbi__bmp_data::mb
	uint32_t ___mb_5;
	// System.UInt32 StbImageSharp.StbImage/stbi__bmp_data::ma
	uint32_t ___ma_6;
	// System.UInt32 StbImageSharp.StbImage/stbi__bmp_data::all_a
	uint32_t ___all_a_7;
	// System.Int32 StbImageSharp.StbImage/stbi__bmp_data::extra_read
	int32_t ___extra_read_8;
};

// StbImageSharp.StbImage/stbi__gif_lzw
struct stbi__gif_lzw_t50321AB205854CBA2DA47AAF2C14535018D79584 
{
	// System.Int16 StbImageSharp.StbImage/stbi__gif_lzw::prefix
	int16_t ___prefix_0;
	// System.Byte StbImageSharp.StbImage/stbi__gif_lzw::first
	uint8_t ___first_1;
	// System.Byte StbImageSharp.StbImage/stbi__gif_lzw::suffix
	uint8_t ___suffix_2;
};

// StbImageSharp.StbImage/stbi__pngchunk
struct stbi__pngchunk_tA5306C6DF7E8387DB1380CD0BE8D47106C10CCBD 
{
	// System.UInt32 StbImageSharp.StbImage/stbi__pngchunk::length
	uint32_t ___length_0;
	// System.UInt32 StbImageSharp.StbImage/stbi__pngchunk::type
	uint32_t ___type_1;
};

// StbImageSharp.StbImage/stbi__result_info
struct stbi__result_info_tABB5BF1D89CE5A2B8B13F3002DB09380E4DCD3AA 
{
	// System.Int32 StbImageSharp.StbImage/stbi__result_info::bits_per_channel
	int32_t ___bits_per_channel_0;
	// System.Int32 StbImageSharp.StbImage/stbi__result_info::num_channels
	int32_t ___num_channels_1;
	// System.Int32 StbImageSharp.StbImage/stbi__result_info::channel_order
	int32_t ___channel_order_2;
};

// StbImageSharp.StbImage/stbi__huffman/<code>e__FixedBuffer
struct U3CcodeU3Ee__FixedBuffer_t9B85054F2DB2B1FF1901230601F73C2B7C74145A 
{
	union
	{
		struct
		{
			// System.UInt16 StbImageSharp.StbImage/stbi__huffman/<code>e__FixedBuffer::FixedElementField
			uint16_t ___FixedElementField_0;
		};
		uint8_t U3CcodeU3Ee__FixedBuffer_t9B85054F2DB2B1FF1901230601F73C2B7C74145A__padding[512];
	};
};

// StbImageSharp.StbImage/stbi__huffman/<delta>e__FixedBuffer
struct U3CdeltaU3Ee__FixedBuffer_t39D2B6970ECDC446C812EC974927FD97AF2FB121 
{
	union
	{
		struct
		{
			// System.Int32 StbImageSharp.StbImage/stbi__huffman/<delta>e__FixedBuffer::FixedElementField
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CdeltaU3Ee__FixedBuffer_t39D2B6970ECDC446C812EC974927FD97AF2FB121__padding[68];
	};
};

// StbImageSharp.StbImage/stbi__huffman/<fast>e__FixedBuffer
struct U3CfastU3Ee__FixedBuffer_tB398F8437B4AA6C4ED7F9F91C64DC0FCF36BD5AB 
{
	union
	{
		struct
		{
			// System.Byte StbImageSharp.StbImage/stbi__huffman/<fast>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CfastU3Ee__FixedBuffer_tB398F8437B4AA6C4ED7F9F91C64DC0FCF36BD5AB__padding[512];
	};
};

// StbImageSharp.StbImage/stbi__huffman/<maxcode>e__FixedBuffer
struct U3CmaxcodeU3Ee__FixedBuffer_tF5B5F8EF3202690E22C890AC019F8AE88CDC8170 
{
	union
	{
		struct
		{
			// System.UInt32 StbImageSharp.StbImage/stbi__huffman/<maxcode>e__FixedBuffer::FixedElementField
			uint32_t ___FixedElementField_0;
		};
		uint8_t U3CmaxcodeU3Ee__FixedBuffer_tF5B5F8EF3202690E22C890AC019F8AE88CDC8170__padding[72];
	};
};

// StbImageSharp.StbImage/stbi__huffman/<size>e__FixedBuffer
struct U3CsizeU3Ee__FixedBuffer_tA7151F597312282204EC0213754FB0F36F1EE3CF 
{
	union
	{
		struct
		{
			// System.Byte StbImageSharp.StbImage/stbi__huffman/<size>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CsizeU3Ee__FixedBuffer_tA7151F597312282204EC0213754FB0F36F1EE3CF__padding[257];
	};
};

// StbImageSharp.StbImage/stbi__huffman/<values>e__FixedBuffer
struct U3CvaluesU3Ee__FixedBuffer_t425B4FAF4A5C0DB8559A642A11F2C944321B591E 
{
	union
	{
		struct
		{
			// System.Byte StbImageSharp.StbImage/stbi__huffman/<values>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CvaluesU3Ee__FixedBuffer_t425B4FAF4A5C0DB8559A642A11F2C944321B591E__padding[256];
	};
};

// StbImageSharp.StbImage/stbi__jpeg/unnamed1
struct unnamed1_tFFCD00E633D511D08F0102AF033EAEF84DB82DF1 
{
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg/unnamed1::id
	int32_t ___id_0;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg/unnamed1::h
	int32_t ___h_1;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg/unnamed1::v
	int32_t ___v_2;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg/unnamed1::tq
	int32_t ___tq_3;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg/unnamed1::hd
	int32_t ___hd_4;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg/unnamed1::ha
	int32_t ___ha_5;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg/unnamed1::dc_pred
	int32_t ___dc_pred_6;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg/unnamed1::x
	int32_t ___x_7;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg/unnamed1::y
	int32_t ___y_8;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg/unnamed1::w2
	int32_t ___w2_9;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg/unnamed1::h2
	int32_t ___h2_10;
	// System.Byte* StbImageSharp.StbImage/stbi__jpeg/unnamed1::data
	uint8_t* ___data_11;
	// System.Void* StbImageSharp.StbImage/stbi__jpeg/unnamed1::raw_data
	void* ___raw_data_12;
	// System.Void* StbImageSharp.StbImage/stbi__jpeg/unnamed1::raw_coeff
	void* ___raw_coeff_13;
	// System.Byte* StbImageSharp.StbImage/stbi__jpeg/unnamed1::linebuf
	uint8_t* ___linebuf_14;
	// System.Int16* StbImageSharp.StbImage/stbi__jpeg/unnamed1::coeff
	int16_t* ___coeff_15;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg/unnamed1::coeff_w
	int32_t ___coeff_w_16;
	// System.Int32 StbImageSharp.StbImage/stbi__jpeg/unnamed1::coeff_h
	int32_t ___coeff_h_17;
};

// StbImageSharp.StbImage/stbi__zhuffman/<fast>e__FixedBuffer
struct U3CfastU3Ee__FixedBuffer_t8CE924348EA9C6FB362EBA8410C3700B92FB67CF 
{
	union
	{
		struct
		{
			// System.UInt16 StbImageSharp.StbImage/stbi__zhuffman/<fast>e__FixedBuffer::FixedElementField
			uint16_t ___FixedElementField_0;
		};
		uint8_t U3CfastU3Ee__FixedBuffer_t8CE924348EA9C6FB362EBA8410C3700B92FB67CF__padding[1024];
	};
};

// StbImageSharp.StbImage/stbi__zhuffman/<firstcode>e__FixedBuffer
struct U3CfirstcodeU3Ee__FixedBuffer_tF9DEE623EA719A686FB3E2E10A8823D7B7AC8CDD 
{
	union
	{
		struct
		{
			// System.UInt16 StbImageSharp.StbImage/stbi__zhuffman/<firstcode>e__FixedBuffer::FixedElementField
			uint16_t ___FixedElementField_0;
		};
		uint8_t U3CfirstcodeU3Ee__FixedBuffer_tF9DEE623EA719A686FB3E2E10A8823D7B7AC8CDD__padding[32];
	};
};

// StbImageSharp.StbImage/stbi__zhuffman/<firstsymbol>e__FixedBuffer
struct U3CfirstsymbolU3Ee__FixedBuffer_t58B227FFA8178B8B4F1A1A40182F7EA1043F5BC9 
{
	union
	{
		struct
		{
			// System.UInt16 StbImageSharp.StbImage/stbi__zhuffman/<firstsymbol>e__FixedBuffer::FixedElementField
			uint16_t ___FixedElementField_0;
		};
		uint8_t U3CfirstsymbolU3Ee__FixedBuffer_t58B227FFA8178B8B4F1A1A40182F7EA1043F5BC9__padding[32];
	};
};

// StbImageSharp.StbImage/stbi__zhuffman/<maxcode>e__FixedBuffer
struct U3CmaxcodeU3Ee__FixedBuffer_t2932FF58F62E5681C9E6FFE335588BD39A835813 
{
	union
	{
		struct
		{
			// System.Int32 StbImageSharp.StbImage/stbi__zhuffman/<maxcode>e__FixedBuffer::FixedElementField
			int32_t ___FixedElementField_0;
		};
		uint8_t U3CmaxcodeU3Ee__FixedBuffer_t2932FF58F62E5681C9E6FFE335588BD39A835813__padding[68];
	};
};

// StbImageSharp.StbImage/stbi__zhuffman/<size>e__FixedBuffer
struct U3CsizeU3Ee__FixedBuffer_tA5EED7AAFF5C987DEA58EF2BCB603173B5933796 
{
	union
	{
		struct
		{
			// System.Byte StbImageSharp.StbImage/stbi__zhuffman/<size>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CsizeU3Ee__FixedBuffer_tA5EED7AAFF5C987DEA58EF2BCB603173B5933796__padding[288];
	};
};

// StbImageSharp.StbImage/stbi__zhuffman/<value>e__FixedBuffer
struct U3CvalueU3Ee__FixedBuffer_t2648F8501F6C9C6C98680C65D3683DC2E8A22269 
{
	union
	{
		struct
		{
			// System.UInt16 StbImageSharp.StbImage/stbi__zhuffman/<value>e__FixedBuffer::FixedElementField
			uint16_t ___FixedElementField_0;
		};
		uint8_t U3CvalueU3Ee__FixedBuffer_t2648F8501F6C9C6C98680C65D3683DC2E8A22269__padding[576];
	};
};

// System.Nullable`1<StbImageSharp.ImageInfo>
struct Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C ___value_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t363C11D6C0FC38C8701B3E594E141E3E35D71537  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t363C11D6C0FC38C8701B3E594E141E3E35D71537_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5 <PrivateImplementationDetails>::029945BAE664FE195CC5AF19BA36CCAE0B9BC5E3370C6DEF532DFEFCBCB82CAC
	__StaticArrayInitTypeSizeU3D5_tC1F6D711158DBDED87D75A12E5F8A77C529961D8 ___029945BAE664FE195CC5AF19BA36CCAE0B9BC5E3370C6DEF532DFEFCBCB82CAC_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=124 <PrivateImplementationDetails>::05DC117CB79F96DEC3B548CF4B692C39F7CCAF151BF747E24E1B794B7504AA61
	__StaticArrayInitTypeSizeU3D124_t9FAD538EC11CC303C45220E1547C1E92DC5E7940 ___05DC117CB79F96DEC3B548CF4B692C39F7CCAF151BF747E24E1B794B7504AA61_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::0C2F9E6FD2E221EA3DD3CE8CC78E50B3315BA80E0A7E33DFB4D858CAE5F1719C
	__StaticArrayInitTypeSizeU3D6_tB8038ACD9F5AE15D04B86955781E81EAC647325A ___0C2F9E6FD2E221EA3DD3CE8CC78E50B3315BA80E0A7E33DFB4D858CAE5F1719C_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=19 <PrivateImplementationDetails>::111B15B20E0428A22EEAA1E54B0D3B008A7A3E79C8F7F4E783710F569E9CEF15
	__StaticArrayInitTypeSizeU3D19_t5589C48E49CA054DFDADD530BD4FE5DA90E1351D ___111B15B20E0428A22EEAA1E54B0D3B008A7A3E79C8F7F4E783710F569E9CEF15_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::2CD5B36116DE5C704183F639C1F6531265C8EBCB4C9A5AF7833BD29CD7F027AA
	__StaticArrayInitTypeSizeU3D128_t359A8FF192786412EB0870773A023EF19E7B83DB ___2CD5B36116DE5C704183F639C1F6531265C8EBCB4C9A5AF7833BD29CD7F027AA_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::4C0A60625340FE660C27D4A2BA915E2E5AD493C57113163C76EB86F59568D77A
	__StaticArrayInitTypeSizeU3D64_t47E0416979C28EDE5E725E64685E2CDE1A7866A9 ___4C0A60625340FE660C27D4A2BA915E2E5AD493C57113163C76EB86F59568D77A_5;
	// System.Int64 <PrivateImplementationDetails>::4C4B6A3BE1314AB86138BEF4314DDE022E600960D8689A2C8F8631802D20DAB6
	int64_t ___4C4B6A3BE1314AB86138BEF4314DDE022E600960D8689A2C8F8631802D20DAB6_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=124 <PrivateImplementationDetails>::61358F81002F15B87F2746D4CD7FE28FD2CB45B8F0840B807B18C5A23F791CB1
	__StaticArrayInitTypeSizeU3D124_t9FAD538EC11CC303C45220E1547C1E92DC5E7940 ___61358F81002F15B87F2746D4CD7FE28FD2CB45B8F0840B807B18C5A23F791CB1_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::69CFCD204139E3D59A37422A3FE25BDD6805F7E83112690162FA2B9A57CFB826
	__StaticArrayInitTypeSizeU3D128_t359A8FF192786412EB0870773A023EF19E7B83DB ___69CFCD204139E3D59A37422A3FE25BDD6805F7E83112690162FA2B9A57CFB826_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=3 <PrivateImplementationDetails>::88B5990F3FF597306BB82CF38AC0D3ECBB7117D57D7424EAB20CC938A5083BB1
	__StaticArrayInitTypeSizeU3D3_t4163E34A7D06F8C964ED17C35882E1B7EFDA0894 ___88B5990F3FF597306BB82CF38AC0D3ECBB7117D57D7424EAB20CC938A5083BB1_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::BD004F507737AFE9A5127B20A212A1A346E309DD991562336A3CFF3E941B8142
	__StaticArrayInitTypeSizeU3D36_t14F4C5B2ADAF1F5BA2732D56C8B023D7F8294BCC ___BD004F507737AFE9A5127B20A212A1A346E309DD991562336A3CFF3E941B8142_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>::CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C
	__StaticArrayInitTypeSizeU3D68_t2802E91BC788DD006C1DEC745A4CFC203BB19610 ___CF64D219C0BA56CECE4E41E0C8BF3AF538F4510FA9A2B00F38DA09E548270E5C_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=288 <PrivateImplementationDetails>::D52FF0C78190BA319C56A4004D0ED7355C78A3F4EE0491E5E47A4496D617F5AE
	__StaticArrayInitTypeSizeU3D288_tB38B4224032671F40D3AF231F6D3E9A3AB46217C ___D52FF0C78190BA319C56A4004D0ED7355C78A3F4EE0491E5E47A4496D617F5AE_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=79 <PrivateImplementationDetails>::D88A0E4B2284FD3C191AC28BD7456CA29921C0078CADDE100FDDFF90B4D66181
	__StaticArrayInitTypeSizeU3D79_t2115F2EF531D1799843ECBDFAA686AAC42D22093 ___D88A0E4B2284FD3C191AC28BD7456CA29921C0078CADDE100FDDFF90B4D66181_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=9 <PrivateImplementationDetails>::D8E2E17697CDF4DB31BB89B24FB41B19FE734E28DD8DD0B3FF7DF1B590124693
	__StaticArrayInitTypeSizeU3D9_t676B9CDD70AE69DE0625C32889D961A2DC9EFCF8 ___D8E2E17697CDF4DB31BB89B24FB41B19FE734E28DD8DD0B3FF7DF1B590124693_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::ED0CB54984A296FABC52C07AFE2E18863A2CC3A3747ECBBB6EDC5064E2286879
	__StaticArrayInitTypeSizeU3D36_t14F4C5B2ADAF1F5BA2732D56C8B023D7F8294BCC ___ED0CB54984A296FABC52C07AFE2E18863A2CC3A3747ECBBB6EDC5064E2286879_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::F849D67325FACF04177BC663B2DC544051831C589EF581D412F2EBA44834E77C
	__StaticArrayInitTypeSizeU3D32_tB0219EF63295A20A039D1CD892BB143A81B92541 ___F849D67325FACF04177BC663B2DC544051831C589EF581D412F2EBA44834E77C_16;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// StbImageSharp.StbImage/stbi__huffman
struct stbi__huffman_t6DEAA8DAB0C7E7B906ED693F3B02A4FB88BC8D7F 
{
	// StbImageSharp.StbImage/stbi__huffman/<fast>e__FixedBuffer StbImageSharp.StbImage/stbi__huffman::fast
	U3CfastU3Ee__FixedBuffer_tB398F8437B4AA6C4ED7F9F91C64DC0FCF36BD5AB ___fast_0;
	// StbImageSharp.StbImage/stbi__huffman/<code>e__FixedBuffer StbImageSharp.StbImage/stbi__huffman::code
	U3CcodeU3Ee__FixedBuffer_t9B85054F2DB2B1FF1901230601F73C2B7C74145A ___code_1;
	// StbImageSharp.StbImage/stbi__huffman/<values>e__FixedBuffer StbImageSharp.StbImage/stbi__huffman::values
	U3CvaluesU3Ee__FixedBuffer_t425B4FAF4A5C0DB8559A642A11F2C944321B591E ___values_2;
	// StbImageSharp.StbImage/stbi__huffman/<size>e__FixedBuffer StbImageSharp.StbImage/stbi__huffman::size
	U3CsizeU3Ee__FixedBuffer_tA7151F597312282204EC0213754FB0F36F1EE3CF ___size_3;
	// StbImageSharp.StbImage/stbi__huffman/<maxcode>e__FixedBuffer StbImageSharp.StbImage/stbi__huffman::maxcode
	U3CmaxcodeU3Ee__FixedBuffer_tF5B5F8EF3202690E22C890AC019F8AE88CDC8170 ___maxcode_4;
	// StbImageSharp.StbImage/stbi__huffman/<delta>e__FixedBuffer StbImageSharp.StbImage/stbi__huffman::delta
	U3CdeltaU3Ee__FixedBuffer_t39D2B6970ECDC446C812EC974927FD97AF2FB121 ___delta_5;
};

// StbImageSharp.StbImage/stbi__zhuffman
struct stbi__zhuffman_tEF89BE72EF0A393157143301325CF80E399CB2FB 
{
	// StbImageSharp.StbImage/stbi__zhuffman/<fast>e__FixedBuffer StbImageSharp.StbImage/stbi__zhuffman::fast
	U3CfastU3Ee__FixedBuffer_t8CE924348EA9C6FB362EBA8410C3700B92FB67CF ___fast_0;
	// StbImageSharp.StbImage/stbi__zhuffman/<firstcode>e__FixedBuffer StbImageSharp.StbImage/stbi__zhuffman::firstcode
	U3CfirstcodeU3Ee__FixedBuffer_tF9DEE623EA719A686FB3E2E10A8823D7B7AC8CDD ___firstcode_1;
	// StbImageSharp.StbImage/stbi__zhuffman/<maxcode>e__FixedBuffer StbImageSharp.StbImage/stbi__zhuffman::maxcode
	U3CmaxcodeU3Ee__FixedBuffer_t2932FF58F62E5681C9E6FFE335588BD39A835813 ___maxcode_2;
	// StbImageSharp.StbImage/stbi__zhuffman/<firstsymbol>e__FixedBuffer StbImageSharp.StbImage/stbi__zhuffman::firstsymbol
	U3CfirstsymbolU3Ee__FixedBuffer_t58B227FFA8178B8B4F1A1A40182F7EA1043F5BC9 ___firstsymbol_3;
	// StbImageSharp.StbImage/stbi__zhuffman/<size>e__FixedBuffer StbImageSharp.StbImage/stbi__zhuffman::size
	U3CsizeU3Ee__FixedBuffer_tA5EED7AAFF5C987DEA58EF2BCB603173B5933796 ___size_4;
	// StbImageSharp.StbImage/stbi__zhuffman/<value>e__FixedBuffer StbImageSharp.StbImage/stbi__zhuffman::value
	U3CvalueU3Ee__FixedBuffer_t2648F8501F6C9C6C98680C65D3683DC2E8A22269 ___value_5;
};

// Hebron.Runtime.UnsafeArray1D`1<System.Int32>
struct UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933  : public RuntimeObject
{
	// T[] Hebron.Runtime.UnsafeArray1D`1::_data
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____data_0;
	// System.Runtime.InteropServices.GCHandle Hebron.Runtime.UnsafeArray1D`1::_pinHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____pinHandle_1;
};

// Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__gif_lzw>
struct UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE  : public RuntimeObject
{
	// T[] Hebron.Runtime.UnsafeArray1D`1::_data
	stbi__gif_lzwU5BU5D_tB5A2B5B4D4201620767C50C204468DF525E515EA* ____data_0;
	// System.Runtime.InteropServices.GCHandle Hebron.Runtime.UnsafeArray1D`1::_pinHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____pinHandle_1;
};

// Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__huffman>
struct UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA  : public RuntimeObject
{
	// T[] Hebron.Runtime.UnsafeArray1D`1::_data
	stbi__huffmanU5BU5D_tE287877D7CE84F85179E8AC62EBBEEF8C5018D7D* ____data_0;
	// System.Runtime.InteropServices.GCHandle Hebron.Runtime.UnsafeArray1D`1::_pinHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____pinHandle_1;
};

// Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__jpeg/unnamed1>
struct UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A  : public RuntimeObject
{
	// T[] Hebron.Runtime.UnsafeArray1D`1::_data
	unnamed1U5BU5D_t2B4E41863CB26AD2BBF0696E3942CC235C404500* ____data_0;
	// System.Runtime.InteropServices.GCHandle Hebron.Runtime.UnsafeArray1D`1::_pinHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____pinHandle_1;
};

// Hebron.Runtime.UnsafeArray2D`1<System.Byte>
struct UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4  : public RuntimeObject
{
	// Hebron.Runtime.UnsafeArray1D`1<T>[] Hebron.Runtime.UnsafeArray2D`1::_data
	UnsafeArray1D_1U5BU5D_t220DC4C289564FBE7D184AE542EB9E05B037BC66* ____data_0;
	// System.IntPtr[] Hebron.Runtime.UnsafeArray2D`1::_pinAddresses
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ____pinAddresses_1;
	// System.Runtime.InteropServices.GCHandle Hebron.Runtime.UnsafeArray2D`1::_pinAddressesHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____pinAddressesHandle_2;
};

// Hebron.Runtime.UnsafeArray2D`1<System.Int16>
struct UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794  : public RuntimeObject
{
	// Hebron.Runtime.UnsafeArray1D`1<T>[] Hebron.Runtime.UnsafeArray2D`1::_data
	UnsafeArray1D_1U5BU5D_t0821AF1CF7518A71162EF4994FBEC614A035B3A7* ____data_0;
	// System.IntPtr[] Hebron.Runtime.UnsafeArray2D`1::_pinAddresses
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ____pinAddresses_1;
	// System.Runtime.InteropServices.GCHandle Hebron.Runtime.UnsafeArray2D`1::_pinAddressesHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____pinAddressesHandle_2;
};

// Hebron.Runtime.UnsafeArray2D`1<System.UInt16>
struct UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF  : public RuntimeObject
{
	// Hebron.Runtime.UnsafeArray1D`1<T>[] Hebron.Runtime.UnsafeArray2D`1::_data
	UnsafeArray1D_1U5BU5D_t4748D8DC93DBE63F9BDD18376ADC4866F956E9D9* ____data_0;
	// System.IntPtr[] Hebron.Runtime.UnsafeArray2D`1::_pinAddresses
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ____pinAddresses_1;
	// System.Runtime.InteropServices.GCHandle Hebron.Runtime.UnsafeArray2D`1::_pinAddressesHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ____pinAddressesHandle_2;
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

// StbImageSharp.StbImage/stbi__zbuf
struct stbi__zbuf_t58A44F2C744098B756F442EEDE650373216F9350 
{
	// System.Byte* StbImageSharp.StbImage/stbi__zbuf::zbuffer
	uint8_t* ___zbuffer_0;
	// System.Byte* StbImageSharp.StbImage/stbi__zbuf::zbuffer_end
	uint8_t* ___zbuffer_end_1;
	// System.Int32 StbImageSharp.StbImage/stbi__zbuf::num_bits
	int32_t ___num_bits_2;
	// System.UInt32 StbImageSharp.StbImage/stbi__zbuf::code_buffer
	uint32_t ___code_buffer_3;
	// System.SByte* StbImageSharp.StbImage/stbi__zbuf::zout
	int8_t* ___zout_4;
	// System.SByte* StbImageSharp.StbImage/stbi__zbuf::zout_start
	int8_t* ___zout_start_5;
	// System.SByte* StbImageSharp.StbImage/stbi__zbuf::zout_end
	int8_t* ___zout_end_6;
	// System.Int32 StbImageSharp.StbImage/stbi__zbuf::z_expandable
	int32_t ___z_expandable_7;
	// StbImageSharp.StbImage/stbi__zhuffman StbImageSharp.StbImage/stbi__zbuf::z_length
	stbi__zhuffman_tEF89BE72EF0A393157143301325CF80E399CB2FB ___z_length_8;
	// StbImageSharp.StbImage/stbi__zhuffman StbImageSharp.StbImage/stbi__zbuf::z_distance
	stbi__zhuffman_tEF89BE72EF0A393157143301325CF80E399CB2FB ___z_distance_9;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// StbImageSharp.StbImage/delegate0
struct delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9  : public MulticastDelegate_t
{
};

// StbImageSharp.StbImage/delegate1
struct delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42  : public MulticastDelegate_t
{
};

// StbImageSharp.StbImage/delegate2
struct delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
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
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
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
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
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


// System.Void System.Nullable`1<StbImageSharp.ImageInfo>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m2290BB1875E64452A7C9959B7E71F75E5B39F701_gshared (Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A* __this, ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C ___value0, const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__gif_lzw>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeArray1D_1__ctor_m75FD4AC5FDF39ECCC52B84F34324B535D1455001_gshared (UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE* __this, int32_t ___size0, const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.UnsafeArray2D`1<System.Byte>::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeArray2D_1__ctor_m3A58CFC7D1EED7D3D5087499656F8833CB720624_gshared (UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4* __this, int32_t ___size10, int32_t ___size21, const RuntimeMethod* method) ;
// System.Void* Hebron.Runtime.UnsafeArray2D`1<System.Byte>::op_Implicit(Hebron.Runtime.UnsafeArray2D`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeArray2D_1_op_Implicit_m9C7B1989C81845401B0660019E9F33460E6A7EC3_gshared (UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4* ___array0, const RuntimeMethod* method) ;
// System.Void* Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__gif_lzw>::op_Implicit(Hebron.Runtime.UnsafeArray1D`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeArray1D_1_op_Implicit_m3C6E8A65A09DC199AAB09D86CB8D1E571960DEFC_gshared (UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE* ___array0, const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.UnsafeArray2D`1<System.UInt16>::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeArray2D_1__ctor_m5ED6464C063FDB0E310BC0AC417ACCE4B08D7A41_gshared (UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF* __this, int32_t ___size10, int32_t ___size21, const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.UnsafeArray2D`1<System.Int16>::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeArray2D_1__ctor_m4B656CBF9E31CBD022740B8F979CE85FDBE33B20_gshared (UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794* __this, int32_t ___size10, int32_t ___size21, const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__huffman>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeArray1D_1__ctor_m80391CAC93DAF529FDA5AC99D18457B15FD0007B_gshared (UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA* __this, int32_t ___size0, const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__jpeg/unnamed1>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeArray1D_1__ctor_m742DAE97CC04FF2A5C951005E7E1DEAE976FD4B1_gshared (UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A* __this, int32_t ___size0, const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.UnsafeArray1D`1<System.Int32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeArray1D_1__ctor_mF515A01BB21FA30A4F292F4417C31C5E8B88F46E_gshared (UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933* __this, int32_t ___size0, const RuntimeMethod* method) ;
// System.Void* Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__huffman>::op_Implicit(Hebron.Runtime.UnsafeArray1D`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeArray1D_1_op_Implicit_m3953EBEAB1CAF26B950DBB41269ECA873EAC93D0_gshared (UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA* ___array0, const RuntimeMethod* method) ;
// System.Void* Hebron.Runtime.UnsafeArray2D`1<System.UInt16>::op_Implicit(Hebron.Runtime.UnsafeArray2D`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeArray2D_1_op_Implicit_m2371B12B5957DF0D3A54AF1CAE6608F1C9F2106B_gshared (UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF* ___array0, const RuntimeMethod* method) ;
// System.Void* Hebron.Runtime.UnsafeArray2D`1<System.Int16>::op_Implicit(Hebron.Runtime.UnsafeArray2D`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeArray2D_1_op_Implicit_mC5C089568D8BDF3C1377060081B48C7F3DEDF9D0_gshared (UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794* ___array0, const RuntimeMethod* method) ;
// System.Void* Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__jpeg/unnamed1>::op_Implicit(Hebron.Runtime.UnsafeArray1D`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeArray1D_1_op_Implicit_mC0306D7987021F342456F05565A07CFB3377FB38_gshared (UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A* ___array0, const RuntimeMethod* method) ;
// System.Void* Hebron.Runtime.UnsafeArray1D`1<System.Int32>::op_Implicit(Hebron.Runtime.UnsafeArray1D`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeArray1D_1_op_Implicit_mFBA6F467B8CC0C2F8C27331728FDA1FED5C3B71C_gshared (UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933* ___array0, const RuntimeMethod* method) ;

// System.Void* Hebron.Runtime.CRuntime::malloc(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* CRuntime_malloc_m1D37A28104A0AFEA14E19DB6364346E8A74335C8 (int64_t ___size0, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_m0187620AAB78B85416CE4C948B60B6A76CA84CAC (int32_t ___cb0, const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.MemoryStats::Allocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStats_Allocated_mD4CFF1409F99B4EC43CBC35500EC9D86A17C6D94 (const RuntimeMethod* method) ;
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m691596E1E19CB74918F8FF871A05E4BE80748BCC (intptr_t ___hglobal0, const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.MemoryStats::Freed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStats_Freed_m4FB484312EE8C6EF3C111FF37F8BC45460BDB961 (const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.CRuntime::memcpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRuntime_memcpy_m212729CE68BA4B8A4725A60D309835D9BD16A1FA (void* ___a0, void* ___b1, int64_t ___size2, const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.CRuntime::free(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRuntime_free_m8FA48AB801FF409B2315672BC46B4C2F879129B3 (void* ___a0, const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.CRuntime::memmove(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRuntime_memmove_m9DF03CA5E6BA63D4569E1DC052542284163378CF (void* ___a0, void* ___b1, int64_t ___size2, const RuntimeMethod* method) ;
// System.Int32 Hebron.Runtime.CRuntime::memcmp(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CRuntime_memcmp_mE3171FB76913C99BDA3477A4210E7F27EA662650 (void* ___a0, void* ___b1, int64_t ___size2, const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.CRuntime::memset(System.Void*,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRuntime_memset_mC08ED16412EE97BBF545EBFD533ED0A05FDFD19D (void* ___ptr0, int32_t ___value1, int64_t ___size2, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC (intptr_t* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::ReAllocHGlobal(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_ReAllocHGlobal_m903B07B988C5FED03A8F1887C5F7E9538B24BF77 (intptr_t ___pv0, intptr_t ___cb1, const RuntimeMethod* method) ;
// System.Void* Hebron.Runtime.CRuntime::realloc(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* CRuntime_realloc_m2FFAABB21159681238948B584B4012EB41F55B9C (void* ___a0, int64_t ___newSize1, const RuntimeMethod* method) ;
// System.Double System.Math::Pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3 (double ___x0, double ___y1, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m7AC68EC482A6AFD97BCEFABA0FD45D203F3EA2E1 (int32_t* ___location0, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::Decrement(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Decrement_mFACC375A9985A7E1A3473EECE768B1D2ECB8CEF5 (int32_t* ___location0, const RuntimeMethod* method) ;
// SystemHalf.Half SystemHalf.HalfHelper::SingleToHalf(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 HalfHelper_SingleToHalf_m6F45AF259006445DFBF3D8B176547D1539AA7620 (float ___single0, const RuntimeMethod* method) ;
// System.Void SystemHalf.Half::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void SystemHalf.Half::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__ctor_m42D93709E720FF28A18018A0CCEA6D6EFF3F6216 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void SystemHalf.Half::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__ctor_mC827819362E6EEF8763C6C3A74D479727CED4FF8 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void SystemHalf.Half::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__ctor_mF7BDDCB57D11ABBD813D5E8FD90C45723E4B369D (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, double ___value0, const RuntimeMethod* method) ;
// System.Single System.Decimal::op_Explicit(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Decimal_op_Explicit_m52A93EB0AC4766C64D68DB6947D9D2770EFE8A93 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// System.Void SystemHalf.Half::.ctor(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__ctor_m21050D141F9162158AADB10D10F9E6FBED8B9F56 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// System.Void SystemHalf.Half::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__ctor_mFD542200F7DDC2FF929D0D3480BA36452598F02B (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void SystemHalf.Half::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__ctor_m87ABACCF15B2639C42FBFBB6E7875565BC45DCC7 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, uint64_t ___value0, const RuntimeMethod* method) ;
// SystemHalf.Half SystemHalf.Half::op_UnaryNegation(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_UnaryNegation_mF21A4AA6BF4CB2FA63E980B93E66A6C6B8366A73 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half0, const RuntimeMethod* method) ;
// SystemHalf.Half SystemHalf.Half::op_Addition(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Addition_mAB163F285F3958A9A205BF18AE9CF9AAD5158A16 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half10, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half21, const RuntimeMethod* method) ;
// SystemHalf.Half SystemHalf.Half::op_Subtraction(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Subtraction_m2DDAEBB1F4B3DEE10F04427D508EC2AD5625A487 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half10, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half21, const RuntimeMethod* method) ;
// SystemHalf.Half SystemHalf.Half::op_Multiply(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Multiply_m1EE0F408852D1875C6BD77AA69C5868DAA150B7F (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half10, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half21, const RuntimeMethod* method) ;
// SystemHalf.Half SystemHalf.Half::op_Division(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Division_m5790E5D2B177AFD371899A98694E8BD9221DDD89 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half10, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half21, const RuntimeMethod* method) ;
// SystemHalf.Half SystemHalf.HalfHelper::Negate(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 HalfHelper_Negate_m002DA8925677B546673FAAF4238EF75E34D4AD03 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half0, const RuntimeMethod* method) ;
// System.Single SystemHalf.Half::op_Implicit(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___value0, const RuntimeMethod* method) ;
// SystemHalf.Half SystemHalf.Half::op_Explicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Explicit_mE148CF97345B98800B4B3600AC7CAB13803C6DDB (float ___value0, const RuntimeMethod* method) ;
// System.Boolean SystemHalf.Half::IsNaN(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_IsNaN_m74BFF0D2D2F251CF9CECC995A3A254F3FD2A0601 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half0, const RuntimeMethod* method) ;
// System.Boolean SystemHalf.Half::op_Equality(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_op_Equality_m9BC44DA84FA23C67752B9B93B1717E2C04750781 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half10, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half21, const RuntimeMethod* method) ;
// System.Boolean SystemHalf.Half::op_LessThan(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_op_LessThan_mCF5FB8EAB4CBA21D70EED460787BF6C894A8C010 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half10, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half21, const RuntimeMethod* method) ;
// System.Boolean SystemHalf.Half::op_GreaterThan(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_op_GreaterThan_mF44542A676272B3F343F0BCE226F1772161A31E2 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half10, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half21, const RuntimeMethod* method) ;
// System.Single SystemHalf.HalfHelper::HalfToSingle(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HalfHelper_HalfToSingle_m6E455DD1F0F2DD2080982041A8ABA3DA8FCDC444 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half0, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::op_Explicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Explicit_mDF02276E12CC6D2D0285A8D0843ACA0743F42DEC (float ___value0, const RuntimeMethod* method) ;
// System.Boolean SystemHalf.Half::op_Inequality(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_op_Inequality_m55445119E84F7821089F98E610A9281A685425B8 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half10, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half21, const RuntimeMethod* method) ;
// System.Int32 SystemHalf.Half::CompareTo(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Half_CompareTo_m15EFD81A7DC0E77F9B0B2B5E7FF6C43EF69FBDB4 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___other0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 SystemHalf.Half::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Half_CompareTo_m9EC79B9359AD9C276FA4F1850C015053F486058F (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean SystemHalf.Half::Equals(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_Equals_mC9CCB515A296CB1D66CFCEF7BB5A6E0EFD149934 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___other0, const RuntimeMethod* method) ;
// System.Boolean SystemHalf.Half::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_Equals_m6102C810AA7FC6A7281E1BB4C5020FDA8128021F (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.UInt16::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200 (uint16_t* __this, const RuntimeMethod* method) ;
// System.Int32 SystemHalf.Half::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Half_GetHashCode_m97AF96A3B63244D97C77F076FD9E6A92AE6907BB (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, const RuntimeMethod* method) ;
// System.TypeCode SystemHalf.Half::GetTypeCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Half_GetTypeCode_m9226F693B79A65F7D0E71022B3EE1178D92E59A6 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m1B3C2C0E976C781ACD76AFA80DDBCA844FC73D50 (uint16_t ___value0, const RuntimeMethod* method) ;
// System.Int16 System.BitConverter::ToInt16(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t BitConverter_ToInt16_mC4F4FF7F02DC025F64047372BD5B25540F3EFC62 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// SystemHalf.Half SystemHalf.Half::ToHalf(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_ToHalf_m7810D39A49E30675CD941CF4804FEBBDB11F1F01 (uint16_t ___bits0, const RuntimeMethod* method) ;
// SystemHalf.Half SystemHalf.Half::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Implicit_m09D97D41D9F91A60BB63EFA3715C9926209C9118 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.ArithmeticException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* __this, String_t* ___message0, const RuntimeMethod* method) ;
// SystemHalf.Half SystemHalf.HalfHelper::Abs(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 HalfHelper_Abs_m6BC55ACC445204854A9BEF6E45B30893F01D33C6 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half0, const RuntimeMethod* method) ;
// System.Boolean SystemHalf.HalfHelper::IsNaN(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HalfHelper_IsNaN_mF448A3F9B6274AB5E93D0A0DA250F78B9984A723 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half0, const RuntimeMethod* method) ;
// System.Boolean SystemHalf.HalfHelper::IsInfinity(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HalfHelper_IsInfinity_m68217EAC90890E34BDF741A2E30A250C2CAA6DC0 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half0, const RuntimeMethod* method) ;
// System.Boolean SystemHalf.HalfHelper::IsNegativeInfinity(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HalfHelper_IsNegativeInfinity_mEAE6631053BDA05C10C9C911737CB6DA09F69C1B (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half0, const RuntimeMethod* method) ;
// System.Boolean SystemHalf.HalfHelper::IsPositiveInfinity(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HalfHelper_IsPositiveInfinity_mB0C4E459BAB72036708647B2993A8E5CC80F571F (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m4CCF536F9DA447D8822618DF5C6F8F31494B2909 (String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_mE704971BEA03C08E6259D9CA407E2FB3126A7CBB (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_mF23E88B4B12DDC9E82179BB2483A714005BF006F (String_t* ___s0, float* ___result1, const RuntimeMethod* method) ;
// System.Boolean System.Single::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_TryParse_m5920BF3A60EE1FFF0CC117021B4BF2A8114D1AE5 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, float* ___result3, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A (float* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.String SystemHalf.Half::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Half_ToString_m0CB28AA1DCE2AB4791737E91B44AFDD23FBF5C36 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, const RuntimeMethod* method) ;
// System.String SystemHalf.Half::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Half_ToString_m42492412EEE4F705FE92EFF98EE649CC38898F5A (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___formatProvider0, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE (float* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String SystemHalf.Half::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Half_ToString_mADF7D744A0E1338340A9E419DC7DDE852229B745 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String SystemHalf.Half::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Half_ToString_m532C547BE12E95051DCEF6BB20B124C106A966F6 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method) ;
// System.Single SystemHalf.Half::System.IConvertible.ToSingle(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Half_System_IConvertible_ToSingle_m72E1B1C02CD516A3943432B4627D169E8D59FCFD (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.TypeCode SystemHalf.Half::System.IConvertible.GetTypeCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Half_System_IConvertible_GetTypeCode_mD5A24F94E878C4D00F8663E17FB8ADB9D2A0CA6F (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, const RuntimeMethod* method) ;
// System.Boolean System.Convert::ToBoolean(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m01AE93C9571553886F8D3D4BCA3F196543BFDCF5 (float ___value0, const RuntimeMethod* method) ;
// System.Boolean SystemHalf.Half::System.IConvertible.ToBoolean(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_System_IConvertible_ToBoolean_m0684211BEBB80C8D844A264FF01084882940922C (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Byte System.Convert::ToByte(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_m60F8CC270B21C2E3240358EA9B8C047AF38D0C04 (float ___value0, const RuntimeMethod* method) ;
// System.Byte SystemHalf.Half::System.IConvertible.ToByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Half_System_IConvertible_ToByte_mBA58E1812B8418EF6B7D595873E32C35E6FAAB9A (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522 (const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mBFACD7FE8657957CE3D5DA54D519AB418AF421E7 (RuntimeObject* ___provider0, String_t* ___format1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, const RuntimeMethod* method) ;
// System.Void System.InvalidCastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Char SystemHalf.Half::System.IConvertible.ToChar(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Half_System_IConvertible_ToChar_m7511F58D164EE1F5BEECDEAC63D7746DC7933A92 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.DateTime SystemHalf.Half::System.IConvertible.ToDateTime(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Half_System_IConvertible_ToDateTime_mF0C63EC935FD9BF89F21636569F73F046BC729AB (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Decimal System.Convert::ToDecimal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Convert_ToDecimal_mE83AAEACF12411461A6A3F416159DD72A5BEAE8F (float ___value0, const RuntimeMethod* method) ;
// System.Decimal SystemHalf.Half::System.IConvertible.ToDecimal(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Half_System_IConvertible_ToDecimal_mEFA406DE223C584C875D3EDBF30891EDD5DC3ED2 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Double System.Convert::ToDouble(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_mE672A65932178209D542208DC039186F245DFFDB (float ___value0, const RuntimeMethod* method) ;
// System.Double SystemHalf.Half::System.IConvertible.ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Half_System_IConvertible_ToDouble_m39C375E4CCA5796DA51C6E7023FA514DD796782A (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Int16 System.Convert::ToInt16(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Convert_ToInt16_m53A1CC835CA09C6426C3A52455A14CAC8B5492E3 (float ___value0, const RuntimeMethod* method) ;
// System.Int16 SystemHalf.Half::System.IConvertible.ToInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Half_System_IConvertible_ToInt16_m466A656BEFA1BC3670BC0E3BBC75D3058AC016A0 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mB82C6718759AA55BAF2C824661EB28AAD2F933FB (float ___value0, const RuntimeMethod* method) ;
// System.Int32 SystemHalf.Half::System.IConvertible.ToInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Half_System_IConvertible_ToInt32_m752FB024CC8958029FE914A9D81A1BFC7FB49801 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Int64 System.Convert::ToInt64(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_m30133C834300465D004C70C55EE4186C8F87D746 (float ___value0, const RuntimeMethod* method) ;
// System.Int64 SystemHalf.Half::System.IConvertible.ToInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Half_System_IConvertible_ToInt64_m0215CD02A2D56FBCA38F97760CC0C0DB55CEF4A2 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.SByte System.Convert::ToSByte(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t Convert_ToSByte_mBF1AD282D68CDD29A8D16C0D1BF8F04D6144F171 (float ___value0, const RuntimeMethod* method) ;
// System.SByte SystemHalf.Half::System.IConvertible.ToSByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t Half_System_IConvertible_ToSByte_m68A9196F2CFB9C1EC01347EB9E9A233705CE01C8 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Single,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m3D127B73DDF5962DEAE9B3A8CD9204C49D096AA4 (float ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String SystemHalf.Half::System.IConvertible.ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Half_System_IConvertible_ToString_m6C4211CDF08BF30788A1D3ADB2ED4AD6DB69EBE9 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.Object System.Single::System.IConvertible.ToType(System.Type,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Single_System_IConvertible_ToType_m52014373BE33664D69CB4F797F0A78120267EC72 (float* __this, Type_t* ___type0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Object SystemHalf.Half::System.IConvertible.ToType(System.Type,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Half_System_IConvertible_ToType_m4EAC816C1ACF3317374B33EA7FC4D00CE4980DCD (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, Type_t* ___conversionType0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.UInt16 System.Convert::ToUInt16(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Convert_ToUInt16_mE54C6FD60D85443ED00A3C76BCB5B548D3153B28 (float ___value0, const RuntimeMethod* method) ;
// System.UInt16 SystemHalf.Half::System.IConvertible.ToUInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Half_System_IConvertible_ToUInt16_mF668A08151EFBAFF13F2019B4077F8081FCC09D5 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.UInt32 System.Convert::ToUInt32(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_mFC6BAA30116D13A122FEA73FBC8CF5C722C92327 (float ___value0, const RuntimeMethod* method) ;
// System.UInt32 SystemHalf.Half::System.IConvertible.ToUInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Half_System_IConvertible_ToUInt32_mAF3B5AB239A3C778225747FB4C7BA0F78B3C9A93 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.UInt64 System.Convert::ToUInt64(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_mD1F441A212C758877A6F3D8A8B2DD5C35EB9873D (float ___value0, const RuntimeMethod* method) ;
// System.UInt64 SystemHalf.Half::System.IConvertible.ToUInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Half_System_IConvertible_ToUInt64_m05B76C8955DAB709F5560CEBEDF487C8F8128D51 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.UInt32 SystemHalf.HalfHelper::ConvertMantissa(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t HalfHelper_ConvertMantissa_mC1E944AB304077C33D5C92EF1B1711F4D9A709FF (int32_t ___i0, const RuntimeMethod* method) ;
// System.UInt32[] SystemHalf.HalfHelper::GenerateMantissaTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* HalfHelper_GenerateMantissaTable_m6B72ABB600DC7179B6E95862F78F9778E70F73C6 (const RuntimeMethod* method) ;
// System.UInt32[] SystemHalf.HalfHelper::GenerateExponentTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* HalfHelper_GenerateExponentTable_m2E62C47F8DDEE187B843B366C5062270C8A1A138 (const RuntimeMethod* method) ;
// System.UInt16[] SystemHalf.HalfHelper::GenerateOffsetTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* HalfHelper_GenerateOffsetTable_m1DE9E459F5A6EBD018F672D354AFD4A63462CE68 (const RuntimeMethod* method) ;
// System.UInt16[] SystemHalf.HalfHelper::GenerateBaseTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* HalfHelper_GenerateBaseTable_mE546FB41DA48579901177C0D89A16D587F85D6DE (const RuntimeMethod* method) ;
// System.SByte[] SystemHalf.HalfHelper::GenerateShiftTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* HalfHelper_GenerateShiftTable_m210255C812AD58F5297B090613979D46DFFD8CF7 (const RuntimeMethod* method) ;
// System.Void StbImageSharp.ImageResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResult__ctor_mB265989B8E23404BCA3EC4E208A049E1B46B0F04 (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void StbImageSharp.StbImage/stbi__context::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stbi__context__ctor_mC829A0366DACB27129BF977D4B90B9C2326DD40F (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Int32 StbImageSharp.StbImage::stbi__gif_test(StbImageSharp.StbImage/stbi__context)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StbImage_stbi__gif_test_m0F1BA8079B15A05AEDC4FBE6ECA650E8B2C30078 (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* ___s0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void StbImageSharp.StbImage/stbi__gif::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stbi__gif__ctor_m4655A211D1448DD7C627AE3FA6DF636BD969DEEB (stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* __this, const RuntimeMethod* method) ;
// StbImageSharp.AnimatedFrameResult StbImageSharp.AnimatedGifEnumerator::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* AnimatedGifEnumerator_get_Current_m3F989155257B9081EF47BB9C2FBDE89B11B32345_inline (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// StbImageSharp.ColorComponents StbImageSharp.AnimatedGifEnumerator::get_ColorComponents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AnimatedGifEnumerator_get_ColorComponents_m59C0A0CF32749D8E565EAFC8CC201C07C53FB44C_inline (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, const RuntimeMethod* method) ;
// System.Byte* StbImageSharp.StbImage::stbi__gif_load_next(StbImageSharp.StbImage/stbi__context,StbImageSharp.StbImage/stbi__gif,System.Int32*,System.Int32,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* StbImage_stbi__gif_load_next_mDC8F01A3394A45278C4E50153DFF769641DB124B (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* ___s0, stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* ___g1, int32_t* ___comp2, int32_t ___req_comp3, uint8_t* ___two_back4, const RuntimeMethod* method) ;
// System.Void StbImageSharp.AnimatedFrameResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedFrameResult__ctor_m859CA547496DD297E7912AF87480551047370B88 (AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* __this, const RuntimeMethod* method) ;
// System.Void StbImageSharp.ImageResult::set_Width(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResult_set_Width_mAE0222CF14D7CC542BE55D499D08D8B124E788E3_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void StbImageSharp.ImageResult::set_Height(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResult_set_Height_mD2E85A00BF8528F1DE5FC68CBF5FC3DD43DCD603_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void StbImageSharp.ImageResult::set_SourceComp(StbImageSharp.ColorComponents)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResult_set_SourceComp_m99F6BE4EDDAE7B80B3F316737EE9B401DDED9F0F_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void StbImageSharp.ImageResult::set_Comp(StbImageSharp.ColorComponents)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResult_set_Comp_m9EEB51B4B3BEC210CCD4ED65708867686E65175D_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void StbImageSharp.AnimatedGifEnumerator::set_Current(StbImageSharp.AnimatedFrameResult)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnimatedGifEnumerator_set_Current_mA895B21FF85EBAF2D6508A2C066E57DE8D3B69DF_inline (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* ___value0, const RuntimeMethod* method) ;
// System.Int32 StbImageSharp.ImageResult::get_Width()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ImageResult_get_Width_m6D3AB29E93FBE44C3F43B97D2D8DD5CDA8291270_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) ;
// System.Int32 StbImageSharp.ImageResult::get_Height()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ImageResult_get_Height_m987C76BE62465224C54F30712169C963063BF7C9_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) ;
// StbImageSharp.ColorComponents StbImageSharp.ImageResult::get_Comp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ImageResult_get_Comp_mDA76ABF7DFEB671E6A506B45B110CCD516FD7A8F_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) ;
// System.Void StbImageSharp.ImageResult::set_Data(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResult_set_Data_m1DF0EE05A3AD847A12C8AE138B21E9FA5969FAA3_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.Void StbImageSharp.AnimatedFrameResult::set_DelayInMs(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnimatedFrameResult_set_DelayInMs_mEC055DC8715FC67099CC3974B3981175C8B0535B_inline (AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Byte[] StbImageSharp.ImageResult::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageResult_get_Data_mBD84D1E6BD45AC125145D245EAD933D2B8E51D4B_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m92700C9E60BAB2FDAF6CE02C16EFE9DCB7D6035E (intptr_t ___source0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// StbImageSharp.ColorComponents StbImageSharp.AnimatedGifEnumerable::get_ColorComponents()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AnimatedGifEnumerable_get_ColorComponents_mF90D6769F0A2C038057D86AAF7FACA7482A12CBB_inline (AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E* __this, const RuntimeMethod* method) ;
// System.Void StbImageSharp.AnimatedGifEnumerator::.ctor(System.IO.Stream,StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedGifEnumerator__ctor_m426872B178B1C6F692C3C12ACE4FCB23BE2EACB4 (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, int32_t ___colorComponents1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<StbImageSharp.AnimatedFrameResult> StbImageSharp.AnimatedGifEnumerable::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnimatedGifEnumerable_GetEnumerator_mE25641822012E135FE60531275CF98DA367A8952 (AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E* __this, const RuntimeMethod* method) ;
// System.Int32 StbImageSharp.StbImage::stbi__is_16_main(StbImageSharp.StbImage/stbi__context)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StbImage_stbi__is_16_main_mBFDEAA168B924831ED4517F73BCD14FD682BBEA9 (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* ___s0, const RuntimeMethod* method) ;
// System.Void StbImageSharp.StbImage::stbi__rewind(StbImageSharp.StbImage/stbi__context)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StbImage_stbi__rewind_m046A3C2D9136B0B63F3B6ED5EC7312031E7039D8 (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* ___s0, const RuntimeMethod* method) ;
// System.Int32 StbImageSharp.StbImage::stbi__info_main(StbImageSharp.StbImage/stbi__context,System.Int32*,System.Int32*,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StbImage_stbi__info_main_mB0784F4CD8A5008019ED403B28F708E5D2D2828F (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* ___s0, int32_t* ___x1, int32_t* ___y2, int32_t* ___comp3, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<StbImageSharp.ImageInfo>::.ctor(T)
inline void Nullable_1__ctor_m2290BB1875E64452A7C9959B7E71F75E5B39F701 (Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A* __this, ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A*, ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C, const RuntimeMethod*))Nullable_1__ctor_m2290BB1875E64452A7C9959B7E71F75E5B39F701_gshared)(__this, ___value0, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Byte* StbImageSharp.StbImage::stbi__load_and_postprocess_8bit(StbImageSharp.StbImage/stbi__context,System.Int32*,System.Int32*,System.Int32*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* StbImage_stbi__load_and_postprocess_8bit_m1CA31289D60455B35EDB41E8CE3CD6CE3F59B39D (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* ___s0, int32_t* ___x1, int32_t* ___y2, int32_t* ___comp3, int32_t ___req_comp4, const RuntimeMethod* method) ;
// StbImageSharp.ImageResult StbImageSharp.ImageResult::FromResult(System.Byte*,System.Int32,System.Int32,StbImageSharp.ColorComponents,StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* ImageResult_FromResult_mC0E37192B7934A165DD767CAE3D1B13D4D52E5D0 (uint8_t* ___result0, int32_t ___width1, int32_t ___height2, int32_t ___comp3, int32_t ___req_comp4, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// StbImageSharp.ImageResult StbImageSharp.ImageResult::FromStream(System.IO.Stream,StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* ImageResult_FromStream_m519EBBDF149FE16DDF193706EE81D3A597D69FBA (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___requiredComponents1, const RuntimeMethod* method) ;
// System.Void StbImageSharp.AnimatedGifEnumerable::.ctor(System.IO.Stream,StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedGifEnumerable__ctor_m2E24AD10C34007EBA587FA263F8F0409357A7E65 (AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, int32_t ___colorComponents1, const RuntimeMethod* method) ;
// System.Void StbImageSharp.ImageResultFloat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResultFloat__ctor_m95C5AABA1DA68A09A339620E529C78ACCE296027 (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, const RuntimeMethod* method) ;
// System.Void StbImageSharp.ImageResultFloat::set_Width(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResultFloat_set_Width_mD6D7B7CCB2105CCCF379F6F00C440FFC9D46F813_inline (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void StbImageSharp.ImageResultFloat::set_Height(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResultFloat_set_Height_mB942BDF6BA0F6B439BF40B601D7082FC031F3B06_inline (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void StbImageSharp.ImageResultFloat::set_SourceComp(StbImageSharp.ColorComponents)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResultFloat_set_SourceComp_mD18490D71AE38A87CBC39C2B362414F497B3BFDF_inline (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void StbImageSharp.ImageResultFloat::set_Comp(StbImageSharp.ColorComponents)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResultFloat_set_Comp_m7AA2FA993B26946D1DFACB9FB23949268C880D23_inline (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, int32_t ___value0, const RuntimeMethod* method) ;
// StbImageSharp.ColorComponents StbImageSharp.ImageResultFloat::get_Comp()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ImageResultFloat_get_Comp_m26180735352821C006D877A7FB0077DF0C17929C_inline (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, const RuntimeMethod* method) ;
// System.Void StbImageSharp.ImageResultFloat::set_Data(System.Single[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResultFloat_set_Data_m1DB0F811837EE95469ECEF694DA5D9EE92193985_inline (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___value0, const RuntimeMethod* method) ;
// System.Single[] StbImageSharp.ImageResultFloat::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ImageResultFloat_get_Data_mF28ABD57A9CEB2A9169DD257AB9A8C98280E6372_inline (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Single[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mED12872ADB0728AB4C518D76DB18964C4F3D4F7A (intptr_t ___source0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Single* StbImageSharp.StbImage::stbi__loadf_main(StbImageSharp.StbImage/stbi__context,System.Int32*,System.Int32*,System.Int32*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float* StbImage_stbi__loadf_main_mD559B89A021A7C0611A2F92C900E2473662887F9 (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* ___s0, int32_t* ___x1, int32_t* ___y2, int32_t* ___comp3, int32_t ___req_comp4, const RuntimeMethod* method) ;
// StbImageSharp.ImageResultFloat StbImageSharp.ImageResultFloat::FromResult(System.Single*,System.Int32,System.Int32,StbImageSharp.ColorComponents,StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* ImageResultFloat_FromResult_m1BF48A9D5006184C2173CFD49EAB6781D2802FD4 (float* ___result0, int32_t ___width1, int32_t ___height2, int32_t ___comp3, int32_t ___req_comp4, const RuntimeMethod* method) ;
// StbImageSharp.ImageResultFloat StbImageSharp.ImageResultFloat::FromStream(System.IO.Stream,StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* ImageResultFloat_FromStream_m7ABD58C0251315DDD712DAA40D9E509CFD38B11F (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___requiredComponents1, const RuntimeMethod* method) ;
// System.Void Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__gif_lzw>::.ctor(System.Int32)
inline void UnsafeArray1D_1__ctor_m75FD4AC5FDF39ECCC52B84F34324B535D1455001 (UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE* __this, int32_t ___size0, const RuntimeMethod* method)
{
	((  void (*) (UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE*, int32_t, const RuntimeMethod*))UnsafeArray1D_1__ctor_m75FD4AC5FDF39ECCC52B84F34324B535D1455001_gshared)(__this, ___size0, method);
}
// System.Void Hebron.Runtime.UnsafeArray2D`1<System.Byte>::.ctor(System.Int32,System.Int32)
inline void UnsafeArray2D_1__ctor_m3A58CFC7D1EED7D3D5087499656F8833CB720624 (UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4* __this, int32_t ___size10, int32_t ___size21, const RuntimeMethod* method)
{
	((  void (*) (UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4*, int32_t, int32_t, const RuntimeMethod*))UnsafeArray2D_1__ctor_m3A58CFC7D1EED7D3D5087499656F8833CB720624_gshared)(__this, ___size10, ___size21, method);
}
// System.Void* Hebron.Runtime.UnsafeArray2D`1<System.Byte>::op_Implicit(Hebron.Runtime.UnsafeArray2D`1<T>)
inline void* UnsafeArray2D_1_op_Implicit_m9C7B1989C81845401B0660019E9F33460E6A7EC3 (UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4* ___array0, const RuntimeMethod* method)
{
	return ((  void* (*) (UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4*, const RuntimeMethod*))UnsafeArray2D_1_op_Implicit_m9C7B1989C81845401B0660019E9F33460E6A7EC3_gshared)(___array0, method);
}
// System.Void* Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__gif_lzw>::op_Implicit(Hebron.Runtime.UnsafeArray1D`1<T>)
inline void* UnsafeArray1D_1_op_Implicit_m3C6E8A65A09DC199AAB09D86CB8D1E571960DEFC (UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE* ___array0, const RuntimeMethod* method)
{
	return ((  void* (*) (UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE*, const RuntimeMethod*))UnsafeArray1D_1_op_Implicit_m3C6E8A65A09DC199AAB09D86CB8D1E571960DEFC_gshared)(___array0, method);
}
// System.Void Hebron.Runtime.UnsafeArray2D`1<System.UInt16>::.ctor(System.Int32,System.Int32)
inline void UnsafeArray2D_1__ctor_m5ED6464C063FDB0E310BC0AC417ACCE4B08D7A41 (UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF* __this, int32_t ___size10, int32_t ___size21, const RuntimeMethod* method)
{
	((  void (*) (UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF*, int32_t, int32_t, const RuntimeMethod*))UnsafeArray2D_1__ctor_m5ED6464C063FDB0E310BC0AC417ACCE4B08D7A41_gshared)(__this, ___size10, ___size21, method);
}
// System.Void Hebron.Runtime.UnsafeArray2D`1<System.Int16>::.ctor(System.Int32,System.Int32)
inline void UnsafeArray2D_1__ctor_m4B656CBF9E31CBD022740B8F979CE85FDBE33B20 (UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794* __this, int32_t ___size10, int32_t ___size21, const RuntimeMethod* method)
{
	((  void (*) (UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794*, int32_t, int32_t, const RuntimeMethod*))UnsafeArray2D_1__ctor_m4B656CBF9E31CBD022740B8F979CE85FDBE33B20_gshared)(__this, ___size10, ___size21, method);
}
// System.Void Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__huffman>::.ctor(System.Int32)
inline void UnsafeArray1D_1__ctor_m80391CAC93DAF529FDA5AC99D18457B15FD0007B (UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA* __this, int32_t ___size0, const RuntimeMethod* method)
{
	((  void (*) (UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA*, int32_t, const RuntimeMethod*))UnsafeArray1D_1__ctor_m80391CAC93DAF529FDA5AC99D18457B15FD0007B_gshared)(__this, ___size0, method);
}
// System.Void Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__jpeg/unnamed1>::.ctor(System.Int32)
inline void UnsafeArray1D_1__ctor_m742DAE97CC04FF2A5C951005E7E1DEAE976FD4B1 (UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A* __this, int32_t ___size0, const RuntimeMethod* method)
{
	((  void (*) (UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A*, int32_t, const RuntimeMethod*))UnsafeArray1D_1__ctor_m742DAE97CC04FF2A5C951005E7E1DEAE976FD4B1_gshared)(__this, ___size0, method);
}
// System.Void Hebron.Runtime.UnsafeArray1D`1<System.Int32>::.ctor(System.Int32)
inline void UnsafeArray1D_1__ctor_mF515A01BB21FA30A4F292F4417C31C5E8B88F46E (UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933* __this, int32_t ___size0, const RuntimeMethod* method)
{
	((  void (*) (UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933*, int32_t, const RuntimeMethod*))UnsafeArray1D_1__ctor_mF515A01BB21FA30A4F292F4417C31C5E8B88F46E_gshared)(__this, ___size0, method);
}
// System.Void* Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__huffman>::op_Implicit(Hebron.Runtime.UnsafeArray1D`1<T>)
inline void* UnsafeArray1D_1_op_Implicit_m3953EBEAB1CAF26B950DBB41269ECA873EAC93D0 (UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA* ___array0, const RuntimeMethod* method)
{
	return ((  void* (*) (UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA*, const RuntimeMethod*))UnsafeArray1D_1_op_Implicit_m3953EBEAB1CAF26B950DBB41269ECA873EAC93D0_gshared)(___array0, method);
}
// System.Void* Hebron.Runtime.UnsafeArray2D`1<System.UInt16>::op_Implicit(Hebron.Runtime.UnsafeArray2D`1<T>)
inline void* UnsafeArray2D_1_op_Implicit_m2371B12B5957DF0D3A54AF1CAE6608F1C9F2106B (UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF* ___array0, const RuntimeMethod* method)
{
	return ((  void* (*) (UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF*, const RuntimeMethod*))UnsafeArray2D_1_op_Implicit_m2371B12B5957DF0D3A54AF1CAE6608F1C9F2106B_gshared)(___array0, method);
}
// System.Void* Hebron.Runtime.UnsafeArray2D`1<System.Int16>::op_Implicit(Hebron.Runtime.UnsafeArray2D`1<T>)
inline void* UnsafeArray2D_1_op_Implicit_mC5C089568D8BDF3C1377060081B48C7F3DEDF9D0 (UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794* ___array0, const RuntimeMethod* method)
{
	return ((  void* (*) (UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794*, const RuntimeMethod*))UnsafeArray2D_1_op_Implicit_mC5C089568D8BDF3C1377060081B48C7F3DEDF9D0_gshared)(___array0, method);
}
// System.Void* Hebron.Runtime.UnsafeArray1D`1<StbImageSharp.StbImage/stbi__jpeg/unnamed1>::op_Implicit(Hebron.Runtime.UnsafeArray1D`1<T>)
inline void* UnsafeArray1D_1_op_Implicit_mC0306D7987021F342456F05565A07CFB3377FB38 (UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A* ___array0, const RuntimeMethod* method)
{
	return ((  void* (*) (UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A*, const RuntimeMethod*))UnsafeArray1D_1_op_Implicit_mC0306D7987021F342456F05565A07CFB3377FB38_gshared)(___array0, method);
}
// System.Void* Hebron.Runtime.UnsafeArray1D`1<System.Int32>::op_Implicit(Hebron.Runtime.UnsafeArray1D`1<T>)
inline void* UnsafeArray1D_1_op_Implicit_mFBA6F467B8CC0C2F8C27331728FDA1FED5C3B71C (UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933* ___array0, const RuntimeMethod* method)
{
	return ((  void* (*) (UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933*, const RuntimeMethod*))UnsafeArray1D_1_op_Implicit_mFBA6F467B8CC0C2F8C27331728FDA1FED5C3B71C_gshared)(___array0, method);
}
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
// System.Void* Hebron.Runtime.CRuntime::malloc(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* CRuntime_malloc_mB0E4E84ECDF7DA9CE14FDEDB8653EBBF538881AC (uint64_t ___size0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0 = ___size0;
		il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		void* L_1;
		L_1 = CRuntime_malloc_m1D37A28104A0AFEA14E19DB6364346E8A74335C8(L_0, NULL);
		return L_1;
	}
}
// System.Void* Hebron.Runtime.CRuntime::malloc(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* CRuntime_malloc_m1D37A28104A0AFEA14E19DB6364346E8A74335C8 (int64_t ___size0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int64_t L_0 = ___size0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_1;
		L_1 = Marshal_AllocHGlobal_m0187620AAB78B85416CE4C948B60B6A76CA84CAC(((int32_t)L_0), NULL);
		V_0 = L_1;
		MemoryStats_Allocated_mD4CFF1409F99B4EC43CBC35500EC9D86A17C6D94(NULL);
		void* L_2;
		L_2 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_0), NULL);
		return L_2;
	}
}
// System.Void Hebron.Runtime.CRuntime::free(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRuntime_free_m8FA48AB801FF409B2315672BC46B4C2F879129B3 (void* ___a0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		void* L_0 = ___a0;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		void* L_1 = ___a0;
		intptr_t L_2;
		memset((&L_2), 0, sizeof(L_2));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_2), L_1, /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m691596E1E19CB74918F8FF871A05E4BE80748BCC(L_2, NULL);
		MemoryStats_Freed_m4FB484312EE8C6EF3C111FF37F8BC45460BDB961(NULL);
		return;
	}
}
// System.Void Hebron.Runtime.CRuntime::memcpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRuntime_memcpy_m212729CE68BA4B8A4725A60D309835D9BD16A1FA (void* ___a0, void* ___b1, int64_t ___size2, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	int64_t V_2 = 0;
	{
		void* L_0 = ___a0;
		V_0 = (uint8_t*)L_0;
		void* L_1 = ___b1;
		V_1 = (uint8_t*)L_1;
		V_2 = ((int64_t)0);
		goto IL_001a;
	}

IL_0009:
	{
		uint8_t* L_2 = V_0;
		uint8_t* L_3 = L_2;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, 1));
		uint8_t* L_4 = V_1;
		uint8_t* L_5 = L_4;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_5, 1));
		int32_t L_6 = *((uint8_t*)L_5);
		*((int8_t*)L_3) = (int8_t)L_6;
		int64_t L_7 = V_2;
		V_2 = ((int64_t)il2cpp_codegen_add(L_7, ((int64_t)1)));
	}

IL_001a:
	{
		int64_t L_8 = V_2;
		int64_t L_9 = ___size2;
		if ((((int64_t)L_8) < ((int64_t)L_9)))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
// System.Void Hebron.Runtime.CRuntime::memcpy(System.Void*,System.Void*,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRuntime_memcpy_m066EEC4759491E25760BF42074B2A902B3220B29 (void* ___a0, void* ___b1, uint64_t ___size2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		void* L_0 = ___a0;
		void* L_1 = ___b1;
		uint64_t L_2 = ___size2;
		il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		CRuntime_memcpy_m212729CE68BA4B8A4725A60D309835D9BD16A1FA(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Hebron.Runtime.CRuntime::memmove(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRuntime_memmove_m9DF03CA5E6BA63D4569E1DC052542284163378CF (void* ___a0, void* ___b1, int64_t ___size2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	{
		V_0 = (void*)((uintptr_t)0);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001c:
			{// begin finally (depth: 1)
				{
					void* L_0 = V_0;
					if ((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0))))
					{
						goto IL_0027;
					}
				}
				{
					void* L_1 = V_0;
					il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
					CRuntime_free_m8FA48AB801FF409B2315672BC46B4C2F879129B3(L_1, NULL);
				}

IL_0027:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			int64_t L_2 = ___size2;
			il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
			void* L_3;
			L_3 = CRuntime_malloc_m1D37A28104A0AFEA14E19DB6364346E8A74335C8(L_2, NULL);
			V_0 = L_3;
			void* L_4 = V_0;
			void* L_5 = ___b1;
			int64_t L_6 = ___size2;
			CRuntime_memcpy_m212729CE68BA4B8A4725A60D309835D9BD16A1FA(L_4, L_5, L_6, NULL);
			void* L_7 = ___a0;
			void* L_8 = V_0;
			int64_t L_9 = ___size2;
			CRuntime_memcpy_m212729CE68BA4B8A4725A60D309835D9BD16A1FA(L_7, L_8, L_9, NULL);
			goto IL_0028;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0028:
	{
		return;
	}
}
// System.Void Hebron.Runtime.CRuntime::memmove(System.Void*,System.Void*,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRuntime_memmove_m009A1AFB4FB133DABD08A3D15155A78B5EE3CCBD (void* ___a0, void* ___b1, uint64_t ___size2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		void* L_0 = ___a0;
		void* L_1 = ___b1;
		uint64_t L_2 = ___size2;
		il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		CRuntime_memmove_m9DF03CA5E6BA63D4569E1DC052542284163378CF(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Int32 Hebron.Runtime.CRuntime::memcmp(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CRuntime_memcmp_mE3171FB76913C99BDA3477A4210E7F27EA662650 (void* ___a0, void* ___b1, int64_t ___size2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	int64_t V_3 = 0;
	{
		V_0 = 0;
		void* L_0 = ___a0;
		V_1 = (uint8_t*)L_0;
		void* L_1 = ___b1;
		V_2 = (uint8_t*)L_1;
		V_3 = ((int64_t)0);
		goto IL_0022;
	}

IL_000b:
	{
		uint8_t* L_2 = V_1;
		int32_t L_3 = *((uint8_t*)L_2);
		uint8_t* L_4 = V_2;
		int32_t L_5 = *((uint8_t*)L_4);
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0015:
	{
		uint8_t* L_7 = V_1;
		V_1 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_7, 1));
		uint8_t* L_8 = V_2;
		V_2 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, 1));
		int64_t L_9 = V_3;
		V_3 = ((int64_t)il2cpp_codegen_add(L_9, ((int64_t)1)));
	}

IL_0022:
	{
		int64_t L_10 = V_3;
		int64_t L_11 = ___size2;
		if ((((int64_t)L_10) < ((int64_t)L_11)))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}
}
// System.Int32 Hebron.Runtime.CRuntime::memcmp(System.Void*,System.Void*,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CRuntime_memcmp_m7F6D4E50BC2820B840B2B789D0559B7034401E15 (void* ___a0, void* ___b1, uint64_t ___size2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		void* L_0 = ___a0;
		void* L_1 = ___b1;
		uint64_t L_2 = ___size2;
		il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = CRuntime_memcmp_mE3171FB76913C99BDA3477A4210E7F27EA662650(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Int32 Hebron.Runtime.CRuntime::memcmp(System.Byte*,System.Byte[],System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CRuntime_memcmp_mBB572377A8ACF239CCEC960A18E8FBDCE1A6D340 (uint8_t* ___a0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, uint64_t ___size2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___b1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		V_1 = L_1;
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_1;
		NullCheck(L_2);
		if (((int32_t)(((RuntimeArray*)L_2)->max_length)))
		{
			goto IL_000f;
		}
	}

IL_000a:
	{
		V_0 = (void*)((uintptr_t)0);
		goto IL_0018;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_1;
		NullCheck(L_3);
		V_0 = (void*)((uintptr_t)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0018:
	{
		uint8_t* L_4 = ___a0;
		void* L_5 = V_0;
		uint64_t L_6 = ___size2;
		il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = CRuntime_memcmp_mE3171FB76913C99BDA3477A4210E7F27EA662650((void*)L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void Hebron.Runtime.CRuntime::memset(System.Void*,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRuntime_memset_mC08ED16412EE97BBF545EBFD533ED0A05FDFD19D (void* ___ptr0, int32_t ___value1, int64_t ___size2, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	uint8_t V_1 = 0x0;
	int64_t V_2 = 0;
	{
		void* L_0 = ___ptr0;
		V_0 = (uint8_t*)L_0;
		int32_t L_1 = ___value1;
		V_1 = (uint8_t)((int32_t)(uint8_t)L_1);
		V_2 = ((int64_t)0);
		goto IL_0016;
	}

IL_000a:
	{
		uint8_t* L_2 = V_0;
		uint8_t* L_3 = L_2;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, 1));
		uint8_t L_4 = V_1;
		*((int8_t*)L_3) = (int8_t)L_4;
		int64_t L_5 = V_2;
		V_2 = ((int64_t)il2cpp_codegen_add(L_5, ((int64_t)1)));
	}

IL_0016:
	{
		int64_t L_6 = V_2;
		int64_t L_7 = ___size2;
		if ((((int64_t)L_6) < ((int64_t)L_7)))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
// System.Void Hebron.Runtime.CRuntime::memset(System.Void*,System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRuntime_memset_m3777FA27898EF78E61639B70C8B021D0465987B7 (void* ___ptr0, int32_t ___value1, uint64_t ___size2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		void* L_0 = ___ptr0;
		int32_t L_1 = ___value1;
		uint64_t L_2 = ___size2;
		il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		CRuntime_memset_mC08ED16412EE97BBF545EBFD533ED0A05FDFD19D(L_0, L_1, L_2, NULL);
		return;
	}
}
// System.UInt32 Hebron.Runtime.CRuntime::_lrotl(System.UInt32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t CRuntime__lrotl_m670EE7DC2629457798398F7B56E21A83F24B2EA1 (uint32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		uint32_t L_2 = ___x0;
		int32_t L_3 = ___y1;
		return ((int32_t)(((int32_t)((int32_t)L_0<<((int32_t)(L_1&((int32_t)31)))))|((int32_t)((uint32_t)L_2>>((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_3))&((int32_t)31)))))));
	}
}
// System.Void* Hebron.Runtime.CRuntime::realloc(System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* CRuntime_realloc_m2FFAABB21159681238948B584B4012EB41F55B9C (void* ___a0, int64_t ___newSize1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		void* L_0 = ___a0;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_000c;
		}
	}
	{
		int64_t L_1 = ___newSize1;
		il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = CRuntime_malloc_m1D37A28104A0AFEA14E19DB6364346E8A74335C8(L_1, NULL);
		return L_2;
	}

IL_000c:
	{
		void* L_3 = ___a0;
		intptr_t L_4;
		memset((&L_4), 0, sizeof(L_4));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_4), L_3, /*hidden argument*/NULL);
		int64_t L_5 = ___newSize1;
		intptr_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		IntPtr__ctor_m2C033540A2F274766CF5C2A120587DD997E3F6DC((&L_6), L_5, /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_7;
		L_7 = Marshal_ReAllocHGlobal_m903B07B988C5FED03A8F1887C5F7E9538B24BF77(L_4, L_6, NULL);
		V_0 = L_7;
		void* L_8;
		L_8 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_0), NULL);
		return L_8;
	}
}
// System.Void* Hebron.Runtime.CRuntime::realloc(System.Void*,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* CRuntime_realloc_m00DE1229E375279D24AC28B96176766DB791502B (void* ___a0, uint64_t ___newSize1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		void* L_0 = ___a0;
		uint64_t L_1 = ___newSize1;
		il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		void* L_2;
		L_2 = CRuntime_realloc_m2FFAABB21159681238948B584B4012EB41F55B9C(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 Hebron.Runtime.CRuntime::abs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CRuntime_abs_m600C0EC64FA48209F4D466838FBB2AF11C0702C9 (int32_t ___v0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___v0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = il2cpp_codegen_abs(L_0);
		return L_1;
	}
}
// System.Double Hebron.Runtime.CRuntime::pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CRuntime_pow_m25DBDAB05C0AAB03906E13FBDA0A4B88ABE50C9A (double ___a0, double ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___a0;
		double L_1 = ___b1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Double Hebron.Runtime.CRuntime::ldexp(System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CRuntime_ldexp_mC76B570C2ED4E310549FF3E0145FB743C2EDE23C (double ___number0, int32_t ___exponent1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___number0;
		int32_t L_1 = ___exponent1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3((2.0), ((double)L_1), NULL);
		return ((double)il2cpp_codegen_multiply(L_0, L_2));
	}
}
// System.Int32 Hebron.Runtime.CRuntime::strcmp(System.SByte*,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CRuntime_strcmp_mAAFA23B87710A818E928C95022ABD86EA1AAC478 (int8_t* ___src0, String_t* ___token1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_001b;
	}

IL_0006:
	{
		int8_t* L_0 = ___src0;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_0, L_1)));
		String_t* L_3 = ___token1;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, L_4, NULL);
		if ((((int32_t)L_2) == ((int32_t)L_5)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0017:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001b:
	{
		int32_t L_8 = V_1;
		String_t* L_9 = ___token1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Int32 Hebron.Runtime.CRuntime::strncmp(System.SByte*,System.String,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CRuntime_strncmp_mAB240EC985700366AA196A53291AC60489C4836A (int8_t* ___src0, String_t* ___token1, uint64_t ___size2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_001b;
	}

IL_0006:
	{
		int8_t* L_0 = ___src0;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_0, L_1)));
		String_t* L_3 = ___token1;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, L_4, NULL);
		if ((((int32_t)L_2) == ((int32_t)L_5)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0017:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001b:
	{
		int32_t L_8 = V_1;
		String_t* L_9 = ___token1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		uint64_t L_11 = ___size2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_12;
		L_12 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_10, ((int32_t)L_11), NULL);
		if ((((int32_t)L_8) < ((int32_t)L_12)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}
}
// System.Int64 Hebron.Runtime.CRuntime::strtol(System.SByte*,System.SByte**,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CRuntime_strtol_m3C958AB893D950FFCEB8EBB87B8EE7A8C7135761 (int8_t* ___start0, int8_t** ___end1, int32_t ___radix2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int8_t* V_1 = NULL;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t V_4 = 0;
	{
		V_0 = 0;
		int8_t* L_0 = ___start0;
		V_1 = L_0;
		goto IL_000e;
	}

IL_0006:
	{
		int8_t* L_1 = V_1;
		V_1 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_1, 1));
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_000e:
	{
		il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		String_t* L_3 = ((CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_StaticFields*)il2cpp_codegen_static_fields_for(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var))->___numbers_0;
		int8_t* L_4 = V_1;
		int32_t L_5 = *((int8_t*)L_4);
		NullCheck(L_3);
		int32_t L_6;
		L_6 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_3, ((int32_t)(uint16_t)L_5), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
		{
			goto IL_0006;
		}
	}
	{
		V_2 = ((int64_t)0);
		int8_t* L_7 = ___start0;
		V_1 = L_7;
		goto IL_0058;
	}

IL_0025:
	{
		il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		String_t* L_8 = ((CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_StaticFields*)il2cpp_codegen_static_fields_for(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var))->___numbers_0;
		int8_t* L_9 = V_1;
		int32_t L_10 = *((int8_t*)L_9);
		NullCheck(L_8);
		int32_t L_11;
		L_11 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_8, ((int32_t)(uint16_t)L_10), NULL);
		V_3 = ((int64_t)L_11);
		int32_t L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_13;
		L_13 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3((10.0), ((double)((int32_t)il2cpp_codegen_subtract(L_12, 1))), NULL);
		V_4 = il2cpp_codegen_cast_double_to_int<int64_t>(L_13);
		int64_t L_14 = V_2;
		int64_t L_15 = V_3;
		int64_t L_16 = V_4;
		V_2 = ((int64_t)il2cpp_codegen_add(L_14, ((int64_t)il2cpp_codegen_multiply(L_15, L_16))));
		int8_t* L_17 = V_1;
		V_1 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_17, 1));
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_0058:
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_0025;
		}
	}
	{
		int8_t** L_20 = ___end1;
		if ((((intptr_t)L_20) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0064;
		}
	}
	{
		int8_t** L_21 = ___end1;
		int8_t* L_22 = V_1;
		*((intptr_t*)L_21) = (intptr_t)L_22;
	}

IL_0064:
	{
		int64_t L_23 = V_2;
		return L_23;
	}
}
// System.Void Hebron.Runtime.CRuntime::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CRuntime__cctor_m0FD966ABA946F66933E7EB0D91115A3EB035136C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAD8623838274740D6497489F547CE972C42A942);
		s_Il2CppMethodInitialized = true;
	}
	{
		((CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_StaticFields*)il2cpp_codegen_static_fields_for(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var))->___numbers_0 = _stringLiteralCAD8623838274740D6497489F547CE972C42A942;
		Il2CppCodeGenWriteBarrier((void**)(&((CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_StaticFields*)il2cpp_codegen_static_fields_for(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var))->___numbers_0), (void*)_stringLiteralCAD8623838274740D6497489F547CE972C42A942);
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
// System.Int32 Hebron.Runtime.MemoryStats::get_Allocations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryStats_get_Allocations_m57EC600DC23D0CD331439D0BD1A2F03A025525FA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStats_t3120D9400408AA1F1DB9A37883AEC4A64F7D1A5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ((MemoryStats_t3120D9400408AA1F1DB9A37883AEC4A64F7D1A5E_StaticFields*)il2cpp_codegen_static_fields_for(MemoryStats_t3120D9400408AA1F1DB9A37883AEC4A64F7D1A5E_il2cpp_TypeInfo_var))->____allocations_0;
		return L_0;
	}
}
// System.Void Hebron.Runtime.MemoryStats::Allocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStats_Allocated_mD4CFF1409F99B4EC43CBC35500EC9D86A17C6D94 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStats_t3120D9400408AA1F1DB9A37883AEC4A64F7D1A5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Interlocked_Increment_m7AC68EC482A6AFD97BCEFABA0FD45D203F3EA2E1((&((MemoryStats_t3120D9400408AA1F1DB9A37883AEC4A64F7D1A5E_StaticFields*)il2cpp_codegen_static_fields_for(MemoryStats_t3120D9400408AA1F1DB9A37883AEC4A64F7D1A5E_il2cpp_TypeInfo_var))->____allocations_0), NULL);
		return;
	}
}
// System.Void Hebron.Runtime.MemoryStats::Freed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStats_Freed_m4FB484312EE8C6EF3C111FF37F8BC45460BDB961 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStats_t3120D9400408AA1F1DB9A37883AEC4A64F7D1A5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Interlocked_Decrement_mFACC375A9985A7E1A3473EECE768B1D2ECB8CEF5((&((MemoryStats_t3120D9400408AA1F1DB9A37883AEC4A64F7D1A5E_StaticFields*)il2cpp_codegen_static_fields_for(MemoryStats_t3120D9400408AA1F1DB9A37883AEC4A64F7D1A5E_il2cpp_TypeInfo_var))->____allocations_0), NULL);
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
// System.Void SystemHalf.Half::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		L_1 = HalfHelper_SingleToHalf_m6F45AF259006445DFBF3D8B176547D1539AA7620(L_0, NULL);
		*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA(_thisAdjusted, ___value0, method);
}
// System.Void SystemHalf.Half::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__ctor_m42D93709E720FF28A18018A0CCEA6D6EFF3F6216 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA(__this, ((float)L_0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Half__ctor_m42D93709E720FF28A18018A0CCEA6D6EFF3F6216_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	Half__ctor_m42D93709E720FF28A18018A0CCEA6D6EFF3F6216(_thisAdjusted, ___value0, method);
}
// System.Void SystemHalf.Half::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__ctor_mC827819362E6EEF8763C6C3A74D479727CED4FF8 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA(__this, ((float)L_0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Half__ctor_mC827819362E6EEF8763C6C3A74D479727CED4FF8_AdjustorThunk (RuntimeObject* __this, int64_t ___value0, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	Half__ctor_mC827819362E6EEF8763C6C3A74D479727CED4FF8(_thisAdjusted, ___value0, method);
}
// System.Void SystemHalf.Half::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__ctor_mF7BDDCB57D11ABBD813D5E8FD90C45723E4B369D (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA(__this, ((float)L_0), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Half__ctor_mF7BDDCB57D11ABBD813D5E8FD90C45723E4B369D_AdjustorThunk (RuntimeObject* __this, double ___value0, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	Half__ctor_mF7BDDCB57D11ABBD813D5E8FD90C45723E4B369D(_thisAdjusted, ___value0, method);
}
// System.Void SystemHalf.Half::.ctor(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__ctor_m21050D141F9162158AADB10D10F9E6FBED8B9F56 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Decimal_op_Explicit_m52A93EB0AC4766C64D68DB6947D9D2770EFE8A93(L_0, NULL);
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA(__this, ((float)L_1), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Half__ctor_m21050D141F9162158AADB10D10F9E6FBED8B9F56_AdjustorThunk (RuntimeObject* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	Half__ctor_m21050D141F9162158AADB10D10F9E6FBED8B9F56(_thisAdjusted, ___value0, method);
}
// System.Void SystemHalf.Half::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__ctor_mFD542200F7DDC2FF929D0D3480BA36452598F02B (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA(__this, ((float)((double)(uint32_t)L_0)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Half__ctor_mFD542200F7DDC2FF929D0D3480BA36452598F02B_AdjustorThunk (RuntimeObject* __this, uint32_t ___value0, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	Half__ctor_mFD542200F7DDC2FF929D0D3480BA36452598F02B(_thisAdjusted, ___value0, method);
}
// System.Void SystemHalf.Half::.ctor(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__ctor_m87ABACCF15B2639C42FBFBB6E7875565BC45DCC7 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___value0;
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA(__this, ((float)((double)(uint64_t)L_0)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Half__ctor_m87ABACCF15B2639C42FBFBB6E7875565BC45DCC7_AdjustorThunk (RuntimeObject* __this, uint64_t ___value0, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	Half__ctor_m87ABACCF15B2639C42FBFBB6E7875565BC45DCC7(_thisAdjusted, ___value0, method);
}
// SystemHalf.Half SystemHalf.Half::Negate(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_Negate_m2409EB4D53D2E55BDEEB7E924A27D2090AAC877F (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half0;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		L_1 = Half_op_UnaryNegation_mF21A4AA6BF4CB2FA63E980B93E66A6C6B8366A73(L_0, NULL);
		return L_1;
	}
}
// SystemHalf.Half SystemHalf.Half::Add(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_Add_m7B0800EB9ECC92129ACEAE01C738F138077BEB2C (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half10, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half10;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1 = ___half21;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2;
		L_2 = Half_op_Addition_mAB163F285F3958A9A205BF18AE9CF9AAD5158A16(L_0, L_1, NULL);
		return L_2;
	}
}
// SystemHalf.Half SystemHalf.Half::Subtract(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_Subtract_m1666CBE15613CCE02078AA8D04A9F4E26C29066A (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half10, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half10;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1 = ___half21;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2;
		L_2 = Half_op_Subtraction_m2DDAEBB1F4B3DEE10F04427D508EC2AD5625A487(L_0, L_1, NULL);
		return L_2;
	}
}
// SystemHalf.Half SystemHalf.Half::Multiply(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_Multiply_mF15CBCB0DBDFB73A08A940BC37EE84215396BEC6 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half10, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half10;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1 = ___half21;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2;
		L_2 = Half_op_Multiply_m1EE0F408852D1875C6BD77AA69C5868DAA150B7F(L_0, L_1, NULL);
		return L_2;
	}
}
// SystemHalf.Half SystemHalf.Half::Divide(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_Divide_m8925B77BFBC3131EFD5A42A9A2D1ED5D4F024D9A (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half10, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half10;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1 = ___half21;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2;
		L_2 = Half_op_Division_m5790E5D2B177AFD371899A98694E8BD9221DDD89(L_0, L_1, NULL);
		return L_2;
	}
}
// SystemHalf.Half SystemHalf.Half::op_UnaryPlus(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_UnaryPlus_m00B9E4E9E707E1EE9744982E9BB9235E7CFE519F (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half0, const RuntimeMethod* method) 
{
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half0;
		return L_0;
	}
}
// SystemHalf.Half SystemHalf.Half::op_UnaryNegation(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_UnaryNegation_mF21A4AA6BF4CB2FA63E980B93E66A6C6B8366A73 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half0;
		il2cpp_codegen_runtime_class_init_inline(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		L_1 = HalfHelper_Negate_m002DA8925677B546673FAAF4238EF75E34D4AD03(L_0, NULL);
		return L_1;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Increment(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Increment_mD6354AA40397F91F954D21442D501D1EB0BB25FD (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half0;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2;
		L_2 = Half_op_Explicit_mE148CF97345B98800B4B3600AC7CAB13803C6DDB(((float)il2cpp_codegen_add(L_1, (1.0f))), NULL);
		return L_2;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Decrement(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Decrement_m5C7482D1F23CAB8A1FEF697134CAEB271434C858 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half0;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2;
		L_2 = Half_op_Explicit_mE148CF97345B98800B4B3600AC7CAB13803C6DDB(((float)il2cpp_codegen_subtract(L_1, (1.0f))), NULL);
		return L_2;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Addition(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Addition_mAB163F285F3958A9A205BF18AE9CF9AAD5158A16 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half10, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half10;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = ___half21;
		float L_3;
		L_3 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_2, NULL);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4;
		L_4 = Half_op_Explicit_mE148CF97345B98800B4B3600AC7CAB13803C6DDB(((float)il2cpp_codegen_add(L_1, ((float)L_3))), NULL);
		return L_4;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Subtraction(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Subtraction_m2DDAEBB1F4B3DEE10F04427D508EC2AD5625A487 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half10, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half10;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = ___half21;
		float L_3;
		L_3 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_2, NULL);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4;
		L_4 = Half_op_Explicit_mE148CF97345B98800B4B3600AC7CAB13803C6DDB(((float)il2cpp_codegen_subtract(L_1, ((float)L_3))), NULL);
		return L_4;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Multiply(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Multiply_m1EE0F408852D1875C6BD77AA69C5868DAA150B7F (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half10, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half10;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = ___half21;
		float L_3;
		L_3 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_2, NULL);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4;
		L_4 = Half_op_Explicit_mE148CF97345B98800B4B3600AC7CAB13803C6DDB(((float)il2cpp_codegen_multiply(L_1, ((float)L_3))), NULL);
		return L_4;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Division(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Division_m5790E5D2B177AFD371899A98694E8BD9221DDD89 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half10, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half10;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = ___half21;
		float L_3;
		L_3 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_2, NULL);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4;
		L_4 = Half_op_Explicit_mE148CF97345B98800B4B3600AC7CAB13803C6DDB(((float)(L_1/((float)L_3))), NULL);
		return L_4;
	}
}
// System.Boolean SystemHalf.Half::op_Equality(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_op_Equality_m9BC44DA84FA23C67752B9B93B1717E2C04750781 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half10, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half10;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Half_IsNaN_m74BFF0D2D2F251CF9CECC995A3A254F3FD2A0601(L_0, NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = ___half10;
		uint16_t L_3 = L_2.___Value_0;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4 = ___half21;
		uint16_t L_5 = L_4.___Value_0;
		return (bool)((((int32_t)L_3) == ((int32_t)L_5))? 1 : 0);
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Boolean SystemHalf.Half::op_Inequality(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_op_Inequality_m55445119E84F7821089F98E610A9281A685425B8 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half10, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half21, const RuntimeMethod* method) 
{
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half10;
		uint16_t L_1 = L_0.___Value_0;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = ___half21;
		uint16_t L_3 = L_2.___Value_0;
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean SystemHalf.Half::op_LessThan(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_op_LessThan_mCF5FB8EAB4CBA21D70EED460787BF6C894A8C010 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half10, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half10;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = ___half21;
		float L_3;
		L_3 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_2, NULL);
		return (bool)((((float)L_1) < ((float)((float)L_3)))? 1 : 0);
	}
}
// System.Boolean SystemHalf.Half::op_GreaterThan(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_op_GreaterThan_mF44542A676272B3F343F0BCE226F1772161A31E2 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half10, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half10;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = ___half21;
		float L_3;
		L_3 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_2, NULL);
		return (bool)((((float)L_1) > ((float)((float)L_3)))? 1 : 0);
	}
}
// System.Boolean SystemHalf.Half::op_LessThanOrEqual(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_op_LessThanOrEqual_m25D4EC82A485FAAAFC9B40D02C0077DFF5A7F617 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half10, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half10;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1 = ___half21;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Half_op_Equality_m9BC44DA84FA23C67752B9B93B1717E2C04750781(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3 = ___half10;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4 = ___half21;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Half_op_LessThan_mCF5FB8EAB4CBA21D70EED460787BF6C894A8C010(L_3, L_4, NULL);
		return L_5;
	}

IL_0011:
	{
		return (bool)1;
	}
}
// System.Boolean SystemHalf.Half::op_GreaterThanOrEqual(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_op_GreaterThanOrEqual_mD2CCD1C97C26A6CA045B0C839805BD788250315B (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half10, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half10;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1 = ___half21;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Half_op_Equality_m9BC44DA84FA23C67752B9B93B1717E2C04750781(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3 = ___half10;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4 = ___half21;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Half_op_GreaterThan_mF44542A676272B3F343F0BCE226F1772161A31E2(L_3, L_4, NULL);
		return L_5;
	}

IL_0011:
	{
		return (bool)1;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Implicit(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Implicit_mB1F37A153A1988A2147DA6DE81C08B0491E434F8 (uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___value0;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA((&L_1), ((float)L_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Implicit(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Implicit_mCDCD452038F47744A92042B50AA5EDE075C8A1B9 (int16_t ___value0, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___value0;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA((&L_1), ((float)L_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Implicit(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Implicit_mB5EED5AAA28F908DA698AE768DB224B088D42E74 (Il2CppChar ___value0, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___value0;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA((&L_1), ((float)L_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Implicit_m09D97D41D9F91A60BB63EFA3715C9926209C9118 (int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA((&L_1), ((float)L_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Implicit_m694E0DC18BA171BFDE9C304456A1FC65CA309D5D (int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA((&L_1), ((float)L_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Explicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Explicit_mE148CF97345B98800B4B3600AC7CAB13803C6DDB (float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Explicit(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Explicit_mA3656EB5AE73B82EEFB96F850DA2971C824D99D4 (double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA((&L_1), ((float)L_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Explicit(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Explicit_mB25A2ADE8C2854B4668AB34A0C23A8E19B008323 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Decimal_op_Explicit_m52A93EB0AC4766C64D68DB6947D9D2770EFE8A93(L_0, NULL);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA((&L_2), ((float)L_1), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Byte SystemHalf.Half::op_Explicit(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Half_op_Explicit_m71285882C4CDF7180AB19A65FEE7E13926970CA1 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		return (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(((float)L_1));
	}
}
// System.Char SystemHalf.Half::op_Explicit(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Half_op_Explicit_m5D92209FBA2DB22B1AABDE364D643EB084EBB2B3 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		return il2cpp_codegen_cast_floating_point<uint16_t, int32_t, float>(((float)L_1));
	}
}
// System.Int16 SystemHalf.Half::op_Explicit(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Half_op_Explicit_m06FEFDA4E22934A74DC5EC0D31A18EC41C5C4BE4 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		return il2cpp_codegen_cast_double_to_int<int16_t>(((float)L_1));
	}
}
// System.Int32 SystemHalf.Half::op_Explicit(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Half_op_Explicit_m96A4AC6B9F1F33E7AF79782294083725EE965F5D (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		return il2cpp_codegen_cast_double_to_int<int32_t>(((float)L_1));
	}
}
// System.Int64 SystemHalf.Half::op_Explicit(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Half_op_Explicit_m6C04C93D1A019414C8EC07ECB7AAA3BF34460151 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		return il2cpp_codegen_cast_double_to_int<int64_t>(((float)L_1));
	}
}
// System.Single SystemHalf.Half::op_Implicit(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = HalfHelper_HalfToSingle_m6E455DD1F0F2DD2080982041A8ABA3DA8FCDC444(L_0, NULL);
		return L_1;
	}
}
// System.Double SystemHalf.Half::op_Implicit(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Half_op_Implicit_m5DEA3A627A676C7AD2DF581C1F8C33D12C73A451 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		return ((double)((float)L_1));
	}
}
// System.Decimal SystemHalf.Half::op_Explicit(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Half_op_Explicit_m6F391AE54D8D6B8EF855F573C9F77D9F5859BD0C (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_2;
		L_2 = Decimal_op_Explicit_mDF02276E12CC6D2D0285A8D0843ACA0743F42DEC(((float)L_1), NULL);
		return L_2;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Implicit(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Implicit_mA30AC358919E67D58640A9D7C98321407229298B (int8_t ___value0, const RuntimeMethod* method) 
{
	{
		int8_t L_0 = ___value0;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA((&L_1), ((float)L_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Implicit(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Implicit_m427EDC0D657E2F022BED15A08E4FB6C86F319359 (uint16_t ___value0, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___value0;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA((&L_1), ((float)L_0), /*hidden argument*/NULL);
		return L_1;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Implicit(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Implicit_mC2CE51B99F0942BB886AB4585F40D30AC6BD00D0 (uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___value0;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA((&L_1), ((float)((double)(uint32_t)L_0)), /*hidden argument*/NULL);
		return L_1;
	}
}
// SystemHalf.Half SystemHalf.Half::op_Implicit(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_op_Implicit_m8BCB3EFF7DF9D6049E522B90932C1688C1F39563 (uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		uint64_t L_0 = ___value0;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Half__ctor_m231CCD406203252D213FF4419C7F1C3A60ECBEBA((&L_1), ((float)((double)(uint64_t)L_0)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.SByte SystemHalf.Half::op_Explicit(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t Half_op_Explicit_mBA843DEBB3909573C6950DD2F3B1C137D7C6C295 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		return il2cpp_codegen_cast_double_to_int<int8_t>(((float)L_1));
	}
}
// System.UInt16 SystemHalf.Half::op_Explicit(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Half_op_Explicit_m62CA8E13FFFD84A49D56C75D67890731840D8FA4 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		return (uint16_t)il2cpp_codegen_cast_floating_point<uint16_t, int32_t, float>(((float)L_1));
	}
}
// System.UInt32 SystemHalf.Half::op_Explicit(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Half_op_Explicit_m2F4711747D2B62372A97920587D82067F720100D (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		return il2cpp_codegen_cast_floating_point<uint32_t, int32_t, float>(((float)L_1));
	}
}
// System.UInt64 SystemHalf.Half::op_Explicit(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Half_op_Explicit_m4005EECCA15B5A642909252AFAC17DAD668170EA (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		return il2cpp_codegen_cast_floating_point<uint64_t, int64_t, float>(((float)L_1));
	}
}
// System.Int32 SystemHalf.Half::CompareTo(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Half_CompareTo_m15EFD81A7DC0E77F9B0B2B5E7FF6C43EF69FBDB4 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1 = ___other0;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Half_op_LessThan_mCF5FB8EAB4CBA21D70EED460787BF6C894A8C010(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		V_0 = (-1);
		goto IL_004f;
	}

IL_0014:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4 = ___other0;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Half_op_GreaterThan_mF44542A676272B3F343F0BCE226F1772161A31E2(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		V_0 = 1;
		goto IL_004f;
	}

IL_0026:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_6 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_7 = ___other0;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Half_op_Inequality_m55445119E84F7821089F98E610A9281A685425B8(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_004f;
		}
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_9 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Half_IsNaN_m74BFF0D2D2F251CF9CECC995A3A254F3FD2A0601(L_9, NULL);
		if (L_10)
		{
			goto IL_0045;
		}
	}
	{
		V_0 = 1;
		goto IL_004f;
	}

IL_0045:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_11 = ___other0;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Half_IsNaN_m74BFF0D2D2F251CF9CECC995A3A254F3FD2A0601(L_11, NULL);
		if (L_12)
		{
			goto IL_004f;
		}
	}
	{
		V_0 = (-1);
	}

IL_004f:
	{
		int32_t L_13 = V_0;
		return L_13;
	}
}
IL2CPP_EXTERN_C  int32_t Half_CompareTo_m15EFD81A7DC0E77F9B0B2B5E7FF6C43EF69FBDB4_AdjustorThunk (RuntimeObject* __this, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___other0, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Half_CompareTo_m15EFD81A7DC0E77F9B0B2B5E7FF6C43EF69FBDB4(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 SystemHalf.Half::CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Half_CompareTo_m9EC79B9359AD9C276FA4F1850C015053F486058F (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		RuntimeObject* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		V_0 = 1;
		goto IL_002b;
	}

IL_0009:
	{
		RuntimeObject* L_1 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var)))
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_2 = ___obj0;
		int32_t L_3;
		L_3 = Half_CompareTo_m15EFD81A7DC0E77F9B0B2B5E7FF6C43EF69FBDB4(__this, ((*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)((Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)UnBox(L_2, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var)))), NULL);
		V_0 = L_3;
		goto IL_002b;
	}

IL_0020:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEC3193CD1F34C7323A6EB465B808BBAB8FAD271A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Half_CompareTo_m9EC79B9359AD9C276FA4F1850C015053F486058F_RuntimeMethod_var)));
	}

IL_002b:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  int32_t Half_CompareTo_m9EC79B9359AD9C276FA4F1850C015053F486058F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Half_CompareTo_m9EC79B9359AD9C276FA4F1850C015053F486058F(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean SystemHalf.Half::Equals(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_Equals_mC9CCB515A296CB1D66CFCEF7BB5A6E0EFD149934 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___other0;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Half_op_Equality_m9BC44DA84FA23C67752B9B93B1717E2C04750781(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3 = ___other0;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Half_IsNaN_m74BFF0D2D2F251CF9CECC995A3A254F3FD2A0601(L_3, NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_5 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Half_IsNaN_m74BFF0D2D2F251CF9CECC995A3A254F3FD2A0601(L_5, NULL);
		return L_6;
	}

IL_0022:
	{
		return (bool)0;
	}

IL_0024:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool Half_Equals_mC9CCB515A296CB1D66CFCEF7BB5A6E0EFD149934_AdjustorThunk (RuntimeObject* __this, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___other0, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	bool _returnValue;
	_returnValue = Half_Equals_mC9CCB515A296CB1D66CFCEF7BB5A6E0EFD149934(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean SystemHalf.Half::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_Equals_m6102C810AA7FC6A7281E1BB4C5020FDA8128021F (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (bool)0;
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var)))
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject* L_1 = ___obj0;
		V_1 = ((*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)((Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)UnBox(L_1, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var))));
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = V_1;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Half_op_Equality_m9BC44DA84FA23C67752B9B93B1717E2C04750781(L_2, L_3, NULL);
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Half_IsNaN_m74BFF0D2D2F251CF9CECC995A3A254F3FD2A0601(L_5, NULL);
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_7 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Half_IsNaN_m74BFF0D2D2F251CF9CECC995A3A254F3FD2A0601(L_7, NULL);
		if (!L_8)
		{
			goto IL_0036;
		}
	}

IL_0034:
	{
		V_0 = (bool)1;
	}

IL_0036:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C  bool Half_Equals_m6102C810AA7FC6A7281E1BB4C5020FDA8128021F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	bool _returnValue;
	_returnValue = Half_Equals_m6102C810AA7FC6A7281E1BB4C5020FDA8128021F(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 SystemHalf.Half::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Half_GetHashCode_m97AF96A3B63244D97C77F076FD9E6A92AE6907BB (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = (&__this->___Value_0);
		int32_t L_1;
		L_1 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t Half_GetHashCode_m97AF96A3B63244D97C77F076FD9E6A92AE6907BB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Half_GetHashCode_m97AF96A3B63244D97C77F076FD9E6A92AE6907BB(_thisAdjusted, method);
	return _returnValue;
}
// System.TypeCode SystemHalf.Half::GetTypeCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Half_GetTypeCode_m9226F693B79A65F7D0E71022B3EE1178D92E59A6 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(((int32_t)255));
	}
}
IL2CPP_EXTERN_C  int32_t Half_GetTypeCode_m9226F693B79A65F7D0E71022B3EE1178D92E59A6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Half_GetTypeCode_m9226F693B79A65F7D0E71022B3EE1178D92E59A6(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte[] SystemHalf.Half::GetBytes(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Half_GetBytes_m08F87C6539B9B5A43D500F14EEEAC68024298987 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___value0;
		uint16_t L_1 = L_0.___Value_0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_m1B3C2C0E976C781ACD76AFA80DDBCA844FC73D50(L_1, NULL);
		return L_2;
	}
}
// System.UInt16 SystemHalf.Half::GetBits(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Half_GetBits_m6D4D243E54380553E2A9094F549E0E703AB06A52 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___value0, const RuntimeMethod* method) 
{
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___value0;
		uint16_t L_1 = L_0.___Value_0;
		return L_1;
	}
}
// SystemHalf.Half SystemHalf.Half::ToHalf(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_ToHalf_mEF872349EA2BD26467818A0F85840F900489F894 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		int32_t L_1 = ___startIndex1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int16_t L_2;
		L_2 = BitConverter_ToInt16_mC4F4FF7F02DC025F64047372BD5B25540F3EFC62(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3;
		L_3 = Half_ToHalf_m7810D39A49E30675CD941CF4804FEBBDB11F1F01((uint16_t)((int32_t)(uint16_t)L_2), NULL);
		return L_3;
	}
}
// SystemHalf.Half SystemHalf.Half::ToHalf(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_ToHalf_m7810D39A49E30675CD941CF4804FEBBDB11F1F01 (uint16_t ___bits0, const RuntimeMethod* method) 
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6));
		uint16_t L_0 = ___bits0;
		(&V_0)->___Value_0 = L_0;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1 = V_0;
		return L_1;
	}
}
// System.Int32 SystemHalf.Half::Sign(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Half_Sign_mE875FA4FD6D98F57417C7AC9E5F84ECEADCE67C3 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		L_1 = Half_op_Implicit_m09D97D41D9F91A60BB63EFA3715C9926209C9118(0, NULL);
		bool L_2;
		L_2 = Half_op_LessThan_mCF5FB8EAB4CBA21D70EED460787BF6C894A8C010(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		return (-1);
	}

IL_0010:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4;
		L_4 = Half_op_Implicit_m09D97D41D9F91A60BB63EFA3715C9926209C9118(0, NULL);
		bool L_5;
		L_5 = Half_op_GreaterThan_mF44542A676272B3F343F0BCE226F1772161A31E2(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0020;
		}
	}
	{
		return 1;
	}

IL_0020:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_6 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_7;
		L_7 = Half_op_Implicit_m09D97D41D9F91A60BB63EFA3715C9926209C9118(0, NULL);
		bool L_8;
		L_8 = Half_op_Inequality_m55445119E84F7821089F98E610A9281A685425B8(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0039;
		}
	}
	{
		ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA* L_9 = (ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArithmeticException__ctor_m84E573C2093803DC9E6219461275B351D225C16A(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral183398DCEBD6A7242F3CF59B61DC81600BBF26E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Half_Sign_mE875FA4FD6D98F57417C7AC9E5F84ECEADCE67C3_RuntimeMethod_var)));
	}

IL_0039:
	{
		return 0;
	}
}
// SystemHalf.Half SystemHalf.Half::Abs(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_Abs_m3456DC3FFC99B4A1E2B750CDF04FDFB1D234292B (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		L_1 = HalfHelper_Abs_m6BC55ACC445204854A9BEF6E45B30893F01D33C6(L_0, NULL);
		return L_1;
	}
}
// SystemHalf.Half SystemHalf.Half::Max(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_Max_m5C97DF202A27DFE3935B9E578F344B8ACAB739F9 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___value10, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___value21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___value10;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1 = ___value21;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Half_op_LessThan_mCF5FB8EAB4CBA21D70EED460787BF6C894A8C010(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3 = ___value10;
		return L_3;
	}

IL_000b:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4 = ___value21;
		return L_4;
	}
}
// SystemHalf.Half SystemHalf.Half::Min(SystemHalf.Half,SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_Min_m81FDB5962E7E2D81DAF4A95821B18444A00C040E (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___value10, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___value21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___value10;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1 = ___value21;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Half_op_LessThan_mCF5FB8EAB4CBA21D70EED460787BF6C894A8C010(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3 = ___value21;
		return L_3;
	}

IL_000b:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4 = ___value10;
		return L_4;
	}
}
// System.Boolean SystemHalf.Half::IsNaN(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_IsNaN_m74BFF0D2D2F251CF9CECC995A3A254F3FD2A0601 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half0;
		il2cpp_codegen_runtime_class_init_inline(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = HalfHelper_IsNaN_mF448A3F9B6274AB5E93D0A0DA250F78B9984A723(L_0, NULL);
		return L_1;
	}
}
// System.Boolean SystemHalf.Half::IsInfinity(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_IsInfinity_m61CFD68FD223EF832DFBA2928FE260F3E31505C6 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half0;
		il2cpp_codegen_runtime_class_init_inline(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = HalfHelper_IsInfinity_m68217EAC90890E34BDF741A2E30A250C2CAA6DC0(L_0, NULL);
		return L_1;
	}
}
// System.Boolean SystemHalf.Half::IsNegativeInfinity(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_IsNegativeInfinity_m1167EAE680C77076993CA980DC98587E00255348 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half0;
		il2cpp_codegen_runtime_class_init_inline(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = HalfHelper_IsNegativeInfinity_mEAE6631053BDA05C10C9C911737CB6DA09F69C1B(L_0, NULL);
		return L_1;
	}
}
// System.Boolean SystemHalf.Half::IsPositiveInfinity(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_IsPositiveInfinity_m2DB4121081FD84DE6D2FE30ECD7861D95DEDF298 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half0;
		il2cpp_codegen_runtime_class_init_inline(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = HalfHelper_IsPositiveInfinity_mB0C4E459BAB72036708647B2993A8E5CC80F571F(L_0, NULL);
		return L_1;
	}
}
// SystemHalf.Half SystemHalf.Half::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_Parse_m0D0AAE772B104B353E57D10C68993833B7D56859 (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		float L_2;
		L_2 = Single_Parse_m4CCF536F9DA447D8822618DF5C6F8F31494B2909(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3;
		L_3 = Half_op_Explicit_mE148CF97345B98800B4B3600AC7CAB13803C6DDB(L_2, NULL);
		return L_3;
	}
}
// SystemHalf.Half SystemHalf.Half::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_Parse_m8E1991D8B509ED6D4A5A53733953968BBDE24212 (String_t* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		RuntimeObject* L_1 = ___provider1;
		float L_2;
		L_2 = Single_Parse_m4CCF536F9DA447D8822618DF5C6F8F31494B2909(L_0, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3;
		L_3 = Half_op_Explicit_mE148CF97345B98800B4B3600AC7CAB13803C6DDB(L_2, NULL);
		return L_3;
	}
}
// SystemHalf.Half SystemHalf.Half::Parse(System.String,System.Globalization.NumberStyles)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_Parse_m6FCDC02C6DBDB2370298D16B72BC623231D01AF9 (String_t* ___value0, int32_t ___style1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		int32_t L_1 = ___style1;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		float L_3;
		L_3 = Single_Parse_mE704971BEA03C08E6259D9CA407E2FB3126A7CBB(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4;
		L_4 = Half_op_Explicit_mE148CF97345B98800B4B3600AC7CAB13803C6DDB(L_3, NULL);
		return L_4;
	}
}
// SystemHalf.Half SystemHalf.Half::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 Half_Parse_m30C0E87FDB8F7EC840C7BBF70FABFDE931147D66 (String_t* ___value0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		int32_t L_1 = ___style1;
		RuntimeObject* L_2 = ___provider2;
		float L_3;
		L_3 = Single_Parse_mE704971BEA03C08E6259D9CA407E2FB3126A7CBB(L_0, L_1, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4;
		L_4 = Half_op_Explicit_mE148CF97345B98800B4B3600AC7CAB13803C6DDB(L_3, NULL);
		return L_4;
	}
}
// System.Boolean SystemHalf.Half::TryParse(System.String,SystemHalf.Half&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_TryParse_mEE48C7124051D0D68C1494AC32B9BB906EC501A2 (String_t* ___value0, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* ___result1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		String_t* L_0 = ___value0;
		bool L_1;
		L_1 = Single_TryParse_mF23E88B4B12DDC9E82179BB2483A714005BF006F(L_0, (&V_0), NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* L_2 = ___result1;
		float L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4;
		L_4 = Half_op_Explicit_mE148CF97345B98800B4B3600AC7CAB13803C6DDB(L_3, NULL);
		*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)L_2 = L_4;
		return (bool)1;
	}

IL_0018:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* L_5 = ___result1;
		il2cpp_codegen_initobj(L_5, sizeof(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6));
		return (bool)0;
	}
}
// System.Boolean SystemHalf.Half::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,SystemHalf.Half&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_TryParse_m54095F2A3ABD09B7CEF6EDB29206157A3E3D6152 (String_t* ___value0, int32_t ___style1, RuntimeObject* ___provider2, Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* ___result3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		V_0 = (bool)0;
		String_t* L_0 = ___value0;
		int32_t L_1 = ___style1;
		RuntimeObject* L_2 = ___provider2;
		bool L_3;
		L_3 = Single_TryParse_m5920BF3A60EE1FFF0CC117021B4BF2A8114D1AE5(L_0, L_1, L_2, (&V_1), NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* L_4 = ___result3;
		float L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_6;
		L_6 = Half_op_Explicit_mE148CF97345B98800B4B3600AC7CAB13803C6DDB(L_5, NULL);
		*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)L_4 = L_6;
		V_0 = (bool)1;
		goto IL_0025;
	}

IL_001e:
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* L_7 = ___result3;
		il2cpp_codegen_initobj(L_7, sizeof(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6));
	}

IL_0025:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// System.String SystemHalf.Half::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Half_ToString_m0CB28AA1DCE2AB4791737E91B44AFDD23FBF5C36 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		V_0 = ((float)L_1);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_3;
		L_3 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A((&V_0), L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* Half_ToString_m0CB28AA1DCE2AB4791737E91B44AFDD23FBF5C36_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Half_ToString_m0CB28AA1DCE2AB4791737E91B44AFDD23FBF5C36(_thisAdjusted, method);
	return _returnValue;
}
// System.String SystemHalf.Half::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Half_ToString_m42492412EEE4F705FE92EFF98EE649CC38898F5A (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___formatProvider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		V_0 = ((float)L_1);
		RuntimeObject* L_2 = ___formatProvider0;
		String_t* L_3;
		L_3 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A((&V_0), L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* Half_ToString_m42492412EEE4F705FE92EFF98EE649CC38898F5A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___formatProvider0, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Half_ToString_m42492412EEE4F705FE92EFF98EE649CC38898F5A(_thisAdjusted, ___formatProvider0, method);
	return _returnValue;
}
// System.String SystemHalf.Half::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Half_ToString_mADF7D744A0E1338340A9E419DC7DDE852229B745 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, String_t* ___format0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		V_0 = ((float)L_1);
		String_t* L_2 = ___format0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3;
		L_3 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		String_t* L_4;
		L_4 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE((&V_0), L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* Half_ToString_mADF7D744A0E1338340A9E419DC7DDE852229B745_AdjustorThunk (RuntimeObject* __this, String_t* ___format0, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Half_ToString_mADF7D744A0E1338340A9E419DC7DDE852229B745(_thisAdjusted, ___format0, method);
	return _returnValue;
}
// System.String SystemHalf.Half::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Half_ToString_m532C547BE12E95051DCEF6BB20B124C106A966F6 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		V_0 = ((float)L_1);
		String_t* L_2 = ___format0;
		RuntimeObject* L_3 = ___formatProvider1;
		String_t* L_4;
		L_4 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE((&V_0), L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  String_t* Half_ToString_m532C547BE12E95051DCEF6BB20B124C106A966F6_AdjustorThunk (RuntimeObject* __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Half_ToString_m532C547BE12E95051DCEF6BB20B124C106A966F6(_thisAdjusted, ___format0, ___formatProvider1, method);
	return _returnValue;
}
// System.Single SystemHalf.Half::System.IConvertible.ToSingle(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Half_System_IConvertible_ToSingle_m72E1B1C02CD516A3943432B4627D169E8D59FCFD (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  float Half_System_IConvertible_ToSingle_m72E1B1C02CD516A3943432B4627D169E8D59FCFD_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	float _returnValue;
	_returnValue = Half_System_IConvertible_ToSingle_m72E1B1C02CD516A3943432B4627D169E8D59FCFD(_thisAdjusted, ___provider0, method);
	return _returnValue;
}
// System.TypeCode SystemHalf.Half::System.IConvertible.GetTypeCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Half_System_IConvertible_GetTypeCode_mD5A24F94E878C4D00F8663E17FB8ADB9D2A0CA6F (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Half_GetTypeCode_m9226F693B79A65F7D0E71022B3EE1178D92E59A6(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Half_System_IConvertible_GetTypeCode_mD5A24F94E878C4D00F8663E17FB8ADB9D2A0CA6F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Half_System_IConvertible_GetTypeCode_mD5A24F94E878C4D00F8663E17FB8ADB9D2A0CA6F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean SystemHalf.Half::System.IConvertible.ToBoolean(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Half_System_IConvertible_ToBoolean_m0684211BEBB80C8D844A264FF01084882940922C (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Convert_ToBoolean_m01AE93C9571553886F8D3D4BCA3F196543BFDCF5(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Half_System_IConvertible_ToBoolean_m0684211BEBB80C8D844A264FF01084882940922C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	bool _returnValue;
	_returnValue = Half_System_IConvertible_ToBoolean_m0684211BEBB80C8D844A264FF01084882940922C(_thisAdjusted, ___provider0, method);
	return _returnValue;
}
// System.Byte SystemHalf.Half::System.IConvertible.ToByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Half_System_IConvertible_ToByte_mBA58E1812B8418EF6B7D595873E32C35E6FAAB9A (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint8_t L_2;
		L_2 = Convert_ToByte_m60F8CC270B21C2E3240358EA9B8C047AF38D0C04(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  uint8_t Half_System_IConvertible_ToByte_mBA58E1812B8418EF6B7D595873E32C35E6FAAB9A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	uint8_t _returnValue;
	_returnValue = Half_System_IConvertible_ToByte_mBA58E1812B8418EF6B7D595873E32C35E6FAAB9A(_thisAdjusted, ___provider0, method);
	return _returnValue;
}
// System.Char SystemHalf.Half::System.IConvertible.ToChar(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Half_System_IConvertible_ToChar_m7511F58D164EE1F5BEECDEAC63D7746DC7933A92 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCABEE06640F48AF21CAAB5EE9823A731DD58DD03)));
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCABEE06640F48AF21CAAB5EE9823A731DD58DD03)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE75F4F4A9D67BC98BA7DB8DBE3C519516572DA4E)));
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE75F4F4A9D67BC98BA7DB8DBE3C519516572DA4E)));
		String_t* L_4;
		L_4 = String_Format_mBFACD7FE8657957CE3D5DA54D519AB418AF421E7(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E9AEBB5505B4A1DBC166711562BE9408419A24D)), L_3, NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Half_System_IConvertible_ToChar_m7511F58D164EE1F5BEECDEAC63D7746DC7933A92_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  Il2CppChar Half_System_IConvertible_ToChar_m7511F58D164EE1F5BEECDEAC63D7746DC7933A92_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	Il2CppChar _returnValue;
	_returnValue = Half_System_IConvertible_ToChar_m7511F58D164EE1F5BEECDEAC63D7746DC7933A92(_thisAdjusted, ___provider0, method);
	return _returnValue;
}
// System.DateTime SystemHalf.Half::System.IConvertible.ToDateTime(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Half_System_IConvertible_ToDateTime_mF0C63EC935FD9BF89F21636569F73F046BC729AB (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m43D1E4E50AB1F62ADC7C1884F28F918B53871522(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCABEE06640F48AF21CAAB5EE9823A731DD58DD03)));
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCABEE06640F48AF21CAAB5EE9823A731DD58DD03)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral401602777C44EA69B5FF9AB6AB2D47AEEC89D2AA)));
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral401602777C44EA69B5FF9AB6AB2D47AEEC89D2AA)));
		String_t* L_4;
		L_4 = String_Format_mBFACD7FE8657957CE3D5DA54D519AB418AF421E7(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E9AEBB5505B4A1DBC166711562BE9408419A24D)), L_3, NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Half_System_IConvertible_ToDateTime_mF0C63EC935FD9BF89F21636569F73F046BC729AB_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Half_System_IConvertible_ToDateTime_mF0C63EC935FD9BF89F21636569F73F046BC729AB_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D _returnValue;
	_returnValue = Half_System_IConvertible_ToDateTime_mF0C63EC935FD9BF89F21636569F73F046BC729AB(_thisAdjusted, ___provider0, method);
	return _returnValue;
}
// System.Decimal SystemHalf.Half::System.IConvertible.ToDecimal(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Half_System_IConvertible_ToDecimal_mEFA406DE223C584C875D3EDBF30891EDD5DC3ED2 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_2;
		L_2 = Convert_ToDecimal_mE83AAEACF12411461A6A3F416159DD72A5BEAE8F(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Half_System_IConvertible_ToDecimal_mEFA406DE223C584C875D3EDBF30891EDD5DC3ED2_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F _returnValue;
	_returnValue = Half_System_IConvertible_ToDecimal_mEFA406DE223C584C875D3EDBF30891EDD5DC3ED2(_thisAdjusted, ___provider0, method);
	return _returnValue;
}
// System.Double SystemHalf.Half::System.IConvertible.ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Half_System_IConvertible_ToDouble_m39C375E4CCA5796DA51C6E7023FA514DD796782A (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Convert_ToDouble_mE672A65932178209D542208DC039186F245DFFDB(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  double Half_System_IConvertible_ToDouble_m39C375E4CCA5796DA51C6E7023FA514DD796782A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	double _returnValue;
	_returnValue = Half_System_IConvertible_ToDouble_m39C375E4CCA5796DA51C6E7023FA514DD796782A(_thisAdjusted, ___provider0, method);
	return _returnValue;
}
// System.Int16 SystemHalf.Half::System.IConvertible.ToInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Half_System_IConvertible_ToInt16_m466A656BEFA1BC3670BC0E3BBC75D3058AC016A0 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int16_t L_2;
		L_2 = Convert_ToInt16_m53A1CC835CA09C6426C3A52455A14CAC8B5492E3(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int16_t Half_System_IConvertible_ToInt16_m466A656BEFA1BC3670BC0E3BBC75D3058AC016A0_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	int16_t _returnValue;
	_returnValue = Half_System_IConvertible_ToInt16_m466A656BEFA1BC3670BC0E3BBC75D3058AC016A0(_thisAdjusted, ___provider0, method);
	return _returnValue;
}
// System.Int32 SystemHalf.Half::System.IConvertible.ToInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Half_System_IConvertible_ToInt32_m752FB024CC8958029FE914A9D81A1BFC7FB49801 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_mB82C6718759AA55BAF2C824661EB28AAD2F933FB(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t Half_System_IConvertible_ToInt32_m752FB024CC8958029FE914A9D81A1BFC7FB49801_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Half_System_IConvertible_ToInt32_m752FB024CC8958029FE914A9D81A1BFC7FB49801(_thisAdjusted, ___provider0, method);
	return _returnValue;
}
// System.Int64 SystemHalf.Half::System.IConvertible.ToInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Half_System_IConvertible_ToInt64_m0215CD02A2D56FBCA38F97760CC0C0DB55CEF4A2 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int64_t L_2;
		L_2 = Convert_ToInt64_m30133C834300465D004C70C55EE4186C8F87D746(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int64_t Half_System_IConvertible_ToInt64_m0215CD02A2D56FBCA38F97760CC0C0DB55CEF4A2_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = Half_System_IConvertible_ToInt64_m0215CD02A2D56FBCA38F97760CC0C0DB55CEF4A2(_thisAdjusted, ___provider0, method);
	return _returnValue;
}
// System.SByte SystemHalf.Half::System.IConvertible.ToSByte(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t Half_System_IConvertible_ToSByte_m68A9196F2CFB9C1EC01347EB9E9A233705CE01C8 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int8_t L_2;
		L_2 = Convert_ToSByte_mBF1AD282D68CDD29A8D16C0D1BF8F04D6144F171(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int8_t Half_System_IConvertible_ToSByte_m68A9196F2CFB9C1EC01347EB9E9A233705CE01C8_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	int8_t _returnValue;
	_returnValue = Half_System_IConvertible_ToSByte_m68A9196F2CFB9C1EC01347EB9E9A233705CE01C8(_thisAdjusted, ___provider0, method);
	return _returnValue;
}
// System.String SystemHalf.Half::System.IConvertible.ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Half_System_IConvertible_ToString_m6C4211CDF08BF30788A1D3ADB2ED4AD6DB69EBE9 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Convert_ToString_m3D127B73DDF5962DEAE9B3A8CD9204C49D096AA4(L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* Half_System_IConvertible_ToString_m6C4211CDF08BF30788A1D3ADB2ED4AD6DB69EBE9_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Half_System_IConvertible_ToString_m6C4211CDF08BF30788A1D3ADB2ED4AD6DB69EBE9(_thisAdjusted, ___provider0, method);
	return _returnValue;
}
// System.Object SystemHalf.Half::System.IConvertible.ToType(System.Type,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Half_System_IConvertible_ToType_m4EAC816C1ACF3317374B33EA7FC4D00CE4980DCD (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, Type_t* ___conversionType0, RuntimeObject* ___provider1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		float L_2 = ((float)L_1);
		RuntimeObject* L_3 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_2);
		Type_t* L_4 = ___conversionType0;
		RuntimeObject* L_5 = ___provider1;
		RuntimeObject* L_6;
		L_6 = Single_System_IConvertible_ToType_m52014373BE33664D69CB4F797F0A78120267EC72((float*)UnBox(L_3, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var), L_4, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Half_System_IConvertible_ToType_m4EAC816C1ACF3317374B33EA7FC4D00CE4980DCD_AdjustorThunk (RuntimeObject* __this, Type_t* ___conversionType0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = Half_System_IConvertible_ToType_m4EAC816C1ACF3317374B33EA7FC4D00CE4980DCD(_thisAdjusted, ___conversionType0, ___provider1, method);
	return _returnValue;
}
// System.UInt16 SystemHalf.Half::System.IConvertible.ToUInt16(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Half_System_IConvertible_ToUInt16_mF668A08151EFBAFF13F2019B4077F8081FCC09D5 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint16_t L_2;
		L_2 = Convert_ToUInt16_mE54C6FD60D85443ED00A3C76BCB5B548D3153B28(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  uint16_t Half_System_IConvertible_ToUInt16_mF668A08151EFBAFF13F2019B4077F8081FCC09D5_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	uint16_t _returnValue;
	_returnValue = Half_System_IConvertible_ToUInt16_mF668A08151EFBAFF13F2019B4077F8081FCC09D5(_thisAdjusted, ___provider0, method);
	return _returnValue;
}
// System.UInt32 SystemHalf.Half::System.IConvertible.ToUInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Half_System_IConvertible_ToUInt32_mAF3B5AB239A3C778225747FB4C7BA0F78B3C9A93 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = Convert_ToUInt32_mFC6BAA30116D13A122FEA73FBC8CF5C722C92327(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  uint32_t Half_System_IConvertible_ToUInt32_mAF3B5AB239A3C778225747FB4C7BA0F78B3C9A93_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = Half_System_IConvertible_ToUInt32_mAF3B5AB239A3C778225747FB4C7BA0F78B3C9A93(_thisAdjusted, ___provider0, method);
	return _returnValue;
}
// System.UInt64 SystemHalf.Half::System.IConvertible.ToUInt64(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Half_System_IConvertible_ToUInt64_m05B76C8955DAB709F5560CEBEDF487C8F8128D51 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = (*(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*)__this);
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Half_op_Implicit_m0CE14DA98671F0078E0F3505FEEB24F603A476AD(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = Convert_ToUInt64_mD1F441A212C758877A6F3D8A8B2DD5C35EB9873D(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  uint64_t Half_System_IConvertible_ToUInt64_m05B76C8955DAB709F5560CEBEDF487C8F8128D51_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6*>(__this + _offset);
	uint64_t _returnValue;
	_returnValue = Half_System_IConvertible_ToUInt64_m05B76C8955DAB709F5560CEBEDF487C8F8128D51(_thisAdjusted, ___provider0, method);
	return _returnValue;
}
// System.Void SystemHalf.Half::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Half__cctor_m3D6141F5213662619545F8A64BF3444FA85478BC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0;
		L_0 = Half_ToHalf_m7810D39A49E30675CD941CF4804FEBBDB11F1F01((uint16_t)1, NULL);
		((Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_StaticFields*)il2cpp_codegen_static_fields_for(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var))->___Epsilon_1 = L_0;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_1;
		L_1 = Half_ToHalf_m7810D39A49E30675CD941CF4804FEBBDB11F1F01((uint16_t)((int32_t)31743), NULL);
		((Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_StaticFields*)il2cpp_codegen_static_fields_for(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var))->___MaxValue_2 = L_1;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2;
		L_2 = Half_ToHalf_m7810D39A49E30675CD941CF4804FEBBDB11F1F01((uint16_t)((int32_t)64511), NULL);
		((Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_StaticFields*)il2cpp_codegen_static_fields_for(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var))->___MinValue_3 = L_2;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_3;
		L_3 = Half_ToHalf_m7810D39A49E30675CD941CF4804FEBBDB11F1F01((uint16_t)((int32_t)65024), NULL);
		((Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_StaticFields*)il2cpp_codegen_static_fields_for(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var))->___NaN_4 = L_3;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_4;
		L_4 = Half_ToHalf_m7810D39A49E30675CD941CF4804FEBBDB11F1F01((uint16_t)((int32_t)64512), NULL);
		((Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_StaticFields*)il2cpp_codegen_static_fields_for(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var))->___NegativeInfinity_5 = L_4;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_5;
		L_5 = Half_ToHalf_m7810D39A49E30675CD941CF4804FEBBDB11F1F01((uint16_t)((int32_t)31744), NULL);
		((Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_StaticFields*)il2cpp_codegen_static_fields_for(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var))->___PositiveInfinity_6 = L_5;
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
// System.UInt32 SystemHalf.HalfHelper::ConvertMantissa(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t HalfHelper_ConvertMantissa_mC1E944AB304077C33D5C92EF1B1711F4D9A709FF (int32_t ___i0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		int32_t L_0 = ___i0;
		V_0 = ((int32_t)(L_0<<((int32_t)13)));
		V_1 = 0;
		goto IL_0015;
	}

IL_0009:
	{
		uint32_t L_1 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, ((int32_t)8388608)));
		uint32_t L_2 = V_0;
		V_0 = ((int32_t)((int32_t)L_2<<1));
	}

IL_0015:
	{
		uint32_t L_3 = V_0;
		if (!((int32_t)((int32_t)L_3&((int32_t)8388608))))
		{
			goto IL_0009;
		}
	}
	{
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4&((int32_t)-8388609)));
		uint32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, ((int32_t)947912704)));
		uint32_t L_6 = V_0;
		uint32_t L_7 = V_1;
		return ((int32_t)((int32_t)L_6|(int32_t)L_7));
	}
}
// System.UInt32[] SystemHalf.HalfHelper::GenerateMantissaTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* HalfHelper_GenerateMantissaTable_m6B72ABB600DC7179B6E95862F78F9778E70F73C6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)2048));
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)0);
		V_1 = 1;
		goto IL_0020;
	}

IL_0013:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		uint32_t L_5;
		L_5 = HalfHelper_ConvertMantissa_mC1E944AB304077C33D5C92EF1B1711F4D9A709FF(L_4, NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint32_t)L_5);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0020:
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)1024))))
		{
			goto IL_0013;
		}
	}
	{
		V_2 = ((int32_t)1024);
		goto IL_0047;
	}

IL_0030:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = V_2;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)939524096), ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_10, ((int32_t)1024)))<<((int32_t)13))))));
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0047:
	{
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)2048))))
		{
			goto IL_0030;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_0;
		return L_13;
	}
}
// System.UInt32[] SystemHalf.HalfHelper::GenerateExponentTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* HalfHelper_GenerateExponentTable_m2E62C47F8DDEE187B843B366C5062270C8A1A138 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)0);
		V_1 = 1;
		goto IL_001b;
	}

IL_0010:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = V_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint32_t)((int32_t)(L_4<<((int32_t)23))));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001b:
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)31))))
		{
			goto IL_0010;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (uint32_t)((int32_t)1199570944));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (uint32_t)((int32_t)-2147483648LL));
		V_2 = ((int32_t)33);
		goto IL_004e;
	}

IL_0037:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_0;
		int32_t L_10 = V_2;
		int32_t L_11 = V_2;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint32_t)((int32_t)(uint32_t)((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)((int32_t)-2147483648LL))), ((int64_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)32)))<<((int32_t)23))))))));
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004e:
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)63))))
		{
			goto IL_0037;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)63)), (uint32_t)((int32_t)-947912704));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_0;
		return L_15;
	}
}
// System.UInt16[] SystemHalf.HalfHelper::GenerateOffsetTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* HalfHelper_GenerateOffsetTable_m1DE9E459F5A6EBD018F672D354AFD4A63462CE68 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		V_0 = L_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint16_t)0);
		V_1 = 1;
		goto IL_001c;
	}

IL_0010:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint16_t)((int32_t)1024));
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_001c:
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)32))))
		{
			goto IL_0010;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = V_0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (uint16_t)0);
		V_2 = ((int32_t)33);
		goto IL_0037;
	}

IL_002b:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_7 = V_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint16_t)((int32_t)1024));
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0037:
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)64))))
		{
			goto IL_002b;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_11 = V_0;
		return L_11;
	}
}
// System.UInt16[] SystemHalf.HalfHelper::GenerateBaseTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* HalfHelper_GenerateBaseTable_mE546FB41DA48579901177C0D89A16D587F85D6DE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_0 = NULL;
	int32_t V_1 = 0;
	int8_t V_2 = 0x0;
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		V_0 = L_0;
		V_1 = 0;
		goto IL_00d3;
	}

IL_0012:
	{
		int32_t L_1 = V_1;
		V_2 = ((int8_t)((int32_t)il2cpp_codegen_subtract(((int32_t)127), L_1)));
		int8_t L_2 = V_2;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)24))))
		{
			goto IL_0036;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_4|0))), (uint16_t)0);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_6|((int32_t)256)))), (uint16_t)((int32_t)32768));
		goto IL_00cf;
	}

IL_0036:
	{
		int8_t L_7 = V_2;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)14))))
		{
			goto IL_006d;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_8 = V_0;
		int32_t L_9 = V_1;
		int8_t L_10 = V_2;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_9|0))), (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)1024)>>((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)18), (int32_t)L_10))&((int32_t)31)))))));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_11 = V_0;
		int32_t L_12 = V_1;
		int8_t L_13 = V_2;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12|((int32_t)256)))), (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)(((int32_t)1024)>>((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)18), (int32_t)L_13))&((int32_t)31)))))|((int32_t)32768)))));
		goto IL_00cf;
	}

IL_006d:
	{
		int8_t L_14 = V_2;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)-15))))
		{
			goto IL_0098;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_15 = V_0;
		int32_t L_16 = V_1;
		int8_t L_17 = V_2;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_16|0))), (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)15), (int32_t)L_17))<<((int32_t)10)))));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_18 = V_0;
		int32_t L_19 = V_1;
		int8_t L_20 = V_2;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_19|((int32_t)256)))), (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)15), (int32_t)L_20))<<((int32_t)10)))|((int32_t)32768)))));
		goto IL_00cf;
	}

IL_0098:
	{
		int8_t L_21 = V_2;
		if ((((int32_t)L_21) <= ((int32_t)((int32_t)-128))))
		{
			goto IL_00b7;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_22 = V_0;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_23|0))), (uint16_t)((int32_t)31744));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_24 = V_0;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_25|((int32_t)256)))), (uint16_t)((int32_t)64512));
		goto IL_00cf;
	}

IL_00b7:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_26 = V_0;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_27|0))), (uint16_t)((int32_t)31744));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_28 = V_0;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_29|((int32_t)256)))), (uint16_t)((int32_t)64512));
	}

IL_00cf:
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00d3:
	{
		int32_t L_31 = V_1;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)256))))
		{
			goto IL_0012;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_32 = V_0;
		return L_32;
	}
}
// System.SByte[] SystemHalf.HalfHelper::GenerateShiftTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* HalfHelper_GenerateShiftTable_m210255C812AD58F5297B090613979D46DFFD8CF7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_0 = NULL;
	int32_t V_1 = 0;
	int8_t V_2 = 0x0;
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_0 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var, (uint32_t)((int32_t)512));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0096;
	}

IL_0012:
	{
		int32_t L_1 = V_1;
		V_2 = ((int8_t)((int32_t)il2cpp_codegen_subtract(((int32_t)127), L_1)));
		int8_t L_2 = V_2;
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)24))))
		{
			goto IL_0031;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_4|0))), (int8_t)((int32_t)24));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_6|((int32_t)256)))), (int8_t)((int32_t)24));
		goto IL_0092;
	}

IL_0031:
	{
		int8_t L_7 = V_2;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)14))))
		{
			goto IL_004e;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_8 = V_0;
		int32_t L_9 = V_1;
		int8_t L_10 = V_2;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_9|0))), (int8_t)((int8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, 1))));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_11 = V_0;
		int32_t L_12 = V_1;
		int8_t L_13 = V_2;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_12|((int32_t)256)))), (int8_t)((int8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, 1))));
		goto IL_0092;
	}

IL_004e:
	{
		int8_t L_14 = V_2;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)-15))))
		{
			goto IL_0067;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_15 = V_0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_16|0))), (int8_t)((int32_t)13));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_17 = V_0;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_18|((int32_t)256)))), (int8_t)((int32_t)13));
		goto IL_0092;
	}

IL_0067:
	{
		int8_t L_19 = V_2;
		if ((((int32_t)L_19) <= ((int32_t)((int32_t)-128))))
		{
			goto IL_0080;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_21|0))), (int8_t)((int32_t)24));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_22 = V_0;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_23|((int32_t)256)))), (int8_t)((int32_t)24));
		goto IL_0092;
	}

IL_0080:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_24 = V_0;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_25|0))), (int8_t)((int32_t)13));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_26 = V_0;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_27|((int32_t)256)))), (int8_t)((int32_t)13));
	}

IL_0092:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0096:
	{
		int32_t L_29 = V_1;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)256))))
		{
			goto IL_0012;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_30 = V_0;
		return L_30;
	}
}
// System.Single SystemHalf.HalfHelper::HalfToSingle(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HalfHelper_HalfToSingle_m6E455DD1F0F2DD2080982041A8ABA3DA8FCDC444 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___MantissaTable_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = ((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___OffsetTable_2;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2 = ___half0;
		uint16_t L_3 = L_2.___Value_0;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)((int32_t)L_3>>((int32_t)10)));
		uint16_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_6 = ___half0;
		uint16_t L_7 = L_6.___Value_0;
		NullCheck(L_0);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, ((int32_t)((int32_t)L_7&((int32_t)1023)))));
		uint32_t L_9 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___ExponentTable_1;
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_11 = ___half0;
		uint16_t L_12 = L_11.___Value_0;
		NullCheck(L_10);
		int32_t L_13 = ((int32_t)((int32_t)L_12>>((int32_t)10)));
		uint32_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_14));
		float L_15 = *((float*)((uintptr_t)(&V_0)));
		return L_15;
	}
}
// SystemHalf.Half SystemHalf.HalfHelper::SingleToHalf(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 HalfHelper_SingleToHalf_m6F45AF259006445DFBF3D8B176547D1539AA7620 (float ___single0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = *((uint32_t*)((uintptr_t)(&___single0)));
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = ((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___BaseTable_3;
		uint32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)(((int32_t)((uint32_t)L_2>>((int32_t)23)))&((int32_t)511)));
		uint16_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		uint32_t L_5 = V_0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_6 = ((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___ShiftTable_4;
		uint32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)((uint32_t)L_7>>((int32_t)23)));
		int8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_10;
		L_10 = Half_ToHalf_m7810D39A49E30675CD941CF4804FEBBDB11F1F01((uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, ((int32_t)((uint32_t)((int32_t)((int32_t)L_5&((int32_t)8388607)))>>((int32_t)((int32_t)L_9&((int32_t)31)))))))), NULL);
		return L_10;
	}
}
// SystemHalf.Half SystemHalf.HalfHelper::Negate(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 HalfHelper_Negate_m002DA8925677B546673FAAF4238EF75E34D4AD03 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half0;
		uint16_t L_1 = L_0.___Value_0;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2;
		L_2 = Half_ToHalf_m7810D39A49E30675CD941CF4804FEBBDB11F1F01((uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_1^((int32_t)32768)))), NULL);
		return L_2;
	}
}
// SystemHalf.Half SystemHalf.HalfHelper::Abs(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 HalfHelper_Abs_m6BC55ACC445204854A9BEF6E45B30893F01D33C6 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half0;
		uint16_t L_1 = L_0.___Value_0;
		il2cpp_codegen_runtime_class_init_inline(Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6_il2cpp_TypeInfo_var);
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_2;
		L_2 = Half_ToHalf_m7810D39A49E30675CD941CF4804FEBBDB11F1F01((uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_1&((int32_t)32767)))), NULL);
		return L_2;
	}
}
// System.Boolean SystemHalf.HalfHelper::IsNaN(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HalfHelper_IsNaN_mF448A3F9B6274AB5E93D0A0DA250F78B9984A723 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half0, const RuntimeMethod* method) 
{
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half0;
		uint16_t L_1 = L_0.___Value_0;
		return (bool)((((int32_t)((int32_t)((int32_t)L_1&((int32_t)32767)))) > ((int32_t)((int32_t)31744)))? 1 : 0);
	}
}
// System.Boolean SystemHalf.HalfHelper::IsInfinity(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HalfHelper_IsInfinity_m68217EAC90890E34BDF741A2E30A250C2CAA6DC0 (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half0, const RuntimeMethod* method) 
{
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half0;
		uint16_t L_1 = L_0.___Value_0;
		return (bool)((((int32_t)((int32_t)((int32_t)L_1&((int32_t)32767)))) == ((int32_t)((int32_t)31744)))? 1 : 0);
	}
}
// System.Boolean SystemHalf.HalfHelper::IsPositiveInfinity(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HalfHelper_IsPositiveInfinity_mB0C4E459BAB72036708647B2993A8E5CC80F571F (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half0, const RuntimeMethod* method) 
{
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half0;
		uint16_t L_1 = L_0.___Value_0;
		return (bool)((((int32_t)L_1) == ((int32_t)((int32_t)31744)))? 1 : 0);
	}
}
// System.Boolean SystemHalf.HalfHelper::IsNegativeInfinity(SystemHalf.Half)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HalfHelper_IsNegativeInfinity_mEAE6631053BDA05C10C9C911737CB6DA09F69C1B (Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 ___half0, const RuntimeMethod* method) 
{
	{
		Half_tD9EF0813E872A0358C7D9BE2F2E738A5298BDDD6 L_0 = ___half0;
		uint16_t L_1 = L_0.___Value_0;
		return (bool)((((int32_t)L_1) == ((int32_t)((int32_t)64512)))? 1 : 0);
	}
}
// System.Void SystemHalf.HalfHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HalfHelper__cctor_m5EE5E983D03DAF299B4684DF50E43928DB0CE06C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = HalfHelper_GenerateMantissaTable_m6B72ABB600DC7179B6E95862F78F9778E70F73C6(NULL);
		((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___MantissaTable_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___MantissaTable_0), (void*)L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = HalfHelper_GenerateExponentTable_m2E62C47F8DDEE187B843B366C5062270C8A1A138(NULL);
		((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___ExponentTable_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___ExponentTable_1), (void*)L_1);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2;
		L_2 = HalfHelper_GenerateOffsetTable_m1DE9E459F5A6EBD018F672D354AFD4A63462CE68(NULL);
		((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___OffsetTable_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___OffsetTable_2), (void*)L_2);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_3;
		L_3 = HalfHelper_GenerateBaseTable_mE546FB41DA48579901177C0D89A16D587F85D6DE(NULL);
		((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___BaseTable_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___BaseTable_3), (void*)L_3);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_4;
		L_4 = HalfHelper_GenerateShiftTable_m210255C812AD58F5297B090613979D46DFFD8CF7(NULL);
		((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___ShiftTable_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_StaticFields*)il2cpp_codegen_static_fields_for(HalfHelper_t94335AF4C7D8D494A710A98D8009743873DB7F9C_il2cpp_TypeInfo_var))->___ShiftTable_4), (void*)L_4);
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
// System.Int32 StbImageSharp.AnimatedFrameResult::get_DelayInMs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatedFrameResult_get_DelayInMs_m2205C96AEEA08BC776A1E882B1EFC6BD6785A08F (AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDelayInMsU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void StbImageSharp.AnimatedFrameResult::set_DelayInMs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedFrameResult_set_DelayInMs_mEC055DC8715FC67099CC3974B3981175C8B0535B (AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CDelayInMsU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void StbImageSharp.AnimatedFrameResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedFrameResult__ctor_m859CA547496DD297E7912AF87480551047370B88 (AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* __this, const RuntimeMethod* method) 
{
	{
		ImageResult__ctor_mB265989B8E23404BCA3EC4E208A049E1B46B0F04(__this, NULL);
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
// System.Void StbImageSharp.AnimatedGifEnumerator::.ctor(System.IO.Stream,StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedGifEnumerator__ctor_m426872B178B1C6F692C3C12ACE4FCB23BE2EACB4 (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, int32_t ___colorComponents1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___input0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15088A7C50E83E49058833A4287B3C2F1CD730D2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimatedGifEnumerator__ctor_m426872B178B1C6F692C3C12ACE4FCB23BE2EACB4_RuntimeMethod_var)));
	}

IL_0014:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___input0;
		stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* L_3 = (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7*)il2cpp_codegen_object_new(stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		stbi__context__ctor_mC829A0366DACB27129BF977D4B90B9C2326DD40F(L_3, L_2, NULL);
		__this->____context_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____context_0), (void*)L_3);
		stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* L_4 = __this->____context_0;
		il2cpp_codegen_runtime_class_init_inline(StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = StbImage_stbi__gif_test_m0F1BA8079B15A05AEDC4FBE6ECA650E8B2C30078(L_4, NULL);
		if (L_5)
		{
			goto IL_0038;
		}
	}
	{
		Exception_t* L_6 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral47025BE0E94E1A7B34293597C96154C064A21D9F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimatedGifEnumerator__ctor_m426872B178B1C6F692C3C12ACE4FCB23BE2EACB4_RuntimeMethod_var)));
	}

IL_0038:
	{
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_7 = (stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4*)il2cpp_codegen_object_new(stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		stbi__gif__ctor_m4655A211D1448DD7C627AE3FA6DF636BD969DEEB(L_7, NULL);
		__this->____gif_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gif_1), (void*)L_7);
		int32_t L_8 = ___colorComponents1;
		__this->___U3CColorComponentsU3Ek__BackingField_2 = L_8;
		return;
	}
}
// StbImageSharp.ColorComponents StbImageSharp.AnimatedGifEnumerator::get_ColorComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatedGifEnumerator_get_ColorComponents_m59C0A0CF32749D8E565EAFC8CC201C07C53FB44C (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CColorComponentsU3Ek__BackingField_2;
		return L_0;
	}
}
// StbImageSharp.AnimatedFrameResult StbImageSharp.AnimatedGifEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* AnimatedGifEnumerator_get_Current_m3F989155257B9081EF47BB9C2FBDE89B11B32345 (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, const RuntimeMethod* method) 
{
	{
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_0 = __this->___U3CCurrentU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void StbImageSharp.AnimatedGifEnumerator::set_Current(StbImageSharp.AnimatedFrameResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedGifEnumerator_set_Current_mA895B21FF85EBAF2D6508A2C066E57DE8D3B69DF (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* ___value0, const RuntimeMethod* method) 
{
	{
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_0 = ___value0;
		__this->___U3CCurrentU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Object StbImageSharp.AnimatedGifEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnimatedGifEnumerator_System_Collections_IEnumerator_get_Current_m0931A15FACFBFD9B0816C561D93A467B60785721 (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, const RuntimeMethod* method) 
{
	{
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_0;
		L_0 = AnimatedGifEnumerator_get_Current_m3F989155257B9081EF47BB9C2FBDE89B11B32345_inline(__this, NULL);
		return L_0;
	}
}
// System.Void StbImageSharp.AnimatedGifEnumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedGifEnumerator_Dispose_m99C13CB070D1A7E9C7993078D56DA1CD96AC336D (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(9 /* System.Void StbImageSharp.AnimatedGifEnumerator::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m3352E2F2119EB46913B51B7AAE2F217C63C35F2A(__this, NULL);
		return;
	}
}
// System.Boolean StbImageSharp.AnimatedGifEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatedGifEnumerator_MoveNext_mDC4944E7F440C646EF92B3393574B6465A59BC9D (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	uint8_t* V_2 = NULL;
	AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* G_B5_0 = NULL;
	AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* G_B5_1 = NULL;
	AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* G_B5_2 = NULL;
	AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* G_B4_0 = NULL;
	AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* G_B4_1 = NULL;
	AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* G_B4_2 = NULL;
	int32_t G_B6_0 = 0;
	AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* G_B6_1 = NULL;
	AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* G_B6_2 = NULL;
	AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* G_B6_3 = NULL;
	{
		stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* L_0 = __this->____context_0;
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_1 = __this->____gif_1;
		int32_t L_2;
		L_2 = AnimatedGifEnumerator_get_ColorComponents_m59C0A0CF32749D8E565EAFC8CC201C07C53FB44C_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var);
		uint8_t* L_3;
		L_3 = StbImage_stbi__gif_load_next_mDC8F01A3394A45278C4E50153DFF769641DB124B(L_0, L_1, (int32_t*)((uintptr_t)(&V_0)), L_2, (uint8_t*)((uintptr_t)(&V_1)), NULL);
		V_2 = L_3;
		uint8_t* L_4 = V_2;
		if ((!(((uintptr_t)L_4) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0025;
		}
	}
	{
		return (bool)0;
	}

IL_0025:
	{
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_5;
		L_5 = AnimatedGifEnumerator_get_Current_m3F989155257B9081EF47BB9C2FBDE89B11B32345_inline(__this, NULL);
		if (L_5)
		{
			goto IL_00ab;
		}
	}
	{
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_6 = (AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41*)il2cpp_codegen_object_new(AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		AnimatedFrameResult__ctor_m859CA547496DD297E7912AF87480551047370B88(L_6, NULL);
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_7 = L_6;
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_8 = __this->____gif_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->___w_27;
		NullCheck(L_7);
		ImageResult_set_Width_mAE0222CF14D7CC542BE55D499D08D8B124E788E3_inline(L_7, L_9, NULL);
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_10 = L_7;
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_11 = __this->____gif_1;
		NullCheck(L_11);
		int32_t L_12 = L_11->___h_11;
		NullCheck(L_10);
		ImageResult_set_Height_mD2E85A00BF8528F1DE5FC68CBF5FC3DD43DCD603_inline(L_10, L_12, NULL);
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_13 = L_10;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		ImageResult_set_SourceComp_m99F6BE4EDDAE7B80B3F316737EE9B401DDED9F0F_inline(L_13, L_14, NULL);
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_15 = L_13;
		int32_t L_16;
		L_16 = AnimatedGifEnumerator_get_ColorComponents_m59C0A0CF32749D8E565EAFC8CC201C07C53FB44C_inline(__this, NULL);
		G_B4_0 = L_15;
		G_B4_1 = L_15;
		G_B4_2 = __this;
		if (!L_16)
		{
			G_B5_0 = L_15;
			G_B5_1 = L_15;
			G_B5_2 = __this;
			goto IL_006d;
		}
	}
	{
		int32_t L_17;
		L_17 = AnimatedGifEnumerator_get_ColorComponents_m59C0A0CF32749D8E565EAFC8CC201C07C53FB44C_inline(__this, NULL);
		G_B6_0 = ((int32_t)(L_17));
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006e;
	}

IL_006d:
	{
		int32_t L_18 = V_0;
		G_B6_0 = L_18;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006e:
	{
		NullCheck(G_B6_1);
		ImageResult_set_Comp_m9EEB51B4B3BEC210CCD4ED65708867686E65175D_inline(G_B6_1, G_B6_0, NULL);
		NullCheck(G_B6_3);
		AnimatedGifEnumerator_set_Current_mA895B21FF85EBAF2D6508A2C066E57DE8D3B69DF_inline(G_B6_3, G_B6_2, NULL);
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_19;
		L_19 = AnimatedGifEnumerator_get_Current_m3F989155257B9081EF47BB9C2FBDE89B11B32345_inline(__this, NULL);
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_20;
		L_20 = AnimatedGifEnumerator_get_Current_m3F989155257B9081EF47BB9C2FBDE89B11B32345_inline(__this, NULL);
		NullCheck(L_20);
		int32_t L_21;
		L_21 = ImageResult_get_Width_m6D3AB29E93FBE44C3F43B97D2D8DD5CDA8291270_inline(L_20, NULL);
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_22;
		L_22 = AnimatedGifEnumerator_get_Current_m3F989155257B9081EF47BB9C2FBDE89B11B32345_inline(__this, NULL);
		NullCheck(L_22);
		int32_t L_23;
		L_23 = ImageResult_get_Height_m987C76BE62465224C54F30712169C963063BF7C9_inline(L_22, NULL);
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_24;
		L_24 = AnimatedGifEnumerator_get_Current_m3F989155257B9081EF47BB9C2FBDE89B11B32345_inline(__this, NULL);
		NullCheck(L_24);
		int32_t L_25;
		L_25 = ImageResult_get_Comp_mDA76ABF7DFEB671E6A506B45B110CCD516FD7A8F_inline(L_24, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_21, L_23)), (int32_t)L_25)));
		NullCheck(L_19);
		ImageResult_set_Data_m1DF0EE05A3AD847A12C8AE138B21E9FA5969FAA3_inline(L_19, L_26, NULL);
	}

IL_00ab:
	{
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_27;
		L_27 = AnimatedGifEnumerator_get_Current_m3F989155257B9081EF47BB9C2FBDE89B11B32345_inline(__this, NULL);
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_28 = __this->____gif_1;
		NullCheck(L_28);
		int32_t L_29 = L_28->___delay_8;
		NullCheck(L_27);
		AnimatedFrameResult_set_DelayInMs_mEC055DC8715FC67099CC3974B3981175C8B0535B_inline(L_27, L_29, NULL);
		uint8_t* L_30 = V_2;
		intptr_t L_31;
		memset((&L_31), 0, sizeof(L_31));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_31), (void*)L_30, /*hidden argument*/NULL);
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_32;
		L_32 = AnimatedGifEnumerator_get_Current_m3F989155257B9081EF47BB9C2FBDE89B11B32345_inline(__this, NULL);
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = ImageResult_get_Data_mBD84D1E6BD45AC125145D245EAD933D2B8E51D4B_inline(L_32, NULL);
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_34;
		L_34 = AnimatedGifEnumerator_get_Current_m3F989155257B9081EF47BB9C2FBDE89B11B32345_inline(__this, NULL);
		NullCheck(L_34);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35;
		L_35 = ImageResult_get_Data_mBD84D1E6BD45AC125145D245EAD933D2B8E51D4B_inline(L_34, NULL);
		NullCheck(L_35);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m92700C9E60BAB2FDAF6CE02C16EFE9DCB7D6035E(L_31, L_33, 0, ((int32_t)(((RuntimeArray*)L_35)->max_length)), NULL);
		return (bool)1;
	}
}
// System.Void StbImageSharp.AnimatedGifEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedGifEnumerator_Reset_mA8BA523F4758E19A93AD2CA8F99DD9B7187CD39E (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimatedGifEnumerator_Reset_mA8BA523F4758E19A93AD2CA8F99DD9B7187CD39E_RuntimeMethod_var)));
	}
}
// System.Void StbImageSharp.AnimatedGifEnumerator::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedGifEnumerator_Finalize_mAE185D1EF7D602DD994B2F0804823FB26673BAFD (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(9 /* System.Void StbImageSharp.AnimatedGifEnumerator::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
// System.Void StbImageSharp.AnimatedGifEnumerator::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedGifEnumerator_Dispose_m8665EB6C8E57DD728AC7627280FED3D4D4213F48 (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_009c;
		}
	}
	{
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_1 = __this->____gif_1;
		if (!L_1)
		{
			goto IL_009c;
		}
	}
	{
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_2 = __this->____gif_1;
		NullCheck(L_2);
		uint8_t* L_3 = L_2->____out__0;
		if ((((intptr_t)L_3) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_003d;
		}
	}
	{
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_4 = __this->____gif_1;
		NullCheck(L_4);
		uint8_t* L_5 = L_4->____out__0;
		il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		CRuntime_free_m8FA48AB801FF409B2315672BC46B4C2F879129B3((void*)L_5, NULL);
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_6 = __this->____gif_1;
		NullCheck(L_6);
		L_6->____out__0 = (uint8_t*)((uintptr_t)0);
	}

IL_003d:
	{
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_7 = __this->____gif_1;
		NullCheck(L_7);
		uint8_t* L_8 = L_7->___history_12;
		if ((((intptr_t)L_8) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0069;
		}
	}
	{
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_9 = __this->____gif_1;
		NullCheck(L_9);
		uint8_t* L_10 = L_9->___history_12;
		il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		CRuntime_free_m8FA48AB801FF409B2315672BC46B4C2F879129B3((void*)L_10, NULL);
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_11 = __this->____gif_1;
		NullCheck(L_11);
		L_11->___history_12 = (uint8_t*)((uintptr_t)0);
	}

IL_0069:
	{
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_12 = __this->____gif_1;
		NullCheck(L_12);
		uint8_t* L_13 = L_12->___background_1;
		if ((((intptr_t)L_13) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0095;
		}
	}
	{
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_14 = __this->____gif_1;
		NullCheck(L_14);
		uint8_t* L_15 = L_14->___background_1;
		il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		CRuntime_free_m8FA48AB801FF409B2315672BC46B4C2F879129B3((void*)L_15, NULL);
		stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* L_16 = __this->____gif_1;
		NullCheck(L_16);
		L_16->___background_1 = (uint8_t*)((uintptr_t)0);
	}

IL_0095:
	{
		__this->____gif_1 = (stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gif_1), (void*)(stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4*)NULL);
	}

IL_009c:
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
// System.Void StbImageSharp.AnimatedGifEnumerable::.ctor(System.IO.Stream,StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatedGifEnumerable__ctor_m2E24AD10C34007EBA587FA263F8F0409357A7E65 (AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, int32_t ___colorComponents1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___input0;
		__this->____input_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____input_0), (void*)L_0);
		int32_t L_1 = ___colorComponents1;
		__this->___U3CColorComponentsU3Ek__BackingField_1 = L_1;
		return;
	}
}
// StbImageSharp.ColorComponents StbImageSharp.AnimatedGifEnumerable::get_ColorComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatedGifEnumerable_get_ColorComponents_mF90D6769F0A2C038057D86AAF7FACA7482A12CBB (AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CColorComponentsU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<StbImageSharp.AnimatedFrameResult> StbImageSharp.AnimatedGifEnumerable::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnimatedGifEnumerable_GetEnumerator_mE25641822012E135FE60531275CF98DA367A8952 (AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____input_0;
		int32_t L_1;
		L_1 = AnimatedGifEnumerable_get_ColorComponents_mF90D6769F0A2C038057D86AAF7FACA7482A12CBB_inline(__this, NULL);
		AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* L_2 = (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B*)il2cpp_codegen_object_new(AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AnimatedGifEnumerator__ctor_m426872B178B1C6F692C3C12ACE4FCB23BE2EACB4(L_2, L_0, L_1, NULL);
		return L_2;
	}
}
// System.Collections.IEnumerator StbImageSharp.AnimatedGifEnumerable::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AnimatedGifEnumerable_System_Collections_IEnumerable_GetEnumerator_m7A4E79B676AB77DA5A919C2A93BE0F601F8F0852 (AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = AnimatedGifEnumerable_GetEnumerator_mE25641822012E135FE60531275CF98DA367A8952(__this, NULL);
		return L_0;
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
// System.Nullable`1<StbImageSharp.ImageInfo> StbImageSharp.ImageInfo::FromStream(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A ImageInfo_FromStream_mDCCA48A44F883E252DACD828AD4A8A9F7552D620 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m2290BB1875E64452A7C9959B7E71F75E5B39F701_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* V_3 = NULL;
	bool V_4 = false;
	Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A V_5;
	memset((&V_5), 0, sizeof(V_5));
	ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C V_6;
	memset((&V_6), 0, sizeof(V_6));
	ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C* G_B4_0 = NULL;
	ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C* G_B5_1 = NULL;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* L_1 = (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7*)il2cpp_codegen_object_new(stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		stbi__context__ctor_mC829A0366DACB27129BF977D4B90B9C2326DD40F(L_1, L_0, NULL);
		V_3 = L_1;
		stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* L_2 = V_3;
		il2cpp_codegen_runtime_class_init_inline(StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = StbImage_stbi__is_16_main_mBFDEAA168B924831ED4517F73BCD14FD682BBEA9(L_2, NULL);
		V_4 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* L_4 = V_3;
		StbImage_stbi__rewind_m046A3C2D9136B0B63F3B6ED5EC7312031E7039D8(L_4, NULL);
		stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* L_5 = V_3;
		int32_t L_6;
		L_6 = StbImage_stbi__info_main_mB0784F4CD8A5008019ED403B28F708E5D2D2828F(L_5, (int32_t*)((uintptr_t)(&V_0)), (int32_t*)((uintptr_t)(&V_1)), (int32_t*)((uintptr_t)(&V_2)), NULL);
		stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* L_7 = V_3;
		StbImage_stbi__rewind_m046A3C2D9136B0B63F3B6ED5EC7312031E7039D8(L_7, NULL);
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A));
		Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A L_8 = V_5;
		return L_8;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C));
		int32_t L_9 = V_0;
		(&V_6)->___Width_0 = L_9;
		int32_t L_10 = V_1;
		(&V_6)->___Height_1 = L_10;
		int32_t L_11 = V_2;
		(&V_6)->___ColorComponents_2 = L_11;
		bool L_12 = V_4;
		G_B3_0 = (&V_6);
		if (L_12)
		{
			G_B4_0 = (&V_6);
			goto IL_0063;
		}
	}
	{
		G_B5_0 = 8;
		G_B5_1 = G_B3_0;
		goto IL_0065;
	}

IL_0063:
	{
		G_B5_0 = ((int32_t)16);
		G_B5_1 = G_B4_0;
	}

IL_0065:
	{
		G_B5_1->___BitsPerChannel_3 = G_B5_0;
		ImageInfo_tE2CA0C1A198F5FE79839287D784E8E842F05434C L_13 = V_6;
		Nullable_1_tFFA7CEF54134C7278B8C488233ECEEFF06445F1A L_14;
		memset((&L_14), 0, sizeof(L_14));
		Nullable_1__ctor_m2290BB1875E64452A7C9959B7E71F75E5B39F701((&L_14), L_13, /*hidden argument*/Nullable_1__ctor_m2290BB1875E64452A7C9959B7E71F75E5B39F701_RuntimeMethod_var);
		return L_14;
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
// System.Int32 StbImageSharp.ImageResult::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImageResult_get_Width_m6D3AB29E93FBE44C3F43B97D2D8DD5CDA8291270 (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CWidthU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void StbImageSharp.ImageResult::set_Width(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResult_set_Width_mAE0222CF14D7CC542BE55D499D08D8B124E788E3 (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CWidthU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Int32 StbImageSharp.ImageResult::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImageResult_get_Height_m987C76BE62465224C54F30712169C963063BF7C9 (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CHeightU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void StbImageSharp.ImageResult::set_Height(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResult_set_Height_mD2E85A00BF8528F1DE5FC68CBF5FC3DD43DCD603 (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CHeightU3Ek__BackingField_1 = L_0;
		return;
	}
}
// StbImageSharp.ColorComponents StbImageSharp.ImageResult::get_SourceComp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImageResult_get_SourceComp_m3A6303FE7CE21FB12F7ED9379B796CC5D66D3556 (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSourceCompU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void StbImageSharp.ImageResult::set_SourceComp(StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResult_set_SourceComp_m99F6BE4EDDAE7B80B3F316737EE9B401DDED9F0F (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CSourceCompU3Ek__BackingField_2 = L_0;
		return;
	}
}
// StbImageSharp.ColorComponents StbImageSharp.ImageResult::get_Comp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImageResult_get_Comp_mDA76ABF7DFEB671E6A506B45B110CCD516FD7A8F (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCompU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void StbImageSharp.ImageResult::set_Comp(StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResult_set_Comp_m9EEB51B4B3BEC210CCD4ED65708867686E65175D (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CCompU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Byte[] StbImageSharp.ImageResult::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageResult_get_Data_mBD84D1E6BD45AC125145D245EAD933D2B8E51D4B (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CDataU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void StbImageSharp.ImageResult::set_Data(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResult_set_Data_m1DF0EE05A3AD847A12C8AE138B21E9FA5969FAA3 (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CDataU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// StbImageSharp.ImageResult StbImageSharp.ImageResult::FromResult(System.Byte*,System.Int32,System.Int32,StbImageSharp.ColorComponents,StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* ImageResult_FromResult_mC0E37192B7934A165DD767CAE3D1B13D4D52E5D0 (uint8_t* ___result0, int32_t ___width1, int32_t ___height2, int32_t ___comp3, int32_t ___req_comp4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* V_0 = NULL;
	ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* G_B4_0 = NULL;
	ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* G_B4_1 = NULL;
	ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* G_B3_0 = NULL;
	ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* G_B5_1 = NULL;
	ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* G_B5_2 = NULL;
	{
		uint8_t* L_0 = ___result0;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0010;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var)));
		String_t* L_1 = ((StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var))))->___stbi__g_failure_reason_0;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImageResult_FromResult_mC0E37192B7934A165DD767CAE3D1B13D4D52E5D0_RuntimeMethod_var)));
	}

IL_0010:
	{
		ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_3 = (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4*)il2cpp_codegen_object_new(ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ImageResult__ctor_mB265989B8E23404BCA3EC4E208A049E1B46B0F04(L_3, NULL);
		ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_4 = L_3;
		int32_t L_5 = ___width1;
		NullCheck(L_4);
		ImageResult_set_Width_mAE0222CF14D7CC542BE55D499D08D8B124E788E3_inline(L_4, L_5, NULL);
		ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_6 = L_4;
		int32_t L_7 = ___height2;
		NullCheck(L_6);
		ImageResult_set_Height_mD2E85A00BF8528F1DE5FC68CBF5FC3DD43DCD603_inline(L_6, L_7, NULL);
		ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_8 = L_6;
		int32_t L_9 = ___comp3;
		NullCheck(L_8);
		ImageResult_set_SourceComp_m99F6BE4EDDAE7B80B3F316737EE9B401DDED9F0F_inline(L_8, L_9, NULL);
		ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_10 = L_8;
		int32_t L_11 = ___req_comp4;
		G_B3_0 = L_10;
		G_B3_1 = L_10;
		if (!L_11)
		{
			G_B4_0 = L_10;
			G_B4_1 = L_10;
			goto IL_0033;
		}
	}
	{
		int32_t L_12 = ___req_comp4;
		G_B5_0 = L_12;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0034;
	}

IL_0033:
	{
		int32_t L_13 = ___comp3;
		G_B5_0 = L_13;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0034:
	{
		NullCheck(G_B5_1);
		ImageResult_set_Comp_m9EEB51B4B3BEC210CCD4ED65708867686E65175D_inline(G_B5_1, G_B5_0, NULL);
		V_0 = G_B5_2;
		ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_14 = V_0;
		int32_t L_15 = ___width1;
		int32_t L_16 = ___height2;
		ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = ImageResult_get_Comp_mDA76ABF7DFEB671E6A506B45B110CCD516FD7A8F_inline(L_17, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_15, L_16)), (int32_t)L_18)));
		NullCheck(L_14);
		ImageResult_set_Data_m1DF0EE05A3AD847A12C8AE138B21E9FA5969FAA3_inline(L_14, L_19, NULL);
		uint8_t* L_20 = ___result0;
		intptr_t L_21;
		memset((&L_21), 0, sizeof(L_21));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_21), (void*)L_20, /*hidden argument*/NULL);
		ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_22 = V_0;
		NullCheck(L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = ImageResult_get_Data_mBD84D1E6BD45AC125145D245EAD933D2B8E51D4B_inline(L_22, NULL);
		ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_24 = V_0;
		NullCheck(L_24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = ImageResult_get_Data_mBD84D1E6BD45AC125145D245EAD933D2B8E51D4B_inline(L_24, NULL);
		NullCheck(L_25);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m92700C9E60BAB2FDAF6CE02C16EFE9DCB7D6035E(L_21, L_23, 0, ((int32_t)(((RuntimeArray*)L_25)->max_length)), NULL);
		ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_26 = V_0;
		return L_26;
	}
}
// StbImageSharp.ImageResult StbImageSharp.ImageResult::FromStream(System.IO.Stream,StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* ImageResult_FromStream_m519EBBDF149FE16DDF193706EE81D3A597D69FBA (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___requiredComponents1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* V_4 = NULL;
	{
		V_0 = (uint8_t*)((uintptr_t)0);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{// begin finally (depth: 1)
				{
					uint8_t* L_0 = V_0;
					if ((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0))))
					{
						goto IL_0032;
					}
				}
				{
					uint8_t* L_1 = V_0;
					il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
					CRuntime_free_m8FA48AB801FF409B2315672BC46B4C2F879129B3((void*)L_1, NULL);
				}

IL_0032:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___stream0;
			stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* L_3 = (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7*)il2cpp_codegen_object_new(stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			stbi__context__ctor_mC829A0366DACB27129BF977D4B90B9C2326DD40F(L_3, L_2, NULL);
			int32_t L_4 = ___requiredComponents1;
			il2cpp_codegen_runtime_class_init_inline(StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var);
			uint8_t* L_5;
			L_5 = StbImage_stbi__load_and_postprocess_8bit_m1CA31289D60455B35EDB41E8CE3CD6CE3F59B39D(L_3, (int32_t*)((uintptr_t)(&V_1)), (int32_t*)((uintptr_t)(&V_2)), (int32_t*)((uintptr_t)(&V_3)), L_4, NULL);
			V_0 = L_5;
			uint8_t* L_6 = V_0;
			int32_t L_7 = V_1;
			int32_t L_8 = V_2;
			int32_t L_9 = V_3;
			int32_t L_10 = ___requiredComponents1;
			ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_11;
			L_11 = ImageResult_FromResult_mC0E37192B7934A165DD767CAE3D1B13D4D52E5D0(L_6, L_7, L_8, L_9, L_10, NULL);
			V_4 = L_11;
			goto IL_0033;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_12 = V_4;
		return L_12;
	}
}
// StbImageSharp.ImageResult StbImageSharp.ImageResult::FromMemory(System.Byte[],StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* ImageResult_FromMemory_mA6FF7242028697586BD0547DAEAD1CEF46F3AA61 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___requiredComponents1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_1, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0011:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					if (!L_2)
					{
						goto IL_001a;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_001a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = V_0;
			int32_t L_5 = ___requiredComponents1;
			ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_6;
			L_6 = ImageResult_FromStream_m519EBBDF149FE16DDF193706EE81D3A597D69FBA(L_4, L_5, NULL);
			V_1 = L_6;
			goto IL_001b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001b:
	{
		ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* L_7 = V_1;
		return L_7;
	}
}
// System.Collections.Generic.IEnumerable`1<StbImageSharp.AnimatedFrameResult> StbImageSharp.ImageResult::AnimatedGifFramesFromStream(System.IO.Stream,StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImageResult_AnimatedGifFramesFromStream_mE21F33B606F64C5B3600F1992F7F0ED6474B8543 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___requiredComponents1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		int32_t L_1 = ___requiredComponents1;
		AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E* L_2 = (AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E*)il2cpp_codegen_object_new(AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AnimatedGifEnumerable__ctor_m2E24AD10C34007EBA587FA263F8F0409357A7E65(L_2, L_0, L_1, NULL);
		return L_2;
	}
}
// System.Void StbImageSharp.ImageResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResult__ctor_mB265989B8E23404BCA3EC4E208A049E1B46B0F04 (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) 
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
// System.Int32 StbImageSharp.ImageResultFloat::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImageResultFloat_get_Width_m2883249CD467CD0D08006DA5FA8E89EB25B5A732 (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CWidthU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void StbImageSharp.ImageResultFloat::set_Width(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResultFloat_set_Width_mD6D7B7CCB2105CCCF379F6F00C440FFC9D46F813 (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CWidthU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Int32 StbImageSharp.ImageResultFloat::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImageResultFloat_get_Height_m60F03675ECA500FCE65594A9BF580A1F18C6D541 (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CHeightU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void StbImageSharp.ImageResultFloat::set_Height(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResultFloat_set_Height_mB942BDF6BA0F6B439BF40B601D7082FC031F3B06 (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CHeightU3Ek__BackingField_1 = L_0;
		return;
	}
}
// StbImageSharp.ColorComponents StbImageSharp.ImageResultFloat::get_SourceComp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImageResultFloat_get_SourceComp_m071C9D66AC411568573C83508E1B504E2F161AA4 (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSourceCompU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void StbImageSharp.ImageResultFloat::set_SourceComp(StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResultFloat_set_SourceComp_mD18490D71AE38A87CBC39C2B362414F497B3BFDF (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CSourceCompU3Ek__BackingField_2 = L_0;
		return;
	}
}
// StbImageSharp.ColorComponents StbImageSharp.ImageResultFloat::get_Comp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImageResultFloat_get_Comp_m26180735352821C006D877A7FB0077DF0C17929C (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCompU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void StbImageSharp.ImageResultFloat::set_Comp(StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResultFloat_set_Comp_m7AA2FA993B26946D1DFACB9FB23949268C880D23 (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CCompU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Single[] StbImageSharp.ImageResultFloat::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ImageResultFloat_get_Data_mF28ABD57A9CEB2A9169DD257AB9A8C98280E6372 (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___U3CDataU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void StbImageSharp.ImageResultFloat::set_Data(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResultFloat_set_Data_m1DB0F811837EE95469ECEF694DA5D9EE92193985 (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___value0, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___value0;
		__this->___U3CDataU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// StbImageSharp.ImageResultFloat StbImageSharp.ImageResultFloat::FromResult(System.Single*,System.Int32,System.Int32,StbImageSharp.ColorComponents,StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* ImageResultFloat_FromResult_m1BF48A9D5006184C2173CFD49EAB6781D2802FD4 (float* ___result0, int32_t ___width1, int32_t ___height2, int32_t ___comp3, int32_t ___req_comp4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* V_0 = NULL;
	ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* G_B4_0 = NULL;
	ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* G_B4_1 = NULL;
	ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* G_B3_0 = NULL;
	ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* G_B5_1 = NULL;
	ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* G_B5_2 = NULL;
	{
		float* L_0 = ___result0;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0010;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var)));
		String_t* L_1 = ((StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var))))->___stbi__g_failure_reason_0;
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, L_1, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImageResultFloat_FromResult_m1BF48A9D5006184C2173CFD49EAB6781D2802FD4_RuntimeMethod_var)));
	}

IL_0010:
	{
		ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_3 = (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB*)il2cpp_codegen_object_new(ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ImageResultFloat__ctor_m95C5AABA1DA68A09A339620E529C78ACCE296027(L_3, NULL);
		ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_4 = L_3;
		int32_t L_5 = ___width1;
		NullCheck(L_4);
		ImageResultFloat_set_Width_mD6D7B7CCB2105CCCF379F6F00C440FFC9D46F813_inline(L_4, L_5, NULL);
		ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_6 = L_4;
		int32_t L_7 = ___height2;
		NullCheck(L_6);
		ImageResultFloat_set_Height_mB942BDF6BA0F6B439BF40B601D7082FC031F3B06_inline(L_6, L_7, NULL);
		ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_8 = L_6;
		int32_t L_9 = ___comp3;
		NullCheck(L_8);
		ImageResultFloat_set_SourceComp_mD18490D71AE38A87CBC39C2B362414F497B3BFDF_inline(L_8, L_9, NULL);
		ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_10 = L_8;
		int32_t L_11 = ___req_comp4;
		G_B3_0 = L_10;
		G_B3_1 = L_10;
		if (!L_11)
		{
			G_B4_0 = L_10;
			G_B4_1 = L_10;
			goto IL_0033;
		}
	}
	{
		int32_t L_12 = ___req_comp4;
		G_B5_0 = L_12;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0034;
	}

IL_0033:
	{
		int32_t L_13 = ___comp3;
		G_B5_0 = L_13;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0034:
	{
		NullCheck(G_B5_1);
		ImageResultFloat_set_Comp_m7AA2FA993B26946D1DFACB9FB23949268C880D23_inline(G_B5_1, G_B5_0, NULL);
		V_0 = G_B5_2;
		ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_14 = V_0;
		int32_t L_15 = ___width1;
		int32_t L_16 = ___height2;
		ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = ImageResultFloat_get_Comp_m26180735352821C006D877A7FB0077DF0C17929C_inline(L_17, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_15, L_16)), (int32_t)L_18)));
		NullCheck(L_14);
		ImageResultFloat_set_Data_m1DB0F811837EE95469ECEF694DA5D9EE92193985_inline(L_14, L_19, NULL);
		float* L_20 = ___result0;
		intptr_t L_21;
		memset((&L_21), 0, sizeof(L_21));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_21), (void*)L_20, /*hidden argument*/NULL);
		ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_22 = V_0;
		NullCheck(L_22);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23;
		L_23 = ImageResultFloat_get_Data_mF28ABD57A9CEB2A9169DD257AB9A8C98280E6372_inline(L_22, NULL);
		ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_24 = V_0;
		NullCheck(L_24);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_25;
		L_25 = ImageResultFloat_get_Data_mF28ABD57A9CEB2A9169DD257AB9A8C98280E6372_inline(L_24, NULL);
		NullCheck(L_25);
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mED12872ADB0728AB4C518D76DB18964C4F3D4F7A(L_21, L_23, 0, ((int32_t)(((RuntimeArray*)L_25)->max_length)), NULL);
		ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_26 = V_0;
		return L_26;
	}
}
// StbImageSharp.ImageResultFloat StbImageSharp.ImageResultFloat::FromStream(System.IO.Stream,StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* ImageResultFloat_FromStream_m7ABD58C0251315DDD712DAA40D9E509CFD38B11F (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, int32_t ___requiredComponents1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* V_4 = NULL;
	{
		V_0 = (float*)((uintptr_t)0);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{// begin finally (depth: 1)
				{
					float* L_0 = V_0;
					if ((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0))))
					{
						goto IL_0032;
					}
				}
				{
					float* L_1 = V_0;
					il2cpp_codegen_runtime_class_init_inline(CRuntime_t4A45B959376340BD93D1277F3F71D757A662269F_il2cpp_TypeInfo_var);
					CRuntime_free_m8FA48AB801FF409B2315672BC46B4C2F879129B3((void*)L_1, NULL);
				}

IL_0032:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___stream0;
			stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* L_3 = (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7*)il2cpp_codegen_object_new(stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			stbi__context__ctor_mC829A0366DACB27129BF977D4B90B9C2326DD40F(L_3, L_2, NULL);
			int32_t L_4 = ___requiredComponents1;
			il2cpp_codegen_runtime_class_init_inline(StbImage_tBE2B6309E8A3908ECFE42D68BEF49FAB84F24D9A_il2cpp_TypeInfo_var);
			float* L_5;
			L_5 = StbImage_stbi__loadf_main_mD559B89A021A7C0611A2F92C900E2473662887F9(L_3, (int32_t*)((uintptr_t)(&V_1)), (int32_t*)((uintptr_t)(&V_2)), (int32_t*)((uintptr_t)(&V_3)), L_4, NULL);
			V_0 = L_5;
			float* L_6 = V_0;
			int32_t L_7 = V_1;
			int32_t L_8 = V_2;
			int32_t L_9 = V_3;
			int32_t L_10 = ___requiredComponents1;
			ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_11;
			L_11 = ImageResultFloat_FromResult_m1BF48A9D5006184C2173CFD49EAB6781D2802FD4(L_6, L_7, L_8, L_9, L_10, NULL);
			V_4 = L_11;
			goto IL_0033;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_12 = V_4;
		return L_12;
	}
}
// StbImageSharp.ImageResultFloat StbImageSharp.ImageResultFloat::FromMemory(System.Byte[],StbImageSharp.ColorComponents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* ImageResultFloat_FromMemory_mB94DA1B471D03C3A403311A3879FC434221AAA32 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, int32_t ___requiredComponents1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_0 = NULL;
	ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_1, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0011:
			{// begin finally (depth: 1)
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = V_0;
					if (!L_2)
					{
						goto IL_001a;
					}
				}
				{
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_001a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = V_0;
			int32_t L_5 = ___requiredComponents1;
			ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_6;
			L_6 = ImageResultFloat_FromStream_m7ABD58C0251315DDD712DAA40D9E509CFD38B11F(L_4, L_5, NULL);
			V_1 = L_6;
			goto IL_001b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001b:
	{
		ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* L_7 = V_1;
		return L_7;
	}
}
// System.Void StbImageSharp.ImageResultFloat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageResultFloat__ctor_m95C5AABA1DA68A09A339620E529C78ACCE296027 (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, const RuntimeMethod* method) 
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
// System.Void StbImageSharp.StbImage/stbi__context::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stbi__context__ctor_mC829A0366DACB27129BF977D4B90B9C2326DD40F (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&stbi__context__ctor_mC829A0366DACB27129BF977D4B90B9C2326DD40F_RuntimeMethod_var)));
	}

IL_0014:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___stream0;
		__this->___U3CStreamU3Ek__BackingField_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStreamU3Ek__BackingField_5), (void*)L_2);
		return;
	}
}
// System.IO.Stream StbImageSharp.StbImage/stbi__context::get_Stream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* stbi__context_get_Stream_m58F3540EF3F1F0326F1210E78B31F2A582178134 (stbi__context_tD5E45CF9BC4F0746859E7B156269282387389EE7* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___U3CStreamU3Ek__BackingField_5;
		return L_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void StbImageSharp.StbImage/stbi__gif::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stbi__gif__ctor_m4655A211D1448DD7C627AE3FA6DF636BD969DEEB (stbi__gif_t02F1F956E5B9DC3D68C82530DA32CBE117E7F7B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray1D_1__ctor_m75FD4AC5FDF39ECCC52B84F34324B535D1455001_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray1D_1_op_Implicit_m3C6E8A65A09DC199AAB09D86CB8D1E571960DEFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray2D_1__ctor_m3A58CFC7D1EED7D3D5087499656F8833CB720624_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray2D_1_op_Implicit_m9C7B1989C81845401B0660019E9F33460E6A7EC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE* L_0 = (UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE*)il2cpp_codegen_object_new(UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnsafeArray1D_1__ctor_m75FD4AC5FDF39ECCC52B84F34324B535D1455001(L_0, ((int32_t)8192), UnsafeArray1D_1__ctor_m75FD4AC5FDF39ECCC52B84F34324B535D1455001_RuntimeMethod_var);
		__this->___codesArray_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___codesArray_4), (void*)L_0);
		UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4* L_1 = (UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4*)il2cpp_codegen_object_new(UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnsafeArray2D_1__ctor_m3A58CFC7D1EED7D3D5087499656F8833CB720624(L_1, ((int32_t)256), 4, UnsafeArray2D_1__ctor_m3A58CFC7D1EED7D3D5087499656F8833CB720624_RuntimeMethod_var);
		__this->___lpalArray_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lpalArray_16), (void*)L_1);
		UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4* L_2 = (UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4*)il2cpp_codegen_object_new(UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnsafeArray2D_1__ctor_m3A58CFC7D1EED7D3D5087499656F8833CB720624(L_2, ((int32_t)256), 4, UnsafeArray2D_1__ctor_m3A58CFC7D1EED7D3D5087499656F8833CB720624_RuntimeMethod_var);
		__this->___palArray_20 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___palArray_20), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4* L_3 = __this->___palArray_20;
		void* L_4;
		L_4 = UnsafeArray2D_1_op_Implicit_m9C7B1989C81845401B0660019E9F33460E6A7EC3(L_3, UnsafeArray2D_1_op_Implicit_m9C7B1989C81845401B0660019E9F33460E6A7EC3_RuntimeMethod_var);
		__this->___pal_19 = (uint8_t**)L_4;
		UnsafeArray2D_1_t692271BD046851DE22F814AEF83ACE2573A69FD4* L_5 = __this->___lpalArray_16;
		void* L_6;
		L_6 = UnsafeArray2D_1_op_Implicit_m9C7B1989C81845401B0660019E9F33460E6A7EC3(L_5, UnsafeArray2D_1_op_Implicit_m9C7B1989C81845401B0660019E9F33460E6A7EC3_RuntimeMethod_var);
		__this->___lpal_15 = (uint8_t**)L_6;
		UnsafeArray1D_1_t79F6974EF957EAD3875A06FE40225337C9BF7DAE* L_7 = __this->___codesArray_4;
		void* L_8;
		L_8 = UnsafeArray1D_1_op_Implicit_m3C6E8A65A09DC199AAB09D86CB8D1E571960DEFC(L_7, UnsafeArray1D_1_op_Implicit_m3C6E8A65A09DC199AAB09D86CB8D1E571960DEFC_RuntimeMethod_var);
		__this->___codes_3 = (stbi__gif_lzw_t50321AB205854CBA2DA47AAF2C14535018D79584*)L_8;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void delegate0_Invoke_m37235E30A5928755B0FD04A5DDB2567B1E97ED4F_Multicast(delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9* __this, uint8_t* ___arg00, int32_t ___arg11, int16_t* ___arg22, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9* currentDelegate = reinterpret_cast<delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, uint8_t*, int32_t, int16_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___arg00, ___arg11, ___arg22, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void delegate0_Invoke_m37235E30A5928755B0FD04A5DDB2567B1E97ED4F_Open(delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9* __this, uint8_t* ___arg00, int32_t ___arg11, int16_t* ___arg22, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (uint8_t*, int32_t, int16_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___arg00, ___arg11, ___arg22, method);
}
void delegate0_Invoke_m37235E30A5928755B0FD04A5DDB2567B1E97ED4F_OpenStaticInvoker(delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9* __this, uint8_t* ___arg00, int32_t ___arg11, int16_t* ___arg22, const RuntimeMethod* method)
{
	InvokerActionInvoker3< uint8_t*, int32_t, int16_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___arg00, ___arg11, ___arg22);
}
void delegate0_Invoke_m37235E30A5928755B0FD04A5DDB2567B1E97ED4F_ClosedStaticInvoker(delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9* __this, uint8_t* ___arg00, int32_t ___arg11, int16_t* ___arg22, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, uint8_t*, int32_t, int16_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___arg00, ___arg11, ___arg22);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9 (delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9* __this, uint8_t* ___arg00, int32_t ___arg11, int16_t* ___arg22, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*, int32_t, int16_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11, ___arg22);

}
// System.Void StbImageSharp.StbImage/delegate0::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate0__ctor_m0AF38915FF0F5132E782B90701002BCACDC1D5FB (delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&delegate0_Invoke_m37235E30A5928755B0FD04A5DDB2567B1E97ED4F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&delegate0_Invoke_m37235E30A5928755B0FD04A5DDB2567B1E97ED4F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&delegate0_Invoke_m37235E30A5928755B0FD04A5DDB2567B1E97ED4F_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&delegate0_Invoke_m37235E30A5928755B0FD04A5DDB2567B1E97ED4F_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&delegate0_Invoke_m37235E30A5928755B0FD04A5DDB2567B1E97ED4F_Multicast;
}
// System.Void StbImageSharp.StbImage/delegate0::Invoke(System.Byte*,System.Int32,System.Int16*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate0_Invoke_m37235E30A5928755B0FD04A5DDB2567B1E97ED4F (delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9* __this, uint8_t* ___arg00, int32_t ___arg11, int16_t* ___arg22, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, uint8_t*, int32_t, int16_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg00, ___arg11, ___arg22, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult StbImageSharp.StbImage/delegate0::BeginInvoke(System.Byte*,System.Int32,System.Int16*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* delegate0_BeginInvoke_m09CC6E51FFCD219866BFC3805D10594A84E53B49 (delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9* __this, uint8_t* ___arg00, int32_t ___arg11, int16_t* ___arg22, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___arg11);
	__d_args[2] = ___arg22;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void StbImageSharp.StbImage/delegate0::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate0_EndInvoke_m14104A9197C7DC27F43A5C1FA12BE07553E8FDA4 (delegate0_t0CB02293408585149A6FBEC3B48321A5A10631A9* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void delegate1_Invoke_m8CAD5EF59306FDE189B1F32958DB56E5D1BA69F2_Multicast(delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42* __this, uint8_t* ___arg00, uint8_t* ___arg11, uint8_t* ___arg22, uint8_t* ___arg33, int32_t ___arg44, int32_t ___arg55, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42* currentDelegate = reinterpret_cast<delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, uint8_t*, uint8_t*, uint8_t*, uint8_t*, int32_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___arg00, ___arg11, ___arg22, ___arg33, ___arg44, ___arg55, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void delegate1_Invoke_m8CAD5EF59306FDE189B1F32958DB56E5D1BA69F2_Open(delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42* __this, uint8_t* ___arg00, uint8_t* ___arg11, uint8_t* ___arg22, uint8_t* ___arg33, int32_t ___arg44, int32_t ___arg55, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (uint8_t*, uint8_t*, uint8_t*, uint8_t*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___arg00, ___arg11, ___arg22, ___arg33, ___arg44, ___arg55, method);
}
void delegate1_Invoke_m8CAD5EF59306FDE189B1F32958DB56E5D1BA69F2_OpenStaticInvoker(delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42* __this, uint8_t* ___arg00, uint8_t* ___arg11, uint8_t* ___arg22, uint8_t* ___arg33, int32_t ___arg44, int32_t ___arg55, const RuntimeMethod* method)
{
	InvokerActionInvoker6< uint8_t*, uint8_t*, uint8_t*, uint8_t*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___arg00, ___arg11, ___arg22, ___arg33, ___arg44, ___arg55);
}
void delegate1_Invoke_m8CAD5EF59306FDE189B1F32958DB56E5D1BA69F2_ClosedStaticInvoker(delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42* __this, uint8_t* ___arg00, uint8_t* ___arg11, uint8_t* ___arg22, uint8_t* ___arg33, int32_t ___arg44, int32_t ___arg55, const RuntimeMethod* method)
{
	InvokerActionInvoker7< RuntimeObject*, uint8_t*, uint8_t*, uint8_t*, uint8_t*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___arg00, ___arg11, ___arg22, ___arg33, ___arg44, ___arg55);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42 (delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42* __this, uint8_t* ___arg00, uint8_t* ___arg11, uint8_t* ___arg22, uint8_t* ___arg33, int32_t ___arg44, int32_t ___arg55, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*, uint8_t*, uint8_t*, uint8_t*, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___arg00, ___arg11, ___arg22, ___arg33, ___arg44, ___arg55);

}
// System.Void StbImageSharp.StbImage/delegate1::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate1__ctor_mA57476943A3DE980D0FECD01D322B4F4BDF4D7D3 (delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 6;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&delegate1_Invoke_m8CAD5EF59306FDE189B1F32958DB56E5D1BA69F2_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&delegate1_Invoke_m8CAD5EF59306FDE189B1F32958DB56E5D1BA69F2_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&delegate1_Invoke_m8CAD5EF59306FDE189B1F32958DB56E5D1BA69F2_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 5;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&delegate1_Invoke_m8CAD5EF59306FDE189B1F32958DB56E5D1BA69F2_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&delegate1_Invoke_m8CAD5EF59306FDE189B1F32958DB56E5D1BA69F2_Multicast;
}
// System.Void StbImageSharp.StbImage/delegate1::Invoke(System.Byte*,System.Byte*,System.Byte*,System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate1_Invoke_m8CAD5EF59306FDE189B1F32958DB56E5D1BA69F2 (delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42* __this, uint8_t* ___arg00, uint8_t* ___arg11, uint8_t* ___arg22, uint8_t* ___arg33, int32_t ___arg44, int32_t ___arg55, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, uint8_t*, uint8_t*, uint8_t*, uint8_t*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg00, ___arg11, ___arg22, ___arg33, ___arg44, ___arg55, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult StbImageSharp.StbImage/delegate1::BeginInvoke(System.Byte*,System.Byte*,System.Byte*,System.Byte*,System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* delegate1_BeginInvoke_m5A2A74287D0A8621F02E98DA70AF9645A5BBB632 (delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42* __this, uint8_t* ___arg00, uint8_t* ___arg11, uint8_t* ___arg22, uint8_t* ___arg33, int32_t ___arg44, int32_t ___arg55, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback6, RuntimeObject* ___object7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[7] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	__d_args[3] = ___arg33;
	__d_args[4] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___arg44);
	__d_args[5] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___arg55);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback6, (RuntimeObject*)___object7);
}
// System.Void StbImageSharp.StbImage/delegate1::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate1_EndInvoke_m79CEEE2F7453575E3BDBB9A50CDE523EC46576C6 (delegate1_tA72E7FDABB153CC626CB576C206AC24F5ED01C42* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
uint8_t* delegate2_Invoke_m2CC52FAB743EE8280C050142C5ECDDB6789082A1_Multicast(delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F* __this, uint8_t* ___arg00, uint8_t* ___arg11, uint8_t* ___arg22, int32_t ___arg33, int32_t ___arg44, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	uint8_t* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F* currentDelegate = reinterpret_cast<delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F*>(delegatesToInvoke[i]);
		typedef uint8_t* (*FunctionPointerType) (RuntimeObject*, uint8_t*, uint8_t*, uint8_t*, int32_t, int32_t, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___arg00, ___arg11, ___arg22, ___arg33, ___arg44, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
uint8_t* delegate2_Invoke_m2CC52FAB743EE8280C050142C5ECDDB6789082A1_Open(delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F* __this, uint8_t* ___arg00, uint8_t* ___arg11, uint8_t* ___arg22, int32_t ___arg33, int32_t ___arg44, const RuntimeMethod* method)
{
	typedef uint8_t* (*FunctionPointerType) (uint8_t*, uint8_t*, uint8_t*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___arg00, ___arg11, ___arg22, ___arg33, ___arg44, method);
}
uint8_t* delegate2_Invoke_m2CC52FAB743EE8280C050142C5ECDDB6789082A1_OpenStaticInvoker(delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F* __this, uint8_t* ___arg00, uint8_t* ___arg11, uint8_t* ___arg22, int32_t ___arg33, int32_t ___arg44, const RuntimeMethod* method)
{
	return InvokerFuncInvoker5< uint8_t*, uint8_t*, uint8_t*, uint8_t*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___arg00, ___arg11, ___arg22, ___arg33, ___arg44);
}
uint8_t* delegate2_Invoke_m2CC52FAB743EE8280C050142C5ECDDB6789082A1_ClosedStaticInvoker(delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F* __this, uint8_t* ___arg00, uint8_t* ___arg11, uint8_t* ___arg22, int32_t ___arg33, int32_t ___arg44, const RuntimeMethod* method)
{
	return InvokerFuncInvoker6< uint8_t*, RuntimeObject*, uint8_t*, uint8_t*, uint8_t*, int32_t, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___arg00, ___arg11, ___arg22, ___arg33, ___arg44);
}
IL2CPP_EXTERN_C  uint8_t* DelegatePInvokeWrapper_delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F (delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F* __this, uint8_t* ___arg00, uint8_t* ___arg11, uint8_t* ___arg22, int32_t ___arg33, int32_t ___arg44, const RuntimeMethod* method)
{
	typedef uint8_t* (DEFAULT_CALL *PInvokeFunc)(uint8_t*, uint8_t*, uint8_t*, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	uint8_t* returnValue = il2cppPInvokeFunc(___arg00, ___arg11, ___arg22, ___arg33, ___arg44);

	return returnValue;
}
// System.Void StbImageSharp.StbImage/delegate2::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void delegate2__ctor_m399087F5232C1E9BED7C8CC1B0743681F7D99E20 (delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&delegate2_Invoke_m2CC52FAB743EE8280C050142C5ECDDB6789082A1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&delegate2_Invoke_m2CC52FAB743EE8280C050142C5ECDDB6789082A1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&delegate2_Invoke_m2CC52FAB743EE8280C050142C5ECDDB6789082A1_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&delegate2_Invoke_m2CC52FAB743EE8280C050142C5ECDDB6789082A1_Open;
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&delegate2_Invoke_m2CC52FAB743EE8280C050142C5ECDDB6789082A1_Multicast;
}
// System.Byte* StbImageSharp.StbImage/delegate2::Invoke(System.Byte*,System.Byte*,System.Byte*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* delegate2_Invoke_m2CC52FAB743EE8280C050142C5ECDDB6789082A1 (delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F* __this, uint8_t* ___arg00, uint8_t* ___arg11, uint8_t* ___arg22, int32_t ___arg33, int32_t ___arg44, const RuntimeMethod* method) 
{
	typedef uint8_t* (*FunctionPointerType) (RuntimeObject*, uint8_t*, uint8_t*, uint8_t*, int32_t, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg00, ___arg11, ___arg22, ___arg33, ___arg44, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult StbImageSharp.StbImage/delegate2::BeginInvoke(System.Byte*,System.Byte*,System.Byte*,System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* delegate2_BeginInvoke_m31BADE0E36614C087D7C2F72492AFFB2AC14A15D (delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F* __this, uint8_t* ___arg00, uint8_t* ___arg11, uint8_t* ___arg22, int32_t ___arg33, int32_t ___arg44, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback5, RuntimeObject* ___object6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = ___arg00;
	__d_args[1] = ___arg11;
	__d_args[2] = ___arg22;
	__d_args[3] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___arg33);
	__d_args[4] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___arg44);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// System.Byte* StbImageSharp.StbImage/delegate2::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* delegate2_EndInvoke_m5FF86B25F6025F2E1A98A529C35F501BD61B0C82 (delegate2_t9C599A06EF82738ECF5DDEBC45401143CB75CE0F* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (uint8_t*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Void StbImageSharp.StbImage/stbi__jpeg::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stbi__jpeg__ctor_m15D5D6EFC502290230477ACB3F3FA56829E4FA32 (stbi__jpeg_t783B73264C160BDD8FD99C2A40E683EBEDDB2402* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray1D_1__ctor_m742DAE97CC04FF2A5C951005E7E1DEAE976FD4B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray1D_1__ctor_m80391CAC93DAF529FDA5AC99D18457B15FD0007B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray1D_1__ctor_mF515A01BB21FA30A4F292F4417C31C5E8B88F46E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray1D_1_op_Implicit_m3953EBEAB1CAF26B950DBB41269ECA873EAC93D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray1D_1_op_Implicit_mC0306D7987021F342456F05565A07CFB3377FB38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray1D_1_op_Implicit_mFBA6F467B8CC0C2F8C27331728FDA1FED5C3B71C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray2D_1__ctor_m4B656CBF9E31CBD022740B8F979CE85FDBE33B20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray2D_1__ctor_m5ED6464C063FDB0E310BC0AC417ACCE4B08D7A41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray2D_1_op_Implicit_m2371B12B5957DF0D3A54AF1CAE6608F1C9F2106B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray2D_1_op_Implicit_mC5C089568D8BDF3C1377060081B48C7F3DEDF9D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF* L_0 = (UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF*)il2cpp_codegen_object_new(UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnsafeArray2D_1__ctor_m5ED6464C063FDB0E310BC0AC417ACCE4B08D7A41(L_0, 4, ((int32_t)64), UnsafeArray2D_1__ctor_m5ED6464C063FDB0E310BC0AC417ACCE4B08D7A41_RuntimeMethod_var);
		__this->___dequantArray_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dequantArray_4), (void*)L_0);
		UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794* L_1 = (UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794*)il2cpp_codegen_object_new(UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnsafeArray2D_1__ctor_m4B656CBF9E31CBD022740B8F979CE85FDBE33B20(L_1, 4, ((int32_t)512), UnsafeArray2D_1__ctor_m4B656CBF9E31CBD022740B8F979CE85FDBE33B20_RuntimeMethod_var);
		__this->___fast_acArray_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fast_acArray_7), (void*)L_1);
		UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA* L_2 = (UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA*)il2cpp_codegen_object_new(UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnsafeArray1D_1__ctor_m80391CAC93DAF529FDA5AC99D18457B15FD0007B(L_2, 4, UnsafeArray1D_1__ctor_m80391CAC93DAF529FDA5AC99D18457B15FD0007B_RuntimeMethod_var);
		__this->___huff_acArray_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___huff_acArray_9), (void*)L_2);
		UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA* L_3 = (UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA*)il2cpp_codegen_object_new(UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnsafeArray1D_1__ctor_m80391CAC93DAF529FDA5AC99D18457B15FD0007B(L_3, 4, UnsafeArray1D_1__ctor_m80391CAC93DAF529FDA5AC99D18457B15FD0007B_RuntimeMethod_var);
		__this->___huff_dcArray_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___huff_dcArray_11), (void*)L_3);
		UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A* L_4 = (UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A*)il2cpp_codegen_object_new(UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnsafeArray1D_1__ctor_m742DAE97CC04FF2A5C951005E7E1DEAE976FD4B1(L_4, 4, UnsafeArray1D_1__ctor_m742DAE97CC04FF2A5C951005E7E1DEAE976FD4B1_RuntimeMethod_var);
		__this->___img_compArray_14 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___img_compArray_14), (void*)L_4);
		UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933* L_5 = (UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933*)il2cpp_codegen_object_new(UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnsafeArray1D_1__ctor_mF515A01BB21FA30A4F292F4417C31C5E8B88F46E(L_5, 4, UnsafeArray1D_1__ctor_mF515A01BB21FA30A4F292F4417C31C5E8B88F46E_RuntimeMethod_var);
		__this->___orderArray_25 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___orderArray_25), (void*)L_5);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA* L_6 = __this->___huff_dcArray_11;
		void* L_7;
		L_7 = UnsafeArray1D_1_op_Implicit_m3953EBEAB1CAF26B950DBB41269ECA873EAC93D0(L_6, UnsafeArray1D_1_op_Implicit_m3953EBEAB1CAF26B950DBB41269ECA873EAC93D0_RuntimeMethod_var);
		__this->___huff_dc_10 = (stbi__huffman_t6DEAA8DAB0C7E7B906ED693F3B02A4FB88BC8D7F*)L_7;
		UnsafeArray1D_1_t815F26013F5F9CD93E7242CF2CF012641BD1A0BA* L_8 = __this->___huff_acArray_9;
		void* L_9;
		L_9 = UnsafeArray1D_1_op_Implicit_m3953EBEAB1CAF26B950DBB41269ECA873EAC93D0(L_8, UnsafeArray1D_1_op_Implicit_m3953EBEAB1CAF26B950DBB41269ECA873EAC93D0_RuntimeMethod_var);
		__this->___huff_ac_8 = (stbi__huffman_t6DEAA8DAB0C7E7B906ED693F3B02A4FB88BC8D7F*)L_9;
		UnsafeArray2D_1_t5961E44269E4B314BCB38981F904485CF2A389FF* L_10 = __this->___dequantArray_4;
		void* L_11;
		L_11 = UnsafeArray2D_1_op_Implicit_m2371B12B5957DF0D3A54AF1CAE6608F1C9F2106B(L_10, UnsafeArray2D_1_op_Implicit_m2371B12B5957DF0D3A54AF1CAE6608F1C9F2106B_RuntimeMethod_var);
		__this->___dequant_3 = (uint16_t**)L_11;
		UnsafeArray2D_1_t757F24C39EF3461F418F82878ED4F834C5181794* L_12 = __this->___fast_acArray_7;
		void* L_13;
		L_13 = UnsafeArray2D_1_op_Implicit_mC5C089568D8BDF3C1377060081B48C7F3DEDF9D0(L_12, UnsafeArray2D_1_op_Implicit_mC5C089568D8BDF3C1377060081B48C7F3DEDF9D0_RuntimeMethod_var);
		__this->___fast_ac_6 = (int16_t**)L_13;
		UnsafeArray1D_1_tF7A91FF7D00CD80CED417779394BB1D4D1EAF18A* L_14 = __this->___img_compArray_14;
		void* L_15;
		L_15 = UnsafeArray1D_1_op_Implicit_mC0306D7987021F342456F05565A07CFB3377FB38(L_14, UnsafeArray1D_1_op_Implicit_mC0306D7987021F342456F05565A07CFB3377FB38_RuntimeMethod_var);
		__this->___img_comp_13 = (unnamed1_tFFCD00E633D511D08F0102AF033EAEF84DB82DF1*)L_15;
		UnsafeArray1D_1_tDB7A817250549E13D843EBF73CDA5925488DD933* L_16 = __this->___orderArray_25;
		void* L_17;
		L_17 = UnsafeArray1D_1_op_Implicit_mFBA6F467B8CC0C2F8C27331728FDA1FED5C3B71C(L_16, UnsafeArray1D_1_op_Implicit_mFBA6F467B8CC0C2F8C27331728FDA1FED5C3B71C_RuntimeMethod_var);
		__this->___order_24 = (int32_t*)L_17;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StbImageSharp.StbImage/stbi__resample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stbi__resample__ctor_m32EF21FD452C9E3F17A7A6F127FA8B0DCEEF828C (stbi__resample_tEFE16727AD25AA174BB9F4C254785074D3FE8ED4* __this, const RuntimeMethod* method) 
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
// System.Void StbImageSharp.StbImage/stbi__png::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stbi__png__ctor_m7A4E1AB32C5485FCF3E6F22A72022F7A0111D8AF (stbi__png_tCBD935AEB160DD127D2005952F7C0255B2FDA04F* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___value0, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___value0;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* AnimatedGifEnumerator_get_Current_m3F989155257B9081EF47BB9C2FBDE89B11B32345_inline (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, const RuntimeMethod* method) 
{
	{
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_0 = __this->___U3CCurrentU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AnimatedGifEnumerator_get_ColorComponents_m59C0A0CF32749D8E565EAFC8CC201C07C53FB44C_inline (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CColorComponentsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResult_set_Width_mAE0222CF14D7CC542BE55D499D08D8B124E788E3_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CWidthU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResult_set_Height_mD2E85A00BF8528F1DE5FC68CBF5FC3DD43DCD603_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CHeightU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResult_set_SourceComp_m99F6BE4EDDAE7B80B3F316737EE9B401DDED9F0F_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CSourceCompU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResult_set_Comp_m9EEB51B4B3BEC210CCD4ED65708867686E65175D_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CCompU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnimatedGifEnumerator_set_Current_mA895B21FF85EBAF2D6508A2C066E57DE8D3B69DF_inline (AnimatedGifEnumerator_t8C75511A06B845FF1B9AA48909482AFC8E12B52B* __this, AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* ___value0, const RuntimeMethod* method) 
{
	{
		AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* L_0 = ___value0;
		__this->___U3CCurrentU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ImageResult_get_Width_m6D3AB29E93FBE44C3F43B97D2D8DD5CDA8291270_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CWidthU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ImageResult_get_Height_m987C76BE62465224C54F30712169C963063BF7C9_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CHeightU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ImageResult_get_Comp_mDA76ABF7DFEB671E6A506B45B110CCD516FD7A8F_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCompU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResult_set_Data_m1DF0EE05A3AD847A12C8AE138B21E9FA5969FAA3_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		__this->___U3CDataU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnimatedFrameResult_set_DelayInMs_mEC055DC8715FC67099CC3974B3981175C8B0535B_inline (AnimatedFrameResult_t2137CDD2D1BCE408369E0EA67786365142042F41* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CDelayInMsU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ImageResult_get_Data_mBD84D1E6BD45AC125145D245EAD933D2B8E51D4B_inline (ImageResult_tDF70E44E596DF6F830A17481668CB8CAC5CE3ED4* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CDataU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AnimatedGifEnumerable_get_ColorComponents_mF90D6769F0A2C038057D86AAF7FACA7482A12CBB_inline (AnimatedGifEnumerable_t64585F6F618C11B49540F29C860056D14E67B51E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CColorComponentsU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResultFloat_set_Width_mD6D7B7CCB2105CCCF379F6F00C440FFC9D46F813_inline (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CWidthU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResultFloat_set_Height_mB942BDF6BA0F6B439BF40B601D7082FC031F3B06_inline (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CHeightU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResultFloat_set_SourceComp_mD18490D71AE38A87CBC39C2B362414F497B3BFDF_inline (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CSourceCompU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResultFloat_set_Comp_m7AA2FA993B26946D1DFACB9FB23949268C880D23_inline (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CCompU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ImageResultFloat_get_Comp_m26180735352821C006D877A7FB0077DF0C17929C_inline (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCompU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImageResultFloat_set_Data_m1DB0F811837EE95469ECEF694DA5D9EE92193985_inline (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___value0, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___value0;
		__this->___U3CDataU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ImageResultFloat_get_Data_mF28ABD57A9CEB2A9169DD257AB9A8C98280E6372_inline (ImageResultFloat_t46C3E8D2D45F16BFFFF0E9873B322E7CB470B8FB* __this, const RuntimeMethod* method) 
{
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___U3CDataU3Ek__BackingField_4;
		return L_0;
	}
}
