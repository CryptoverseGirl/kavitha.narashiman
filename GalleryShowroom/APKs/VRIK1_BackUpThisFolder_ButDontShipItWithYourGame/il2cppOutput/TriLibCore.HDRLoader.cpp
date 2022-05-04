#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Text.RegularExpressions.Group[]
struct GroupU5BU5D_t9924453EAB39E5BC350475A536C5C7093F9A04A9;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.IO.BinaryReader
struct BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93;
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
// System.IO.EndOfStreamException
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028;
// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910;
// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// HDRLoader.Rgbe
struct Rgbe_tAF48B77C07C8D792D42D719D60C440F719B9BA96;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// HDRLoader.Rgbe/Header
struct Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rgbe_tAF48B77C07C8D792D42D719D60C440F719B9BA96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0143B76706328B3AFA2DD04EB91F0FFA6B20D54A;
IL2CPP_EXTERN_C String_t* _stringLiteral0C436E950F6B871C02FB12989605D4EAC5AF79F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral126CEB001D6A55877F26F1112A893A96C48D30DD;
IL2CPP_EXTERN_C String_t* _stringLiteral157511FB40992BD97FA2ADA83C82EEA8B084B0E5;
IL2CPP_EXTERN_C String_t* _stringLiteral247BA829E9EA41B36E17E7DA1C236ADA9FDC0988;
IL2CPP_EXTERN_C String_t* _stringLiteral4C2D6544FB9CCB9048B31961FBFB966375DB32DB;
IL2CPP_EXTERN_C String_t* _stringLiteral66220396CE1C9CFF404A41038B38F6FB0F0276BC;
IL2CPP_EXTERN_C String_t* _stringLiteral7DBAE5D2401E0E48A9FB08B4371152A8BDC53947;
IL2CPP_EXTERN_C String_t* _stringLiteral89613337171E9DEFA7887E7F72F841FC8CD2A91D;
IL2CPP_EXTERN_C String_t* _stringLiteralAC1D79EC1E0F1CA0D5880DB8D4456467D14FC38D;
IL2CPP_EXTERN_C String_t* _stringLiteralB765417EEADECC0B41CE892BB89B8FAEC0A57251;
IL2CPP_EXTERN_C String_t* _stringLiteralC77FBC4B6680F7DCFA6A80B36EB4C7BDF5BC9A6C;
IL2CPP_EXTERN_C String_t* _stringLiteralD319E88C1225B7BCE84AD44F4A66ADC49FD56A48;
IL2CPP_EXTERN_C String_t* _stringLiteralD5548B7A71AC9CD49226229042329592E2BBFABD;
IL2CPP_EXTERN_C String_t* _stringLiteralE46F238D73C0094F0947A10F9A5CB916A01C616A;
IL2CPP_EXTERN_C String_t* _stringLiteralE899877B13DC6B204699EABA5B4B1FF400E5D0A1;
IL2CPP_EXTERN_C String_t* _stringLiteralFCAEFF44C09294FB787A09F3C3076507DE41F12E;
IL2CPP_EXTERN_C const RuntimeMethod* BinaryReaderExtension_ReadFully_m7506C051567FFE0EFE7487190D042E3856BB1351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rgbe_ReadHeader_m247F0ABA24F6015CC0B9EFFF29C8A5C69735866A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rgbe_ReadPixelsRawRle_mF2E734018AC3879947732593E2769FB6CAFEA4A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_GetRawTextureData_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mB69714D854EC3CE5DEEB4994788D39898BF35017_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tA3DCA7E8E73609046541C39500C58783C0C9E799 
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

// HDRLoader.BinaryReaderExtension
struct BinaryReaderExtension_t11A3418D8FF2E05FDFA76CFBB9156549134F0EFF  : public RuntimeObject
{
};

// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A  : public RuntimeObject
{
	// System.Int32 System.Text.RegularExpressions.Capture::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.Int32 System.Text.RegularExpressions.Capture::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
	// System.String System.Text.RegularExpressions.Capture::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
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

// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E  : public RuntimeObject
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.GroupCollection::_match
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ____match_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.GroupCollection::_captureMap
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____captureMap_1;
	// System.Text.RegularExpressions.Group[] System.Text.RegularExpressions.GroupCollection::_groups
	GroupU5BU5D_t9924453EAB39E5BC350475A536C5C7093F9A04A9* ____groups_2;
};

