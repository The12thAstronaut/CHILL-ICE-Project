#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HeaderInfo>
struct Dictionary_2_tEBE1ABD140AD7E9C7019A4D27C5C036F79BA1565;
// System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HttpHeaders/HeaderBucket>
struct Dictionary_2_t68C9612F2AAB4592A72574ECE587789329FFC1B3;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.IO.Stream>>
struct Func_2_t97AE46232676B6C4CB84D0101A45061F2288FCE5;
// System.IO.Stream
struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Net.Http.Headers.HttpContentHeaders
struct HttpContentHeaders_t98D8657573ADACD807B6C941F46E6D69EDFD13A0;
// System.Net.Http.Headers.HttpRequestHeaders
struct HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4;
// System.Net.Http.Headers.HttpResponseHeaders
struct HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59;
// System.Net.Http.HttpContent
struct HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D;
// System.Net.Http.HttpContent/FixedMemoryStream
struct FixedMemoryStream_t181662654A3A2002A1F5D33E7747A9E12DAD139C;
// System.Net.Http.HttpMethod
struct HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220;
// System.Net.Http.HttpRequestException
struct HttpRequestException_tD4D14C20B90F362C83781589E7508A05E7060349;
// System.Net.Http.HttpRequestMessage
struct HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427;
// System.Net.Http.HttpResponseMessage
struct HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904;
// System.Net.Http.StreamContent
struct StreamContent_t0E4C08F0720024BFEBB667CCC40DA9E947EFF3FF;
// System.Net.TransportContext
struct TransportContext_t1753CC7BFFA637B35BE353AAE4452C4371F89A9F;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskFactory`1<System.IO.Stream>
struct TaskFactory_1_tE7B6DC2F22643759D47ED49CDDBD8C35D9383D8F;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Threading.Tasks.Task`1<System.IO.Stream>
struct Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Uri/UriInfo
struct UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E;
// System.UriParser
struct UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC;
// System.Version
struct Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpVersion_t6B721B3C551822DC30BA4586D4B46D1C7C2483D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral040F06FD774092478D450774F5BA30C5DA78ACC8;
IL2CPP_EXTERN_C String_t* _stringLiteral32844A7C7C921B7FCCAE60084355B161603A6E91;
IL2CPP_EXTERN_C String_t* _stringLiteral33CD5D780831713577FF0BAC37D3C594AB552633;
IL2CPP_EXTERN_C String_t* _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8;
IL2CPP_EXTERN_C String_t* _stringLiteral72B9F12D7CD133FEA422C851DCA5A98617F147E0;
IL2CPP_EXTERN_C String_t* _stringLiteral798275C17944BDA73AC13CB181018C138194815A;
IL2CPP_EXTERN_C String_t* _stringLiteral7FC7C6AE010099E065FEB9C201E28E242C7620D3;
IL2CPP_EXTERN_C String_t* _stringLiteralB543C2BDEF0B8B22014F983D4B7D3F850FA982F7;
IL2CPP_EXTERN_C String_t* _stringLiteralB6FE7D0BCD74C46F229FDA196825ED3E261B6A69;
IL2CPP_EXTERN_C String_t* _stringLiteralBFBAF8B2D1CDF92BF83857FE1748C0F68DE03D47;
IL2CPP_EXTERN_C String_t* _stringLiteralC2B7DF6201FDD3362399091F0A29550DF3505B6A;
IL2CPP_EXTERN_C String_t* _stringLiteralC36E8AE79F7FE82CB7DB7F945372BE9C23027EE9;
IL2CPP_EXTERN_C String_t* _stringLiteralD1165E94605FACB6582E8B655792F164833C5E2C;
IL2CPP_EXTERN_C String_t* _stringLiteralD811CA149F6C3D32E2C1B6AEE4419B6EEA02BA5D;
IL2CPP_EXTERN_C String_t* _stringLiteralF75E94DCC92ECC309EF861E9A10FFFB6B1A383AF;
IL2CPP_EXTERN_C const RuntimeMethod* HttpRequestMessage_set_Method_m623C9F1060CD64F10778C44C4345C361DC48E2C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpRequestMessage_set_RequestUri_mBCF7516F07476E68718DB4EADB2BB8181B3FCDB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpResponseMessage_set_StatusCode_mC57863987BDA7314961D16A2D33F07702EBE7319_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamContent_SerializeToStreamAsync_m9D89963BF02B020A7CFA61D4683A1E257E21E8AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StreamContent__ctor_mB09F0FFE8AE4EDE9B597AE5ED15E7E2579169A24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromResult_TisStream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_m304EF757D9D1D57BB2E9D0B5D503A4C281684C56_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t HttpRequestException__ctor_m372759B26E587C9DD00ECE3A44D91508771699CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HttpRequestException__ctor_m6AAFFF4CC44447AF132DDD7666D3C09A7E665692_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HttpRequestException__ctor_mB816F1ECA750F254BE0087E8E8B3FBE1A4C470BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HttpRequestMessage_IsAllowedAbsoluteUri_m0BF74D34E9C7F91810AE428E4B2E4A32940BED9E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HttpRequestMessage_ToString_m6713161F1B7EB8D063AB9A570C4BCDFA793C2DCE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HttpRequestMessage__ctor_m76A9F3C082E2D1C9B679E56DB32F2AA8ECE377C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HttpRequestMessage_get_Headers_m57B2BEFF2C906EDCE282E3AC579CBA19B76ABF85_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HttpRequestMessage_get_Version_m317FE62850ABCB754B48B285E9EBA4C3DA2CB7BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HttpRequestMessage_set_Method_m623C9F1060CD64F10778C44C4345C361DC48E2C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HttpRequestMessage_set_RequestUri_mBCF7516F07476E68718DB4EADB2BB8181B3FCDB8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HttpResponseMessage_ToString_mF97964659BD261F6DCEB4FCE6E3B0916B4A36681_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HttpResponseMessage_get_Headers_mBD52D7A018509B2A6A55C0925A40955A33D20B98_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HttpResponseMessage_get_Version_m36B05F89746C6A4593B927E7C1056DECA678885C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HttpResponseMessage_set_StatusCode_mC57863987BDA7314961D16A2D33F07702EBE7319_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamContent_CreateContentReadStreamAsync_m978CC872FC6F43C1AFA7F2F681A3304A8358775D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamContent_SerializeToStreamAsync_m9D89963BF02B020A7CFA61D4683A1E257E21E8AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StreamContent__ctor_mB09F0FFE8AE4EDE9B597AE5ED15E7E2579169A24_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Net.Http.HttpContent
struct  HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D  : public RuntimeObject
{
public:
	// System.Net.Http.HttpContent_FixedMemoryStream System.Net.Http.HttpContent::buffer
	FixedMemoryStream_t181662654A3A2002A1F5D33E7747A9E12DAD139C * ___buffer_0;
	// System.IO.Stream System.Net.Http.HttpContent::stream
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream_1;
	// System.Boolean System.Net.Http.HttpContent::disposed
	bool ___disposed_2;
	// System.Net.Http.Headers.HttpContentHeaders System.Net.Http.HttpContent::headers
	HttpContentHeaders_t98D8657573ADACD807B6C941F46E6D69EDFD13A0 * ___headers_3;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D, ___buffer_0)); }
	inline FixedMemoryStream_t181662654A3A2002A1F5D33E7747A9E12DAD139C * get_buffer_0() const { return ___buffer_0; }
	inline FixedMemoryStream_t181662654A3A2002A1F5D33E7747A9E12DAD139C ** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(FixedMemoryStream_t181662654A3A2002A1F5D33E7747A9E12DAD139C * value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_stream_1() { return static_cast<int32_t>(offsetof(HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D, ___stream_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_stream_1() const { return ___stream_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_stream_1() { return &___stream_1; }
	inline void set_stream_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___stream_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_1), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_2() { return static_cast<int32_t>(offsetof(HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D, ___disposed_2)); }
	inline bool get_disposed_2() const { return ___disposed_2; }
	inline bool* get_address_of_disposed_2() { return &___disposed_2; }
	inline void set_disposed_2(bool value)
	{
		___disposed_2 = value;
	}

	inline static int32_t get_offset_of_headers_3() { return static_cast<int32_t>(offsetof(HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D, ___headers_3)); }
	inline HttpContentHeaders_t98D8657573ADACD807B6C941F46E6D69EDFD13A0 * get_headers_3() const { return ___headers_3; }
	inline HttpContentHeaders_t98D8657573ADACD807B6C941F46E6D69EDFD13A0 ** get_address_of_headers_3() { return &___headers_3; }
	inline void set_headers_3(HttpContentHeaders_t98D8657573ADACD807B6C941F46E6D69EDFD13A0 * value)
	{
		___headers_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headers_3), (void*)value);
	}
};


// System.Net.Http.HttpMethod
struct  HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220  : public RuntimeObject
{
public:
	// System.String System.Net.Http.HttpMethod::method
	String_t* ___method_7;

public:
	inline static int32_t get_offset_of_method_7() { return static_cast<int32_t>(offsetof(HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220, ___method_7)); }
	inline String_t* get_method_7() const { return ___method_7; }
	inline String_t** get_address_of_method_7() { return &___method_7; }
	inline void set_method_7(String_t* value)
	{
		___method_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_7), (void*)value);
	}
};

