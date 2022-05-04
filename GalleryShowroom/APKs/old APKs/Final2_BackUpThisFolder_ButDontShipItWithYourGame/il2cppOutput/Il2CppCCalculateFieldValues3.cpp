#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Action`1<UnityEngine.Playables.PlayableDirector>
struct Action_1_tB645F646DB079054A9500B09427CB02A88372D3F;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection
struct AndroidServiceConnection_t41C34BBF24CE0E2DFB04DB1E9412B64D36E134FB  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection::mAssistantServiceConnection
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___mAssistantServiceConnection_0;
	// System.String Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection::serviceFragmentClass
	String_t* ___serviceFragmentClass_1;
	// System.String Oculus.Voice.Core.Bindings.Android.AndroidServiceConnection::serviceGetter
	String_t* ___serviceGetter_2;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Oculus.Voice.Core.Bindings.Android.BaseServiceBinding
struct BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01  : public RuntimeObject
{
	// UnityEngine.AndroidJavaObject Oculus.Voice.Core.Bindings.Android.BaseServiceBinding::binding
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___binding_0;
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

// UnityEngine.XR.XRDevice
struct XRDevice_tD076A68EFE413B3EEEEA362BE0364A488B58F194  : public RuntimeObject
{
};

struct XRDevice_tD076A68EFE413B3EEEEA362BE0364A488B58F194_StaticFields
{
	// System.Action`1<System.String> UnityEngine.XR.XRDevice::deviceLoaded
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___deviceLoaded_0;
};

// System.Xml.XmlReader
struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD  : public RuntimeObject
{
};

struct XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields
{
	// System.UInt32 System.Xml.XmlReader::IsTextualNodeBitmap
	uint32_t ___IsTextualNodeBitmap_0;
	// System.UInt32 System.Xml.XmlReader::CanReadContentAsBitmap
	uint32_t ___CanReadContentAsBitmap_1;
	// System.UInt32 System.Xml.XmlReader::HasValueBitmap
	uint32_t ___HasValueBitmap_2;
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

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Oculus.Voice.Core.Utilities.ArrayElementTitleAttribute
struct ArrayElementTitleAttribute_t95859242D0591D1454C3778E09A76713CB83BDA0  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String Oculus.Voice.Core.Utilities.ArrayElementTitleAttribute::varname
	String_t* ___varname_0;
	// System.String Oculus.Voice.Core.Utilities.ArrayElementTitleAttribute::fallbackName
	String_t* ___fallbackName_1;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Playables.PlayableDirector
struct PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::played
	Action_1_tB645F646DB079054A9500B09427CB02A88372D3F* ___played_4;
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::paused
	Action_1_tB645F646DB079054A9500B09427CB02A88372D3F* ___paused_5;
	// System.Action`1<UnityEngine.Playables.PlayableDirector> UnityEngine.Playables.PlayableDirector::stopped
	Action_1_tB645F646DB079054A9500B09427CB02A88372D3F* ___stopped_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9002[1] = 
{
	static_cast<int32_t>(offsetof(XRDevice_tD076A68EFE413B3EEEEA362BE0364A488B58F194_StaticFields, ___deviceLoaded_0)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9004[3] = 
{
	static_cast<int32_t>(offsetof(PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475, ___played_4)),static_cast<int32_t>(offsetof(PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475, ___paused_5)),static_cast<int32_t>(offsetof(PlayableDirector_t895D7BC3CFBFFD823278F438EAC4AA91DBFEC475, ___stopped_6)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9015[3] = 
{
	static_cast<int32_t>(offsetof(XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields, ___IsTextualNodeBitmap_0)),static_cast<int32_t>(offsetof(XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields, ___CanReadContentAsBitmap_1)),static_cast<int32_t>(offsetof(XmlReader_t4C709DEF5F01606ECB60B638F1BD6F6E0A9116FD_StaticFields, ___HasValueBitmap_2)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9018[2] = 
{
	static_cast<int32_t>(offsetof(ArrayElementTitleAttribute_t95859242D0591D1454C3778E09A76713CB83BDA0, ___varname_0)),static_cast<int32_t>(offsetof(ArrayElementTitleAttribute_t95859242D0591D1454C3778E09A76713CB83BDA0, ___fallbackName_1)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9020[3] = 
{
	static_cast<int32_t>(offsetof(AndroidServiceConnection_t41C34BBF24CE0E2DFB04DB1E9412B64D36E134FB, ___mAssistantServiceConnection_0)),static_cast<int32_t>(offsetof(AndroidServiceConnection_t41C34BBF24CE0E2DFB04DB1E9412B64D36E134FB, ___serviceFragmentClass_1)),static_cast<int32_t>(offsetof(AndroidServiceConnection_t41C34BBF24CE0E2DFB04DB1E9412B64D36E134FB, ___serviceGetter_2)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9021[3] = 
{
	0,0,0,};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9022[1] = 
{
	static_cast<int32_t>(offsetof(BaseServiceBinding_tC22454D6751C375356A18F7AAD46982DBC0B2F01, ___binding_0)),};
IL2CPP_EXTERN_C const int32_t g_FieldOffsetTable9027[4] = 
{
	static_cast<int32_t>(sizeof(RuntimeObject)),0,0,0,};