// HDRLoader.HDRLoader
struct HDRLoader_tFB003746EB875C150291EB62BB229654B07707A4  : public RuntimeObject
{
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

// HDRLoader.Rgbe
struct Rgbe_tAF48B77C07C8D792D42D719D60C440F719B9BA96  : public RuntimeObject
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
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

// HDRLoader.Rgbe/Header
struct Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808  : public RuntimeObject
{
	// System.Int32 HDRLoader.Rgbe/Header::_valid
	int32_t ____valid_0;
	// System.Single HDRLoader.Rgbe/Header::<Exposure>k__BackingField
	float ___U3CExposureU3Ek__BackingField_1;
	// System.Single HDRLoader.Rgbe/Header::<Gamma>k__BackingField
	float ___U3CGammaU3Ek__BackingField_2;
	// System.Int32 HDRLoader.Rgbe/Header::<Height>k__BackingField
	int32_t ___U3CHeightU3Ek__BackingField_3;
	// System.String HDRLoader.Rgbe/Header::<ProgramType>k__BackingField
	String_t* ___U3CProgramTypeU3Ek__BackingField_4;
	// System.Int32 HDRLoader.Rgbe/Header::<Width>k__BackingField
	int32_t ___U3CWidthU3Ek__BackingField_5;
};

// Unity.Collections.NativeArray`1<System.Single>
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
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

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881  : public Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A
{
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
};

struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881_StaticFields
{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::s_emptyGroup
	Group_t26371E9136D6F43782C487B63C67C5FC4F472881* ___s_emptyGroup_3;
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

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F  : public Group_t26371E9136D6F43782C487B63C67C5FC4F472881
{
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* ____groupcoll_8;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_9;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_13;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____matches_14;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____matchcount_15;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_16;
};

struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_StaticFields
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::<Empty>k__BackingField
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___U3CEmptyU3Ek__BackingField_17;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// System.IO.EndOfStreamException
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
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


// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF Texture2D_GetRawTextureData_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mB69714D854EC3CE5DEEB4994788D39898BF35017_gshared (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;

// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared)(__this, method);
}
// System.Void System.IO.EndOfStreamException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfStreamException__ctor_m154EAE9BDAE2A8EB0EE6714D881FA7075628C582 (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* __this, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___input0, const RuntimeMethod* method) ;
// System.Void HDRLoader.Rgbe::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rgbe__ctor_mF4C213C5D09D391A76AC0A7EB665FD8E202D9D4C (Rgbe_tAF48B77C07C8D792D42D719D60C440F719B9BA96* __this, const RuntimeMethod* method) ;
// HDRLoader.Rgbe/Header HDRLoader.Rgbe::ReadHeader(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* Rgbe_ReadHeader_m247F0ABA24F6015CC0B9EFFF29C8A5C69735866A (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___in0, const RuntimeMethod* method) ;
// System.Single HDRLoader.Rgbe/Header::get_Gamma()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Header_get_Gamma_m90B90962518B5ED4B3493F8CD51512D2B2D44453_inline (Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* __this, const RuntimeMethod* method) ;
// System.Single HDRLoader.Rgbe/Header::get_Exposure()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Header_get_Exposure_m803942C1502B0C209BF95C544E325CE2C58B8D75_inline (Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* __this, const RuntimeMethod* method) ;
// System.Int32 HDRLoader.Rgbe/Header::get_Width()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Header_get_Width_m5794684C131F88D75D1E9BE43B3F472FE1956BC4_inline (Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* __this, const RuntimeMethod* method) ;
// System.Int32 HDRLoader.Rgbe/Header::get_Height()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Header_get_Height_m1A2C5286B49E72C6EBEE8C76ECA9DC6B259BB339_inline (Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* __this, const RuntimeMethod* method) ;
// System.Void HDRLoader.Rgbe::ReadPixelsRawRle(System.IO.BinaryReader,System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rgbe_ReadPixelsRawRle_mF2E734018AC3879947732593E2769FB6CAFEA4A5 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___in0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, int32_t ___offset2, int32_t ___scanline_width3, int32_t ___num_scanlines4, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, bool ___linear4, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.Texture2D::GetRawTextureData<System.Single>()
inline NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF Texture2D_GetRawTextureData_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mB69714D854EC3CE5DEEB4994788D39898BF35017 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF (*) (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))Texture2D_GetRawTextureData_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mB69714D854EC3CE5DEEB4994788D39898BF35017_gshared)(__this, method);
}
// System.Void HDRLoader.Rgbe::Rgbe2Float(Unity.Collections.NativeArray`1<System.Single>,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rgbe_Rgbe2Float_mEBE0A91D30FC57EE49639796953391CE82E38AEA (Rgbe_tAF48B77C07C8D792D42D719D60C440F719B9BA96* __this, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___rgba0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rgbe1, int32_t ___rgbeIndex2, int32_t ___rgbaIndex3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, bool ___updateMipmaps0, bool ___makeNoLongerReadable1, const RuntimeMethod* method) ;
// System.String HDRLoader.BinaryReaderExtension::ReadLine(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BinaryReaderExtension_ReadLine_m8250B7245BC1A7B68168AF6EF78CADFF21563F9B (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___reader0, const RuntimeMethod* method) ;
// System.Void System.IO.IOException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425 (const RuntimeMethod* method) ;
// System.Single System.Convert::ToSingle(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Convert_ToSingle_m2CF7FECE2FEB934F0355D9FD5FB2D027B3D5F0E5 (String_t* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Regex_Match_m287E982B244CB3763BF608790318DD4B9C7E2E58 (String_t* ___input0, String_t* ___pattern1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F (Group_t26371E9136D6F43782C487B63C67C5FC4F472881* __this, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Group_t26371E9136D6F43782C487B63C67C5FC4F472881* GroupCollection_get_Item_m40EC174D4AC8FDD68F8819C35B779C79A44322F3 (GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* __this, int32_t ___groupnum0, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Capture::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mF408441B7F1DCAE57A286EC80B594E54C872EC05 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void HDRLoader.Rgbe/Header::.ctor(System.Int32,System.String,System.Single,System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Header__ctor_m45C21DF1BF8408B65DF96908DA72F692386AA259 (Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* __this, int32_t ___valid0, String_t* ___programType1, float ___gamma2, float ___exposure3, int32_t ___width4, int32_t ___height5, const RuntimeMethod* method) ;
// System.Void HDRLoader.BinaryReaderExtension::ReadFully(System.IO.BinaryReader,System.Byte[],System.Int32,System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReaderExtension_ReadFully_m7506C051567FFE0EFE7487190D042E3856BB1351 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___stream0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___offset2, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___expected3, const RuntimeMethod* method) ;
// System.Void HDRLoader.Rgbe::ReadPixelsRaw(System.IO.BinaryReader,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rgbe_ReadPixelsRaw_mB770D0B8224FAA8134BDEB92FB13238CD06ED92D (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___in0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, int32_t ___offset2, int32_t ___numpixels3, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_gamma()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gamma_mEB9104560536D684CD57C968A906A8B3EF89839F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean HDRLoader.Rgbe/Header::get_IsProgramTypeValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Header_get_IsProgramTypeValid_m718E50C447948BC01F78B62A690132BF73CEEF33 (Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String HDRLoader.Rgbe/Header::get_ProgramType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Header_get_ProgramType_m8C2259F35CF82FCD32F542FB58F17F44B11E6D47_inline (Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* __this, const RuntimeMethod* method) ;
// System.Boolean HDRLoader.Rgbe/Header::get_IsGammaValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Header_get_IsGammaValid_m94EB33918CEA369DFD7B787BBD932A804F6F139E (Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E (StringBuilder_t* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean HDRLoader.Rgbe/Header::get_IsExposureValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Header_get_IsExposureValid_m1B8E8D41D008EDB0C9418B54822C22DB4B16DA45 (Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::LinearToGammaSpace(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_LinearToGammaSpace_mB23054C857C5AE0E5E27B0EA00A35F82E024B430 (float ___value0, const RuntimeMethod* method) ;
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
// System.String HDRLoader.BinaryReaderExtension::ReadLine(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BinaryReaderExtension_ReadLine_m8250B7245BC1A7B68168AF6EF78CADFF21563F9B (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___reader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	Il2CppChar V_2 = 0x0;
	String_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		V_1 = (bool)0;
		goto IL_004e;
	}

IL_000a:
	{
	}
	try
	{// begin try (depth: 1)
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = ___reader0;
		NullCheck(L_1);
		Il2CppChar L_2;
		L_2 = VirtualFuncInvoker0< Il2CppChar >::Invoke(13 /* System.Char System.IO.BinaryReader::ReadChar() */, L_1);
		V_2 = L_2;
		goto IL_0023;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0014;
		}
		throw e;
	}

CATCH_0014:
	{// begin catch(System.IO.EndOfStreamException)
		{
			StringBuilder_t* L_3 = V_0;
			NullCheck(L_3);
			int32_t L_4;
			L_4 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_3, NULL);
			if (L_4)
			{
				goto IL_0021;
			}
		}
		{
			V_3 = (String_t*)NULL;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0058;
		}

IL_0021:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0051;
		}
	}// end catch (depth: 1)

IL_0023:
	{
		Il2CppChar L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)10))))
		{
			goto IL_0042;
		}
	}
	{
		Il2CppChar L_6 = V_2;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0046;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_7 = ___reader0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 System.IO.BinaryReader::PeekChar() */, L_7);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_003e;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_9 = ___reader0;
		NullCheck(L_9);
		Il2CppChar L_10;
		L_10 = VirtualFuncInvoker0< Il2CppChar >::Invoke(13 /* System.Char System.IO.BinaryReader::ReadChar() */, L_9);
	}

IL_003e:
	{
		V_1 = (bool)1;
		goto IL_004e;
	}

IL_0042:
	{
		V_1 = (bool)1;
		goto IL_004e;
	}

IL_0046:
	{
		StringBuilder_t* L_11 = V_0;
		Il2CppChar L_12 = V_2;
		NullCheck(L_11);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_11, L_12, NULL);
	}