struct HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220_StaticFields
{
public:
	// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::delete_method
	HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * ___delete_method_0;
	// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::get_method
	HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * ___get_method_1;
	// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::head_method
	HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * ___head_method_2;
	// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::options_method
	HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * ___options_method_3;
	// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::post_method
	HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * ___post_method_4;
	// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::put_method
	HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * ___put_method_5;
	// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::trace_method
	HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * ___trace_method_6;

public:
	inline static int32_t get_offset_of_delete_method_0() { return static_cast<int32_t>(offsetof(HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220_StaticFields, ___delete_method_0)); }
	inline HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * get_delete_method_0() const { return ___delete_method_0; }
	inline HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 ** get_address_of_delete_method_0() { return &___delete_method_0; }
	inline void set_delete_method_0(HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * value)
	{
		___delete_method_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delete_method_0), (void*)value);
	}

	inline static int32_t get_offset_of_get_method_1() { return static_cast<int32_t>(offsetof(HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220_StaticFields, ___get_method_1)); }
	inline HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * get_get_method_1() const { return ___get_method_1; }
	inline HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 ** get_address_of_get_method_1() { return &___get_method_1; }
	inline void set_get_method_1(HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * value)
	{
		___get_method_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_method_1), (void*)value);
	}

	inline static int32_t get_offset_of_head_method_2() { return static_cast<int32_t>(offsetof(HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220_StaticFields, ___head_method_2)); }
	inline HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * get_head_method_2() const { return ___head_method_2; }
	inline HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 ** get_address_of_head_method_2() { return &___head_method_2; }
	inline void set_head_method_2(HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * value)
	{
		___head_method_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___head_method_2), (void*)value);
	}

	inline static int32_t get_offset_of_options_method_3() { return static_cast<int32_t>(offsetof(HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220_StaticFields, ___options_method_3)); }
	inline HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * get_options_method_3() const { return ___options_method_3; }
	inline HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 ** get_address_of_options_method_3() { return &___options_method_3; }
	inline void set_options_method_3(HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * value)
	{
		___options_method_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___options_method_3), (void*)value);
	}

	inline static int32_t get_offset_of_post_method_4() { return static_cast<int32_t>(offsetof(HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220_StaticFields, ___post_method_4)); }
	inline HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * get_post_method_4() const { return ___post_method_4; }
	inline HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 ** get_address_of_post_method_4() { return &___post_method_4; }
	inline void set_post_method_4(HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * value)
	{
		___post_method_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___post_method_4), (void*)value);
	}

	inline static int32_t get_offset_of_put_method_5() { return static_cast<int32_t>(offsetof(HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220_StaticFields, ___put_method_5)); }
	inline HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * get_put_method_5() const { return ___put_method_5; }
	inline HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 ** get_address_of_put_method_5() { return &___put_method_5; }
	inline void set_put_method_5(HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * value)
	{
		___put_method_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___put_method_5), (void*)value);
	}

	inline static int32_t get_offset_of_trace_method_6() { return static_cast<int32_t>(offsetof(HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220_StaticFields, ___trace_method_6)); }
	inline HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * get_trace_method_6() const { return ___trace_method_6; }
	inline HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 ** get_address_of_trace_method_6() { return &___trace_method_6; }
	inline void set_trace_method_6(HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * value)
	{
		___trace_method_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trace_method_6), (void*)value);
	}
};


// System.Net.Http.HttpRequestMessage
struct  HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427  : public RuntimeObject
{
public:
	// System.Net.Http.Headers.HttpRequestHeaders System.Net.Http.HttpRequestMessage::headers
	HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4 * ___headers_0;
	// System.Net.Http.HttpMethod System.Net.Http.HttpRequestMessage::method
	HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * ___method_1;
	// System.Version System.Net.Http.HttpRequestMessage::version
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___version_2;
	// System.Uri System.Net.Http.HttpRequestMessage::uri
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___uri_3;
	// System.Boolean System.Net.Http.HttpRequestMessage::is_used
	bool ___is_used_4;
	// System.Boolean System.Net.Http.HttpRequestMessage::disposed
	bool ___disposed_5;
	// System.Net.Http.HttpContent System.Net.Http.HttpRequestMessage::<Content>k__BackingField
	HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * ___U3CContentU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_headers_0() { return static_cast<int32_t>(offsetof(HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427, ___headers_0)); }
	inline HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4 * get_headers_0() const { return ___headers_0; }
	inline HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4 ** get_address_of_headers_0() { return &___headers_0; }
	inline void set_headers_0(HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4 * value)
	{
		___headers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headers_0), (void*)value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427, ___method_1)); }
	inline HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * get_method_1() const { return ___method_1; }
	inline HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_1), (void*)value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427, ___version_2)); }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * get_version_2() const { return ___version_2; }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD ** get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * value)
	{
		___version_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_2), (void*)value);
	}

	inline static int32_t get_offset_of_uri_3() { return static_cast<int32_t>(offsetof(HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427, ___uri_3)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_uri_3() const { return ___uri_3; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_uri_3() { return &___uri_3; }
	inline void set_uri_3(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___uri_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uri_3), (void*)value);
	}

	inline static int32_t get_offset_of_is_used_4() { return static_cast<int32_t>(offsetof(HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427, ___is_used_4)); }
	inline bool get_is_used_4() const { return ___is_used_4; }
	inline bool* get_address_of_is_used_4() { return &___is_used_4; }
	inline void set_is_used_4(bool value)
	{
		___is_used_4 = value;
	}

	inline static int32_t get_offset_of_disposed_5() { return static_cast<int32_t>(offsetof(HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427, ___disposed_5)); }
	inline bool get_disposed_5() const { return ___disposed_5; }
	inline bool* get_address_of_disposed_5() { return &___disposed_5; }
	inline void set_disposed_5(bool value)
	{
		___disposed_5 = value;
	}

	inline static int32_t get_offset_of_U3CContentU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427, ___U3CContentU3Ek__BackingField_6)); }
	inline HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * get_U3CContentU3Ek__BackingField_6() const { return ___U3CContentU3Ek__BackingField_6; }
	inline HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D ** get_address_of_U3CContentU3Ek__BackingField_6() { return &___U3CContentU3Ek__BackingField_6; }
	inline void set_U3CContentU3Ek__BackingField_6(HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * value)
	{
		___U3CContentU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CContentU3Ek__BackingField_6), (void*)value);
	}
};


// System.Net.HttpVersion
struct  HttpVersion_t6B721B3C551822DC30BA4586D4B46D1C7C2483D1  : public RuntimeObject
{
public:

public:
};

struct HttpVersion_t6B721B3C551822DC30BA4586D4B46D1C7C2483D1_StaticFields
{
public:
	// System.Version System.Net.HttpVersion::Version10
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___Version10_0;
	// System.Version System.Net.HttpVersion::Version11
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___Version11_1;

public:
	inline static int32_t get_offset_of_Version10_0() { return static_cast<int32_t>(offsetof(HttpVersion_t6B721B3C551822DC30BA4586D4B46D1C7C2483D1_StaticFields, ___Version10_0)); }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * get_Version10_0() const { return ___Version10_0; }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD ** get_address_of_Version10_0() { return &___Version10_0; }
	inline void set_Version10_0(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * value)
	{
		___Version10_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Version10_0), (void*)value);
	}

	inline static int32_t get_offset_of_Version11_1() { return static_cast<int32_t>(offsetof(HttpVersion_t6B721B3C551822DC30BA4586D4B46D1C7C2483D1_StaticFields, ___Version11_1)); }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * get_Version11_1() const { return ___Version11_1; }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD ** get_address_of_Version11_1() { return &___Version11_1; }
	inline void set_Version11_1(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * value)
	{
		___Version11_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Version11_1), (void*)value);
	}
};


// System.Net.TransportContext
struct  TransportContext_t1753CC7BFFA637B35BE353AAE4452C4371F89A9F  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Version
struct  Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_0;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_1;
	// System.Int32 System.Version::_Build
	int32_t ____Build_2;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_3;

public:
	inline static int32_t get_offset_of__Major_0() { return static_cast<int32_t>(offsetof(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD, ____Major_0)); }
	inline int32_t get__Major_0() const { return ____Major_0; }
	inline int32_t* get_address_of__Major_0() { return &____Major_0; }
	inline void set__Major_0(int32_t value)
	{
		____Major_0 = value;
	}

	inline static int32_t get_offset_of__Minor_1() { return static_cast<int32_t>(offsetof(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD, ____Minor_1)); }
	inline int32_t get__Minor_1() const { return ____Minor_1; }
	inline int32_t* get_address_of__Minor_1() { return &____Minor_1; }
	inline void set__Minor_1(int32_t value)
	{
		____Minor_1 = value;
	}

	inline static int32_t get_offset_of__Build_2() { return static_cast<int32_t>(offsetof(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD, ____Build_2)); }
	inline int32_t get__Build_2() const { return ____Build_2; }
	inline int32_t* get_address_of__Build_2() { return &____Build_2; }
	inline void set__Build_2(int32_t value)
	{
		____Build_2 = value;
	}

	inline static int32_t get_offset_of__Revision_3() { return static_cast<int32_t>(offsetof(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD, ____Revision_3)); }
	inline int32_t get__Revision_3() const { return ____Revision_3; }
	inline int32_t* get_address_of__Revision_3() { return &____Revision_3; }
	inline void set__Revision_3(int32_t value)
	{
		____Revision_3 = value;
	}
};

struct Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_StaticFields
{
public:
	// System.Char[] System.Version::SeparatorsArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___SeparatorsArray_4;

public:
	inline static int32_t get_offset_of_SeparatorsArray_4() { return static_cast<int32_t>(offsetof(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD_StaticFields, ___SeparatorsArray_4)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_SeparatorsArray_4() const { return ___SeparatorsArray_4; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_SeparatorsArray_4() { return &___SeparatorsArray_4; }
	inline void set_SeparatorsArray_4(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___SeparatorsArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeparatorsArray_4), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.IO.Stream
struct  Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IO.Stream_ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_tFA17EEE8BC5C4C83EAEFCC3662A30DE351ABAA80 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_3), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2E2888D1C0C8FAB80823C76F1602E4434B8FA048 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_4), (void*)value);
	}
};