IL_004e:
	{
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_000a;
		}
	}

IL_0051:
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		return L_16;
	}

IL_0058:
	{
		String_t* L_17 = V_3;
		return L_17;
	}
}
// System.Void HDRLoader.BinaryReaderExtension::ReadFully(System.IO.BinaryReader,System.Byte[],System.Int32,System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryReaderExtension_ReadFully_m7506C051567FFE0EFE7487190D042E3856BB1351 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___stream0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, int32_t ___offset2, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___expected3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&___expected3), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___buffer1;
		NullCheck(L_1);
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&___expected3), ((int32_t)(((RuntimeArray*)L_1)->max_length)), Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
	}

IL_0013:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = ___stream0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___buffer1;
		int32_t L_4 = ___offset2;
		int32_t L_5;
		L_5 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&___expected3), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_6;
		L_6 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(25 /* System.Int32 System.IO.BinaryReader::Read(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, L_4, L_5);
		int32_t L_7;
		L_7 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&___expected3), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0031;
		}
	}
	{
		EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028* L_8 = (EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		EndOfStreamException__ctor_m154EAE9BDAE2A8EB0EE6714D881FA7075628C582(L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BinaryReaderExtension_ReadFully_m7506C051567FFE0EFE7487190D042E3856BB1351_RuntimeMethod_var)));
	}

IL_0031:
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
// UnityEngine.Texture2D HDRLoader.HDRLoader::Load(System.IO.Stream,System.Single&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* HDRLoader_Load_mA5D0A2B9D1B8396F55340618F40B84B5B4834FD0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, float* ___gamma1, float* ___exposure2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rgbe_tAF48B77C07C8D792D42D719D60C440F719B9BA96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_GetRawTextureData_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mB69714D854EC3CE5DEEB4994788D39898BF35017_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* V_0 = NULL;
	Rgbe_tAF48B77C07C8D792D42D719D60C440F719B9BA96* V_1 = NULL;
	Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_4 = NULL;
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_9 = NULL;
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___stream0;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158*)il2cpp_codegen_object_new(BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BinaryReader__ctor_m898732FE0DBEDD480B24F6DE45A9AC696E44CC0F(L_1, L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d8:
			{// begin finally (depth: 1)
				{
					BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_2 = V_0;
					if (!L_2)
					{
						goto IL_00e1;
					}
				}
				{
					BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_00e1:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Rgbe_tAF48B77C07C8D792D42D719D60C440F719B9BA96* L_4 = (Rgbe_tAF48B77C07C8D792D42D719D60C440F719B9BA96*)il2cpp_codegen_object_new(Rgbe_tAF48B77C07C8D792D42D719D60C440F719B9BA96_il2cpp_TypeInfo_var);
				NullCheck(L_4);
				Rgbe__ctor_mF4C213C5D09D391A76AC0A7EB665FD8E202D9D4C(L_4, NULL);
				V_1 = L_4;
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_5 = V_0;
				Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* L_6;
				L_6 = Rgbe_ReadHeader_m247F0ABA24F6015CC0B9EFFF29C8A5C69735866A(L_5, NULL);
				V_2 = L_6;
				float* L_7 = ___gamma1;
				Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* L_8 = V_2;
				NullCheck(L_8);
				float L_9;
				L_9 = Header_get_Gamma_m90B90962518B5ED4B3493F8CD51512D2B2D44453_inline(L_8, NULL);
				*((float*)L_7) = (float)L_9;
				float* L_10 = ___exposure2;
				Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* L_11 = V_2;
				NullCheck(L_11);
				float L_12;
				L_12 = Header_get_Exposure_m803942C1502B0C209BF95C544E325CE2C58B8D75_inline(L_11, NULL);
				*((float*)L_10) = (float)L_12;
				Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* L_13 = V_2;
				NullCheck(L_13);
				int32_t L_14;
				L_14 = Header_get_Width_m5794684C131F88D75D1E9BE43B3F472FE1956BC4_inline(L_13, NULL);
				Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* L_15 = V_2;
				NullCheck(L_15);
				int32_t L_16;
				L_16 = Header_get_Height_m1A2C5286B49E72C6EBEE8C76ECA9DC6B259BB339_inline(L_15, NULL);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_14, L_16)), 4)));
				V_3 = L_17;
				BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_18 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_3;
				Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* L_20 = V_2;
				NullCheck(L_20);
				int32_t L_21;
				L_21 = Header_get_Width_m5794684C131F88D75D1E9BE43B3F472FE1956BC4_inline(L_20, NULL);
				Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* L_22 = V_2;
				NullCheck(L_22);
				int32_t L_23;
				L_23 = Header_get_Height_m1A2C5286B49E72C6EBEE8C76ECA9DC6B259BB339_inline(L_22, NULL);
				Rgbe_ReadPixelsRawRle_mF2E734018AC3879947732593E2769FB6CAFEA4A5(L_18, L_19, 0, L_21, L_23, NULL);
				Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* L_24 = V_2;
				NullCheck(L_24);
				int32_t L_25;
				L_25 = Header_get_Width_m5794684C131F88D75D1E9BE43B3F472FE1956BC4_inline(L_24, NULL);
				Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* L_26 = V_2;
				NullCheck(L_26);
				int32_t L_27;
				L_27 = Header_get_Height_m1A2C5286B49E72C6EBEE8C76ECA9DC6B259BB339_inline(L_26, NULL);
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_28 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
				NullCheck(L_28);
				Texture2D__ctor_mC3F84195D1DCEFC0536B3FBD40A8F8E865A4F32A(L_28, L_25, L_27, ((int32_t)20), (bool)0, (bool)1, NULL);
				V_4 = L_28;
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_29 = V_4;
				NullCheck(L_29);
				NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_30;
				L_30 = Texture2D_GetRawTextureData_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mB69714D854EC3CE5DEEB4994788D39898BF35017(L_29, Texture2D_GetRawTextureData_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mB69714D854EC3CE5DEEB4994788D39898BF35017_RuntimeMethod_var);
				V_5 = L_30;
				V_6 = 0;
				goto IL_00bf_1;
			}

IL_0072_1:
			{
				V_7 = 0;
				goto IL_00af_1;
			}

IL_0077_1:
			{
				Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* L_31 = V_2;
				NullCheck(L_31);
				int32_t L_32;
				L_32 = Header_get_Height_m1A2C5286B49E72C6EBEE8C76ECA9DC6B259BB339_inline(L_31, NULL);
				int32_t L_33 = V_6;
				V_8 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_32, L_33)), 1));
				Rgbe_tAF48B77C07C8D792D42D719D60C440F719B9BA96* L_34 = V_1;
				NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF L_35 = V_5;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_3;
				int32_t L_37 = V_6;
				Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* L_38 = V_2;
				NullCheck(L_38);
				int32_t L_39;
				L_39 = Header_get_Width_m5794684C131F88D75D1E9BE43B3F472FE1956BC4_inline(L_38, NULL);
				int32_t L_40 = V_7;
				int32_t L_41 = V_8;
				Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* L_42 = V_2;
				NullCheck(L_42);
				int32_t L_43;
				L_43 = Header_get_Width_m5794684C131F88D75D1E9BE43B3F472FE1956BC4_inline(L_42, NULL);
				int32_t L_44 = V_7;
				NullCheck(L_34);
				Rgbe_Rgbe2Float_mEBE0A91D30FC57EE49639796953391CE82E38AEA(L_34, L_35, L_36, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_37, L_39)), L_40)), 4)), ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_41, L_43)), L_44)), 4)), NULL);
				int32_t L_45 = V_7;
				V_7 = ((int32_t)il2cpp_codegen_add(L_45, 1));
			}

IL_00af_1:
			{
				int32_t L_46 = V_7;
				Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* L_47 = V_2;
				NullCheck(L_47);
				int32_t L_48;
				L_48 = Header_get_Width_m5794684C131F88D75D1E9BE43B3F472FE1956BC4_inline(L_47, NULL);
				if ((((int32_t)L_46) < ((int32_t)L_48)))
				{
					goto IL_0077_1;
				}
			}
			{
				int32_t L_49 = V_6;
				V_6 = ((int32_t)il2cpp_codegen_add(L_49, 1));
			}

IL_00bf_1:
			{
				int32_t L_50 = V_6;
				Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* L_51 = V_2;
				NullCheck(L_51);
				int32_t L_52;
				L_52 = Header_get_Height_m1A2C5286B49E72C6EBEE8C76ECA9DC6B259BB339_inline(L_51, NULL);
				if ((((int32_t)L_50) < ((int32_t)L_52)))
				{
					goto IL_0072_1;
				}
			}
			{
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_53 = V_4;
				NullCheck(L_53);
				Texture2D_Apply_m36EE27E6F1BF7FB8C70A1D749DC4EE249810AA3A(L_53, (bool)0, (bool)1, NULL);
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_54 = V_4;
				V_9 = L_54;
				goto IL_00e2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e2:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_55 = V_9;
		return L_55;
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
// HDRLoader.Rgbe/Header HDRLoader.Rgbe::ReadHeader(System.IO.BinaryReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* Rgbe_ReadHeader_m247F0ABA24F6015CC0B9EFFF29C8A5C69735866A (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___in0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0143B76706328B3AFA2DD04EB91F0FFA6B20D54A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DBAE5D2401E0E48A9FB08B4371152A8BDC53947);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB765417EEADECC0B41CE892BB89B8FAEC0A57251);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE899877B13DC6B204699EABA5B4B1FF400E5D0A1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	String_t* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* V_9 = NULL;
	{
		V_0 = 0;
		V_1 = (String_t*)NULL;
		V_2 = (1.0f);
		V_3 = (1.0f);
		V_4 = 0;
		V_5 = 0;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_0 = ___in0;
		String_t* L_1;
		L_1 = BinaryReaderExtension_ReadLine_m8250B7245BC1A7B68168AF6EF78CADFF21563F9B(L_0, NULL);
		V_6 = L_1;
		String_t* L_2 = V_6;
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_3 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C436E950F6B871C02FB12989605D4EAC5AF79F0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Rgbe_ReadHeader_m247F0ABA24F6015CC0B9EFFF29C8A5C69735866A_RuntimeMethod_var)));
	}

IL_002d:
	{
		String_t* L_4 = V_6;
		NullCheck(L_4);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, 0, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)35)))))
		{
			goto IL_0069;
		}
	}
	{
		String_t* L_6 = V_6;
		NullCheck(L_6);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, 1, NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)63)))))
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)(L_8|1));
		String_t* L_9 = V_6;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_9, 2, NULL);
		V_1 = L_10;
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_11 = ___in0;
		String_t* L_12;
		L_12 = BinaryReaderExtension_ReadLine_m8250B7245BC1A7B68168AF6EF78CADFF21563F9B(L_11, NULL);
		V_6 = L_12;
		String_t* L_13 = V_6;
		if (L_13)
		{
			goto IL_0069;
		}
	}
	{
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_14 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD319E88C1225B7BCE84AD44F4A66ADC49FD56A48)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Rgbe_ReadHeader_m247F0ABA24F6015CC0B9EFFF29C8A5C69735866A_RuntimeMethod_var)));
	}

IL_0069:
	{
		V_7 = (bool)0;
		V_8 = (bool)0;
		goto IL_0152;
	}

IL_0074:
	{
		String_t* L_15 = V_6;
		NullCheck(L_15);
		bool L_16;
		L_16 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_15, _stringLiteralE899877B13DC6B204699EABA5B4B1FF400E5D0A1, NULL);
		if (!L_16)
		{
			goto IL_008a;
		}
	}
	{
		V_7 = (bool)1;
		goto IL_0137;
	}

IL_008a:
	{
		String_t* L_17 = V_6;
		NullCheck(L_17);
		bool L_18;
		L_18 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_17, _stringLiteralB765417EEADECC0B41CE892BB89B8FAEC0A57251, NULL);
		if (!L_18)
		{
			goto IL_00ba;
		}
	}
	{
		int32_t L_19 = V_0;
		V_0 = ((int32_t)(L_19|2));
		String_t* L_20 = V_6;
		NullCheck(_stringLiteralB765417EEADECC0B41CE892BB89B8FAEC0A57251);
		int32_t L_21;
		L_21 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralB765417EEADECC0B41CE892BB89B8FAEC0A57251, NULL);
		NullCheck(L_20);
		String_t* L_22;
		L_22 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_20, L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_23;
		L_23 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		float L_24;
		L_24 = Convert_ToSingle_m2CF7FECE2FEB934F0355D9FD5FB2D027B3D5F0E5(L_22, L_23, NULL);
		V_2 = L_24;
		goto IL_0137;
	}

IL_00ba:
	{
		String_t* L_25 = V_6;
		NullCheck(L_25);
		bool L_26;
		L_26 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_25, _stringLiteral7DBAE5D2401E0E48A9FB08B4371152A8BDC53947, NULL);
		if (!L_26)
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_27 = V_0;
		V_0 = ((int32_t)(L_27|4));
		String_t* L_28 = V_6;
		NullCheck(_stringLiteral7DBAE5D2401E0E48A9FB08B4371152A8BDC53947);
		int32_t L_29;
		L_29 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral7DBAE5D2401E0E48A9FB08B4371152A8BDC53947, NULL);
		NullCheck(L_28);
		String_t* L_30;
		L_30 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_28, L_29, NULL);
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_31;
		L_31 = CultureInfo_get_InvariantCulture_m78DAB8CBE8766445310782B6E61FB7A9983AD425(NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		float L_32;
		L_32 = Convert_ToSingle_m2CF7FECE2FEB934F0355D9FD5FB2D027B3D5F0E5(L_30, L_31, NULL);
		V_3 = L_32;
		goto IL_0137;
	}

IL_00ea:
	{
		String_t* L_33 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_34;
		L_34 = Regex_Match_m287E982B244CB3763BF608790318DD4B9C7E2E58(L_33, _stringLiteral0143B76706328B3AFA2DD04EB91F0FFA6B20D54A, 1, NULL);
		V_9 = L_34;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_35 = V_9;
		NullCheck(L_35);
		bool L_36;
		L_36 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_35, NULL);
		if (!L_36)
		{
			goto IL_0137;
		}
	}
	{
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_37 = V_9;
		NullCheck(L_37);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_38;
		L_38 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_37);
		NullCheck(L_38);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_39;
		L_39 = GroupCollection_get_Item_m40EC174D4AC8FDD68F8819C35B779C79A44322F3(L_38, 2, NULL);
		NullCheck(L_39);
		String_t* L_40;
		L_40 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_39, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_41;
		L_41 = Convert_ToInt32_mF408441B7F1DCAE57A286EC80B594E54C872EC05(L_40, NULL);
		V_4 = L_41;
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_42 = V_9;
		NullCheck(L_42);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_43;
		L_43 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_42);
		NullCheck(L_43);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_44;
		L_44 = GroupCollection_get_Item_m40EC174D4AC8FDD68F8819C35B779C79A44322F3(L_43, 1, NULL);
		NullCheck(L_44);
		String_t* L_45;
		L_45 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_44, NULL);
		int32_t L_46;
		L_46 = Convert_ToInt32_mF408441B7F1DCAE57A286EC80B594E54C872EC05(L_45, NULL);
		V_5 = L_46;
		V_8 = (bool)1;
	}

IL_0137:
	{
		bool L_47 = V_8;
		if (L_47)
		{
			goto IL_0152;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_48 = ___in0;
		String_t* L_49;
		L_49 = BinaryReaderExtension_ReadLine_m8250B7245BC1A7B68168AF6EF78CADFF21563F9B(L_48, NULL);
		V_6 = L_49;
		String_t* L_50 = V_6;
		if (L_50)
		{
			goto IL_0152;
		}
	}
	{
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_51 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_51);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_51, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral157511FB40992BD97FA2ADA83C82EEA8B084B0E5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_51, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Rgbe_ReadHeader_m247F0ABA24F6015CC0B9EFFF29C8A5C69735866A_RuntimeMethod_var)));
	}

IL_0152:
	{
		bool L_52 = V_8;
		if (!L_52)
		{
			goto IL_0074;
		}
	}
	{
		bool L_53 = V_7;
		if (L_53)
		{
			goto IL_0168;
		}
	}
	{
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_54 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_54);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_54, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral247BA829E9EA41B36E17E7DA1C236ADA9FDC0988)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_54, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Rgbe_ReadHeader_m247F0ABA24F6015CC0B9EFFF29C8A5C69735866A_RuntimeMethod_var)));
	}

IL_0168:
	{
		int32_t L_55 = V_0;
		String_t* L_56 = V_1;
		float L_57 = V_2;
		float L_58 = V_3;
		int32_t L_59 = V_4;
		int32_t L_60 = V_5;
		Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* L_61 = (Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808*)il2cpp_codegen_object_new(Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808_il2cpp_TypeInfo_var);
		NullCheck(L_61);
		Header__ctor_m45C21DF1BF8408B65DF96908DA72F692386AA259(L_61, L_55, L_56, L_57, L_58, L_59, L_60, NULL);
		return L_61;
	}
}
// System.Void HDRLoader.Rgbe::ReadPixelsRaw(System.IO.BinaryReader,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rgbe_ReadPixelsRaw_mB770D0B8224FAA8134BDEB92FB13238CD06ED92D (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___in0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, int32_t ___offset2, int32_t ___numpixels3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___numpixels3;
		V_0 = ((int32_t)il2cpp_codegen_multiply(4, L_0));
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_1 = ___in0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___data1;
		int32_t L_3 = ___offset2;
		int32_t L_4 = V_0;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_5), L_4, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		BinaryReaderExtension_ReadFully_m7506C051567FFE0EFE7487190D042E3856BB1351(L_1, L_2, L_3, L_5, NULL);
		return;
	}
}
// System.Void HDRLoader.Rgbe::ReadPixelsRawRle(System.IO.BinaryReader,System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rgbe_ReadPixelsRawRle_mF2E734018AC3879947732593E2769FB6CAFEA4A5 (BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* ___in0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, int32_t ___offset2, int32_t ___scanline_width3, int32_t ___num_scanlines4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		V_5 = L_1;
		int32_t L_2 = ___scanline_width3;
		if ((((int32_t)L_2) < ((int32_t)8)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = ___scanline_width3;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)32767))))
		{
			goto IL_021b;
		}
	}

IL_0020:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_4 = ___in0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___data1;
		int32_t L_6 = ___offset2;
		int32_t L_7 = ___scanline_width3;
		int32_t L_8 = ___num_scanlines4;
		Rgbe_ReadPixelsRaw_mB770D0B8224FAA8134BDEB92FB13238CD06ED92D(L_4, L_5, L_6, ((int32_t)il2cpp_codegen_multiply(L_7, L_8)), NULL);
		goto IL_021b;
	}

IL_0031:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_9 = ___in0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_11 = V_6;
		BinaryReaderExtension_ReadFully_m7506C051567FFE0EFE7487190D042E3856BB1351(L_9, L_10, 0, L_11, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 0;
		uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if ((!(((uint32_t)L_14) == ((uint32_t)2))))
		{
			goto IL_005a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = 1;
		uint8_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_005a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19 = 2;
		uint8_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if (!((int32_t)((int32_t)L_20&((int32_t)128))))
		{
			goto IL_0094;
		}
	}

IL_005a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___data1;
		int32_t L_22 = ___offset2;
		int32_t L_23 = L_22;
		___offset2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25 = 0;
		uint8_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (uint8_t)L_26);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___data1;
		int32_t L_28 = ___offset2;
		int32_t L_29 = L_28;
		___offset2 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_0;
		NullCheck(L_30);
		int32_t L_31 = 1;
		uint8_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (uint8_t)L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ___data1;
		int32_t L_34 = ___offset2;
		int32_t L_35 = L_34;
		___offset2 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_0;
		NullCheck(L_36);
		int32_t L_37 = 2;
		uint8_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (uint8_t)L_38);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ___data1;
		int32_t L_40 = ___offset2;
		int32_t L_41 = L_40;
		___offset2 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_0;
		NullCheck(L_42);
		int32_t L_43 = 3;
		uint8_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_41), (uint8_t)L_44);
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_45 = ___in0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_0;
		int32_t L_47 = ___offset2;
		int32_t L_48 = ___scanline_width3;
		int32_t L_49 = ___num_scanlines4;
		Rgbe_ReadPixelsRaw_mB770D0B8224FAA8134BDEB92FB13238CD06ED92D(L_45, L_46, L_47, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_48, L_49)), 1)), NULL);
	}

IL_0094:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = V_0;
		NullCheck(L_50);
		int32_t L_51 = 2;
		uint8_t L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = V_0;
		NullCheck(L_53);
		int32_t L_54 = 3;
		uint8_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		int32_t L_56 = ___scanline_width3;
		if ((((int32_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_52&((int32_t)255)))<<8))|((int32_t)((int32_t)L_55&((int32_t)255)))))) == ((int32_t)L_56)))
		{
			goto IL_00e6;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = V_0;
		NullCheck(L_57);
		int32_t L_58 = 2;
		uint8_t L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = V_0;
		NullCheck(L_60);
		int32_t L_61 = 3;
		uint8_t L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_7 = ((int32_t)(((int32_t)(((int32_t)((int32_t)L_59&((int32_t)255)))<<8))|((int32_t)((int32_t)L_62&((int32_t)255)))));
		String_t* L_63;
		L_63 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_7), NULL);
		String_t* L_64;
		L_64 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___scanline_width3), NULL);
		String_t* L_65;
		L_65 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE46F238D73C0094F0947A10F9A5CB916A01C616A)), L_63, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral89613337171E9DEFA7887E7F72F841FC8CD2A91D)), L_64, NULL);
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_66 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_66);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_66, L_65, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_66, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Rgbe_ReadPixelsRawRle_mF2E734018AC3879947732593E2769FB6CAFEA4A5_RuntimeMethod_var)));
	}

IL_00e6:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = V_1;
		if (L_67)
		{
			goto IL_00f2;
		}
	}
	{
		int32_t L_68 = ___scanline_width3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(4, L_68)));
		V_1 = L_69;
	}

IL_00f2:
	{
		V_2 = 0;
		V_8 = 0;
		goto IL_01c3;
	}

IL_00fc:
	{
		int32_t L_70 = V_8;
		int32_t L_71 = ___scanline_width3;
		V_3 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_70, 1)), L_71));
		goto IL_01b6;
	}

IL_0108:
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_72 = ___in0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = V_5;
		il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_74 = V_6;
		BinaryReaderExtension_ReadFully_m7506C051567FFE0EFE7487190D042E3856BB1351(L_72, L_73, 0, L_74, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = V_5;
		NullCheck(L_75);
		int32_t L_76 = 0;
		uint8_t L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		if ((((int32_t)((int32_t)((int32_t)L_77&((int32_t)255)))) <= ((int32_t)((int32_t)128))))
		{
			goto IL_016b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = V_5;
		NullCheck(L_78);
		int32_t L_79 = 0;
		uint8_t L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)((int32_t)L_80&((int32_t)255))), ((int32_t)128)));
		int32_t L_81 = V_4;
		if (!L_81)
		{
			goto IL_0149;
		}
	}
	{
		int32_t L_82 = V_4;
		int32_t L_83 = V_3;
		int32_t L_84 = V_2;
		if ((((int32_t)L_82) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_83, L_84)))))
		{
			goto IL_015f;
		}
	}

IL_0149:
	{
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_85 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_85);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_85, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC77FBC4B6680F7DCFA6A80B36EB4C7BDF5BC9A6C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_85, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Rgbe_ReadPixelsRawRle_mF2E734018AC3879947732593E2769FB6CAFEA4A5_RuntimeMethod_var)));
	}

IL_0154:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = V_1;
		int32_t L_87 = V_2;
		int32_t L_88 = L_87;
		V_2 = ((int32_t)il2cpp_codegen_add(L_88, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = V_5;
		NullCheck(L_89);
		int32_t L_90 = 1;
		uint8_t L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(L_88), (uint8_t)L_91);
	}

IL_015f:
	{
		int32_t L_92 = V_4;
		int32_t L_93 = L_92;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_93, 1));
		if ((((int32_t)L_93) > ((int32_t)0)))
		{
			goto IL_0154;
		}
	}
	{
		goto IL_01b6;
	}

IL_016b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = V_5;
		NullCheck(L_94);
		int32_t L_95 = 0;
		uint8_t L_96 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		V_4 = ((int32_t)((int32_t)L_96&((int32_t)255)));
		int32_t L_97 = V_4;
		if (!L_97)
		{
			goto IL_0182;
		}
	}
	{
		int32_t L_98 = V_4;
		int32_t L_99 = V_3;
		int32_t L_100 = V_2;
		if ((((int32_t)L_98) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_99, L_100)))))
		{
			goto IL_018d;
		}
	}

IL_0182:
	{
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_101 = (IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)));
		NullCheck(L_101);
		IOException__ctor_mE0612A16064F93C7EBB468D6874777BD70CB50CA(L_101, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC77FBC4B6680F7DCFA6A80B36EB4C7BDF5BC9A6C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_101, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Rgbe_ReadPixelsRawRle_mF2E734018AC3879947732593E2769FB6CAFEA4A5_RuntimeMethod_var)));
	}

IL_018d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_102 = V_1;
		int32_t L_103 = V_2;
		int32_t L_104 = L_103;
		V_2 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_105 = V_5;
		NullCheck(L_105);
		int32_t L_106 = 1;
		uint8_t L_107 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(L_104), (uint8_t)L_107);
		int32_t L_108 = V_4;
		int32_t L_109 = ((int32_t)il2cpp_codegen_subtract(L_108, 1));
		V_4 = L_109;
		if ((((int32_t)L_109) <= ((int32_t)0)))
		{
			goto IL_01b6;
		}
	}
	{
		BinaryReader_t9A6D85F0FE9AE4EBB5E8D66997DFD1D84939E158* L_110 = ___in0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_111 = V_1;
		int32_t L_112 = V_2;
		int32_t L_113 = V_4;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_114;
		memset((&L_114), 0, sizeof(L_114));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_114), L_113, /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		BinaryReaderExtension_ReadFully_m7506C051567FFE0EFE7487190D042E3856BB1351(L_110, L_111, L_112, L_114, NULL);
		int32_t L_115 = V_2;
		int32_t L_116 = V_4;
		V_2 = ((int32_t)il2cpp_codegen_add(L_115, L_116));
	}

IL_01b6:
	{
		int32_t L_117 = V_2;
		int32_t L_118 = V_3;
		if ((((int32_t)L_117) < ((int32_t)L_118)))
		{
			goto IL_0108;
		}
	}
	{
		int32_t L_119 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_119, 1));
	}

IL_01c3:
	{
		int32_t L_120 = V_8;
		if ((((int32_t)L_120) < ((int32_t)4)))
		{
			goto IL_00fc;
		}
	}
	{
		V_9 = 0;
		goto IL_0210;
	}

IL_01d0:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_121 = ___data1;
		int32_t L_122 = ___offset2;
		int32_t L_123 = L_122;
		___offset2 = ((int32_t)il2cpp_codegen_add(L_123, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_124 = V_1;
		int32_t L_125 = V_9;
		NullCheck(L_124);
		int32_t L_126 = L_125;
		uint8_t L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(L_123), (uint8_t)L_127);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_128 = ___data1;
		int32_t L_129 = ___offset2;
		int32_t L_130 = L_129;
		___offset2 = ((int32_t)il2cpp_codegen_add(L_130, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_131 = V_1;
		int32_t L_132 = V_9;
		int32_t L_133 = ___scanline_width3;
		NullCheck(L_131);
		int32_t L_134 = ((int32_t)il2cpp_codegen_add(L_132, L_133));
		uint8_t L_135 = (L_131)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		NullCheck(L_128);
		(L_128)->SetAt(static_cast<il2cpp_array_size_t>(L_130), (uint8_t)L_135);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_136 = ___data1;
		int32_t L_137 = ___offset2;
		int32_t L_138 = L_137;
		___offset2 = ((int32_t)il2cpp_codegen_add(L_138, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_139 = V_1;
		int32_t L_140 = V_9;
		int32_t L_141 = ___scanline_width3;
		NullCheck(L_139);
		int32_t L_142 = ((int32_t)il2cpp_codegen_add(L_140, ((int32_t)il2cpp_codegen_multiply(2, L_141))));
		uint8_t L_143 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		NullCheck(L_136);
		(L_136)->SetAt(static_cast<il2cpp_array_size_t>(L_138), (uint8_t)L_143);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_144 = ___data1;
		int32_t L_145 = ___offset2;
		int32_t L_146 = L_145;
		___offset2 = ((int32_t)il2cpp_codegen_add(L_146, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_147 = V_1;
		int32_t L_148 = V_9;
		int32_t L_149 = ___scanline_width3;
		NullCheck(L_147);
		int32_t L_150 = ((int32_t)il2cpp_codegen_add(L_148, ((int32_t)il2cpp_codegen_multiply(3, L_149))));
		uint8_t L_151 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		NullCheck(L_144);
		(L_144)->SetAt(static_cast<il2cpp_array_size_t>(L_146), (uint8_t)L_151);
		int32_t L_152 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_152, 1));
	}

IL_0210:
	{
		int32_t L_153 = V_9;
		int32_t L_154 = ___scanline_width3;
		if ((((int32_t)L_153) < ((int32_t)L_154)))
		{
			goto IL_01d0;
		}
	}
	{
		int32_t L_155 = ___num_scanlines4;
		___num_scanlines4 = ((int32_t)il2cpp_codegen_subtract(L_155, 1));
	}

IL_021b:
	{
		int32_t L_156 = ___num_scanlines4;
		if ((((int32_t)L_156) > ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		return;
	}
}
// System.Void HDRLoader.Rgbe::Rgbe2Float(Unity.Collections.NativeArray`1<System.Single>,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rgbe_Rgbe2Float_mEBE0A91D30FC57EE49639796953391CE82E38AEA (Rgbe_tAF48B77C07C8D792D42D719D60C440F719B9BA96* __this, NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___rgba0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rgbe1, int32_t ___rgbeIndex2, int32_t ___rgbaIndex3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_5;
	memset((&V_5), 0, sizeof(V_5));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___rgbe1;
		int32_t L_1 = ___rgbeIndex2;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_add(L_1, 3));
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if (!L_3)
		{
			goto IL_00b5;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___rgbe1;
		int32_t L_5 = ___rgbeIndex2;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 3));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		float L_8;
		L_8 = powf((2.0f), ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)((int32_t)L_7&((int32_t)255))), ((int32_t)136)))));
		V_0 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___rgbe1;
		int32_t L_10 = ___rgbeIndex2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		float L_13 = V_0;
		V_1 = ((float)il2cpp_codegen_multiply(((float)((int32_t)((int32_t)L_12&((int32_t)255)))), L_13));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___rgbe1;
		int32_t L_15 = ___rgbeIndex2;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		float L_18 = V_0;
		V_2 = ((float)il2cpp_codegen_multiply(((float)((int32_t)((int32_t)L_17&((int32_t)255)))), L_18));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___rgbe1;
		int32_t L_20 = ___rgbeIndex2;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)il2cpp_codegen_add(L_20, 2));
		uint8_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		float L_23 = V_0;
		V_3 = ((float)il2cpp_codegen_multiply(((float)((int32_t)((int32_t)L_22&((int32_t)255)))), L_23));
		V_4 = (1.0f);
		float L_24 = V_1;
		float L_25 = V_2;
		float L_26 = V_3;
		float L_27 = V_4;
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_5), L_24, L_25, L_26, L_27, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		L_28 = Color_get_gamma_mEB9104560536D684CD57C968A906A8B3EF89839F_inline((&V_5), NULL);
		V_6 = L_28;
		int32_t L_29 = ___rgbaIndex3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30 = V_6;
		float L_31 = L_30.___r_0;
		IL2CPP_NATIVEARRAY_SET_ITEM(float, ((&___rgba0))->___m_Buffer_0, L_29, (L_31));
		int32_t L_32 = ___rgbaIndex3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33 = V_6;
		float L_34 = L_33.___g_1;
		IL2CPP_NATIVEARRAY_SET_ITEM(float, ((&___rgba0))->___m_Buffer_0, ((int32_t)il2cpp_codegen_add(L_32, 1)), (L_34));
		int32_t L_35 = ___rgbaIndex3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36 = V_6;
		float L_37 = L_36.___b_2;
		IL2CPP_NATIVEARRAY_SET_ITEM(float, ((&___rgba0))->___m_Buffer_0, ((int32_t)il2cpp_codegen_add(L_35, 2)), (L_37));
		int32_t L_38 = ___rgbaIndex3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39 = V_6;
		float L_40 = L_39.___a_3;
		IL2CPP_NATIVEARRAY_SET_ITEM(float, ((&___rgba0))->___m_Buffer_0, ((int32_t)il2cpp_codegen_add(L_38, 3)), (L_40));
		return;
	}

IL_00b5:
	{
		int32_t L_41 = ___rgbaIndex3;
		IL2CPP_NATIVEARRAY_SET_ITEM(float, ((&___rgba0))->___m_Buffer_0, L_41, ((0.0f)));
		int32_t L_42 = ___rgbaIndex3;
		IL2CPP_NATIVEARRAY_SET_ITEM(float, ((&___rgba0))->___m_Buffer_0, ((int32_t)il2cpp_codegen_add(L_42, 1)), ((0.0f)));
		int32_t L_43 = ___rgbaIndex3;
		IL2CPP_NATIVEARRAY_SET_ITEM(float, ((&___rgba0))->___m_Buffer_0, ((int32_t)il2cpp_codegen_add(L_43, 2)), ((0.0f)));
		int32_t L_44 = ___rgbaIndex3;
		IL2CPP_NATIVEARRAY_SET_ITEM(float, ((&___rgba0))->___m_Buffer_0, ((int32_t)il2cpp_codegen_add(L_44, 3)), ((1.0f)));
		return;
	}
}
// System.Void HDRLoader.Rgbe::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rgbe__ctor_mF4C213C5D09D391A76AC0A7EB665FD8E202D9D4C (Rgbe_tAF48B77C07C8D792D42D719D60C440F719B9BA96* __this, const RuntimeMethod* method) 
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
// System.Void HDRLoader.Rgbe/Header::.ctor(System.Int32,System.String,System.Single,System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Header__ctor_m45C21DF1BF8408B65DF96908DA72F692386AA259 (Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* __this, int32_t ___valid0, String_t* ___programType1, float ___gamma2, float ___exposure3, int32_t ___width4, int32_t ___height5, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___valid0;
		__this->____valid_0 = L_0;
		String_t* L_1 = ___programType1;
		__this->___U3CProgramTypeU3Ek__BackingField_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CProgramTypeU3Ek__BackingField_4), (void*)L_1);
		float L_2 = ___gamma2;
		__this->___U3CGammaU3Ek__BackingField_2 = L_2;
		float L_3 = ___exposure3;
		__this->___U3CExposureU3Ek__BackingField_1 = L_3;
		int32_t L_4 = ___width4;
		__this->___U3CWidthU3Ek__BackingField_5 = L_4;
		int32_t L_5 = ___height5;
		__this->___U3CHeightU3Ek__BackingField_3 = L_5;
		return;
	}
}
// System.Single HDRLoader.Rgbe/Header::get_Exposure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Header_get_Exposure_m803942C1502B0C209BF95C544E325CE2C58B8D75 (Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CExposureU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Single HDRLoader.Rgbe/Header::get_Gamma()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Header_get_Gamma_m90B90962518B5ED4B3493F8CD51512D2B2D44453 (Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CGammaU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Int32 HDRLoader.Rgbe/Header::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Header_get_Height_m1A2C5286B49E72C6EBEE8C76ECA9DC6B259BB339 (Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CHeightU3Ek__BackingField_3;
		return L_0;
	}
}
// System.String HDRLoader.Rgbe/Header::get_ProgramType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Header_get_ProgramType_m8C2259F35CF82FCD32F542FB58F17F44B11E6D47 (Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CProgramTypeU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Int32 HDRLoader.Rgbe/Header::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Header_get_Width_m5794684C131F88D75D1E9BE43B3F472FE1956BC4 (Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CWidthU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Boolean HDRLoader.Rgbe/Header::get_IsExposureValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Header_get_IsExposureValid_m1B8E8D41D008EDB0C9418B54822C22DB4B16DA45 (Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____valid_0;
		return (bool)((!(((uint32_t)((int32_t)(L_0&4))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean HDRLoader.Rgbe/Header::get_IsGammaValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Header_get_IsGammaValid_m94EB33918CEA369DFD7B787BBD932A804F6F139E (Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____valid_0;
		return (bool)((!(((uint32_t)((int32_t)(L_0&2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Boolean HDRLoader.Rgbe/Header::get_IsProgramTypeValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Header_get_IsProgramTypeValid_m718E50C447948BC01F78B62A690132BF73CEEF33 (Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____valid_0;
		return (bool)((!(((uint32_t)((int32_t)(L_0&1))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.String HDRLoader.Rgbe/Header::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Header_ToString_m8CD9E0DE52BDB0FB624E1CDAF73CB1AEB15E0DF3 (Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral126CEB001D6A55877F26F1112A893A96C48D30DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C2D6544FB9CCB9048B31961FBFB966375DB32DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66220396CE1C9CFF404A41038B38F6FB0F0276BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC1D79EC1E0F1CA0D5880DB8D4456467D14FC38D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5548B7A71AC9CD49226229042329592E2BBFABD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCAEFF44C09294FB787A09F3C3076507DE41F12E);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = Header_get_IsProgramTypeValid_m718E50C447948BC01F78B62A690132BF73CEEF33(__this, NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		StringBuilder_t* L_2 = V_0;
		NullCheck(L_2);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_2, _stringLiteral4C2D6544FB9CCB9048B31961FBFB966375DB32DB, NULL);
		StringBuilder_t* L_4 = V_0;
		String_t* L_5;
		L_5 = Header_get_ProgramType_m8C2259F35CF82FCD32F542FB58F17F44B11E6D47_inline(__this, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, L_5, NULL);
	}

IL_0027:
	{
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteralD5548B7A71AC9CD49226229042329592E2BBFABD, NULL);
		bool L_9;
		L_9 = Header_get_IsGammaValid_m94EB33918CEA369DFD7B787BBD932A804F6F139E(__this, NULL);
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		StringBuilder_t* L_10 = V_0;
		NullCheck(L_10);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_10, _stringLiteral126CEB001D6A55877F26F1112A893A96C48D30DD, NULL);
	}

IL_0047:
	{
		StringBuilder_t* L_12 = V_0;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, NULL);
		StringBuilder_t* L_14 = V_0;
		float L_15;
		L_15 = Header_get_Gamma_m90B90962518B5ED4B3493F8CD51512D2B2D44453_inline(__this, NULL);
		NullCheck(L_14);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E(L_14, L_15, NULL);
		StringBuilder_t* L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, _stringLiteralFCAEFF44C09294FB787A09F3C3076507DE41F12E, NULL);
		bool L_19;
		L_19 = Header_get_IsExposureValid_m1B8E8D41D008EDB0C9418B54822C22DB4B16DA45(__this, NULL);
		if (!L_19)
		{
			goto IL_0080;
		}
	}
	{
		StringBuilder_t* L_20 = V_0;
		NullCheck(L_20);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, _stringLiteral126CEB001D6A55877F26F1112A893A96C48D30DD, NULL);
	}

IL_0080:
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, NULL);
		StringBuilder_t* L_24 = V_0;
		float L_25;
		L_25 = Header_get_Exposure_m803942C1502B0C209BF95C544E325CE2C58B8D75_inline(__this, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_Append_m789EC7C63CDC0DE5136AE3FF0C85CA5EE11A842E(L_24, L_25, NULL);
		StringBuilder_t* L_27 = V_0;
		NullCheck(L_27);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_27, _stringLiteralAC1D79EC1E0F1CA0D5880DB8D4456467D14FC38D, NULL);
		StringBuilder_t* L_29 = V_0;
		int32_t L_30;
		L_30 = Header_get_Width_m5794684C131F88D75D1E9BE43B3F472FE1956BC4_inline(__this, NULL);
		NullCheck(L_29);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_29, L_30, NULL);
		StringBuilder_t* L_32 = V_0;
		NullCheck(L_32);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_32, _stringLiteral66220396CE1C9CFF404A41038B38F6FB0F0276BC, NULL);
		StringBuilder_t* L_34 = V_0;
		int32_t L_35;
		L_35 = Header_get_Height_m1A2C5286B49E72C6EBEE8C76ECA9DC6B259BB339_inline(__this, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_34, L_35, NULL);
		StringBuilder_t* L_37 = V_0;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_37);
		return L_38;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Header_get_Gamma_m90B90962518B5ED4B3493F8CD51512D2B2D44453_inline (Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CGammaU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Header_get_Exposure_m803942C1502B0C209BF95C544E325CE2C58B8D75_inline (Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___U3CExposureU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Header_get_Width_m5794684C131F88D75D1E9BE43B3F472FE1956BC4_inline (Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CWidthU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Header_get_Height_m1A2C5286B49E72C6EBEE8C76ECA9DC6B259BB339_inline (Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CHeightU3Ek__BackingField_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gamma_mEB9104560536D684CD57C968A906A8B3EF89839F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = __this->___r_0;
		float L_1;
		L_1 = Mathf_LinearToGammaSpace_mB23054C857C5AE0E5E27B0EA00A35F82E024B430(L_0, NULL);
		float L_2 = __this->___g_1;
		float L_3;
		L_3 = Mathf_LinearToGammaSpace_mB23054C857C5AE0E5E27B0EA00A35F82E024B430(L_2, NULL);
		float L_4 = __this->___b_2;
		float L_5;
		L_5 = Mathf_LinearToGammaSpace_mB23054C857C5AE0E5E27B0EA00A35F82E024B430(L_4, NULL);
		float L_6 = __this->___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_7), L_1, L_3, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0030;
	}

IL_0030:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Header_get_ProgramType_m8C2259F35CF82FCD32F542FB58F17F44B11E6D47_inline (Header_tA6CD0237F1CA9F61AFCA3C7FA51ECEBC4353E808* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CProgramTypeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