struct Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_StaticFields, ___Null_1)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_Null_1() const { return ___Null_1; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Nullable`1<System.Boolean>
struct  Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Threading.CancellationToken
struct  CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB, ___m_source_0)); }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshaled_pinvoke
{
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB_marshaled_com
{
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___m_source_0;
};

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.SeekOrigin
struct  SeekOrigin_tAC0AF155E3D8B36359FAD8A95FACA23169D55BB3 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SeekOrigin_tAC0AF155E3D8B36359FAD8A95FACA23169D55BB3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Http.Headers.HttpHeaderKind
struct  HttpHeaderKind_tB1DD187D27BCE76C6EC20628350D06F1802F9F97 
{
public:
	// System.Int32 System.Net.Http.Headers.HttpHeaderKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HttpHeaderKind_tB1DD187D27BCE76C6EC20628350D06F1802F9F97, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Http.StreamContent
struct  StreamContent_t0E4C08F0720024BFEBB667CCC40DA9E947EFF3FF  : public HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D
{
public:
	// System.IO.Stream System.Net.Http.StreamContent::content
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___content_4;
	// System.Int32 System.Net.Http.StreamContent::bufferSize
	int32_t ___bufferSize_5;
	// System.Threading.CancellationToken System.Net.Http.StreamContent::cancellationToken
	CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken_6;
	// System.Int64 System.Net.Http.StreamContent::startPosition
	int64_t ___startPosition_7;
	// System.Boolean System.Net.Http.StreamContent::contentCopied
	bool ___contentCopied_8;

public:
	inline static int32_t get_offset_of_content_4() { return static_cast<int32_t>(offsetof(StreamContent_t0E4C08F0720024BFEBB667CCC40DA9E947EFF3FF, ___content_4)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_content_4() const { return ___content_4; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_content_4() { return &___content_4; }
	inline void set_content_4(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___content_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___content_4), (void*)value);
	}

	inline static int32_t get_offset_of_bufferSize_5() { return static_cast<int32_t>(offsetof(StreamContent_t0E4C08F0720024BFEBB667CCC40DA9E947EFF3FF, ___bufferSize_5)); }
	inline int32_t get_bufferSize_5() const { return ___bufferSize_5; }
	inline int32_t* get_address_of_bufferSize_5() { return &___bufferSize_5; }
	inline void set_bufferSize_5(int32_t value)
	{
		___bufferSize_5 = value;
	}

	inline static int32_t get_offset_of_cancellationToken_6() { return static_cast<int32_t>(offsetof(StreamContent_t0E4C08F0720024BFEBB667CCC40DA9E947EFF3FF, ___cancellationToken_6)); }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  get_cancellationToken_6() const { return ___cancellationToken_6; }
	inline CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB * get_address_of_cancellationToken_6() { return &___cancellationToken_6; }
	inline void set_cancellationToken_6(CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  value)
	{
		___cancellationToken_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_6))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_startPosition_7() { return static_cast<int32_t>(offsetof(StreamContent_t0E4C08F0720024BFEBB667CCC40DA9E947EFF3FF, ___startPosition_7)); }
	inline int64_t get_startPosition_7() const { return ___startPosition_7; }
	inline int64_t* get_address_of_startPosition_7() { return &___startPosition_7; }
	inline void set_startPosition_7(int64_t value)
	{
		___startPosition_7 = value;
	}

	inline static int32_t get_offset_of_contentCopied_8() { return static_cast<int32_t>(offsetof(StreamContent_t0E4C08F0720024BFEBB667CCC40DA9E947EFF3FF, ___contentCopied_8)); }
	inline bool get_contentCopied_8() const { return ___contentCopied_8; }
	inline bool* get_address_of_contentCopied_8() { return &___contentCopied_8; }
	inline void set_contentCopied_8(bool value)
	{
		___contentCopied_8 = value;
	}
};


// System.Net.HttpStatusCode
struct  HttpStatusCode_tEEC31491D56EE5BDB252F07906878274FD22AC0C 
{
public:
	// System.Int32 System.Net.HttpStatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HttpStatusCode_tEEC31491D56EE5BDB252F07906878274FD22AC0C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.StringComparison
struct  StringComparison_t02BAA95468CE9E91115C604577611FDF58FEDCF0 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_t02BAA95468CE9E91115C604577611FDF58FEDCF0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task_ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskScheduler_7)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_parent_8)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_contingentProperties_33)); }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task_ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_factory_3)); }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_completedTask_36)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Uri_Flags
struct  Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A 
{
public:
	// System.UInt64 System.Uri_Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_tEBE7CABEBD13F16920D6950B384EB8F988250A2A, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.UriFormat
struct  UriFormat_t4355763D39FF6F0FAA2B43E3A209BA8500730992 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t4355763D39FF6F0FAA2B43E3A209BA8500730992, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct  UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tE1574B39C7492C761EFE2FC12DDE82DE013AC9D1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.UriKind
struct  UriKind_t26D0760DDF148ADC939FECD934C0B9FF5C71EA08 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_t26D0760DDF148ADC939FECD934C0B9FF5C71EA08, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.Http.Headers.HttpHeaders
struct  HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HttpHeaders_HeaderBucket> System.Net.Http.Headers.HttpHeaders::headers
	Dictionary_2_t68C9612F2AAB4592A72574ECE587789329FFC1B3 * ___headers_1;
	// System.Net.Http.Headers.HttpHeaderKind System.Net.Http.Headers.HttpHeaders::HeaderKind
	int32_t ___HeaderKind_2;
	// System.Nullable`1<System.Boolean> System.Net.Http.Headers.HttpHeaders::connectionclose
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___connectionclose_3;
	// System.Nullable`1<System.Boolean> System.Net.Http.Headers.HttpHeaders::transferEncodingChunked
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___transferEncodingChunked_4;

public:
	inline static int32_t get_offset_of_headers_1() { return static_cast<int32_t>(offsetof(HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1, ___headers_1)); }
	inline Dictionary_2_t68C9612F2AAB4592A72574ECE587789329FFC1B3 * get_headers_1() const { return ___headers_1; }
	inline Dictionary_2_t68C9612F2AAB4592A72574ECE587789329FFC1B3 ** get_address_of_headers_1() { return &___headers_1; }
	inline void set_headers_1(Dictionary_2_t68C9612F2AAB4592A72574ECE587789329FFC1B3 * value)
	{
		___headers_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headers_1), (void*)value);
	}

	inline static int32_t get_offset_of_HeaderKind_2() { return static_cast<int32_t>(offsetof(HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1, ___HeaderKind_2)); }
	inline int32_t get_HeaderKind_2() const { return ___HeaderKind_2; }
	inline int32_t* get_address_of_HeaderKind_2() { return &___HeaderKind_2; }
	inline void set_HeaderKind_2(int32_t value)
	{
		___HeaderKind_2 = value;
	}

	inline static int32_t get_offset_of_connectionclose_3() { return static_cast<int32_t>(offsetof(HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1, ___connectionclose_3)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_connectionclose_3() const { return ___connectionclose_3; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_connectionclose_3() { return &___connectionclose_3; }
	inline void set_connectionclose_3(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___connectionclose_3 = value;
	}

	inline static int32_t get_offset_of_transferEncodingChunked_4() { return static_cast<int32_t>(offsetof(HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1, ___transferEncodingChunked_4)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_transferEncodingChunked_4() const { return ___transferEncodingChunked_4; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_transferEncodingChunked_4() { return &___transferEncodingChunked_4; }
	inline void set_transferEncodingChunked_4(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___transferEncodingChunked_4 = value;
	}
};

struct HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HeaderInfo> System.Net.Http.Headers.HttpHeaders::known_headers
	Dictionary_2_tEBE1ABD140AD7E9C7019A4D27C5C036F79BA1565 * ___known_headers_0;

public:
	inline static int32_t get_offset_of_known_headers_0() { return static_cast<int32_t>(offsetof(HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1_StaticFields, ___known_headers_0)); }
	inline Dictionary_2_tEBE1ABD140AD7E9C7019A4D27C5C036F79BA1565 * get_known_headers_0() const { return ___known_headers_0; }
	inline Dictionary_2_tEBE1ABD140AD7E9C7019A4D27C5C036F79BA1565 ** get_address_of_known_headers_0() { return &___known_headers_0; }
	inline void set_known_headers_0(Dictionary_2_tEBE1ABD140AD7E9C7019A4D27C5C036F79BA1565 * value)
	{
		___known_headers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___known_headers_0), (void*)value);
	}
};


// System.Net.Http.HttpRequestException
struct  HttpRequestException_tD4D14C20B90F362C83781589E7508A05E7060349  : public Exception_t
{
public:

public:
};


// System.Net.Http.HttpResponseMessage
struct  HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904  : public RuntimeObject
{
public:
	// System.Net.Http.Headers.HttpResponseHeaders System.Net.Http.HttpResponseMessage::headers
	HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59 * ___headers_0;
	// System.String System.Net.Http.HttpResponseMessage::reasonPhrase
	String_t* ___reasonPhrase_1;
	// System.Net.HttpStatusCode System.Net.Http.HttpResponseMessage::statusCode
	int32_t ___statusCode_2;
	// System.Version System.Net.Http.HttpResponseMessage::version
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___version_3;
	// System.Boolean System.Net.Http.HttpResponseMessage::disposed
	bool ___disposed_4;
	// System.Net.Http.HttpContent System.Net.Http.HttpResponseMessage::<Content>k__BackingField
	HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * ___U3CContentU3Ek__BackingField_5;
	// System.Net.Http.HttpRequestMessage System.Net.Http.HttpResponseMessage::<RequestMessage>k__BackingField
	HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * ___U3CRequestMessageU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_headers_0() { return static_cast<int32_t>(offsetof(HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904, ___headers_0)); }
	inline HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59 * get_headers_0() const { return ___headers_0; }
	inline HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59 ** get_address_of_headers_0() { return &___headers_0; }
	inline void set_headers_0(HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59 * value)
	{
		___headers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___headers_0), (void*)value);
	}

	inline static int32_t get_offset_of_reasonPhrase_1() { return static_cast<int32_t>(offsetof(HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904, ___reasonPhrase_1)); }
	inline String_t* get_reasonPhrase_1() const { return ___reasonPhrase_1; }
	inline String_t** get_address_of_reasonPhrase_1() { return &___reasonPhrase_1; }
	inline void set_reasonPhrase_1(String_t* value)
	{
		___reasonPhrase_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reasonPhrase_1), (void*)value);
	}

	inline static int32_t get_offset_of_statusCode_2() { return static_cast<int32_t>(offsetof(HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904, ___statusCode_2)); }
	inline int32_t get_statusCode_2() const { return ___statusCode_2; }
	inline int32_t* get_address_of_statusCode_2() { return &___statusCode_2; }
	inline void set_statusCode_2(int32_t value)
	{
		___statusCode_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904, ___version_3)); }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * get_version_3() const { return ___version_3; }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD ** get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * value)
	{
		___version_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_3), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}

	inline static int32_t get_offset_of_U3CContentU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904, ___U3CContentU3Ek__BackingField_5)); }
	inline HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * get_U3CContentU3Ek__BackingField_5() const { return ___U3CContentU3Ek__BackingField_5; }
	inline HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D ** get_address_of_U3CContentU3Ek__BackingField_5() { return &___U3CContentU3Ek__BackingField_5; }
	inline void set_U3CContentU3Ek__BackingField_5(HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * value)
	{
		___U3CContentU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CContentU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CRequestMessageU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904, ___U3CRequestMessageU3Ek__BackingField_6)); }
	inline HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * get_U3CRequestMessageU3Ek__BackingField_6() const { return ___U3CRequestMessageU3Ek__BackingField_6; }
	inline HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 ** get_address_of_U3CRequestMessageU3Ek__BackingField_6() { return &___U3CRequestMessageU3Ek__BackingField_6; }
	inline void set_U3CRequestMessageU3Ek__BackingField_6(HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * value)
	{
		___U3CRequestMessageU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRequestMessageU3Ek__BackingField_6), (void*)value);
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Threading.Tasks.Task`1<System.IO.Stream>
struct  Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01, ___m_result_40)); }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * get_m_result_40() const { return ___m_result_40; }
	inline Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tE7B6DC2F22643759D47ED49CDDBD8C35D9383D8F * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t97AE46232676B6C4CB84D0101A45061F2288FCE5 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tE7B6DC2F22643759D47ED49CDDBD8C35D9383D8F * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tE7B6DC2F22643759D47ED49CDDBD8C35D9383D8F ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tE7B6DC2F22643759D47ED49CDDBD8C35D9383D8F * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t97AE46232676B6C4CB84D0101A45061F2288FCE5 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t97AE46232676B6C4CB84D0101A45061F2288FCE5 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t97AE46232676B6C4CB84D0101A45061F2288FCE5 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Uri
struct  Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri_Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri_UriInfo System.Uri::m_Info
	UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;

public:
	inline static int32_t get_offset_of_m_String_16() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_String_16)); }
	inline String_t* get_m_String_16() const { return ___m_String_16; }
	inline String_t** get_address_of_m_String_16() { return &___m_String_16; }
	inline void set_m_String_16(String_t* value)
	{
		___m_String_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_17() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_originalUnicodeString_17)); }
	inline String_t* get_m_originalUnicodeString_17() const { return ___m_originalUnicodeString_17; }
	inline String_t** get_address_of_m_originalUnicodeString_17() { return &___m_originalUnicodeString_17; }
	inline void set_m_originalUnicodeString_17(String_t* value)
	{
		___m_originalUnicodeString_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_18() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Syntax_18)); }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * get_m_Syntax_18() const { return ___m_Syntax_18; }
	inline UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC ** get_address_of_m_Syntax_18() { return &___m_Syntax_18; }
	inline void set_m_Syntax_18(UriParser_t07C77D673CCE8D2DA253B8A7ACCB010147F1A4AC * value)
	{
		___m_Syntax_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_19() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_DnsSafeHost_19)); }
	inline String_t* get_m_DnsSafeHost_19() const { return ___m_DnsSafeHost_19; }
	inline String_t** get_address_of_m_DnsSafeHost_19() { return &___m_DnsSafeHost_19; }
	inline void set_m_DnsSafeHost_19(String_t* value)
	{
		___m_DnsSafeHost_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_20() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Flags_20)); }
	inline uint64_t get_m_Flags_20() const { return ___m_Flags_20; }
	inline uint64_t* get_address_of_m_Flags_20() { return &___m_Flags_20; }
	inline void set_m_Flags_20(uint64_t value)
	{
		___m_Flags_20 = value;
	}

	inline static int32_t get_offset_of_m_Info_21() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_Info_21)); }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * get_m_Info_21() const { return ___m_Info_21; }
	inline UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E ** get_address_of_m_Info_21() { return &___m_Info_21; }
	inline void set_m_Info_21(UriInfo_t9FCC6BD4EC1EA14D75209E6A35417057BF6EDC5E * value)
	{
		___m_Info_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_22() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E, ___m_iriParsing_22)); }
	inline bool get_m_iriParsing_22() const { return ___m_iriParsing_22; }
	inline bool* get_address_of_m_iriParsing_22() { return &___m_iriParsing_22; }
	inline void set_m_iriParsing_22(bool value)
	{
		___m_iriParsing_22 = value;
	}
};

struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ____WSchars_35;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_23() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitialized_23)); }
	inline bool get_s_ConfigInitialized_23() const { return ___s_ConfigInitialized_23; }
	inline bool* get_address_of_s_ConfigInitialized_23() { return &___s_ConfigInitialized_23; }
	inline void set_s_ConfigInitialized_23(bool value)
	{
		___s_ConfigInitialized_23 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_24() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_ConfigInitializing_24)); }
	inline bool get_s_ConfigInitializing_24() const { return ___s_ConfigInitializing_24; }
	inline bool* get_address_of_s_ConfigInitializing_24() { return &___s_ConfigInitializing_24; }
	inline void set_s_ConfigInitializing_24(bool value)
	{
		___s_ConfigInitializing_24 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_25() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IdnScope_25)); }
	inline int32_t get_s_IdnScope_25() const { return ___s_IdnScope_25; }
	inline int32_t* get_address_of_s_IdnScope_25() { return &___s_IdnScope_25; }
	inline void set_s_IdnScope_25(int32_t value)
	{
		___s_IdnScope_25 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_26() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_IriParsing_26)); }
	inline bool get_s_IriParsing_26() const { return ___s_IriParsing_26; }
	inline bool* get_address_of_s_IriParsing_26() { return &___s_IriParsing_26; }
	inline void set_s_IriParsing_26(bool value)
	{
		___s_IriParsing_26 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_27() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___useDotNetRelativeOrAbsolute_27)); }
	inline bool get_useDotNetRelativeOrAbsolute_27() const { return ___useDotNetRelativeOrAbsolute_27; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_27() { return &___useDotNetRelativeOrAbsolute_27; }
	inline void set_useDotNetRelativeOrAbsolute_27(bool value)
	{
		___useDotNetRelativeOrAbsolute_27 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_29() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___IsWindowsFileSystem_29)); }
	inline bool get_IsWindowsFileSystem_29() const { return ___IsWindowsFileSystem_29; }
	inline bool* get_address_of_IsWindowsFileSystem_29() { return &___IsWindowsFileSystem_29; }
	inline void set_IsWindowsFileSystem_29(bool value)
	{
		___IsWindowsFileSystem_29 = value;
	}

	inline static int32_t get_offset_of_s_initLock_30() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___s_initLock_30)); }
	inline RuntimeObject * get_s_initLock_30() const { return ___s_initLock_30; }
	inline RuntimeObject ** get_address_of_s_initLock_30() { return &___s_initLock_30; }
	inline void set_s_initLock_30(RuntimeObject * value)
	{
		___s_initLock_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_30), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_34() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ___HexLowerChars_34)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_HexLowerChars_34() const { return ___HexLowerChars_34; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_HexLowerChars_34() { return &___HexLowerChars_34; }
	inline void set_HexLowerChars_34(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___HexLowerChars_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_34), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_35() { return static_cast<int32_t>(offsetof(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields, ____WSchars_35)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get__WSchars_35() const { return ____WSchars_35; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of__WSchars_35() { return &____WSchars_35; }
	inline void set__WSchars_35(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		____WSchars_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_35), (void*)value);
	}
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Net.Http.Headers.HttpContentHeaders
struct  HttpContentHeaders_t98D8657573ADACD807B6C941F46E6D69EDFD13A0  : public HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1
{
public:
	// System.Net.Http.HttpContent System.Net.Http.Headers.HttpContentHeaders::content
	HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * ___content_5;

public:
	inline static int32_t get_offset_of_content_5() { return static_cast<int32_t>(offsetof(HttpContentHeaders_t98D8657573ADACD807B6C941F46E6D69EDFD13A0, ___content_5)); }
	inline HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * get_content_5() const { return ___content_5; }
	inline HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D ** get_address_of_content_5() { return &___content_5; }
	inline void set_content_5(HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * value)
	{
		___content_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___content_5), (void*)value);
	}
};


// System.Net.Http.Headers.HttpRequestHeaders
struct  HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4  : public HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1
{
public:
	// System.Nullable`1<System.Boolean> System.Net.Http.Headers.HttpRequestHeaders::expectContinue
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___expectContinue_5;

public:
	inline static int32_t get_offset_of_expectContinue_5() { return static_cast<int32_t>(offsetof(HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4, ___expectContinue_5)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_expectContinue_5() const { return ___expectContinue_5; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_expectContinue_5() { return &___expectContinue_5; }
	inline void set_expectContinue_5(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___expectContinue_5 = value;
	}
};


// System.Net.Http.Headers.HttpResponseHeaders
struct  HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59  : public HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::FromResult<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * Task_FromResult_TisRuntimeObject_m7BCD981B96E3C1E1E41263660AC2B674E47A59E5_gshared (RuntimeObject * ___result0, const RuntimeMethod* method);

// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m5FEC89FBFACEEDCEE29CCFD44A85D72FC28EB0D1 (Exception_t * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m62590BC1925B7B354EBFD852E162CD170FEB861D (Exception_t * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String,System.UriKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_mA02DB222F4F35380DE2700D84F58EB42497FDDE4 (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * __this, String_t* ___uriString0, int32_t ___uriKind1, const RuntimeMethod* method);
// System.Void System.Net.Http.HttpRequestMessage::.ctor(System.Net.Http.HttpMethod,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpRequestMessage__ctor_mFA150285E82ABE7DFC2D30EDCBC6504B1A7B78AE (HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * __this, HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * ___method0, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___requestUri1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Net.Http.HttpRequestMessage::set_Method(System.Net.Http.HttpMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpRequestMessage_set_Method_m623C9F1060CD64F10778C44C4345C361DC48E2C8 (HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * __this, HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * ___value0, const RuntimeMethod* method);
// System.Void System.Net.Http.HttpRequestMessage::set_RequestUri(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpRequestMessage_set_RequestUri_mBCF7516F07476E68718DB4EADB2BB8181B3FCDB8 (HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * __this, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___value0, const RuntimeMethod* method);
// System.Void System.Net.Http.Headers.HttpRequestHeaders::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpRequestHeaders__ctor_m4D8DFB68923995C8B5454CD614BFE16FEAEBCA29 (HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4 * __this, const RuntimeMethod* method);
// System.Boolean System.Net.Http.HttpMethod::op_Equality(System.Net.Http.HttpMethod,System.Net.Http.HttpMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpMethod_op_Equality_m93815117150A66E02FC69F700DFC3D4C86C40FE2 (HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * ___left0, HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * ___right1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Boolean System.Uri::op_Inequality(System.Uri,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_op_Inequality_m07015206F59460E87CDE2A8D303D5712E30A7F6B (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___uri10, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___uri21, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsAbsoluteUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_get_IsAbsoluteUri_m8C189085F1C675DBC3148AA70C38074EC075D722 (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * __this, const RuntimeMethod* method);
// System.Boolean System.Net.Http.HttpRequestMessage::IsAllowedAbsoluteUri(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpRequestMessage_IsAllowedAbsoluteUri_m0BF74D34E9C7F91810AE428E4B2E4A32940BED9E (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___uri0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String System.Uri::get_Scheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_m14A8F0018D8AACADBEF39600A59944F33EE39187 (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.String System.Uri::get_OriginalString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_OriginalString_m56099E46276F0A52524347F1F46A2F88E948504F (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * __this, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_m844A95C9A205A0F951B0C45634E0C222E73D0B49 (String_t* __this, String_t* ___value0, int32_t ___comparisonType1, const RuntimeMethod* method);
// System.Net.Http.HttpContent System.Net.Http.HttpRequestMessage::get_Content()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * HttpRequestMessage_get_Content_m65773173F13EFC2D1BB6C61CBC0F860837FFDDF1_inline (HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * __this, const RuntimeMethod* method);
// System.Void System.Net.Http.HttpContent::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpContent_Dispose_mC9A63C33CD67224E6C6C9DA256396200DC04554C (HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65 (StringBuilder_t * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Uri System.Net.Http.HttpRequestMessage::get_RequestUri()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * HttpRequestMessage_get_RequestUri_m4FFE364957CD017B288A51EDA5897391410AEAEA_inline (HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * __this, const RuntimeMethod* method);
// System.Version System.Net.Http.HttpRequestMessage::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * HttpRequestMessage_get_Version_m317FE62850ABCB754B48B285E9EBA4C3DA2CB7BC (HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * __this, const RuntimeMethod* method);
// System.Net.Http.Headers.HttpRequestHeaders System.Net.Http.HttpRequestMessage::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4 * HttpRequestMessage_get_Headers_m57B2BEFF2C906EDCE282E3AC579CBA19B76ABF85 (HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * __this, const RuntimeMethod* method);
// System.Net.Http.Headers.HttpContentHeaders System.Net.Http.HttpContent::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpContentHeaders_t98D8657573ADACD807B6C941F46E6D69EDFD13A0 * HttpContent_get_Headers_mCCD2B7D5CA1C1AEE1A78DA2E9036A66A5BCCB942 (HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * __this, const RuntimeMethod* method);
// System.Void System.Net.Http.HttpResponseMessage::set_StatusCode(System.Net.HttpStatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpResponseMessage_set_StatusCode_mC57863987BDA7314961D16A2D33F07702EBE7319 (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Net.Http.Headers.HttpResponseHeaders::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpResponseHeaders__ctor_m0521F64A26F5945FE571516FBCA07C3937DC3608 (HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59 * __this, const RuntimeMethod* method);
// System.String System.Net.HttpStatusDescription::Get(System.Net.HttpStatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HttpStatusDescription_Get_m9D4996C94C139CCC4FF4E9ED77DA6D90DD601FAE (int32_t ___code0, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m215F35137EDD190A037E2E9BDA3BF5DC056FD7C3 (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, const RuntimeMethod* method);
// System.Net.Http.HttpContent System.Net.Http.HttpResponseMessage::get_Content()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * HttpResponseMessage_get_Content_m325C3E47B0D7E1DD70CA36FA04B894A152AD4420_inline (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, const RuntimeMethod* method);
// System.Net.HttpStatusCode System.Net.Http.HttpResponseMessage::get_StatusCode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t HttpResponseMessage_get_StatusCode_m27E0380E88C42804CF8B370FB554B3DC177311D1_inline (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m85874CFF9E4B152DB2A91936C6F2CA3E9B1EFF84 (StringBuilder_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.String System.Net.Http.HttpResponseMessage::get_ReasonPhrase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HttpResponseMessage_get_ReasonPhrase_mE994C26E951A67F8132E77F908D57A7FA8F622AE (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, const RuntimeMethod* method);
// System.Version System.Net.Http.HttpResponseMessage::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * HttpResponseMessage_get_Version_m36B05F89746C6A4593B927E7C1056DECA678885C (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, const RuntimeMethod* method);
// System.Net.Http.Headers.HttpResponseHeaders System.Net.Http.HttpResponseMessage::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59 * HttpResponseMessage_get_Headers_mBD52D7A018509B2A6A55C0925A40955A33D20B98 (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, const RuntimeMethod* method);
// System.Void System.Net.Http.StreamContent::.ctor(System.IO.Stream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamContent__ctor_mB09F0FFE8AE4EDE9B597AE5ED15E7E2579169A24 (StreamContent_t0E4C08F0720024BFEBB667CCC40DA9E947EFF3FF * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___content0, int32_t ___bufferSize1, const RuntimeMethod* method);
// System.Void System.Net.Http.HttpContent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpContent__ctor_mA464758F76D3856E8EDA5F3BD4DE1A64D2B9FE7D (HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6 (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Net.Http.StreamContent::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamContent__ctor_m894DA04A9FBF8160B1D2AA3E150A316999C19A33 (StreamContent_t0E4C08F0720024BFEBB667CCC40DA9E947EFF3FF * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___content0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task::FromResult<System.IO.Stream>(!!0)
inline Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * Task_FromResult_TisStream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_m304EF757D9D1D57BB2E9D0B5D503A4C281684C56 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___result0, const RuntimeMethod* method)
{
	return ((  Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * (*) (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 *, const RuntimeMethod*))Task_FromResult_TisRuntimeObject_m7BCD981B96E3C1E1E41263660AC2B674E47A59E5_gshared)(___result0, method);
}
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m186A8E680F2528DEDFF8F0069CC33BD813FFB1C7 (Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * __this, const RuntimeMethod* method);
// System.Void System.Net.Http.HttpContent::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpContent_Dispose_m6A7C53DA4B8B1B8285435C40486663F56BC463DE (HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * __this, bool ___disposing0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Http.HttpRequestException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpRequestException__ctor_m372759B26E587C9DD00ECE3A44D91508771699CF (HttpRequestException_tD4D14C20B90F362C83781589E7508A05E7060349 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpRequestException__ctor_m372759B26E587C9DD00ECE3A44D91508771699CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m5FEC89FBFACEEDCEE29CCFD44A85D72FC28EB0D1(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Net.Http.HttpRequestException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpRequestException__ctor_m6AAFFF4CC44447AF132DDD7666D3C09A7E665692 (HttpRequestException_tD4D14C20B90F362C83781589E7508A05E7060349 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpRequestException__ctor_m6AAFFF4CC44447AF132DDD7666D3C09A7E665692_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m89BADFF36C3B170013878726E07729D51AA9FBE0(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Net.Http.HttpRequestException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpRequestException__ctor_mB816F1ECA750F254BE0087E8E8B3FBE1A4C470BC (HttpRequestException_tD4D14C20B90F362C83781589E7508A05E7060349 * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpRequestException__ctor_mB816F1ECA750F254BE0087E8E8B3FBE1A4C470BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___inner1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m62590BC1925B7B354EBFD852E162CD170FEB861D(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void System.Net.Http.HttpRequestMessage::.ctor(System.Net.Http.HttpMethod,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpRequestMessage__ctor_m76A9F3C082E2D1C9B679E56DB32F2AA8ECE377C0 (HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * __this, HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * ___method0, String_t* ___requestUri1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpRequestMessage__ctor_m76A9F3C082E2D1C9B679E56DB32F2AA8ECE377C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * G_B2_0 = NULL;
	HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * G_B2_1 = NULL;
	HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * G_B1_0 = NULL;
	HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * G_B1_1 = NULL;
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * G_B3_0 = NULL;
	HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * G_B3_1 = NULL;
	HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * G_B3_2 = NULL;
	{
		HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * L_0 = ___method0;
		String_t* L_1 = ___requestUri1;
		bool L_2 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_1, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		G_B1_1 = __this;
		if (L_2)
		{
			G_B2_0 = L_0;
			G_B2_1 = __this;
			goto IL_0013;
		}
	}
	{
		String_t* L_3 = ___requestUri1;
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_4 = (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E *)il2cpp_codegen_object_new(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var);
		Uri__ctor_mA02DB222F4F35380DE2700D84F58EB42497FDDE4(L_4, L_3, 0, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = ((Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E *)(NULL));
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0014:
	{
		NullCheck(G_B3_2);
		HttpRequestMessage__ctor_mFA150285E82ABE7DFC2D30EDCBC6504B1A7B78AE(G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Net.Http.HttpRequestMessage::.ctor(System.Net.Http.HttpMethod,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpRequestMessage__ctor_mFA150285E82ABE7DFC2D30EDCBC6504B1A7B78AE (HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * __this, HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * ___method0, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___requestUri1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * L_0 = ___method0;
		HttpRequestMessage_set_Method_m623C9F1060CD64F10778C44C4345C361DC48E2C8(__this, L_0, /*hidden argument*/NULL);
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_1 = ___requestUri1;
		HttpRequestMessage_set_RequestUri_mBCF7516F07476E68718DB4EADB2BB8181B3FCDB8(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Net.Http.HttpContent System.Net.Http.HttpRequestMessage::get_Content()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * HttpRequestMessage_get_Content_m65773173F13EFC2D1BB6C61CBC0F860837FFDDF1 (HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * __this, const RuntimeMethod* method)
{
	{
		HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * L_0 = __this->get_U3CContentU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void System.Net.Http.HttpRequestMessage::set_Content(System.Net.Http.HttpContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpRequestMessage_set_Content_mF926F55372E9ECD0E0987CE33C47648EDB23A78D (HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * __this, HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * ___value0, const RuntimeMethod* method)
{
	{
		HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * L_0 = ___value0;
		__this->set_U3CContentU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Net.Http.Headers.HttpRequestHeaders System.Net.Http.HttpRequestMessage::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4 * HttpRequestMessage_get_Headers_m57B2BEFF2C906EDCE282E3AC579CBA19B76ABF85 (HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpRequestMessage_get_Headers_m57B2BEFF2C906EDCE282E3AC579CBA19B76ABF85_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4 * V_0 = NULL;
	HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4 * G_B2_0 = NULL;
	HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4 * G_B1_0 = NULL;
	{
		HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4 * L_0 = __this->get_headers_0();
		HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4 * L_2 = (HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4 *)il2cpp_codegen_object_new(HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4_il2cpp_TypeInfo_var);
		HttpRequestHeaders__ctor_m4D8DFB68923995C8B5454CD614BFE16FEAEBCA29(L_2, /*hidden argument*/NULL);
		HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4 * L_3 = L_2;
		V_0 = L_3;
		__this->set_headers_0(L_3);
		HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4 * L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
// System.Net.Http.HttpMethod System.Net.Http.HttpRequestMessage::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * HttpRequestMessage_get_Method_m2C1DB5A4388BF28A34D52C3FCF8A1FAA3D559669 (HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * __this, const RuntimeMethod* method)
{
	{
		HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * L_0 = __this->get_method_1();
		return L_0;
	}
}
// System.Void System.Net.Http.HttpRequestMessage::set_Method(System.Net.Http.HttpMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpRequestMessage_set_Method_m623C9F1060CD64F10778C44C4345C361DC48E2C8 (HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * __this, HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpRequestMessage_set_Method_m623C9F1060CD64F10778C44C4345C361DC48E2C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220_il2cpp_TypeInfo_var);
		bool L_1 = HttpMethod_op_Equality_m93815117150A66E02FC69F700DFC3D4C86C40FE2(L_0, (HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_2 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_2, _stringLiteralBFBAF8B2D1CDF92BF83857FE1748C0F68DE03D47, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, HttpRequestMessage_set_Method_m623C9F1060CD64F10778C44C4345C361DC48E2C8_RuntimeMethod_var);
	}

IL_0014:
	{
		HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * L_3 = ___value0;
		__this->set_method_1(L_3);
		return;
	}
}
// System.Uri System.Net.Http.HttpRequestMessage::get_RequestUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * HttpRequestMessage_get_RequestUri_m4FFE364957CD017B288A51EDA5897391410AEAEA (HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * __this, const RuntimeMethod* method)
{
	{
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_0 = __this->get_uri_3();
		return L_0;
	}
}
// System.Void System.Net.Http.HttpRequestMessage::set_RequestUri(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpRequestMessage_set_RequestUri_mBCF7516F07476E68718DB4EADB2BB8181B3FCDB8 (HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * __this, Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpRequestMessage_set_RequestUri_mBCF7516F07476E68718DB4EADB2BB8181B3FCDB8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var);
		bool L_1 = Uri_op_Inequality_m07015206F59460E87CDE2A8D303D5712E30A7F6B(L_0, (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_2 = ___value0;
		NullCheck(L_2);
		bool L_3 = Uri_get_IsAbsoluteUri_m8C189085F1C675DBC3148AA70C38074EC075D722(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_4 = ___value0;
		bool L_5 = HttpRequestMessage_IsAllowedAbsoluteUri_m0BF74D34E9C7F91810AE428E4B2E4A32940BED9E(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0024;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_6 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_6, _stringLiteral33CD5D780831713577FF0BAC37D3C594AB552633, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, HttpRequestMessage_set_RequestUri_mBCF7516F07476E68718DB4EADB2BB8181B3FCDB8_RuntimeMethod_var);
	}

IL_0024:
	{
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_7 = ___value0;
		__this->set_uri_3(L_7);
		return;
	}
}
// System.Boolean System.Net.Http.HttpRequestMessage::IsAllowedAbsoluteUri(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpRequestMessage_IsAllowedAbsoluteUri_m0BF74D34E9C7F91810AE428E4B2E4A32940BED9E (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___uri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpRequestMessage_IsAllowedAbsoluteUri_m0BF74D34E9C7F91810AE428E4B2E4A32940BED9E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_0 = ___uri0;
		NullCheck(L_0);
		String_t* L_1 = Uri_get_Scheme_m14A8F0018D8AACADBEF39600A59944F33EE39187(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var);
		String_t* L_2 = ((Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var))->get_UriSchemeHttp_3();
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_1, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_4 = ___uri0;
		NullCheck(L_4);
		String_t* L_5 = Uri_get_Scheme_m14A8F0018D8AACADBEF39600A59944F33EE39187(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var);
		String_t* L_6 = ((Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var))->get_UriSchemeHttps_4();
		bool L_7 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0026;
		}
	}

IL_0024:
	{
		return (bool)1;
	}

IL_0026:
	{
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_8 = ___uri0;
		NullCheck(L_8);
		String_t* L_9 = Uri_get_Scheme_m14A8F0018D8AACADBEF39600A59944F33EE39187(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var);
		String_t* L_10 = ((Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_StaticFields*)il2cpp_codegen_static_fields_for(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var))->get_UriSchemeFile_0();
		bool L_11 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_12 = ___uri0;
		NullCheck(L_12);
		String_t* L_13 = Uri_get_OriginalString_m56099E46276F0A52524347F1F46A2F88E948504F(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_14 = String_StartsWith_m844A95C9A205A0F951B0C45634E0C222E73D0B49(L_13, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8, 4, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_004d;
		}
	}
	{
		return (bool)1;
	}

IL_004d:
	{
		return (bool)0;
	}
}
// System.Version System.Net.Http.HttpRequestMessage::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * HttpRequestMessage_get_Version_m317FE62850ABCB754B48B285E9EBA4C3DA2CB7BC (HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpRequestMessage_get_Version_m317FE62850ABCB754B48B285E9EBA4C3DA2CB7BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * G_B2_0 = NULL;
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * G_B1_0 = NULL;
	{
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_0 = __this->get_version_2();
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HttpVersion_t6B721B3C551822DC30BA4586D4B46D1C7C2483D1_il2cpp_TypeInfo_var);
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_2 = ((HttpVersion_t6B721B3C551822DC30BA4586D4B46D1C7C2483D1_StaticFields*)il2cpp_codegen_static_fields_for(HttpVersion_t6B721B3C551822DC30BA4586D4B46D1C7C2483D1_il2cpp_TypeInfo_var))->get_Version11_1();
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
// System.Void System.Net.Http.HttpRequestMessage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpRequestMessage_Dispose_mC4C2FF2C971F6852182AF42970CF456D24B2E153 (HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void System.Net.Http.HttpRequestMessage::Dispose(System.Boolean) */, __this, (bool)1);
		return;
	}
}
// System.Void System.Net.Http.HttpRequestMessage::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpRequestMessage_Dispose_m8B0FD446D73AB3804AC2A5D9081CB78E805369CF (HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		bool L_1 = __this->get_disposed_5();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		__this->set_disposed_5((bool)1);
		HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * L_2 = HttpRequestMessage_get_Content_m65773173F13EFC2D1BB6C61CBC0F860837FFDDF1_inline(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * L_3 = HttpRequestMessage_get_Content_m65773173F13EFC2D1BB6C61CBC0F860837FFDDF1_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		HttpContent_Dispose_mC9A63C33CD67224E6C6C9DA256396200DC04554C(L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Boolean System.Net.Http.HttpRequestMessage::SetIsUsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpRequestMessage_SetIsUsed_mB82AFE7934BB3175181078E9D807AA67E77DE2B3 (HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_is_used_4();
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)1;
	}

IL_000a:
	{
		__this->set_is_used_4((bool)1);
		return (bool)0;
	}
}
// System.String System.Net.Http.HttpRequestMessage::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HttpRequestMessage_ToString_m6713161F1B7EB8D063AB9A570C4BCDFA793C2DCE (HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpRequestMessage_ToString_m6713161F1B7EB8D063AB9A570C4BCDFA793C2DCE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	StringBuilder_t * G_B2_0 = NULL;
	StringBuilder_t * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	StringBuilder_t * G_B3_1 = NULL;
	StringBuilder_t * G_B5_0 = NULL;
	StringBuilder_t * G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	StringBuilder_t * G_B6_1 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t * L_2 = StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_1, _stringLiteralB543C2BDEF0B8B22014F983D4B7D3F850FA982F7, /*hidden argument*/NULL);
		HttpMethod_tC762DCC43B5B2C08E8744B8C1C866D8E55CF6220 * L_3 = __this->get_method_1();
		NullCheck(L_2);
		StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65(L_2, L_3, /*hidden argument*/NULL);
		StringBuilder_t * L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_t * L_5 = StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_4, _stringLiteralD811CA149F6C3D32E2C1B6AEE4419B6EEA02BA5D, /*hidden argument*/NULL);
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_6 = HttpRequestMessage_get_RequestUri_m4FFE364957CD017B288A51EDA5897391410AEAEA_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var);
		bool L_7 = Uri_op_Inequality_m07015206F59460E87CDE2A8D303D5712E30A7F6B(L_6, (Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E *)NULL, /*hidden argument*/NULL);
		G_B1_0 = L_5;
		if (L_7)
		{
			G_B2_0 = L_5;
			goto IL_003d;
		}
	}
	{
		G_B3_0 = _stringLiteral798275C17944BDA73AC13CB181018C138194815A;
		G_B3_1 = G_B1_0;
		goto IL_0048;
	}

IL_003d:
	{
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_8 = HttpRequestMessage_get_RequestUri_m4FFE364957CD017B288A51EDA5897391410AEAEA_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		G_B3_0 = L_9;
		G_B3_1 = G_B2_0;
	}

IL_0048:
	{
		NullCheck(G_B3_1);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		StringBuilder_t * L_10 = V_0;
		NullCheck(L_10);
		StringBuilder_t * L_11 = StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_10, _stringLiteral7FC7C6AE010099E065FEB9C201E28E242C7620D3, /*hidden argument*/NULL);
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_12 = HttpRequestMessage_get_Version_m317FE62850ABCB754B48B285E9EBA4C3DA2CB7BC(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65(L_11, L_12, /*hidden argument*/NULL);
		StringBuilder_t * L_13 = V_0;
		NullCheck(L_13);
		StringBuilder_t * L_14 = StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_13, _stringLiteral72B9F12D7CD133FEA422C851DCA5A98617F147E0, /*hidden argument*/NULL);
		HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * L_15 = HttpRequestMessage_get_Content_m65773173F13EFC2D1BB6C61CBC0F860837FFDDF1_inline(__this, /*hidden argument*/NULL);
		G_B4_0 = L_14;
		if (L_15)
		{
			G_B5_0 = L_14;
			goto IL_007f;
		}
	}
	{
		G_B6_0 = _stringLiteral798275C17944BDA73AC13CB181018C138194815A;
		G_B6_1 = G_B4_0;
		goto IL_008a;
	}

IL_007f:
	{
		HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * L_16 = HttpRequestMessage_get_Content_m65773173F13EFC2D1BB6C61CBC0F860837FFDDF1_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		G_B6_0 = L_17;
		G_B6_1 = G_B5_0;
	}

IL_008a:
	{
		NullCheck(G_B6_1);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(G_B6_1, G_B6_0, /*hidden argument*/NULL);
		StringBuilder_t * L_18 = V_0;
		NullCheck(L_18);
		StringBuilder_t * L_19 = StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_18, _stringLiteralC36E8AE79F7FE82CB7DB7F945372BE9C23027EE9, /*hidden argument*/NULL);
		HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4 * L_20 = HttpRequestMessage_get_Headers_m57B2BEFF2C906EDCE282E3AC579CBA19B76ABF85(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65(L_19, L_20, /*hidden argument*/NULL);
		HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * L_21 = HttpRequestMessage_get_Content_m65773173F13EFC2D1BB6C61CBC0F860837FFDDF1_inline(__this, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00c1;
		}
	}
	{
		StringBuilder_t * L_22 = V_0;
		HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * L_23 = HttpRequestMessage_get_Content_m65773173F13EFC2D1BB6C61CBC0F860837FFDDF1_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		HttpContentHeaders_t98D8657573ADACD807B6C941F46E6D69EDFD13A0 * L_24 = HttpContent_get_Headers_mCCD2B7D5CA1C1AEE1A78DA2E9036A66A5BCCB942(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65(L_22, L_24, /*hidden argument*/NULL);
	}

IL_00c1:
	{
		StringBuilder_t * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_25, _stringLiteralC2B7DF6201FDD3362399091F0A29550DF3505B6A, /*hidden argument*/NULL);
		StringBuilder_t * L_26 = V_0;
		NullCheck(L_26);
		String_t* L_27 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_26);
		return L_27;
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
// System.Void System.Net.Http.HttpResponseMessage::.ctor(System.Net.HttpStatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpResponseMessage__ctor_m91418B7A8B3156F9EFC1B6894583A3CBA91443CE (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, int32_t ___statusCode0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___statusCode0;
		HttpResponseMessage_set_StatusCode_mC57863987BDA7314961D16A2D33F07702EBE7319(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Net.Http.HttpContent System.Net.Http.HttpResponseMessage::get_Content()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * HttpResponseMessage_get_Content_m325C3E47B0D7E1DD70CA36FA04B894A152AD4420 (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, const RuntimeMethod* method)
{
	{
		HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * L_0 = __this->get_U3CContentU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void System.Net.Http.HttpResponseMessage::set_Content(System.Net.Http.HttpContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpResponseMessage_set_Content_mF8C8CED21BC17D0EEF670BD6B8B220FC6806BE01 (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * ___value0, const RuntimeMethod* method)
{
	{
		HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * L_0 = ___value0;
		__this->set_U3CContentU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Net.Http.Headers.HttpResponseHeaders System.Net.Http.HttpResponseMessage::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59 * HttpResponseMessage_get_Headers_mBD52D7A018509B2A6A55C0925A40955A33D20B98 (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpResponseMessage_get_Headers_mBD52D7A018509B2A6A55C0925A40955A33D20B98_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59 * V_0 = NULL;
	HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59 * G_B2_0 = NULL;
	HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59 * G_B1_0 = NULL;
	{
		HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59 * L_0 = __this->get_headers_0();
		HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59 * L_2 = (HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59 *)il2cpp_codegen_object_new(HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59_il2cpp_TypeInfo_var);
		HttpResponseHeaders__ctor_m0521F64A26F5945FE571516FBCA07C3937DC3608(L_2, /*hidden argument*/NULL);
		HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59 * L_3 = L_2;
		V_0 = L_3;
		__this->set_headers_0(L_3);
		HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59 * L_4 = V_0;
		G_B2_0 = L_4;
	}

IL_0018:
	{
		return G_B2_0;
	}
}
// System.Boolean System.Net.Http.HttpResponseMessage::get_IsSuccessStatusCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpResponseMessage_get_IsSuccessStatusCode_mDC204243BB165E2DB55AE3AAAEE824E3A95E331E (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_statusCode_2();
		if ((((int32_t)L_0) < ((int32_t)((int32_t)200))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = __this->get_statusCode_2();
		return (bool)((((int32_t)L_1) < ((int32_t)((int32_t)300)))? 1 : 0);
	}

IL_001b:
	{
		return (bool)0;
	}
}
// System.String System.Net.Http.HttpResponseMessage::get_ReasonPhrase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HttpResponseMessage_get_ReasonPhrase_mE994C26E951A67F8132E77F908D57A7FA8F622AE (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, const RuntimeMethod* method)
{
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0 = __this->get_reasonPhrase_1();
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = __this->get_statusCode_2();
		String_t* L_3 = HttpStatusDescription_Get_m9D4996C94C139CCC4FF4E9ED77DA6D90DD601FAE(L_2, /*hidden argument*/NULL);
		G_B2_0 = L_3;
	}

IL_0015:
	{
		return G_B2_0;
	}
}
// System.Void System.Net.Http.HttpResponseMessage::set_ReasonPhrase(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpResponseMessage_set_ReasonPhrase_m7B5A363ECB33DCCDEF4C6D7D3EA239B01062B1F3 (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_reasonPhrase_1(L_0);
		return;
	}
}
// System.Void System.Net.Http.HttpResponseMessage::set_RequestMessage(System.Net.Http.HttpRequestMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpResponseMessage_set_RequestMessage_m6C462C5E4D05D57CD5BAF1848882D89048A2C363 (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * ___value0, const RuntimeMethod* method)
{
	{
		HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * L_0 = ___value0;
		__this->set_U3CRequestMessageU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Net.HttpStatusCode System.Net.Http.HttpResponseMessage::get_StatusCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HttpResponseMessage_get_StatusCode_m27E0380E88C42804CF8B370FB554B3DC177311D1 (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_statusCode_2();
		return L_0;
	}
}
// System.Void System.Net.Http.HttpResponseMessage::set_StatusCode(System.Net.HttpStatusCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpResponseMessage_set_StatusCode_mC57863987BDA7314961D16A2D33F07702EBE7319 (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpResponseMessage_set_StatusCode_mC57863987BDA7314961D16A2D33F07702EBE7319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_1 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m215F35137EDD190A037E2E9BDA3BF5DC056FD7C3(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, HttpResponseMessage_set_StatusCode_mC57863987BDA7314961D16A2D33F07702EBE7319_RuntimeMethod_var);
	}

IL_000a:
	{
		int32_t L_2 = ___value0;
		__this->set_statusCode_2(L_2);
		return;
	}
}
// System.Version System.Net.Http.HttpResponseMessage::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * HttpResponseMessage_get_Version_m36B05F89746C6A4593B927E7C1056DECA678885C (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpResponseMessage_get_Version_m36B05F89746C6A4593B927E7C1056DECA678885C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * G_B2_0 = NULL;
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * G_B1_0 = NULL;
	{
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_0 = __this->get_version_3();
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(HttpVersion_t6B721B3C551822DC30BA4586D4B46D1C7C2483D1_il2cpp_TypeInfo_var);
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_2 = ((HttpVersion_t6B721B3C551822DC30BA4586D4B46D1C7C2483D1_StaticFields*)il2cpp_codegen_static_fields_for(HttpVersion_t6B721B3C551822DC30BA4586D4B46D1C7C2483D1_il2cpp_TypeInfo_var))->get_Version11_1();
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
// System.Void System.Net.Http.HttpResponseMessage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpResponseMessage_Dispose_m61CB38AEE179CB99AC3E5F74D7C09D9D888FAA7F (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, const RuntimeMethod* method)
{
	{
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void System.Net.Http.HttpResponseMessage::Dispose(System.Boolean) */, __this, (bool)1);
		return;
	}
}
// System.Void System.Net.Http.HttpResponseMessage::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpResponseMessage_Dispose_m245E1C84196A55878ED9A82AD73DFD7D9E65DB35 (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		bool L_1 = __this->get_disposed_4();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		__this->set_disposed_4((bool)1);
		HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * L_2 = HttpResponseMessage_get_Content_m325C3E47B0D7E1DD70CA36FA04B894A152AD4420_inline(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * L_3 = HttpResponseMessage_get_Content_m325C3E47B0D7E1DD70CA36FA04B894A152AD4420_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		HttpContent_Dispose_mC9A63C33CD67224E6C6C9DA256396200DC04554C(L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.String System.Net.Http.HttpResponseMessage::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HttpResponseMessage_ToString_mF97964659BD261F6DCEB4FCE6E3B0916B4A36681 (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HttpResponseMessage_ToString_mF97964659BD261F6DCEB4FCE6E3B0916B4A36681_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	String_t* G_B2_0 = NULL;
	StringBuilder_t * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	StringBuilder_t * G_B1_1 = NULL;
	StringBuilder_t * G_B4_0 = NULL;
	StringBuilder_t * G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	StringBuilder_t * G_B5_1 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t * L_2 = StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_1, _stringLiteralB6FE7D0BCD74C46F229FDA196825ED3E261B6A69, /*hidden argument*/NULL);
		int32_t L_3 = HttpResponseMessage_get_StatusCode_m27E0380E88C42804CF8B370FB554B3DC177311D1_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		StringBuilder_Append_m85874CFF9E4B152DB2A91936C6F2CA3E9B1EFF84(L_2, L_3, /*hidden argument*/NULL);
		StringBuilder_t * L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_t * L_5 = StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_4, _stringLiteralD1165E94605FACB6582E8B655792F164833C5E2C, /*hidden argument*/NULL);
		String_t* L_6 = HttpResponseMessage_get_ReasonPhrase_mE994C26E951A67F8132E77F908D57A7FA8F622AE(__this, /*hidden argument*/NULL);
		String_t* L_7 = L_6;
		G_B1_0 = L_7;
		G_B1_1 = L_5;
		if (L_7)
		{
			G_B2_0 = L_7;
			G_B2_1 = L_5;
			goto IL_0037;
		}
	}
	{
		G_B2_0 = _stringLiteral798275C17944BDA73AC13CB181018C138194815A;
		G_B2_1 = G_B1_1;
	}

IL_0037:
	{
		NullCheck(G_B2_1);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(G_B2_1, G_B2_0, /*hidden argument*/NULL);
		StringBuilder_t * L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t * L_9 = StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_8, _stringLiteral7FC7C6AE010099E065FEB9C201E28E242C7620D3, /*hidden argument*/NULL);
		Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * L_10 = HttpResponseMessage_get_Version_m36B05F89746C6A4593B927E7C1056DECA678885C(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65(L_9, L_10, /*hidden argument*/NULL);
		StringBuilder_t * L_11 = V_0;
		NullCheck(L_11);
		StringBuilder_t * L_12 = StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_11, _stringLiteral72B9F12D7CD133FEA422C851DCA5A98617F147E0, /*hidden argument*/NULL);
		HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * L_13 = HttpResponseMessage_get_Content_m325C3E47B0D7E1DD70CA36FA04B894A152AD4420_inline(__this, /*hidden argument*/NULL);
		G_B3_0 = L_12;
		if (L_13)
		{
			G_B4_0 = L_12;
			goto IL_006e;
		}
	}
	{
		G_B5_0 = _stringLiteral798275C17944BDA73AC13CB181018C138194815A;
		G_B5_1 = G_B3_0;
		goto IL_0079;
	}

IL_006e:
	{
		HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * L_14 = HttpResponseMessage_get_Content_m325C3E47B0D7E1DD70CA36FA04B894A152AD4420_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		G_B5_0 = L_15;
		G_B5_1 = G_B4_0;
	}

IL_0079:
	{
		NullCheck(G_B5_1);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(G_B5_1, G_B5_0, /*hidden argument*/NULL);
		StringBuilder_t * L_16 = V_0;
		NullCheck(L_16);
		StringBuilder_t * L_17 = StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_16, _stringLiteralC36E8AE79F7FE82CB7DB7F945372BE9C23027EE9, /*hidden argument*/NULL);
		HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59 * L_18 = HttpResponseMessage_get_Headers_mBD52D7A018509B2A6A55C0925A40955A33D20B98(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65(L_17, L_18, /*hidden argument*/NULL);
		HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * L_19 = HttpResponseMessage_get_Content_m325C3E47B0D7E1DD70CA36FA04B894A152AD4420_inline(__this, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00b0;
		}
	}
	{
		StringBuilder_t * L_20 = V_0;
		HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * L_21 = HttpResponseMessage_get_Content_m325C3E47B0D7E1DD70CA36FA04B894A152AD4420_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		HttpContentHeaders_t98D8657573ADACD807B6C941F46E6D69EDFD13A0 * L_22 = HttpContent_get_Headers_mCCD2B7D5CA1C1AEE1A78DA2E9036A66A5BCCB942(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65(L_20, L_22, /*hidden argument*/NULL);
	}

IL_00b0:
	{
		StringBuilder_t * L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_23, _stringLiteralC2B7DF6201FDD3362399091F0A29550DF3505B6A, /*hidden argument*/NULL);
		StringBuilder_t * L_24 = V_0;
		NullCheck(L_24);
		String_t* L_25 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_24);
		return L_25;
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
// System.Void System.Net.Http.StreamContent::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamContent__ctor_m894DA04A9FBF8160B1D2AA3E150A316999C19A33 (StreamContent_t0E4C08F0720024BFEBB667CCC40DA9E947EFF3FF * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___content0, const RuntimeMethod* method)
{
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = ___content0;
		StreamContent__ctor_mB09F0FFE8AE4EDE9B597AE5ED15E7E2579169A24(__this, L_0, ((int32_t)16384), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Net.Http.StreamContent::.ctor(System.IO.Stream,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamContent__ctor_mB09F0FFE8AE4EDE9B597AE5ED15E7E2579169A24 (StreamContent_t0E4C08F0720024BFEBB667CCC40DA9E947EFF3FF * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___content0, int32_t ___bufferSize1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamContent__ctor_mB09F0FFE8AE4EDE9B597AE5ED15E7E2579169A24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HttpContent__ctor_mA464758F76D3856E8EDA5F3BD4DE1A64D2B9FE7D(__this, /*hidden argument*/NULL);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = ___content0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteral040F06FD774092478D450774F5BA30C5DA78ACC8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, StreamContent__ctor_mB09F0FFE8AE4EDE9B597AE5ED15E7E2579169A24_RuntimeMethod_var);
	}

IL_0014:
	{
		int32_t L_2 = ___bufferSize1;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * L_3 = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(L_3, _stringLiteralF75E94DCC92ECC309EF861E9A10FFFB6B1A383AF, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, StreamContent__ctor_mB09F0FFE8AE4EDE9B597AE5ED15E7E2579169A24_RuntimeMethod_var);
	}

IL_0023:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_4 = ___content0;
		__this->set_content_4(L_4);
		int32_t L_5 = ___bufferSize1;
		__this->set_bufferSize_5(L_5);
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_6 = ___content0;
		NullCheck(L_6);
		bool L_7 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_6);
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_8 = ___content0;
		NullCheck(L_8);
		int64_t L_9 = VirtFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_8);
		__this->set_startPosition_7(L_9);
	}

IL_0045:
	{
		return;
	}
}
// System.Void System.Net.Http.StreamContent::.ctor(System.IO.Stream,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamContent__ctor_m08F1AB00C0AA1FF31A811729E6CA0C386744FC6C (StreamContent_t0E4C08F0720024BFEBB667CCC40DA9E947EFF3FF * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___content0, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  ___cancellationToken1, const RuntimeMethod* method)
{
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = ___content0;
		StreamContent__ctor_m894DA04A9FBF8160B1D2AA3E150A316999C19A33(__this, L_0, /*hidden argument*/NULL);
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_1 = ___cancellationToken1;
		__this->set_cancellationToken_6(L_1);
		return;
	}
}
// System.Threading.Tasks.Task`1<System.IO.Stream> System.Net.Http.StreamContent::CreateContentReadStreamAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * StreamContent_CreateContentReadStreamAsync_m978CC872FC6F43C1AFA7F2F681A3304A8358775D (StreamContent_t0E4C08F0720024BFEBB667CCC40DA9E947EFF3FF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamContent_CreateContentReadStreamAsync_m978CC872FC6F43C1AFA7F2F681A3304A8358775D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = __this->get_content_4();
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task_1_tAA7557E5A6A8B2C89E44907CB5B0502A618E9D01 * L_1 = Task_FromResult_TisStream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_m304EF757D9D1D57BB2E9D0B5D503A4C281684C56(L_0, /*hidden argument*/Task_FromResult_TisStream_tFC50657DD5AAB87770987F9179D934A51D99D5E7_m304EF757D9D1D57BB2E9D0B5D503A4C281684C56_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void System.Net.Http.StreamContent::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamContent_Dispose_m815B5295A0C562F4134C912CE2E1BEE50214A578 (StreamContent_t0E4C08F0720024BFEBB667CCC40DA9E947EFF3FF * __this, bool ___disposing0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_1 = __this->get_content_4();
		NullCheck(L_1);
		Stream_Dispose_m186A8E680F2528DEDFF8F0069CC33BD813FFB1C7(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	{
		bool L_2 = ___disposing0;
		HttpContent_Dispose_m6A7C53DA4B8B1B8285435C40486663F56BC463DE(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task System.Net.Http.StreamContent::SerializeToStreamAsync(System.IO.Stream,System.Net.TransportContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * StreamContent_SerializeToStreamAsync_m9D89963BF02B020A7CFA61D4683A1E257E21E8AA (StreamContent_t0E4C08F0720024BFEBB667CCC40DA9E947EFF3FF * __this, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * ___stream0, TransportContext_t1753CC7BFFA637B35BE353AAE4452C4371F89A9F * ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StreamContent_SerializeToStreamAsync_m9D89963BF02B020A7CFA61D4683A1E257E21E8AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_contentCopied_8();
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_1 = __this->get_content_4();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_1);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_3 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_3, _stringLiteral32844A7C7C921B7FCCAE60084355B161603A6E91, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, StreamContent_SerializeToStreamAsync_m9D89963BF02B020A7CFA61D4683A1E257E21E8AA_RuntimeMethod_var);
	}

IL_0020:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_4 = __this->get_content_4();
		int64_t L_5 = __this->get_startPosition_7();
		NullCheck(L_4);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(29 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_4, L_5, 0);
		goto IL_003c;
	}

IL_0035:
	{
		__this->set_contentCopied_8((bool)1);
	}

IL_003c:
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_6 = __this->get_content_4();
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_7 = ___stream0;
		int32_t L_8 = __this->get_bufferSize_5();
		CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  L_9 = __this->get_cancellationToken_6();
		NullCheck(L_6);
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_10 = VirtFuncInvoker3< Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 *, Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 *, int32_t, CancellationToken_t9E956952F7F20908F2AE72EDF36D97E6C7DB63AB  >::Invoke(18 /* System.Threading.Tasks.Task System.IO.Stream::CopyToAsync(System.IO.Stream,System.Int32,System.Threading.CancellationToken) */, L_6, L_7, L_8, L_9);
		return L_10;
	}
}
// System.Boolean System.Net.Http.StreamContent::TryComputeLength(System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamContent_TryComputeLength_m8DCB9431B83B32259939532C7765B5033636BE39 (StreamContent_t0E4C08F0720024BFEBB667CCC40DA9E947EFF3FF * __this, int64_t* ___length0, const RuntimeMethod* method)
{
	{
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_0 = __this->get_content_4();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		int64_t* L_2 = ___length0;
		*((int64_t*)L_2) = (int64_t)(((int64_t)((int64_t)0)));
		return (bool)0;
	}

IL_0013:
	{
		int64_t* L_3 = ___length0;
		Stream_tFC50657DD5AAB87770987F9179D934A51D99D5E7 * L_4 = __this->get_content_4();
		NullCheck(L_4);
		int64_t L_5 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_4);
		int64_t L_6 = __this->get_startPosition_7();
		*((int64_t*)L_3) = (int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_5, (int64_t)L_6));
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * HttpRequestMessage_get_Content_m65773173F13EFC2D1BB6C61CBC0F860837FFDDF1_inline (HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * __this, const RuntimeMethod* method)
{
	{
		HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * L_0 = __this->get_U3CContentU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * HttpRequestMessage_get_RequestUri_m4FFE364957CD017B288A51EDA5897391410AEAEA_inline (HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * __this, const RuntimeMethod* method)
{
	{
		Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * L_0 = __this->get_uri_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * HttpResponseMessage_get_Content_m325C3E47B0D7E1DD70CA36FA04B894A152AD4420_inline (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, const RuntimeMethod* method)
{
	{
		HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * L_0 = __this->get_U3CContentU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t HttpResponseMessage_get_StatusCode_m27E0380E88C42804CF8B370FB554B3DC177311D1_inline (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_statusCode_2();
		return L_0;
	}
}
