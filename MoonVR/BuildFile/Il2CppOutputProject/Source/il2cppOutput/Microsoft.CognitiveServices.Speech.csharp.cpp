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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericVirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
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
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct GenericInterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// Microsoft.CognitiveServices.Speech.Audio.AudioConfig
struct AudioConfig_tCB874753FD328FB0FE6B8176886CD6DD2E1D610A;
// Microsoft.CognitiveServices.Speech.CancellationDetails
struct CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2;
// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate
struct CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35;
// Microsoft.CognitiveServices.Speech.Internal.HandleRelease
struct HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4;
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle
struct InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA;
// Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_t7E8F200D861B536FF25556F63B01F00935440ADB;
// Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate
struct GetResultDelegate_tCCF20F70641FCD818F1873F47ADC40B7AFAF0B4C;
// Microsoft.CognitiveServices.Speech.PropertyCollection
struct PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870;
// Microsoft.CognitiveServices.Speech.RecognitionEventArgs
struct RecognitionEventArgs_t2D86DE32531190D1EB7F13161D122F51921857B4;
// Microsoft.CognitiveServices.Speech.RecognitionResult
struct RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429;
// Microsoft.CognitiveServices.Speech.Recognizer
struct Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9;
// Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate
struct GetRecognizerFromConfigDelegate_t1E1956B672CBA1A2BDC15031DFC99B1DFBF39E26;
// Microsoft.CognitiveServices.Speech.SessionEventArgs
struct SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845;
// Microsoft.CognitiveServices.Speech.SpeechConfig
struct SpeechConfig_t5C54B0C8BD36B97C0B09863CD865EC1404749E25;
// Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs
struct SpeechRecognitionCanceledEventArgs_tBCBCCC3B812C7A93A2C69906C6CE21E4313AAFD0;
// Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs
struct SpeechRecognitionEventArgs_tDB55D8D092DA5EE56B1BBA231E256915FA8A6406;
// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult
struct SpeechRecognitionResult_tBA7ADB26D600AEDF7114ABD5A8E1AE1C797F466E;
// Microsoft.CognitiveServices.Speech.SpeechRecognizer
struct SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797;
// Microsoft.CognitiveServices.Speech.SpeechTranslationConfig
struct SpeechTranslationConfig_t42B90011A1EF7B464F33442DC1CFCD9A37177A53;
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs
struct TranslationRecognitionCanceledEventArgs_tD05B18077AB718A788C24ADB4A1FE3CF2593FEFE;
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs
struct TranslationRecognitionEventArgs_tB91AB6FD826F377BB0C58DAB09D2FB2BEF06D002;
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult
struct TranslationRecognitionResult_tE75370C810BE52E98050558DAF55C499C0E5C5A2;
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer
struct TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA;
// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs
struct TranslationSynthesisEventArgs_t6DA67C6A6D2C0FE0CE20022D868042E874475E6F;
// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult
struct TranslationSynthesisResult_t3B0D43E9706F4004196979AE34C7DAF4EDFDBAEA;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.ApplicationException
struct ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_tC73654392B284B89334464107B696C9BD89776D9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String>
struct IReadOnlyDictionary_2_tDAA060F15D795AF57FE1A9EE96B8658521185CC4;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.EventArgs
struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>
struct EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>
struct EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>
struct EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>
struct EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>
struct EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>
struct EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26;
// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs>
struct EventHandler_1_tE345DD93C65E9D79DD98B8145C49470E0550EE61;
// System.EventHandler`1<System.Object>
struct EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Globalization.Calendar
struct Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.Globalization.CompareInfo
struct CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1;
// System.Globalization.CultureData
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8;
// System.Globalization.TextInfo
struct TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IDisposable
struct IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.ObjectDisposedException
struct ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

IL2CPP_EXTERN_C RuntimeClass* Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationErrorCode_t65E36EC1830F74E6042F87D0CAA22A14F3BFD072_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationReason_tE850B9758CF6EA974ED3DC804AF0AE703C9CED0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Diagnostics_t28A15A1B1D7D8B65A3BB2DE322E40C272D46DE6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetRecognizerFromConfigDelegate_t1E1956B672CBA1A2BDC15031DFC99B1DFBF39E26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetResultDelegate_tCCF20F70641FCD818F1873F47ADC40B7AFAF0B4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t950001EE7450B6EBC976BC9AFDCFCA50D3BD4A9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t05127AC436FAC6107A5BE96190220DEF47EB326E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecognitionEventArgs_t2D86DE32531190D1EB7F13161D122F51921857B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResultReason_tB34D6499A6E863A6A566D23D69FF0013124D2890_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechConfig_t5C54B0C8BD36B97C0B09863CD865EC1404749E25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechRecognitionCanceledEventArgs_tBCBCCC3B812C7A93A2C69906C6CE21E4313AAFD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechRecognitionEventArgs_tDB55D8D092DA5EE56B1BBA231E256915FA8A6406_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechRecognitionResult_tBA7ADB26D600AEDF7114ABD5A8E1AE1C797F466E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpeechTranslationConfig_t42B90011A1EF7B464F33442DC1CFCD9A37177A53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpxError_t9D55DE98A6FCFAB772164D80F70B6393100AE342_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslationRecognitionCanceledEventArgs_tD05B18077AB718A788C24ADB4A1FE3CF2593FEFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslationRecognitionEventArgs_tB91AB6FD826F377BB0C58DAB09D2FB2BEF06D002_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslationRecognitionResult_tE75370C810BE52E98050558DAF55C499C0E5C5A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslationSynthesisEventArgs_t6DA67C6A6D2C0FE0CE20022D868042E874475E6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TranslationSynthesisResult_t3B0D43E9706F4004196979AE34C7DAF4EDFDBAEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00CC17103B1BA38150947A2F99820A2A7D96382A;
IL2CPP_EXTERN_C String_t* _stringLiteral06B9B5B82E32475BBFC18C786300116C35702B8E;
IL2CPP_EXTERN_C String_t* _stringLiteral0B69D15E3C902F5DFC0442C5043DE38983103D08;
IL2CPP_EXTERN_C String_t* _stringLiteral1F49328DEA07F5DC1396FEA989A59FA53140C93A;
IL2CPP_EXTERN_C String_t* _stringLiteral2BFCEB216C43A8AD2C6BA42B18CCB9F67DFF8384;
IL2CPP_EXTERN_C String_t* _stringLiteral35B7B3BC3A740D5C3ABCA0D75B53F0E1E1EE998A;
IL2CPP_EXTERN_C String_t* _stringLiteral36CC7F353E484986A2C7074187724E66D7D8EB22;
IL2CPP_EXTERN_C String_t* _stringLiteral373568A9B01F744F3AF1C97ECD130CD611D19585;
IL2CPP_EXTERN_C String_t* _stringLiteral3C07AB1310A392CD9658F9776198D977552A3232;
IL2CPP_EXTERN_C String_t* _stringLiteral45CBA2DC20411DD9EC01754632B97E0F780E4D29;
IL2CPP_EXTERN_C String_t* _stringLiteral532A529B35D1EE840F9EDC0621676E0467B38CF1;
IL2CPP_EXTERN_C String_t* _stringLiteral61949ED5CFFA2530579D719C807A8522959586DD;
IL2CPP_EXTERN_C String_t* _stringLiteral64085F963C39744AD35D09F73B1738EC5A984B3A;
IL2CPP_EXTERN_C String_t* _stringLiteral6BA569B8DA8733ED59135DD71FE81FDE1FD32DC1;
IL2CPP_EXTERN_C String_t* _stringLiteral866637F135B384E42CDE1C9BB154CDCEB1B83E71;
IL2CPP_EXTERN_C String_t* _stringLiteral878767DEA09DD65D9E99925D1BBF35B9EAD4D939;
IL2CPP_EXTERN_C String_t* _stringLiteral8A718D1742D39AFA4BC354C36BD7F92926AD7B20;
IL2CPP_EXTERN_C String_t* _stringLiteral8ED7667D94D00DEA04134913FADA0B2C3C2A531F;
IL2CPP_EXTERN_C String_t* _stringLiteral9587A06E8685138DFC15602C51FFD58FC042A52C;
IL2CPP_EXTERN_C String_t* _stringLiteral9B6AB0D90551F373BFB09A86A7C3B54C35F09AE3;
IL2CPP_EXTERN_C String_t* _stringLiteral9D767AA3732E5ED3AF5D1BA2A194E218BA775018;
IL2CPP_EXTERN_C String_t* _stringLiteralA9B3F64B6475CF7F39B8C0A6BFFCCF483577D328;
IL2CPP_EXTERN_C String_t* _stringLiteralAB669C2AAE5B83A0747EE6830BB5FDB7A3ED634C;
IL2CPP_EXTERN_C String_t* _stringLiteralABA75C5C6D6AC34CA8B4C02E370033622C073B25;
IL2CPP_EXTERN_C String_t* _stringLiteralAF8DFC3C5D4593EA429262712EECB3A109BDFFA4;
IL2CPP_EXTERN_C String_t* _stringLiteralB2D66CDA1142A3EA44D49FB9E153D2562B61CA50;
IL2CPP_EXTERN_C String_t* _stringLiteralBC1AC5A8EE842A7C84F7BDB982C54F4A5AD1CA52;
IL2CPP_EXTERN_C String_t* _stringLiteralC024A2B5837E1949DB907276D6042F53F65D45E2;
IL2CPP_EXTERN_C String_t* _stringLiteralC032ADC1FF629C9B66F22749AD667E6BEADF144B;
IL2CPP_EXTERN_C String_t* _stringLiteralC08BB306BFDF99D194D7CE9FEF63D780EA81E2DB;
IL2CPP_EXTERN_C String_t* _stringLiteralC572E80329F9A497E490BA67B983D5483C71586C;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9C26A7599011BB08AD190A17EDA0D26C53575A;
IL2CPP_EXTERN_C String_t* _stringLiteralD54D8B68F790E0F03534C5CA2D0D6EC15545532B;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE4BC4B1059294A74BCDA71CD96A0C1B71757D094;
IL2CPP_EXTERN_C String_t* _stringLiteralE70752A87286B8233066BB57CD3191284DF0D886;
IL2CPP_EXTERN_C String_t* _stringLiteralF0B90EAA04931E1B84895E58C51DDDC38AFB2345;
IL2CPP_EXTERN_C String_t* _stringLiteralF14369AF7DBF85692CB7DC350F182784AC5E3C39;
IL2CPP_EXTERN_C String_t* _stringLiteralF8738A36F223E3439CE1D4B42CCD82871C33E94D;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m6E1369AB0F50C5F57BD7D64D27D0FCA7828513DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventArgs_recognizer_event_handle_release_mA58732A27533E21F519F2812B9BB4E11D3FE6A0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m4E30EF0CFE14A53FD5A09C654C00B8CB48ACDB8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m52B9B734688BBD70836B9BBAFB6EDA2DAB959B44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m79DB36680671F98319E31F48ED4CF7D1B93C12D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m90C803730FBF6E32D7BCCBC18070173899ADA43C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m9A97AA6A45E8637897E5E97B5035CAD3ACF39ADD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mC83A79A4E6C5FD3F03F8C6D52AD4CE3844DA841E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mDB24E20590B78D77E4D86AB16DC5FC7D55444430_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9_mCE8339A439406C6DB4BBE679382FECAC5EA23270_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797_mF0A7AE29CF9AD6E518EE1B837041B5E4B35C8372_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA_m8B53FF5B5E0E2D9118937B5A7B1E220EF049F635_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m1960AEAA9CE1FE1F69994434FFEAE113BD3AB3C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyCollection_property_bag_release_mA09923F79379625389DD82D332418C57163435B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RecognitionResult_recognizer_result_handle_release_mCBF8BCD60731C507F593669FECC6DB7260F84ECC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RecognitionResult_result_get_result_id_m72882D96F5F2C62A44735EC4AE5F370FB852496E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RecognitionResult_result_get_text_m5282BD9595677A7E09ACD0D31D9298AB2B09B5C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_Dispose_m408BD97F98DBB1025787B4A323C0C7960EF7FA3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_DoAsyncRecognitionAction_mB64950A6774B0D59E72F2962E5E9A7409DCE46BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FireEvent_SetSessionStarted_mCF41D541D7BE7A62317E86900F2AA2623A0F1E56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FireEvent_SetSessionStopped_m1744D16CE80810C45299095BB9350EF74CD697F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FireEvent_SpeechEndDetected_m60B70E7C6524081E1C6E4E208EB989E6AF4FA984_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FireEvent_SpeechStartDetected_m5A0303B793DEE63CA3E1C5360C0B3CFB051454F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_FromConfig_m4EBC18E31B66DBBDE63534A28644AB6DD241C672_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_StartContinuousRecognition_m2A030F4CAA792DFFFA04C9FF5FF14F70BA05458A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_StopContinuousRecognition_m6E569B61B4D371939A219D172F8D841CED5CC265_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_recognizer_handle_release_m81270BB2C41BB84A47D2DC443CDBAC7AA2141281_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Recognizer_recognizer_session_event_get_session_id_m4381CE0315B710E24BB0610D5C021D6FB6940FA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechConfig_speech_config_release_m810D0EEA705EE9AF26F7C4E8CE19E0C599F73F42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_FireEvent_Canceled_m196DE0AF9B978BF526926931E8C64745D4461C0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_FireEvent_Recognized_m7B66BF8F7176BA99BD0719398E3DBF5B227337AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_FireEvent_Recognizing_m04B3941BCB305E6EEA61C01B25221B6AFCB64CF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__44_0_m42101489CDD2C57A969B6DBBDC532D41D6A6C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__45_0_m664F8A1FC652005363F52F6A914C916D21742D58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpxExceptionThrower_ThrowIfFail_m2528B3C10CA3FC050E6D01EFABF83CC88DBCA4D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpxExceptionThrower_ThrowIfNull_mC3247410BA2C3E2E5E5EB0A5D03DA5ECC30C4FF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpxFactory_recognizer_create_speech_recognizer_from_config_mB5E66482C47F87CC44048B0190CB00A9C8F9C529_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SpxFactory_recognizer_create_translation_recognizer_from_config_mB1DE2DFA2EAEC9857328CCAA2D62182FDD7F827A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_FireEvent_Canceled_mF5ABD120E0772BA94E219F2AEBE3A4967A14CC7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_FireEvent_Recognized_mF4796E7E5F690D4341C2BE50E1D2A8BD88354429_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_FireEvent_Recognizing_mA8D429CB9E8FFEC7C10E1F070F665B0BA84B0030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_FireEvent_SynthesisResult_mEAE05BBDCF505C4C9517E0A3B145F0A75D84D7AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__43_0_m4D3D737AE4B9C780C880E60BD7084AE7171C5AB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__44_0_m42FA92DD686BA88181F433709FF0C6C668241447_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8StringMarshaler_MarshalNativeToManaged_mE3176B3F81593CCDD474A1DF3813804ECE4A79E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t CallbackFunctionDelegate_BeginInvoke_m3D5F5039A15007348CAA8C088F795C5B9C87063B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CancellationDetails_FromResult_m8CC67B3B88A390519550F82FB06BFC5D49B972D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CancellationDetails_ToString_m67736791E1C2E3D6ACE84615BA3051BFE0227453_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CancellationDetails__ctor_m2AEA3FF2830DA2A22B120F39EAE10763223A38A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Diagnostics_SPX_TRACE_VERBOSE_m426BBFEE0D63C3631ABC3B3DF179D99478F83CCC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Diagnostics_SPX_TRACE_VERBOSE_m6908A21A209406C576DBADED0D873DE54C3E6735_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Diagnostics__cctor_m31311509DDC17D7F6EFF5F2FECB24F2C81A230C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GetRecognizerFromConfigDelegate_BeginInvoke_m5848807B4D7059D62BD5151DBD6BD1E79DC5631A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GetResultDelegate_BeginInvoke_m76BB19734CBBBAC73782A3F7A787E0BCA3CEE8AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandleRelease_BeginInvoke_m1576462886942C995508EF4B25ACE0BD643AD4CC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InteropSafeHandle_Dispose_mBAC748D63BED31C7AE9C52FAFD7021BAEF550E2A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InteropSafeHandle_Finalize_mC31469A6FA4524D8D5A9F478DB8862E03797FAEF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InteropSafeHandle_ReleaseHandle_m0F16317A8B4DAD0E7BB83AF9133F8347F215C96C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InteropSafeHandle_ToString_m7AFD257CCBD3614B93AB93FBAB3B20F0C2CA3D4D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InteropSafeHandle__ctor_mABAE89E85BC9B1A642696DAF491F83BEA4A9A4BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InteropSafeHandle_get_IsInvalid_m7B650E05CC0F9FDC965F989000D795364899B5EA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyCollection_GetPropertyString_mD7C5DE1FC7DAA1A59F619945F21E70465DC65EEB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyCollection_GetProperty_mDF937E9084584AF726BB281F07ED5E091F22D83B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyCollection_SetProperty_m679D655AE85517FA950ADCF4D89CD492D366D987_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyCollection_SetProperty_mA1833B3E126FF8240B3326AA80E9EAABD53534A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyCollection__ctor_mA9184AF1E753A0FA6F0AA9151AD16E9D2465A557_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RecognitionEventArgs_ToString_mFAB28C00AE08304EA8352340ECBE022B33AEE064_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RecognitionResult_ToString_m4F8114C8C702EF6B2D92F0C080BA0645D4C524AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RecognitionResult__ctor_m41A680284FE5920D28E7C9FF16AD7A671C9DB272_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Recognizer_Dispose_m408BD97F98DBB1025787B4A323C0C7960EF7FA3A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Recognizer_Dispose_mB79F3964354355E1B534A782677B72F0F17FB3B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Recognizer_DoAsyncRecognitionAction_mB64950A6774B0D59E72F2962E5E9A7409DCE46BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Recognizer_Finalize_m9750ABD8D70F016156BD0F8663C9B4B6CE9CF373_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Recognizer_FireEvent_SetSessionStarted_mCF41D541D7BE7A62317E86900F2AA2623A0F1E56_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Recognizer_FireEvent_SetSessionStopped_m1744D16CE80810C45299095BB9350EF74CD697F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Recognizer_FireEvent_SpeechEndDetected_m60B70E7C6524081E1C6E4E208EB989E6AF4FA984_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Recognizer_FireEvent_SpeechStartDetected_m5A0303B793DEE63CA3E1C5360C0B3CFB051454F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Recognizer_FromConfig_m4EBC18E31B66DBBDE63534A28644AB6DD241C672_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Recognizer_StartContinuousRecognition_m2A030F4CAA792DFFFA04C9FF5FF14F70BA05458A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Recognizer_StopContinuousRecognition_m6E569B61B4D371939A219D172F8D841CED5CC265_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Recognizer__ctor_mA212ABA7ACCB40EB42D035F7EE635E78F6ED0F68_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Recognizer_add__SessionStarted_mABA2AFFD9ED2E90F78F52E09DDAAE6016D3D1290_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Recognizer_add__SessionStopped_mCA2C511C7C5E2AC13CF61093BE2FFFE1FBF47584_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Recognizer_add__SpeechEndDetected_m82C4AE98DD1AE4E7FCE970743E32E2F19B4BFD34_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Recognizer_add__SpeechStartDetected_mB2B58A6A1CDCC75C1FA0C73F12D3E3214FD1237E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Recognizer_remove_SessionStarted_mB67A9E901D4B3920C5D44B186ABEC49859629F24_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Recognizer_remove_SessionStopped_m87B980BF6B2F659B2138687FBA6DCB509B05E5BD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Recognizer_remove_SpeechEndDetected_m750776680F3BED04653DCFE9645272542F1C0954_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Recognizer_remove_SpeechStartDetected_mB56D9D4D6F25EC269808ECB98F71F617FD8F4B3E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Recognizer_remove__SessionStarted_m1DEB85971A7C25D29EDBEA2C1969C15462973172_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Recognizer_remove__SessionStopped_m6287430E5F33931F8D4705D273D335B5E30EF1EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Recognizer_remove__SpeechEndDetected_m4ECEDF962186E1CBA5D99C497C92D3BE1BFE8409_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Recognizer_remove__SpeechStartDetected_mDDC93504ACEADE5901E702515CF5F624A45E1E39_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SessionEventArgs_ToString_m181C4F9B90EA0F31D52DE360A9A0FAF6724083D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SessionEventArgs__ctor_m6EB4C8FB47CD8ACFDED454634F1E9C30E719805C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpeechConfig_FromSubscription_mFCACA12424DB57C976F9BBEB647DF44D0643BC0A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpeechConfig__ctor_mAFAF1B4E70735A979E996E6894F40F75CDCD18C9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpeechRecognitionCanceledEventArgs_ToString_m22545242D570915603572ADEAEE1A0E0343A89B5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpeechRecognitionEventArgs_ToString_m0FFB9A33D71F4C2F0440679047766BE7A40D36FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpeechRecognitionEventArgs__ctor_m579703E107124C6ABC9D07C40ACD3A2FDD241758_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpeechRecognizer_Dispose_mF6B21E1F4EA19B8C9A660AA2DD8D57957747AF89_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpeechRecognizer_FireEvent_Canceled_m196DE0AF9B978BF526926931E8C64745D4461C0E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpeechRecognizer_FireEvent_Recognized_m7B66BF8F7176BA99BD0719398E3DBF5B227337AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpeechRecognizer_FireEvent_Recognizing_m04B3941BCB305E6EEA61C01B25221B6AFCB64CF9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpeechRecognizer_StartContinuousRecognitionAsync_m282E75F85AFA36D5514BCF0583100C7ED75E7AAF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpeechRecognizer_StopContinuousRecognitionAsync_mBE703D597C3CBD7DF9CB13FAA65445B0B3B9A4D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__44_0_m42101489CDD2C57A969B6DBBDC532D41D6A6C747_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__45_0_m664F8A1FC652005363F52F6A914C916D21742D58_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpeechRecognizer__ctor_m5A53BD63443FC453CD24FE2221074E3EC659E025_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpeechRecognizer__ctor_m8F0C6A4C2A429A294414B5A6947C042E5CF6A5FE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpeechRecognizer_add__Canceled_mCE313D273999287BFE5BC37517E0C8573AE9169D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpeechRecognizer_add__Recognized_m452CB6D9E14C9ECD47C1CA5E6A4F96A577B5D86B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpeechRecognizer_add__Recognizing_mBCFF45A9074293638177355466BDD25A76629F10_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpeechRecognizer_remove_Canceled_mF2A2D6A26EE1E2025E1DD556BF28FEB1C645C538_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpeechRecognizer_remove_Recognized_m220F1B2BC237C0E5A079818B13EF8758E63B2578_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpeechRecognizer_remove_Recognizing_m47F3F7544807E40A9F448CC9504644265CEADD4B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpeechRecognizer_remove__Canceled_mE48E2516A2404852413FABE6AECB5E3E9A9A09CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpeechRecognizer_remove__Recognized_m5FBC660836B737333CD28FB3977644D482D2056C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpeechRecognizer_remove__Recognizing_mF5B0896939F3941899B5FD62D42070B0677B3D18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpeechTranslationConfig_FromSubscription_m81603F9F084E80243E8DE16467CEBC6FF349FA7D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpeechTranslationConfig__ctor_m55A368968F153795FB4C81A583F53DBC8038A43A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpxError_GetErrorCode_mC3BB6E08711E97986F04F148CF10A99E6D0B6819_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpxError_GetMessage_m506E5ABB75630EE5E4B0EC3CA995C4E7DB1A6CBE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpxError_ReleaseNoThrow_mD5BC5A60CF3E6942A0897C06A99B0F23929CA582_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpxError_Release_m2DA7CB533EAA4E308AB97DD5E67E91295DB4CFC3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpxError__cctor_m32BA068ABFF5B96AEDEEDAD9FA83D28BD0683F7B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpxExceptionThrower_ThrowIfFail_m2528B3C10CA3FC050E6D01EFABF83CC88DBCA4D9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpxExceptionThrower_ThrowIfNull_mC3247410BA2C3E2E5E5EB0A5D03DA5ECC30C4FF5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpxFactory_GetDataFromHandleUsingDelegate_m864B17EE1E702BEEB5256615631DD41B11E21ACC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationRecognitionCanceledEventArgs_ToString_m391D99CD10C5CBAE651344047A3E2980B60173FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationRecognitionEventArgs_ToString_m30AF9D7339ABC41D86C3F5D10343FB4E965C4AA5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationRecognitionEventArgs__ctor_m6A2FF47E651A996D20F80B21B3216560BEA24494_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationRecognitionResult_GetTranslationTexts_m103345A1BADB5B14768AD76D750EF019C19C6CE4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationRecognitionResult_ToString_m843C36EF6E29023E82F4C1C1D054BAADCB714B8E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationRecognizer_Dispose_mD9A3D65412E5EB29E792C9BFC144358928E6FFB5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationRecognizer_FireEvent_Canceled_mF5ABD120E0772BA94E219F2AEBE3A4967A14CC7C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationRecognizer_FireEvent_Recognized_mF4796E7E5F690D4341C2BE50E1D2A8BD88354429_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationRecognizer_FireEvent_Recognizing_mA8D429CB9E8FFEC7C10E1F070F665B0BA84B0030_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationRecognizer_FireEvent_SynthesisResult_mEAE05BBDCF505C4C9517E0A3B145F0A75D84D7AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationRecognizer_StartContinuousRecognitionAsync_m6171E2374D614CD945A8B6C4A2055E5C45019BCA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationRecognizer_StopContinuousRecognitionAsync_m1773A26F88A95B7C8FF9539F0B1DD1DDB845CEA5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__43_0_m4D3D737AE4B9C780C880E60BD7084AE7171C5AB6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__44_0_m42FA92DD686BA88181F433709FF0C6C668241447_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationRecognizer__ctor_m30A493F6AF8B764F06DE38D047B559FB7EAB4490_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationRecognizer__ctor_m6C17DF3CBAA86392096A296DFA407B0B18B5F68D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationRecognizer_add__Canceled_m8D6B743B7A6A3EAB92D6BBA248D2A259B38C8C7C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationRecognizer_add__Recognized_m4A7DA49CC499B3B602BBF7E50187E94B4B7ACFFA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationRecognizer_add__Recognizing_mCA94FA9628897C281138E33F6041BE9B59EFBD4C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationRecognizer_remove_Canceled_m5006AC8827A487546F98104D3A62103FFF00671F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationRecognizer_remove_Recognized_m58914DC22FB05CC109E995A09A1775A8D943CBE0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationRecognizer_remove_Recognizing_mF7751DD217F9B58B8166E1CBB2AF7936B3D1B950_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationRecognizer_remove__Canceled_mD588774BEB68BD8897A6BFA332672912F143C591_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationRecognizer_remove__Recognized_m26E6A00A709B851FD5A922A37719C60A29A863BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationRecognizer_remove__Recognizing_mBA98EB8295ACBBDBACD6464704BD90B0BC1101AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationSynthesisEventArgs_ToString_mEF6F6B8610D5798919FC2A15B9B3FDB8972F46B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationSynthesisEventArgs__ctor_mFF2F042C77F2C9A53E5E3F84D82462F36E7F05B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationSynthesisResult_GetAudioData_mE782E9A83EF85CFCA8B8AC3827CACF596834E8B1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationSynthesisResult_ToString_mBC31F78A4B7E9294167426A72C9B33A5B53996C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TranslationSynthesisResult__ctor_m691EEBD612C0DBAE4B5A22BE51ED709888F58A67_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utf8StringMarshaler_MarshalManagedToNative_mF66EF1E5F35BAE95CD414179F3EF8D672C098B3B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utf8StringMarshaler_MarshalNativeToManaged_mE3176B3F81593CCDD474A1DF3813804ECE4A79E7_MetadataUsageId;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tCA514D44A2CF7EBADBBB5D3A89DAC916D929516B 
{
public:

public:
};


// System.Object


// Microsoft.CognitiveServices.Speech.Audio.AudioConfig
struct  AudioConfig_tCB874753FD328FB0FE6B8176886CD6DD2E1D610A  : public RuntimeObject
{
public:
	// System.Boolean Microsoft.CognitiveServices.Speech.Audio.AudioConfig::disposed
	bool ___disposed_0;
	// System.IDisposable Microsoft.CognitiveServices.Speech.Audio.AudioConfig::streamKeepAlive
	RuntimeObject* ___streamKeepAlive_1;
	// System.Boolean Microsoft.CognitiveServices.Speech.Audio.AudioConfig::disposeStream
	bool ___disposeStream_2;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Audio.AudioConfig::configHandle
	InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___configHandle_3;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.Audio.AudioConfig::propBag
	PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * ___propBag_4;

public:
	inline static int32_t get_offset_of_disposed_0() { return static_cast<int32_t>(offsetof(AudioConfig_tCB874753FD328FB0FE6B8176886CD6DD2E1D610A, ___disposed_0)); }
	inline bool get_disposed_0() const { return ___disposed_0; }
	inline bool* get_address_of_disposed_0() { return &___disposed_0; }
	inline void set_disposed_0(bool value)
	{
		___disposed_0 = value;
	}

	inline static int32_t get_offset_of_streamKeepAlive_1() { return static_cast<int32_t>(offsetof(AudioConfig_tCB874753FD328FB0FE6B8176886CD6DD2E1D610A, ___streamKeepAlive_1)); }
	inline RuntimeObject* get_streamKeepAlive_1() const { return ___streamKeepAlive_1; }
	inline RuntimeObject** get_address_of_streamKeepAlive_1() { return &___streamKeepAlive_1; }
	inline void set_streamKeepAlive_1(RuntimeObject* value)
	{
		___streamKeepAlive_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___streamKeepAlive_1), (void*)value);
	}

	inline static int32_t get_offset_of_disposeStream_2() { return static_cast<int32_t>(offsetof(AudioConfig_tCB874753FD328FB0FE6B8176886CD6DD2E1D610A, ___disposeStream_2)); }
	inline bool get_disposeStream_2() const { return ___disposeStream_2; }
	inline bool* get_address_of_disposeStream_2() { return &___disposeStream_2; }
	inline void set_disposeStream_2(bool value)
	{
		___disposeStream_2 = value;
	}

	inline static int32_t get_offset_of_configHandle_3() { return static_cast<int32_t>(offsetof(AudioConfig_tCB874753FD328FB0FE6B8176886CD6DD2E1D610A, ___configHandle_3)); }
	inline InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * get_configHandle_3() const { return ___configHandle_3; }
	inline InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA ** get_address_of_configHandle_3() { return &___configHandle_3; }
	inline void set_configHandle_3(InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * value)
	{
		___configHandle_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___configHandle_3), (void*)value);
	}

	inline static int32_t get_offset_of_propBag_4() { return static_cast<int32_t>(offsetof(AudioConfig_tCB874753FD328FB0FE6B8176886CD6DD2E1D610A, ___propBag_4)); }
	inline PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * get_propBag_4() const { return ___propBag_4; }
	inline PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 ** get_address_of_propBag_4() { return &___propBag_4; }
	inline void set_propBag_4(PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * value)
	{
		___propBag_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propBag_4), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Internal.CancellationDetails
struct  CancellationDetails_tB1DDA25EBDCED7AF3C0CC119ECE43B538211313E  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.Diagnostics
struct  Diagnostics_t28A15A1B1D7D8B65A3BB2DE322E40C272D46DE6F  : public RuntimeObject
{
public:

public:
};

struct Diagnostics_t28A15A1B1D7D8B65A3BB2DE322E40C272D46DE6F_StaticFields
{
public:
	// System.Object Microsoft.CognitiveServices.Speech.Internal.Diagnostics::lockObj
	RuntimeObject * ___lockObj_0;

public:
	inline static int32_t get_offset_of_lockObj_0() { return static_cast<int32_t>(offsetof(Diagnostics_t28A15A1B1D7D8B65A3BB2DE322E40C272D46DE6F_StaticFields, ___lockObj_0)); }
	inline RuntimeObject * get_lockObj_0() const { return ___lockObj_0; }
	inline RuntimeObject ** get_address_of_lockObj_0() { return &___lockObj_0; }
	inline void set_lockObj_0(RuntimeObject * value)
	{
		___lockObj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lockObj_0), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop
struct  DiagnosticsInterop_t08A268F4CA067E631F13827B60131EAEDF3198D1  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.EventArgs
struct  EventArgs_t43AFB0FDA39125D9AADB00B012C4F1E79DD35761  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.PropertyCollection
struct  PropertyCollection_t3F126D604B7C5268B653D8CB97B984B33E0539AC  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.RecognitionResult
struct  RecognitionResult_t0CF19D5D17DF2E4B1C1D03D8BA2A6029F1BA503B  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.Recognizer
struct  Recognizer_tD40E961239B08B1FC8F08920CC4AA86E2DE88552  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.SpeechConfig
struct  SpeechConfig_t21D8FC3F5EA4BACD78C6ADB994DE6BB54827C7F8  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig
struct  SpeechTranslationConfig_t191889208F7B4C40DCBC606CA420BB508E954808  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower
struct  SpxExceptionThrower_tE0E183223482C635A5175CE3514ACD0538247B2C  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.SpxFactory
struct  SpxFactory_tB12A0C645751255072A9A05EC366807499B3B4E8  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler
struct  Utf8StringMarshaler_t42079B6081D1782984B91CA7CAC0B2BE6D951671  : public RuntimeObject
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.PropertyCollection
struct  PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870  : public RuntimeObject
{
public:
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.PropertyCollection::propbagHandle
	InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___propbagHandle_0;

public:
	inline static int32_t get_offset_of_propbagHandle_0() { return static_cast<int32_t>(offsetof(PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870, ___propbagHandle_0)); }
	inline InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * get_propbagHandle_0() const { return ___propbagHandle_0; }
	inline InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA ** get_address_of_propbagHandle_0() { return &___propbagHandle_0; }
	inline void set_propbagHandle_0(InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * value)
	{
		___propbagHandle_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propbagHandle_0), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.SpeechConfig
struct  SpeechConfig_t5C54B0C8BD36B97C0B09863CD865EC1404749E25  : public RuntimeObject
{
public:
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.SpeechConfig::configHandle
	InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___configHandle_0;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechConfig::progBag
	PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * ___progBag_1;

public:
	inline static int32_t get_offset_of_configHandle_0() { return static_cast<int32_t>(offsetof(SpeechConfig_t5C54B0C8BD36B97C0B09863CD865EC1404749E25, ___configHandle_0)); }
	inline InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * get_configHandle_0() const { return ___configHandle_0; }
	inline InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA ** get_address_of_configHandle_0() { return &___configHandle_0; }
	inline void set_configHandle_0(InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * value)
	{
		___configHandle_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___configHandle_0), (void*)value);
	}

	inline static int32_t get_offset_of_progBag_1() { return static_cast<int32_t>(offsetof(SpeechConfig_t5C54B0C8BD36B97C0B09863CD865EC1404749E25, ___progBag_1)); }
	inline PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * get_progBag_1() const { return ___progBag_1; }
	inline PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 ** get_address_of_progBag_1() { return &___progBag_1; }
	inline void set_progBag_1(PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * value)
	{
		___progBag_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progBag_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___entries_1)); }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___keys_7)); }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___values_8)); }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.EmptyArray`1<System.Byte>
struct  EmptyArray_1_t138215D75D34CDCC9D3A3248006BB81FC3F9609C  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_t138215D75D34CDCC9D3A3248006BB81FC3F9609C_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_t138215D75D34CDCC9D3A3248006BB81FC3F9609C_StaticFields, ___Value_0)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_Value_0() const { return ___Value_0; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.EventArgs
struct  EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_StaticFields, ___Empty_0)); }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct  CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F  : public RuntimeObject
{
public:
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
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
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
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___numInfo_10)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textInfo_12)); }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___native_calendar_names_20)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___compareInfo_21)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___calendar_24)); }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_culture_25)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_cultureData_28)); }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9  : public RuntimeObject
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


// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_60;

public:
	inline static int32_t get_offset_of_m_codePage_55() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_55)); }
	inline int32_t get_m_codePage_55() const { return ___m_codePage_55; }
	inline int32_t* get_address_of_m_codePage_55() { return &___m_codePage_55; }
	inline void set_m_codePage_55(int32_t value)
	{
		___m_codePage_55 = value;
	}

	inline static int32_t get_offset_of_dataItem_56() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_56)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_56() const { return ___dataItem_56; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_56() { return &___dataItem_56; }
	inline void set_dataItem_56(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_56), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_57() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_57)); }
	inline bool get_m_deserializedFromEverett_57() const { return ___m_deserializedFromEverett_57; }
	inline bool* get_address_of_m_deserializedFromEverett_57() { return &___m_deserializedFromEverett_57; }
	inline void set_m_deserializedFromEverett_57(bool value)
	{
		___m_deserializedFromEverett_57 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_58() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_58)); }
	inline bool get_m_isReadOnly_58() const { return ___m_isReadOnly_58; }
	inline bool* get_address_of_m_isReadOnly_58() { return &___m_isReadOnly_58; }
	inline void set_m_isReadOnly_58(bool value)
	{
		___m_isReadOnly_58 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_59() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_59)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_59() const { return ___encoderFallback_59; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_59() { return &___encoderFallback_59; }
	inline void set_encoderFallback_59(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_59), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_60() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_60)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_60() const { return ___decoderFallback_60; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_60() { return &___decoderFallback_60; }
	inline void set_decoderFallback_60(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_60), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_61;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_61() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_61)); }
	inline RuntimeObject * get_s_InternalSyncObject_61() const { return ___s_InternalSyncObject_61; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_61() { return &___s_InternalSyncObject_61; }
	inline void set_s_InternalSyncObject_61(RuntimeObject * value)
	{
		___s_InternalSyncObject_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_61), (void*)value);
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

// Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute
struct  MonoPInvokeCallbackAttribute_t7E8F200D861B536FF25556F63B01F00935440ADB  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.Type Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute::type
	Type_t * ___type_0;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(MonoPInvokeCallbackAttribute_t7E8F200D861B536FF25556F63B01F00935440ADB, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.SessionEventArgs
struct  SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845  : public EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E
{
public:
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.SessionEventArgs::eventHandle
	InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___eventHandle_1;
	// System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::<SessionId>k__BackingField
	String_t* ___U3CSessionIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_eventHandle_1() { return static_cast<int32_t>(offsetof(SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845, ___eventHandle_1)); }
	inline InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * get_eventHandle_1() const { return ___eventHandle_1; }
	inline InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA ** get_address_of_eventHandle_1() { return &___eventHandle_1; }
	inline void set_eventHandle_1(InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * value)
	{
		___eventHandle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventHandle_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSessionIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845, ___U3CSessionIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CSessionIdU3Ek__BackingField_4() const { return ___U3CSessionIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CSessionIdU3Ek__BackingField_4() { return &___U3CSessionIdU3Ek__BackingField_4; }
	inline void set_U3CSessionIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CSessionIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSessionIdU3Ek__BackingField_4), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.SpeechTranslationConfig
struct  SpeechTranslationConfig_t42B90011A1EF7B464F33442DC1CFCD9A37177A53  : public SpeechConfig_t5C54B0C8BD36B97C0B09863CD865EC1404749E25
{
public:
	// System.String Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::targetLanguages
	String_t* ___targetLanguages_2;

public:
	inline static int32_t get_offset_of_targetLanguages_2() { return static_cast<int32_t>(offsetof(SpeechTranslationConfig_t42B90011A1EF7B464F33442DC1CFCD9A37177A53, ___targetLanguages_2)); }
	inline String_t* get_targetLanguages_2() const { return ___targetLanguages_2; }
	inline String_t** get_address_of_targetLanguages_2() { return &___targetLanguages_2; }
	inline void set_targetLanguages_2(String_t* value)
	{
		___targetLanguages_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetLanguages_2), (void*)value);
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct  KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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


// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
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


// Microsoft.CognitiveServices.Speech.CancellationErrorCode
struct  CancellationErrorCode_t65E36EC1830F74E6042F87D0CAA22A14F3BFD072 
{
public:
	// System.Int32 Microsoft.CognitiveServices.Speech.CancellationErrorCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CancellationErrorCode_t65E36EC1830F74E6042F87D0CAA22A14F3BFD072, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.CognitiveServices.Speech.CancellationReason
struct  CancellationReason_tE850B9758CF6EA974ED3DC804AF0AE703C9CED0E 
{
public:
	// System.Int32 Microsoft.CognitiveServices.Speech.CancellationReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CancellationReason_tE850B9758CF6EA974ED3DC804AF0AE703C9CED0E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.CognitiveServices.Speech.Internal.SpxError
struct  SpxError_t9D55DE98A6FCFAB772164D80F70B6393100AE342  : public RuntimeObject
{
public:

public:
};

struct SpxError_t9D55DE98A6FCFAB772164D80F70B6393100AE342_StaticFields
{
public:
	// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::BufferTooSmall
	intptr_t ___BufferTooSmall_0;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::RuntimeError
	intptr_t ___RuntimeError_1;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::InvalidHandle
	intptr_t ___InvalidHandle_2;

public:
	inline static int32_t get_offset_of_BufferTooSmall_0() { return static_cast<int32_t>(offsetof(SpxError_t9D55DE98A6FCFAB772164D80F70B6393100AE342_StaticFields, ___BufferTooSmall_0)); }
	inline intptr_t get_BufferTooSmall_0() const { return ___BufferTooSmall_0; }
	inline intptr_t* get_address_of_BufferTooSmall_0() { return &___BufferTooSmall_0; }
	inline void set_BufferTooSmall_0(intptr_t value)
	{
		___BufferTooSmall_0 = value;
	}

	inline static int32_t get_offset_of_RuntimeError_1() { return static_cast<int32_t>(offsetof(SpxError_t9D55DE98A6FCFAB772164D80F70B6393100AE342_StaticFields, ___RuntimeError_1)); }
	inline intptr_t get_RuntimeError_1() const { return ___RuntimeError_1; }
	inline intptr_t* get_address_of_RuntimeError_1() { return &___RuntimeError_1; }
	inline void set_RuntimeError_1(intptr_t value)
	{
		___RuntimeError_1 = value;
	}

	inline static int32_t get_offset_of_InvalidHandle_2() { return static_cast<int32_t>(offsetof(SpxError_t9D55DE98A6FCFAB772164D80F70B6393100AE342_StaticFields, ___InvalidHandle_2)); }
	inline intptr_t get_InvalidHandle_2() const { return ___InvalidHandle_2; }
	inline intptr_t* get_address_of_InvalidHandle_2() { return &___InvalidHandle_2; }
	inline void set_InvalidHandle_2(intptr_t value)
	{
		___InvalidHandle_2 = value;
	}
};


// Microsoft.CognitiveServices.Speech.PropertyId
struct  PropertyId_t8198F0C34EF4E7418074D276456271A66AFDAFC5 
{
public:
	// System.Int32 Microsoft.CognitiveServices.Speech.PropertyId::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyId_t8198F0C34EF4E7418074D276456271A66AFDAFC5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.CognitiveServices.Speech.RecognitionEventArgs
struct  RecognitionEventArgs_t2D86DE32531190D1EB7F13161D122F51921857B4  : public SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845
{
public:
	// System.UInt64 Microsoft.CognitiveServices.Speech.RecognitionEventArgs::<Offset>k__BackingField
	uint64_t ___U3COffsetU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3COffsetU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(RecognitionEventArgs_t2D86DE32531190D1EB7F13161D122F51921857B4, ___U3COffsetU3Ek__BackingField_5)); }
	inline uint64_t get_U3COffsetU3Ek__BackingField_5() const { return ___U3COffsetU3Ek__BackingField_5; }
	inline uint64_t* get_address_of_U3COffsetU3Ek__BackingField_5() { return &___U3COffsetU3Ek__BackingField_5; }
	inline void set_U3COffsetU3Ek__BackingField_5(uint64_t value)
	{
		___U3COffsetU3Ek__BackingField_5 = value;
	}
};


// Microsoft.CognitiveServices.Speech.Recognizer
struct  Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9  : public RuntimeObject
{
public:
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs> Microsoft.CognitiveServices.Speech.Recognizer::_SessionStarted
	EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * ____SessionStarted_0;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs> Microsoft.CognitiveServices.Speech.Recognizer::_SessionStopped
	EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * ____SessionStopped_1;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs> Microsoft.CognitiveServices.Speech.Recognizer::_SpeechStartDetected
	EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * ____SpeechStartDetected_2;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs> Microsoft.CognitiveServices.Speech.Recognizer::_SpeechEndDetected
	EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * ____SpeechEndDetected_3;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Recognizer::recoHandle
	InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoHandle_4;
	// System.String Microsoft.CognitiveServices.Speech.Recognizer::pointerHandle
	String_t* ___pointerHandle_5;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer::asyncStartContinuousHandle
	intptr_t ___asyncStartContinuousHandle_6;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer::asyncStopContinuousHandle
	intptr_t ___asyncStopContinuousHandle_7;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer::asyncStartKeywordHandle
	intptr_t ___asyncStartKeywordHandle_8;
	// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer::asyncStopKeywordHandle
	intptr_t ___asyncStopKeywordHandle_9;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Recognizer::speechStartDetectedCallbackDelegate
	CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * ___speechStartDetectedCallbackDelegate_10;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Recognizer::speechEndDetectedCallbackDelegate
	CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * ___speechEndDetectedCallbackDelegate_11;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Recognizer::sessionStartedCallbackDelegate
	CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * ___sessionStartedCallbackDelegate_12;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Recognizer::sessionStoppedCallbackDelegate
	CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * ___sessionStoppedCallbackDelegate_13;
	// System.Runtime.InteropServices.GCHandle Microsoft.CognitiveServices.Speech.Recognizer::gch
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ___gch_14;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.CognitiveServices.Speech.Recognizer::disposed
	bool ___disposed_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Microsoft.CognitiveServices.Speech.Recognizer::isDisposing
	bool ___isDisposing_16;
	// System.Object Microsoft.CognitiveServices.Speech.Recognizer::recognizerLock
	RuntimeObject * ___recognizerLock_17;
	// System.Int32 Microsoft.CognitiveServices.Speech.Recognizer::activeAsyncRecognitionCounter
	int32_t ___activeAsyncRecognitionCounter_18;

public:
	inline static int32_t get_offset_of__SessionStarted_0() { return static_cast<int32_t>(offsetof(Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9, ____SessionStarted_0)); }
	inline EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * get__SessionStarted_0() const { return ____SessionStarted_0; }
	inline EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B ** get_address_of__SessionStarted_0() { return &____SessionStarted_0; }
	inline void set__SessionStarted_0(EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * value)
	{
		____SessionStarted_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____SessionStarted_0), (void*)value);
	}

	inline static int32_t get_offset_of__SessionStopped_1() { return static_cast<int32_t>(offsetof(Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9, ____SessionStopped_1)); }
	inline EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * get__SessionStopped_1() const { return ____SessionStopped_1; }
	inline EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B ** get_address_of__SessionStopped_1() { return &____SessionStopped_1; }
	inline void set__SessionStopped_1(EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * value)
	{
		____SessionStopped_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____SessionStopped_1), (void*)value);
	}

	inline static int32_t get_offset_of__SpeechStartDetected_2() { return static_cast<int32_t>(offsetof(Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9, ____SpeechStartDetected_2)); }
	inline EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * get__SpeechStartDetected_2() const { return ____SpeechStartDetected_2; }
	inline EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F ** get_address_of__SpeechStartDetected_2() { return &____SpeechStartDetected_2; }
	inline void set__SpeechStartDetected_2(EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * value)
	{
		____SpeechStartDetected_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____SpeechStartDetected_2), (void*)value);
	}

	inline static int32_t get_offset_of__SpeechEndDetected_3() { return static_cast<int32_t>(offsetof(Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9, ____SpeechEndDetected_3)); }
	inline EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * get__SpeechEndDetected_3() const { return ____SpeechEndDetected_3; }
	inline EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F ** get_address_of__SpeechEndDetected_3() { return &____SpeechEndDetected_3; }
	inline void set__SpeechEndDetected_3(EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * value)
	{
		____SpeechEndDetected_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____SpeechEndDetected_3), (void*)value);
	}

	inline static int32_t get_offset_of_recoHandle_4() { return static_cast<int32_t>(offsetof(Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9, ___recoHandle_4)); }
	inline InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * get_recoHandle_4() const { return ___recoHandle_4; }
	inline InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA ** get_address_of_recoHandle_4() { return &___recoHandle_4; }
	inline void set_recoHandle_4(InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * value)
	{
		___recoHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recoHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_pointerHandle_5() { return static_cast<int32_t>(offsetof(Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9, ___pointerHandle_5)); }
	inline String_t* get_pointerHandle_5() const { return ___pointerHandle_5; }
	inline String_t** get_address_of_pointerHandle_5() { return &___pointerHandle_5; }
	inline void set_pointerHandle_5(String_t* value)
	{
		___pointerHandle_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointerHandle_5), (void*)value);
	}

	inline static int32_t get_offset_of_asyncStartContinuousHandle_6() { return static_cast<int32_t>(offsetof(Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9, ___asyncStartContinuousHandle_6)); }
	inline intptr_t get_asyncStartContinuousHandle_6() const { return ___asyncStartContinuousHandle_6; }
	inline intptr_t* get_address_of_asyncStartContinuousHandle_6() { return &___asyncStartContinuousHandle_6; }
	inline void set_asyncStartContinuousHandle_6(intptr_t value)
	{
		___asyncStartContinuousHandle_6 = value;
	}

	inline static int32_t get_offset_of_asyncStopContinuousHandle_7() { return static_cast<int32_t>(offsetof(Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9, ___asyncStopContinuousHandle_7)); }
	inline intptr_t get_asyncStopContinuousHandle_7() const { return ___asyncStopContinuousHandle_7; }
	inline intptr_t* get_address_of_asyncStopContinuousHandle_7() { return &___asyncStopContinuousHandle_7; }
	inline void set_asyncStopContinuousHandle_7(intptr_t value)
	{
		___asyncStopContinuousHandle_7 = value;
	}

	inline static int32_t get_offset_of_asyncStartKeywordHandle_8() { return static_cast<int32_t>(offsetof(Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9, ___asyncStartKeywordHandle_8)); }
	inline intptr_t get_asyncStartKeywordHandle_8() const { return ___asyncStartKeywordHandle_8; }
	inline intptr_t* get_address_of_asyncStartKeywordHandle_8() { return &___asyncStartKeywordHandle_8; }
	inline void set_asyncStartKeywordHandle_8(intptr_t value)
	{
		___asyncStartKeywordHandle_8 = value;
	}

	inline static int32_t get_offset_of_asyncStopKeywordHandle_9() { return static_cast<int32_t>(offsetof(Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9, ___asyncStopKeywordHandle_9)); }
	inline intptr_t get_asyncStopKeywordHandle_9() const { return ___asyncStopKeywordHandle_9; }
	inline intptr_t* get_address_of_asyncStopKeywordHandle_9() { return &___asyncStopKeywordHandle_9; }
	inline void set_asyncStopKeywordHandle_9(intptr_t value)
	{
		___asyncStopKeywordHandle_9 = value;
	}

	inline static int32_t get_offset_of_speechStartDetectedCallbackDelegate_10() { return static_cast<int32_t>(offsetof(Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9, ___speechStartDetectedCallbackDelegate_10)); }
	inline CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * get_speechStartDetectedCallbackDelegate_10() const { return ___speechStartDetectedCallbackDelegate_10; }
	inline CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 ** get_address_of_speechStartDetectedCallbackDelegate_10() { return &___speechStartDetectedCallbackDelegate_10; }
	inline void set_speechStartDetectedCallbackDelegate_10(CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * value)
	{
		___speechStartDetectedCallbackDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechStartDetectedCallbackDelegate_10), (void*)value);
	}

	inline static int32_t get_offset_of_speechEndDetectedCallbackDelegate_11() { return static_cast<int32_t>(offsetof(Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9, ___speechEndDetectedCallbackDelegate_11)); }
	inline CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * get_speechEndDetectedCallbackDelegate_11() const { return ___speechEndDetectedCallbackDelegate_11; }
	inline CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 ** get_address_of_speechEndDetectedCallbackDelegate_11() { return &___speechEndDetectedCallbackDelegate_11; }
	inline void set_speechEndDetectedCallbackDelegate_11(CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * value)
	{
		___speechEndDetectedCallbackDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___speechEndDetectedCallbackDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_sessionStartedCallbackDelegate_12() { return static_cast<int32_t>(offsetof(Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9, ___sessionStartedCallbackDelegate_12)); }
	inline CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * get_sessionStartedCallbackDelegate_12() const { return ___sessionStartedCallbackDelegate_12; }
	inline CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 ** get_address_of_sessionStartedCallbackDelegate_12() { return &___sessionStartedCallbackDelegate_12; }
	inline void set_sessionStartedCallbackDelegate_12(CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * value)
	{
		___sessionStartedCallbackDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sessionStartedCallbackDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_sessionStoppedCallbackDelegate_13() { return static_cast<int32_t>(offsetof(Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9, ___sessionStoppedCallbackDelegate_13)); }
	inline CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * get_sessionStoppedCallbackDelegate_13() const { return ___sessionStoppedCallbackDelegate_13; }
	inline CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 ** get_address_of_sessionStoppedCallbackDelegate_13() { return &___sessionStoppedCallbackDelegate_13; }
	inline void set_sessionStoppedCallbackDelegate_13(CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * value)
	{
		___sessionStoppedCallbackDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sessionStoppedCallbackDelegate_13), (void*)value);
	}

	inline static int32_t get_offset_of_gch_14() { return static_cast<int32_t>(offsetof(Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9, ___gch_14)); }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  get_gch_14() const { return ___gch_14; }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * get_address_of_gch_14() { return &___gch_14; }
	inline void set_gch_14(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  value)
	{
		___gch_14 = value;
	}

	inline static int32_t get_offset_of_disposed_15() { return static_cast<int32_t>(offsetof(Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9, ___disposed_15)); }
	inline bool get_disposed_15() const { return ___disposed_15; }
	inline bool* get_address_of_disposed_15() { return &___disposed_15; }
	inline void set_disposed_15(bool value)
	{
		___disposed_15 = value;
	}

	inline static int32_t get_offset_of_isDisposing_16() { return static_cast<int32_t>(offsetof(Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9, ___isDisposing_16)); }
	inline bool get_isDisposing_16() const { return ___isDisposing_16; }
	inline bool* get_address_of_isDisposing_16() { return &___isDisposing_16; }
	inline void set_isDisposing_16(bool value)
	{
		___isDisposing_16 = value;
	}

	inline static int32_t get_offset_of_recognizerLock_17() { return static_cast<int32_t>(offsetof(Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9, ___recognizerLock_17)); }
	inline RuntimeObject * get_recognizerLock_17() const { return ___recognizerLock_17; }
	inline RuntimeObject ** get_address_of_recognizerLock_17() { return &___recognizerLock_17; }
	inline void set_recognizerLock_17(RuntimeObject * value)
	{
		___recognizerLock_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recognizerLock_17), (void*)value);
	}

	inline static int32_t get_offset_of_activeAsyncRecognitionCounter_18() { return static_cast<int32_t>(offsetof(Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9, ___activeAsyncRecognitionCounter_18)); }
	inline int32_t get_activeAsyncRecognitionCounter_18() const { return ___activeAsyncRecognitionCounter_18; }
	inline int32_t* get_address_of_activeAsyncRecognitionCounter_18() { return &___activeAsyncRecognitionCounter_18; }
	inline void set_activeAsyncRecognitionCounter_18(int32_t value)
	{
		___activeAsyncRecognitionCounter_18 = value;
	}
};


// Microsoft.CognitiveServices.Speech.ResultReason
struct  ResultReason_tB34D6499A6E863A6A566D23D69FF0013124D2890 
{
public:
	// System.Int32 Microsoft.CognitiveServices.Speech.ResultReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ResultReason_tB34D6499A6E863A6A566D23D69FF0013124D2890, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs
struct  TranslationSynthesisEventArgs_t6DA67C6A6D2C0FE0CE20022D868042E874475E6F  : public SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845
{
public:
	// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::<Result>k__BackingField
	TranslationSynthesisResult_t3B0D43E9706F4004196979AE34C7DAF4EDFDBAEA * ___U3CResultU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TranslationSynthesisEventArgs_t6DA67C6A6D2C0FE0CE20022D868042E874475E6F, ___U3CResultU3Ek__BackingField_5)); }
	inline TranslationSynthesisResult_t3B0D43E9706F4004196979AE34C7DAF4EDFDBAEA * get_U3CResultU3Ek__BackingField_5() const { return ___U3CResultU3Ek__BackingField_5; }
	inline TranslationSynthesisResult_t3B0D43E9706F4004196979AE34C7DAF4EDFDBAEA ** get_address_of_U3CResultU3Ek__BackingField_5() { return &___U3CResultU3Ek__BackingField_5; }
	inline void set_U3CResultU3Ek__BackingField_5(TranslationSynthesisResult_t3B0D43E9706F4004196979AE34C7DAF4EDFDBAEA * value)
	{
		___U3CResultU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_5), (void*)value);
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t7155EF9CB120186C6753EE17470D37E148CB2EF1 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t7155EF9CB120186C6753EE17470D37E148CB2EF1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.InteropServices.SafeHandle
struct  SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383  : public CriticalFinalizerObject_t8B006E1DEE084E781F5C0F3283E9226E28894DD9
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}

	inline static int32_t get_offset_of__ownsHandle_2() { return static_cast<int32_t>(offsetof(SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383, ____ownsHandle_2)); }
	inline bool get__ownsHandle_2() const { return ____ownsHandle_2; }
	inline bool* get_address_of__ownsHandle_2() { return &____ownsHandle_2; }
	inline void set__ownsHandle_2(bool value)
	{
		____ownsHandle_2 = value;
	}

	inline static int32_t get_offset_of__fullyInitialized_3() { return static_cast<int32_t>(offsetof(SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383, ____fullyInitialized_3)); }
	inline bool get__fullyInitialized_3() const { return ____fullyInitialized_3; }
	inline bool* get_address_of__fullyInitialized_3() { return &____fullyInitialized_3; }
	inline void set__fullyInitialized_3(bool value)
	{
		____fullyInitialized_3 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
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


// Microsoft.CognitiveServices.Speech.CancellationDetails
struct  CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2  : public RuntimeObject
{
public:
	// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.CancellationDetails::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_0;
	// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.CancellationDetails::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_1;
	// System.String Microsoft.CognitiveServices.Speech.CancellationDetails::<ErrorDetails>k__BackingField
	String_t* ___U3CErrorDetailsU3Ek__BackingField_2;
	// Microsoft.CognitiveServices.Speech.RecognitionResult Microsoft.CognitiveServices.Speech.CancellationDetails::recognitionResult
	RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 * ___recognitionResult_3;

public:
	inline static int32_t get_offset_of_U3CReasonU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2, ___U3CReasonU3Ek__BackingField_0)); }
	inline int32_t get_U3CReasonU3Ek__BackingField_0() const { return ___U3CReasonU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CReasonU3Ek__BackingField_0() { return &___U3CReasonU3Ek__BackingField_0; }
	inline void set_U3CReasonU3Ek__BackingField_0(int32_t value)
	{
		___U3CReasonU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CErrorCodeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2, ___U3CErrorCodeU3Ek__BackingField_1)); }
	inline int32_t get_U3CErrorCodeU3Ek__BackingField_1() const { return ___U3CErrorCodeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CErrorCodeU3Ek__BackingField_1() { return &___U3CErrorCodeU3Ek__BackingField_1; }
	inline void set_U3CErrorCodeU3Ek__BackingField_1(int32_t value)
	{
		___U3CErrorCodeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CErrorDetailsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2, ___U3CErrorDetailsU3Ek__BackingField_2)); }
	inline String_t* get_U3CErrorDetailsU3Ek__BackingField_2() const { return ___U3CErrorDetailsU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CErrorDetailsU3Ek__BackingField_2() { return &___U3CErrorDetailsU3Ek__BackingField_2; }
	inline void set_U3CErrorDetailsU3Ek__BackingField_2(String_t* value)
	{
		___U3CErrorDetailsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorDetailsU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_recognitionResult_3() { return static_cast<int32_t>(offsetof(CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2, ___recognitionResult_3)); }
	inline RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 * get_recognitionResult_3() const { return ___recognitionResult_3; }
	inline RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 ** get_address_of_recognitionResult_3() { return &___recognitionResult_3; }
	inline void set_recognitionResult_3(RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 * value)
	{
		___recognitionResult_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recognitionResult_3), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle
struct  InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA  : public SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383
{
public:
	// Microsoft.CognitiveServices.Speech.Internal.HandleRelease Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::releaseHandleFunc
	HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 * ___releaseHandleFunc_6;

public:
	inline static int32_t get_offset_of_releaseHandleFunc_6() { return static_cast<int32_t>(offsetof(InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA, ___releaseHandleFunc_6)); }
	inline HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 * get_releaseHandleFunc_6() const { return ___releaseHandleFunc_6; }
	inline HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 ** get_address_of_releaseHandleFunc_6() { return &___releaseHandleFunc_6; }
	inline void set_releaseHandleFunc_6(HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 * value)
	{
		___releaseHandleFunc_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___releaseHandleFunc_6), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.RecognitionResult
struct  RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429  : public RuntimeObject
{
public:
	// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::<ResultId>k__BackingField
	String_t* ___U3CResultIdU3Ek__BackingField_0;
	// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_1;
	// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::<Properties>k__BackingField
	PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * ___U3CPropertiesU3Ek__BackingField_3;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.RecognitionResult::resultHandle
	InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___resultHandle_4;

public:
	inline static int32_t get_offset_of_U3CResultIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429, ___U3CResultIdU3Ek__BackingField_0)); }
	inline String_t* get_U3CResultIdU3Ek__BackingField_0() const { return ___U3CResultIdU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CResultIdU3Ek__BackingField_0() { return &___U3CResultIdU3Ek__BackingField_0; }
	inline void set_U3CResultIdU3Ek__BackingField_0(String_t* value)
	{
		___U3CResultIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultIdU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CReasonU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429, ___U3CReasonU3Ek__BackingField_1)); }
	inline int32_t get_U3CReasonU3Ek__BackingField_1() const { return ___U3CReasonU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CReasonU3Ek__BackingField_1() { return &___U3CReasonU3Ek__BackingField_1; }
	inline void set_U3CReasonU3Ek__BackingField_1(int32_t value)
	{
		___U3CReasonU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429, ___U3CTextU3Ek__BackingField_2)); }
	inline String_t* get_U3CTextU3Ek__BackingField_2() const { return ___U3CTextU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_2() { return &___U3CTextU3Ek__BackingField_2; }
	inline void set_U3CTextU3Ek__BackingField_2(String_t* value)
	{
		___U3CTextU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTextU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPropertiesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429, ___U3CPropertiesU3Ek__BackingField_3)); }
	inline PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * get_U3CPropertiesU3Ek__BackingField_3() const { return ___U3CPropertiesU3Ek__BackingField_3; }
	inline PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 ** get_address_of_U3CPropertiesU3Ek__BackingField_3() { return &___U3CPropertiesU3Ek__BackingField_3; }
	inline void set_U3CPropertiesU3Ek__BackingField_3(PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * value)
	{
		___U3CPropertiesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPropertiesU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_resultHandle_4() { return static_cast<int32_t>(offsetof(RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429, ___resultHandle_4)); }
	inline InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * get_resultHandle_4() const { return ___resultHandle_4; }
	inline InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA ** get_address_of_resultHandle_4() { return &___resultHandle_4; }
	inline void set_resultHandle_4(InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * value)
	{
		___resultHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultHandle_4), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs
struct  SpeechRecognitionEventArgs_tDB55D8D092DA5EE56B1BBA231E256915FA8A6406  : public RecognitionEventArgs_t2D86DE32531190D1EB7F13161D122F51921857B4
{
public:
	// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::<Result>k__BackingField
	SpeechRecognitionResult_tBA7ADB26D600AEDF7114ABD5A8E1AE1C797F466E * ___U3CResultU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SpeechRecognitionEventArgs_tDB55D8D092DA5EE56B1BBA231E256915FA8A6406, ___U3CResultU3Ek__BackingField_6)); }
	inline SpeechRecognitionResult_tBA7ADB26D600AEDF7114ABD5A8E1AE1C797F466E * get_U3CResultU3Ek__BackingField_6() const { return ___U3CResultU3Ek__BackingField_6; }
	inline SpeechRecognitionResult_tBA7ADB26D600AEDF7114ABD5A8E1AE1C797F466E ** get_address_of_U3CResultU3Ek__BackingField_6() { return &___U3CResultU3Ek__BackingField_6; }
	inline void set_U3CResultU3Ek__BackingField_6(SpeechRecognitionResult_tBA7ADB26D600AEDF7114ABD5A8E1AE1C797F466E * value)
	{
		___U3CResultU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.SpeechRecognizer
struct  SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797  : public Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9
{
public:
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs> Microsoft.CognitiveServices.Speech.SpeechRecognizer::_Recognizing
	EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * ____Recognizing_19;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs> Microsoft.CognitiveServices.Speech.SpeechRecognizer::_Recognized
	EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * ____Recognized_20;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs> Microsoft.CognitiveServices.Speech.SpeechRecognizer::_Canceled
	EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * ____Canceled_21;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.SpeechRecognizer::recognizingCallbackDelegate
	CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * ___recognizingCallbackDelegate_22;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.SpeechRecognizer::recognizedCallbackDelegate
	CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * ___recognizedCallbackDelegate_23;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.SpeechRecognizer::canceledCallbackDelegate
	CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * ___canceledCallbackDelegate_24;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechRecognizer::<Properties>k__BackingField
	PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * ___U3CPropertiesU3Ek__BackingField_25;
	// Microsoft.CognitiveServices.Speech.Audio.AudioConfig Microsoft.CognitiveServices.Speech.SpeechRecognizer::audioInputKeepAlive
	AudioConfig_tCB874753FD328FB0FE6B8176886CD6DD2E1D610A * ___audioInputKeepAlive_26;

public:
	inline static int32_t get_offset_of__Recognizing_19() { return static_cast<int32_t>(offsetof(SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797, ____Recognizing_19)); }
	inline EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * get__Recognizing_19() const { return ____Recognizing_19; }
	inline EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 ** get_address_of__Recognizing_19() { return &____Recognizing_19; }
	inline void set__Recognizing_19(EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * value)
	{
		____Recognizing_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Recognizing_19), (void*)value);
	}

	inline static int32_t get_offset_of__Recognized_20() { return static_cast<int32_t>(offsetof(SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797, ____Recognized_20)); }
	inline EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * get__Recognized_20() const { return ____Recognized_20; }
	inline EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 ** get_address_of__Recognized_20() { return &____Recognized_20; }
	inline void set__Recognized_20(EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * value)
	{
		____Recognized_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Recognized_20), (void*)value);
	}

	inline static int32_t get_offset_of__Canceled_21() { return static_cast<int32_t>(offsetof(SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797, ____Canceled_21)); }
	inline EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * get__Canceled_21() const { return ____Canceled_21; }
	inline EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 ** get_address_of__Canceled_21() { return &____Canceled_21; }
	inline void set__Canceled_21(EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * value)
	{
		____Canceled_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Canceled_21), (void*)value);
	}

	inline static int32_t get_offset_of_recognizingCallbackDelegate_22() { return static_cast<int32_t>(offsetof(SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797, ___recognizingCallbackDelegate_22)); }
	inline CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * get_recognizingCallbackDelegate_22() const { return ___recognizingCallbackDelegate_22; }
	inline CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 ** get_address_of_recognizingCallbackDelegate_22() { return &___recognizingCallbackDelegate_22; }
	inline void set_recognizingCallbackDelegate_22(CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * value)
	{
		___recognizingCallbackDelegate_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recognizingCallbackDelegate_22), (void*)value);
	}

	inline static int32_t get_offset_of_recognizedCallbackDelegate_23() { return static_cast<int32_t>(offsetof(SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797, ___recognizedCallbackDelegate_23)); }
	inline CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * get_recognizedCallbackDelegate_23() const { return ___recognizedCallbackDelegate_23; }
	inline CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 ** get_address_of_recognizedCallbackDelegate_23() { return &___recognizedCallbackDelegate_23; }
	inline void set_recognizedCallbackDelegate_23(CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * value)
	{
		___recognizedCallbackDelegate_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recognizedCallbackDelegate_23), (void*)value);
	}

	inline static int32_t get_offset_of_canceledCallbackDelegate_24() { return static_cast<int32_t>(offsetof(SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797, ___canceledCallbackDelegate_24)); }
	inline CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * get_canceledCallbackDelegate_24() const { return ___canceledCallbackDelegate_24; }
	inline CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 ** get_address_of_canceledCallbackDelegate_24() { return &___canceledCallbackDelegate_24; }
	inline void set_canceledCallbackDelegate_24(CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * value)
	{
		___canceledCallbackDelegate_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canceledCallbackDelegate_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPropertiesU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797, ___U3CPropertiesU3Ek__BackingField_25)); }
	inline PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * get_U3CPropertiesU3Ek__BackingField_25() const { return ___U3CPropertiesU3Ek__BackingField_25; }
	inline PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 ** get_address_of_U3CPropertiesU3Ek__BackingField_25() { return &___U3CPropertiesU3Ek__BackingField_25; }
	inline void set_U3CPropertiesU3Ek__BackingField_25(PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * value)
	{
		___U3CPropertiesU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPropertiesU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_audioInputKeepAlive_26() { return static_cast<int32_t>(offsetof(SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797, ___audioInputKeepAlive_26)); }
	inline AudioConfig_tCB874753FD328FB0FE6B8176886CD6DD2E1D610A * get_audioInputKeepAlive_26() const { return ___audioInputKeepAlive_26; }
	inline AudioConfig_tCB874753FD328FB0FE6B8176886CD6DD2E1D610A ** get_address_of_audioInputKeepAlive_26() { return &___audioInputKeepAlive_26; }
	inline void set_audioInputKeepAlive_26(AudioConfig_tCB874753FD328FB0FE6B8176886CD6DD2E1D610A * value)
	{
		___audioInputKeepAlive_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioInputKeepAlive_26), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs
struct  TranslationRecognitionEventArgs_tB91AB6FD826F377BB0C58DAB09D2FB2BEF06D002  : public RecognitionEventArgs_t2D86DE32531190D1EB7F13161D122F51921857B4
{
public:
	// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::<Result>k__BackingField
	TranslationRecognitionResult_tE75370C810BE52E98050558DAF55C499C0E5C5A2 * ___U3CResultU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(TranslationRecognitionEventArgs_tB91AB6FD826F377BB0C58DAB09D2FB2BEF06D002, ___U3CResultU3Ek__BackingField_6)); }
	inline TranslationRecognitionResult_tE75370C810BE52E98050558DAF55C499C0E5C5A2 * get_U3CResultU3Ek__BackingField_6() const { return ___U3CResultU3Ek__BackingField_6; }
	inline TranslationRecognitionResult_tE75370C810BE52E98050558DAF55C499C0E5C5A2 ** get_address_of_U3CResultU3Ek__BackingField_6() { return &___U3CResultU3Ek__BackingField_6; }
	inline void set_U3CResultU3Ek__BackingField_6(TranslationRecognitionResult_tE75370C810BE52E98050558DAF55C499C0E5C5A2 * value)
	{
		___U3CResultU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CResultU3Ek__BackingField_6), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer
struct  TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA  : public Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9
{
public:
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::_Recognizing
	EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * ____Recognizing_19;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::_Recognized
	EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * ____Recognized_20;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::_Canceled
	EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * ____Canceled_21;
	// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::_Synthesizing
	EventHandler_1_tE345DD93C65E9D79DD98B8145C49470E0550EE61 * ____Synthesizing_22;
	// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::<Properties>k__BackingField
	PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * ___U3CPropertiesU3Ek__BackingField_23;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::recognizingCallbackDelegate
	CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * ___recognizingCallbackDelegate_24;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::recognizedCallbackDelegate
	CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * ___recognizedCallbackDelegate_25;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::canceledCallbackDelegate
	CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * ___canceledCallbackDelegate_26;
	// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::translationSynthesisCallbackDelegate
	CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * ___translationSynthesisCallbackDelegate_27;
	// Microsoft.CognitiveServices.Speech.Audio.AudioConfig Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::audioInputKeepAlive
	AudioConfig_tCB874753FD328FB0FE6B8176886CD6DD2E1D610A * ___audioInputKeepAlive_28;

public:
	inline static int32_t get_offset_of__Recognizing_19() { return static_cast<int32_t>(offsetof(TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA, ____Recognizing_19)); }
	inline EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * get__Recognizing_19() const { return ____Recognizing_19; }
	inline EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 ** get_address_of__Recognizing_19() { return &____Recognizing_19; }
	inline void set__Recognizing_19(EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * value)
	{
		____Recognizing_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Recognizing_19), (void*)value);
	}

	inline static int32_t get_offset_of__Recognized_20() { return static_cast<int32_t>(offsetof(TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA, ____Recognized_20)); }
	inline EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * get__Recognized_20() const { return ____Recognized_20; }
	inline EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 ** get_address_of__Recognized_20() { return &____Recognized_20; }
	inline void set__Recognized_20(EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * value)
	{
		____Recognized_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Recognized_20), (void*)value);
	}

	inline static int32_t get_offset_of__Canceled_21() { return static_cast<int32_t>(offsetof(TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA, ____Canceled_21)); }
	inline EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * get__Canceled_21() const { return ____Canceled_21; }
	inline EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 ** get_address_of__Canceled_21() { return &____Canceled_21; }
	inline void set__Canceled_21(EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * value)
	{
		____Canceled_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Canceled_21), (void*)value);
	}

	inline static int32_t get_offset_of__Synthesizing_22() { return static_cast<int32_t>(offsetof(TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA, ____Synthesizing_22)); }
	inline EventHandler_1_tE345DD93C65E9D79DD98B8145C49470E0550EE61 * get__Synthesizing_22() const { return ____Synthesizing_22; }
	inline EventHandler_1_tE345DD93C65E9D79DD98B8145C49470E0550EE61 ** get_address_of__Synthesizing_22() { return &____Synthesizing_22; }
	inline void set__Synthesizing_22(EventHandler_1_tE345DD93C65E9D79DD98B8145C49470E0550EE61 * value)
	{
		____Synthesizing_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Synthesizing_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPropertiesU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA, ___U3CPropertiesU3Ek__BackingField_23)); }
	inline PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * get_U3CPropertiesU3Ek__BackingField_23() const { return ___U3CPropertiesU3Ek__BackingField_23; }
	inline PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 ** get_address_of_U3CPropertiesU3Ek__BackingField_23() { return &___U3CPropertiesU3Ek__BackingField_23; }
	inline void set_U3CPropertiesU3Ek__BackingField_23(PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * value)
	{
		___U3CPropertiesU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPropertiesU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_recognizingCallbackDelegate_24() { return static_cast<int32_t>(offsetof(TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA, ___recognizingCallbackDelegate_24)); }
	inline CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * get_recognizingCallbackDelegate_24() const { return ___recognizingCallbackDelegate_24; }
	inline CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 ** get_address_of_recognizingCallbackDelegate_24() { return &___recognizingCallbackDelegate_24; }
	inline void set_recognizingCallbackDelegate_24(CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * value)
	{
		___recognizingCallbackDelegate_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recognizingCallbackDelegate_24), (void*)value);
	}

	inline static int32_t get_offset_of_recognizedCallbackDelegate_25() { return static_cast<int32_t>(offsetof(TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA, ___recognizedCallbackDelegate_25)); }
	inline CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * get_recognizedCallbackDelegate_25() const { return ___recognizedCallbackDelegate_25; }
	inline CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 ** get_address_of_recognizedCallbackDelegate_25() { return &___recognizedCallbackDelegate_25; }
	inline void set_recognizedCallbackDelegate_25(CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * value)
	{
		___recognizedCallbackDelegate_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recognizedCallbackDelegate_25), (void*)value);
	}

	inline static int32_t get_offset_of_canceledCallbackDelegate_26() { return static_cast<int32_t>(offsetof(TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA, ___canceledCallbackDelegate_26)); }
	inline CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * get_canceledCallbackDelegate_26() const { return ___canceledCallbackDelegate_26; }
	inline CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 ** get_address_of_canceledCallbackDelegate_26() { return &___canceledCallbackDelegate_26; }
	inline void set_canceledCallbackDelegate_26(CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * value)
	{
		___canceledCallbackDelegate_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canceledCallbackDelegate_26), (void*)value);
	}

	inline static int32_t get_offset_of_translationSynthesisCallbackDelegate_27() { return static_cast<int32_t>(offsetof(TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA, ___translationSynthesisCallbackDelegate_27)); }
	inline CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * get_translationSynthesisCallbackDelegate_27() const { return ___translationSynthesisCallbackDelegate_27; }
	inline CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 ** get_address_of_translationSynthesisCallbackDelegate_27() { return &___translationSynthesisCallbackDelegate_27; }
	inline void set_translationSynthesisCallbackDelegate_27(CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * value)
	{
		___translationSynthesisCallbackDelegate_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___translationSynthesisCallbackDelegate_27), (void*)value);
	}

	inline static int32_t get_offset_of_audioInputKeepAlive_28() { return static_cast<int32_t>(offsetof(TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA, ___audioInputKeepAlive_28)); }
	inline AudioConfig_tCB874753FD328FB0FE6B8176886CD6DD2E1D610A * get_audioInputKeepAlive_28() const { return ___audioInputKeepAlive_28; }
	inline AudioConfig_tCB874753FD328FB0FE6B8176886CD6DD2E1D610A ** get_address_of_audioInputKeepAlive_28() { return &___audioInputKeepAlive_28; }
	inline void set_audioInputKeepAlive_28(AudioConfig_tCB874753FD328FB0FE6B8176886CD6DD2E1D610A * value)
	{
		___audioInputKeepAlive_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioInputKeepAlive_28), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult
struct  TranslationSynthesisResult_t3B0D43E9706F4004196979AE34C7DAF4EDFDBAEA  : public RuntimeObject
{
public:
	// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_0;
	// System.Byte[] Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::audio
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___audio_1;
	// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::resultHandle
	InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___resultHandle_2;

public:
	inline static int32_t get_offset_of_U3CReasonU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TranslationSynthesisResult_t3B0D43E9706F4004196979AE34C7DAF4EDFDBAEA, ___U3CReasonU3Ek__BackingField_0)); }
	inline int32_t get_U3CReasonU3Ek__BackingField_0() const { return ___U3CReasonU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CReasonU3Ek__BackingField_0() { return &___U3CReasonU3Ek__BackingField_0; }
	inline void set_U3CReasonU3Ek__BackingField_0(int32_t value)
	{
		___U3CReasonU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_audio_1() { return static_cast<int32_t>(offsetof(TranslationSynthesisResult_t3B0D43E9706F4004196979AE34C7DAF4EDFDBAEA, ___audio_1)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_audio_1() const { return ___audio_1; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_audio_1() { return &___audio_1; }
	inline void set_audio_1(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___audio_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audio_1), (void*)value);
	}

	inline static int32_t get_offset_of_resultHandle_2() { return static_cast<int32_t>(offsetof(TranslationSynthesisResult_t3B0D43E9706F4004196979AE34C7DAF4EDFDBAEA, ___resultHandle_2)); }
	inline InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * get_resultHandle_2() const { return ___resultHandle_2; }
	inline InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA ** get_address_of_resultHandle_2() { return &___resultHandle_2; }
	inline void set_resultHandle_2(InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * value)
	{
		___resultHandle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resultHandle_2), (void*)value);
	}
};


// System.ApplicationException
struct  ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74  : public Exception_t
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate
struct  CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.HandleRelease
struct  HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Internal.SpxFactory_GetResultDelegate
struct  GetResultDelegate_tCCF20F70641FCD818F1873F47ADC40B7AFAF0B4C  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Recognizer_GetRecognizerFromConfigDelegate
struct  GetRecognizerFromConfigDelegate_t1E1956B672CBA1A2BDC15031DFC99B1DFBF39E26  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs
struct  SpeechRecognitionCanceledEventArgs_tBCBCCC3B812C7A93A2C69906C6CE21E4313AAFD0  : public SpeechRecognitionEventArgs_tDB55D8D092DA5EE56B1BBA231E256915FA8A6406
{
public:
	// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_7;
	// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_8;
	// System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::<ErrorDetails>k__BackingField
	String_t* ___U3CErrorDetailsU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CReasonU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SpeechRecognitionCanceledEventArgs_tBCBCCC3B812C7A93A2C69906C6CE21E4313AAFD0, ___U3CReasonU3Ek__BackingField_7)); }
	inline int32_t get_U3CReasonU3Ek__BackingField_7() const { return ___U3CReasonU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CReasonU3Ek__BackingField_7() { return &___U3CReasonU3Ek__BackingField_7; }
	inline void set_U3CReasonU3Ek__BackingField_7(int32_t value)
	{
		___U3CReasonU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CErrorCodeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SpeechRecognitionCanceledEventArgs_tBCBCCC3B812C7A93A2C69906C6CE21E4313AAFD0, ___U3CErrorCodeU3Ek__BackingField_8)); }
	inline int32_t get_U3CErrorCodeU3Ek__BackingField_8() const { return ___U3CErrorCodeU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CErrorCodeU3Ek__BackingField_8() { return &___U3CErrorCodeU3Ek__BackingField_8; }
	inline void set_U3CErrorCodeU3Ek__BackingField_8(int32_t value)
	{
		___U3CErrorCodeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CErrorDetailsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(SpeechRecognitionCanceledEventArgs_tBCBCCC3B812C7A93A2C69906C6CE21E4313AAFD0, ___U3CErrorDetailsU3Ek__BackingField_9)); }
	inline String_t* get_U3CErrorDetailsU3Ek__BackingField_9() const { return ___U3CErrorDetailsU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CErrorDetailsU3Ek__BackingField_9() { return &___U3CErrorDetailsU3Ek__BackingField_9; }
	inline void set_U3CErrorDetailsU3Ek__BackingField_9(String_t* value)
	{
		___U3CErrorDetailsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorDetailsU3Ek__BackingField_9), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult
struct  SpeechRecognitionResult_tBA7ADB26D600AEDF7114ABD5A8E1AE1C797F466E  : public RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429
{
public:

public:
};


// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs
struct  TranslationRecognitionCanceledEventArgs_tD05B18077AB718A788C24ADB4A1FE3CF2593FEFE  : public TranslationRecognitionEventArgs_tB91AB6FD826F377BB0C58DAB09D2FB2BEF06D002
{
public:
	// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_7;
	// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_8;
	// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::<ErrorDetails>k__BackingField
	String_t* ___U3CErrorDetailsU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CReasonU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(TranslationRecognitionCanceledEventArgs_tD05B18077AB718A788C24ADB4A1FE3CF2593FEFE, ___U3CReasonU3Ek__BackingField_7)); }
	inline int32_t get_U3CReasonU3Ek__BackingField_7() const { return ___U3CReasonU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CReasonU3Ek__BackingField_7() { return &___U3CReasonU3Ek__BackingField_7; }
	inline void set_U3CReasonU3Ek__BackingField_7(int32_t value)
	{
		___U3CReasonU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CErrorCodeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TranslationRecognitionCanceledEventArgs_tD05B18077AB718A788C24ADB4A1FE3CF2593FEFE, ___U3CErrorCodeU3Ek__BackingField_8)); }
	inline int32_t get_U3CErrorCodeU3Ek__BackingField_8() const { return ___U3CErrorCodeU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CErrorCodeU3Ek__BackingField_8() { return &___U3CErrorCodeU3Ek__BackingField_8; }
	inline void set_U3CErrorCodeU3Ek__BackingField_8(int32_t value)
	{
		___U3CErrorCodeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CErrorDetailsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TranslationRecognitionCanceledEventArgs_tD05B18077AB718A788C24ADB4A1FE3CF2593FEFE, ___U3CErrorDetailsU3Ek__BackingField_9)); }
	inline String_t* get_U3CErrorDetailsU3Ek__BackingField_9() const { return ___U3CErrorDetailsU3Ek__BackingField_9; }
	inline String_t** get_address_of_U3CErrorDetailsU3Ek__BackingField_9() { return &___U3CErrorDetailsU3Ek__BackingField_9; }
	inline void set_U3CErrorDetailsU3Ek__BackingField_9(String_t* value)
	{
		___U3CErrorDetailsU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorDetailsU3Ek__BackingField_9), (void*)value);
	}
};


// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult
struct  TranslationRecognitionResult_tE75370C810BE52E98050558DAF55C499C0E5C5A2  : public RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::translationTextResultMap
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___translationTextResultMap_6;

public:
	inline static int32_t get_offset_of_translationTextResultMap_6() { return static_cast<int32_t>(offsetof(TranslationRecognitionResult_tE75370C810BE52E98050558DAF55C499C0E5C5A2, ___translationTextResultMap_6)); }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * get_translationTextResultMap_6() const { return ___translationTextResultMap_6; }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC ** get_address_of_translationTextResultMap_6() { return &___translationTextResultMap_6; }
	inline void set_translationTextResultMap_6(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * value)
	{
		___translationTextResultMap_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___translationTextResultMap_6), (void*)value);
	}
};


// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
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


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>
struct  EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>
struct  EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>
struct  EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>
struct  EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>
struct  EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>
struct  EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs>
struct  EventHandler_1_tE345DD93C65E9D79DD98B8145C49470E0550EE61  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
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


// System.ObjectDisposedException
struct  ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A  : public InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1
{
public:
	// System.String System.ObjectDisposedException::objectName
	String_t* ___objectName_17;

public:
	inline static int32_t get_offset_of_objectName_17() { return static_cast<int32_t>(offsetof(ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A, ___objectName_17)); }
	inline String_t* get_objectName_17() const { return ___objectName_17; }
	inline String_t** get_address_of_objectName_17() { return &___objectName_17; }
	inline void set_objectName_17(String_t* value)
	{
		___objectName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectName_17), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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


// !!0[] System.Array::Empty<System.Object>()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method);
// T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * InteropSafeHandle_GetObjectFromWeakHandle_TisRuntimeObject_m40AA029F9816897CA5E260D26B4333E04316B1C2_gshared (intptr_t ___nativeHandle0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared (EventHandler_1_t10245A26B14DDE8DDFD5B263BDE0641F17DCFDC3 * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Byte>()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Array_Empty_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m6E1369AB0F50C5F57BD7D64D27D0FCA7828513DD_gshared_inline (const RuntimeMethod* method);

// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::.ctor(Microsoft.CognitiveServices.Speech.RecognitionResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails__ctor_m2AEA3FF2830DA2A22B120F39EAE10763223A38A5 (CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * __this, RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 * ___result0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfNull_mC3247410BA2C3E2E5E5EB0A5D03DA5ECC30C4FF5 (RuntimeObject * ___item0, String_t* ___message1, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_reason_canceled(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationReason&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CancellationDetails_result_get_reason_canceled_m8E2AC0B901F950ED5A144CEFA4AE4454EC72A4BE (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___result0, int32_t* ___reason1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfFail(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911 (intptr_t ___hr0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_Reason(Microsoft.CognitiveServices.Speech.CancellationReason)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CancellationDetails_set_Reason_m578B1960A6530BCC26465D19FFBBD66A74B3A9F3_inline (CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_canceled_error_code(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationErrorCode&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CancellationDetails_result_get_canceled_error_code_mC3014C1B8504724BFC14E4CF095474D3B6D91659 (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___result0, int32_t* ___errorCode1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorCode(Microsoft.CognitiveServices.Speech.CancellationErrorCode)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorCode_m17C4CA0669E323A99CF1EF485ECB7AE3C2D9737F_inline (CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorDetails(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorDetails_m612BA9D99F7B23DC7793DD5E9269C1B1B82CFC79_inline (CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72 (const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.CancellationDetails::get_Reason()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_Reason_mFA299E969201C80764CE51E9385C711D1A5BE7C4_inline (CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * __this, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorDetails()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* CancellationDetails_get_ErrorDetails_m753FE13177C2092EB81EBB530389877925316E2E_inline (CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m453C2840536781B718FF4D0F5C7EEC8E5481C435 (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085 (SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383 * __this, bool* ___success0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01 (SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline)(method);
}
// System.Object[] Microsoft.CognitiveServices.Speech.Internal.Diagnostics::Args(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Diagnostics_Args_m251253E55B990FCC7FF3EAD5A275736B01DBCB92 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Object[],System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics_SPX_TRACE_VERBOSE_m6908A21A209406C576DBADED0D873DE54C3E6735 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, int32_t ___line2, String_t* ___caller3, String_t* ___file4, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop::diagnostics_log_trace_string(System.Int32,System.String,System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsInterop_diagnostics_log_trace_string_m3E6E8D19DBDD8948CAC22FEDAAE1BEF27C5069E4 (int32_t ___level0, String_t* ___title1, String_t* ___fileName2, int32_t ___lineNumber3, String_t* ___message4, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle__ctor_m1C6D7FAF3570FDEB923B03B39966B9ACA1530442 (SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383 * __this, intptr_t ___invalidHandleValue0, bool ___ownsHandle1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SafeHandle_SetHandle_m84A4309A0B6AFD09D5CD087B172BF37F999CA288_inline (SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383 * __this, intptr_t ___handle0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.IntPtr::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPtr__ctor_mA56CC06850BB1156300659D754DDA844E8F755C6 (intptr_t* __this, int32_t ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.HandleRelease::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HandleRelease_Invoke_mA31FABBD50FD886AAB189A142C08D208E7CF88F1 (HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 * __this, intptr_t ___hresult0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogErrorIfFail(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD (intptr_t ___hr0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics_SPX_TRACE_VERBOSE_m426BBFEE0D63C3631ABC3B3DF179D99478F83CCC (String_t* ___message0, int32_t ___line1, String_t* ___caller2, String_t* ___file3, const RuntimeMethod* method);
// System.String System.IntPtr::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntPtr_ToString_m6ADB8DBD989D878D694B4031CC08461B1E2C51FF (intptr_t* __this, String_t* ___format0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.SafeHandle::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_Finalize_mF8763A690AA71052660B3DEF4D4CFE7C7EAF2AEF (SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383 * __this, const RuntimeMethod* method);
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0 (Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * __this, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_message(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_get_message_m95606AFC05E1D182E9BFD9E1B4399671BDB77C5C (intptr_t ___errorHandle0, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utf8StringMarshaler_MarshalNativeToManaged_mE3176B3F81593CCDD474A1DF3813804ECE4A79E7 (intptr_t ___native0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_error_code(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_get_error_code_m52E3DDF2AE7134765295E48E1E4352C626354A9D (intptr_t ___errorHandle0, const RuntimeMethod* method);
// System.Int32 System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_op_Explicit_mD69722A4C61D33FE70E790325C6E0DC690F9494F (intptr_t ___value0, const RuntimeMethod* method);
// System.Int32 System.IntPtr::ToInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_ToInt32_mD079F59AC1B0E135C9601014C12CE622EC2A083E (intptr_t* __this, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_release_m0A048C5108A6021E5B674AE40B2558586E697AED (intptr_t ___errorHandle0, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Explicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m62A5ED7757661C8DB6AEF4816829ED92A1929F91 (int32_t ___value0, const RuntimeMethod* method);
// System.Int32 Microsoft.CognitiveServices.Speech.Internal.SpxError::GetErrorCode(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpxError_GetErrorCode_mC3BB6E08711E97986F04F148CF10A99E6D0B6819 (intptr_t ___errorHandle0, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.Internal.SpxError::GetMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpxError_GetMessage_m506E5ABB75630EE5E4B0EC3CA995C4E7DB1A6CBE (intptr_t ___errorHandle0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m62102CA65546AE151DC8254B72110F4AA48E2135 (String_t* ___value0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * CultureInfo_get_CurrentCulture_mD86F3D8E5D332FB304F80D9B9CA4DE849C2A6831 (const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_mE527694B0C55AE14FDCBE1D9C848446C18E22C09 (int32_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.String::ToLower(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m91732DBE4AE31B77EA3BB2C185E66513919968A5 (String_t* __this, CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___culture0, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m30892041DA5F50D7B8CFD82FFC0F55B5B97A2B7F (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject * ___arg02, const RuntimeMethod* method);
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.SpxError::ReleaseNoThrow(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpxError_ReleaseNoThrow_mD5BC5A60CF3E6942A0897C06A99B0F23929CA582 (intptr_t ___errorHandle0, const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mDC26CE8ECD0DDA5C8FA50C8E8B2614F3B50FC308 (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxError::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxError_Release_m2DA7CB533EAA4E308AB97DD5E67E91295DB4CFC3 (intptr_t ___errorHandle0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_m3BFCB876D7469108C8676D6DD90D943806C13A58 (int32_t ___cb0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::Invoke(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetResultDelegate_Invoke_m1A07425BBA386BDA80E13AFAF93445F73BCD61DC (GetResultDelegate_tCCF20F70641FCD818F1873F47ADC40B7AFAF0B4C * __this, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_mF098DF00F5341FDE4747A6F2004D5A0C9B03ED85 (intptr_t ___hglobal0, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Addition(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644 (intptr_t ___pointer0, int32_t ___offset1, const RuntimeMethod* method);
// System.Byte System.Runtime.InteropServices.Marshal::ReadByte(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Marshal_ReadByte_mB4D51F2938DA99C179E0D8A23A5BDFB39EADF70D (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m64744D9E23AFC00AA06CD6B057E19B7C0CE4C0C2 (intptr_t ___source0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9 (const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utf8StringMarshaler_MarshalManagedToNative_mF66EF1E5F35BAE95CD414179F3EF8D672C098B3B (String_t* ___str0, int32_t* ___length1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m0486DFF229946F0F9E6A04DDDF3BC9E5F1609A5A (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___source0, int32_t ___startIndex1, intptr_t ___destination2, int32_t ___length3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::WriteByte(System.IntPtr,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_WriteByte_m5373E5581EE0B0BBA4EA518E2D5187BFE5466244 (intptr_t ___ptr0, uint8_t ___val1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.HandleRelease::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRelease__ctor_m38C14A53FE9403DFAD6B13923B2D9FACA01588AE (HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::.ctor(System.IntPtr,Microsoft.CognitiveServices.Speech.Internal.HandleRelease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteropSafeHandle__ctor_mABAE89E85BC9B1A642696DAF491F83BEA4A9A4BF (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * __this, intptr_t ___handle0, HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 * ___releaseHandle1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeHandle_Dispose_m6433E520A7D38A8C424843DFCDB5EF2384EC8A6A (SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383 * __this, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetPropertyString(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PropertyCollection_GetPropertyString_mD7C5DE1FC7DAA1A59F619945F21E70465DC65EEB (PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * __this, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___propHandle0, int32_t ___id1, String_t* ___name2, String_t* ___defaultValue3, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utf8StringMarshaler_MarshalManagedToNative_m2EB3F0F826B4A93D6C3A63565F0BEA647C0BAA34 (String_t* ___str0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_set_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_set_string_m254D86EE8C87716C0280F589951781F4B7E3E87F (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___propbag0, int32_t ___id1, intptr_t ___name2, intptr_t ___value3, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_get_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_get_string_m6A3EE72C8C9483AF2F42D5CB11C27EFCF5847398 (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___propbag0, int32_t ___id1, intptr_t ___name2, intptr_t ___defaultValue3, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_free_string(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_free_string_mA44FF2FF1DE00E76E1933C0620A19743E53E2065 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SessionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionEventArgs__ctor_m6EB4C8FB47CD8ACFDED454634F1E9C30E719805C (SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_offset(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognition_event_get_offset_mE3B3CAB20D9E25B244FBD501506EE0700BD23721 (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___eventHandle0, uint64_t* ___offset1, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::get_SessionId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* SessionEventArgs_get_SessionId_mF73CFD57B462E48C3591A157402336B3123DBFDD_inline (SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845 * __this, const RuntimeMethod* method);
// System.UInt64 Microsoft.CognitiveServices.Speech.RecognitionEventArgs::get_Offset()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint64_t RecognitionEventArgs_get_Offset_m1B25331E2A8187D036670E2F774D31AFA7A96C90_inline (RecognitionEventArgs_t2D86DE32531190D1EB7F13161D122F51921857B4 * __this, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetResultDelegate__ctor_mF25D15A597578900AB701F4ECFB335601637EFCB (GetResultDelegate_tCCF20F70641FCD818F1873F47ADC40B7AFAF0B4C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.String Microsoft.CognitiveServices.Speech.Internal.SpxFactory::GetDataFromHandleUsingDelegate(Microsoft.CognitiveServices.Speech.Internal.SpxFactory/GetResultDelegate,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpxFactory_GetDataFromHandleUsingDelegate_m864B17EE1E702BEEB5256615631DD41B11E21ACC (GetResultDelegate_tCCF20F70641FCD818F1873F47ADC40B7AFAF0B4C * ___functionPtr0, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___handle1, int32_t ___maxCharCount2, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_reason(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.ResultReason&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_reason_mA12191A2CF4F15BDEB0B9384864025F7AA1637FA (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___result0, int32_t* ___reason1, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_property_bag_m83F3C6584317CBE18F359A49CAA38D8A39BF8FD3 (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___result0, intptr_t* ___hpropbag1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection__ctor_mA9184AF1E753A0FA6F0AA9151AD16E9D2465A557 (PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * __this, intptr_t ___propertyBagPtr0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RecognitionResult_set_Properties_mC1A2601BE02CC3F56013BC78DE0B6080C8506897_inline (RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 * __this, PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * ___value0, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mF68EE0DEC1AA5ADE9DFEF9AE0508E428FBB10EFD (RuntimeObject* ___provider0, String_t* ___format1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStarted(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SetSessionStarted_mCF41D541D7BE7A62317E86900F2AA2623A0F1E56 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStopped(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SetSessionStopped_m1744D16CE80810C45299095BB9350EF74CD697F0 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechStartDetected(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SpeechStartDetected_m5A0303B793DEE63CA3E1C5360C0B3CFB051454F1 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechEndDetected(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SpeechEndDetected_m60B70E7C6524081E1C6E4E208EB989E6AF4FA984 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m8CF7D07846B0C741B04A2A4E5E9B5D505F4B3CCE (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_started_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_started_set_callback_mAD7BA5FACE695E2EF603EBAB87835F312E3DD5B3 (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoHandle0, CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SessionStarted_mABA2AFFD9ED2E90F78F52E09DDAAE6016D3D1290 (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SessionStarted_m1DEB85971A7C25D29EDBEA2C1969C15462973172 (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_stopped_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_stopped_set_callback_m8300A4A86349CEE28C34FF4AFAAE6CEB685A4CE2 (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoHandle0, CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SessionStopped_mCA2C511C7C5E2AC13CF61093BE2FFFE1FBF47584 (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SessionStopped_m6287430E5F33931F8D4705D273D335B5E30EF1EF (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_start_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_speech_start_detected_set_callback_m58AA90C6CD1B4F2190071E56A1AF2FBD5F179BF8 (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoHandle0, CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SpeechStartDetected_mB2B58A6A1CDCC75C1FA0C73F12D3E3214FD1237E (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SpeechStartDetected_mDDC93504ACEADE5901E702515CF5F624A45E1E39 (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_end_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_speech_end_detected_set_callback_mB106BEC5AE0BB846C4448C9A7FD63854AE536A43 (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoHandle0, CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SpeechEndDetected_m82C4AE98DD1AE4E7FCE970743E32E2F19B4BFD34 (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SpeechEndDetected_m4ECEDF962186E1CBA5D99C497C92D3BE1BFE8409 (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * ___value0, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E (RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackFunctionDelegate__ctor_mDE545F22DBFF62D4085AF8B43D6B192D54E00386 (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m91323BCB568B1150F90515EF862B00F193E77808 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle<Microsoft.CognitiveServices.Speech.Recognizer>(System.IntPtr)
inline Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9_mCE8339A439406C6DB4BBE679382FECAC5EA23270 (intptr_t ___nativeHandle0, const RuntimeMethod* method)
{
	return ((  Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * (*) (intptr_t, const RuntimeMethod*))InteropSafeHandle_GetObjectFromWeakHandle_TisRuntimeObject_m40AA029F9816897CA5E260D26B4333E04316B1C2_gshared)(___nativeHandle0, method);
}
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m4E30EF0CFE14A53FD5A09C654C00B8CB48ACDB8F (EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * __this, RuntimeObject * ___sender0, SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B *, RuntimeObject *, SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845 *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogError_m0A082DA2E1A7C1F0846E271B2AAA63673CE20402 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.RecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionEventArgs__ctor_m461FB32C4087EB9186809AA45718D717ABA56228 (RecognitionEventArgs_t2D86DE32531190D1EB7F13161D122F51921857B4 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m79DB36680671F98319E31F48ED4CF7D1B93C12D0 (EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * __this, RuntimeObject * ___sender0, RecognitionEventArgs_t2D86DE32531190D1EB7F13161D122F51921857B4 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F *, RuntimeObject *, RecognitionEventArgs_t2D86DE32531190D1EB7F13161D122F51921857B4 *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_m8B5D23EA08E42BDE6BC5233CC666295F19BBD2F9 (ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A * __this, String_t* ___objectName0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_async_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_async_handle_release_m91AD76F45CBBC2A1FC8B78A255D3D7E743F8DD70 (intptr_t ___asyncHandle0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_start_continuous_recognition_async_m2322F7A1288A1725BFF85E8951BF5BA92F064A1D (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoHandle0, intptr_t* ___asyncHandle1, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_start_continuous_recognition_async_wait_for_m25CC951D64F9416A6D9C02E5ADC467BEC087D8F2 (intptr_t ___asyncHandle0, uint32_t ___milliseconds1, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_stop_continuous_recognition_async_m47FE099E1180174B9C901384FAC5D4AE754C46AF (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoHandle0, intptr_t* ___asyncHandle1, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_stop_continuous_recognition_async_wait_for_mA778073DD4C45F082625DF485852B0D08EA69734 (intptr_t ___asyncHandle0, uint32_t ___milliseconds1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::Invoke(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetRecognizerFromConfigDelegate_Invoke_m14621955E4734DC3826C0529478917B086465142 (GetRecognizerFromConfigDelegate_t1E1956B672CBA1A2BDC15031DFC99B1DFBF39E26 * __this, intptr_t* ___phreco0, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___speechconfig1, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___audioInput2, const RuntimeMethod* method);
// System.Void System.GC::KeepAlive(System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void GC_KeepAlive_mE836EDA45A7C6BFDCEA004B9089FA6B4810BDA89 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7 (EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * __this, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfNull_m2979CAFE21C599A40FB34AAE7777FF5BF0B9E03C (intptr_t ___item0, String_t* ___message1, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_get_property_bag_m0FC35AFD276675B7761F5CF950AAA402FC53B01E (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___config0, intptr_t* ___propbag1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::SetProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig_SetProperty_mD3294ED7F69346BB957F2881AD9C4A94981C0981 (SpeechConfig_t5C54B0C8BD36B97C0B09863CD865EC1404749E25 * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_from_subscription(System.IntPtr&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_from_subscription_m6A4E54C48B3AF570223BFFACC0268DD6EB7ADD3E (intptr_t* ___config0, String_t* ___subscriptionKey1, String_t* ___region2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig__ctor_mAFAF1B4E70735A979E996E6894F40F75CDCD18C9 (SpeechConfig_t5C54B0C8BD36B97C0B09863CD865EC1404749E25 * __this, intptr_t ___configPtr0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionEventArgs__ctor_m579703E107124C6ABC9D07C40ACD3A2FDD241758 (SpeechRecognitionEventArgs_tDB55D8D092DA5EE56B1BBA231E256915FA8A6406 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::get_Result()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SpeechRecognitionResult_tBA7ADB26D600AEDF7114ABD5A8E1AE1C797F466E * SpeechRecognitionEventArgs_get_Result_m249E934B104F937DF7D70FC516EE99BB0A0F3564_inline (SpeechRecognitionEventArgs_tDB55D8D092DA5EE56B1BBA231E256915FA8A6406 * __this, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.CancellationDetails Microsoft.CognitiveServices.Speech.CancellationDetails::FromResult(Microsoft.CognitiveServices.Speech.RecognitionResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * CancellationDetails_FromResult_m8CC67B3B88A390519550F82FB06BFC5D49B972D8 (RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 * ___result0, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorCode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_ErrorCode_mE36061E2CA470971CC88AB5CE10759721C613098_inline (CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * __this, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_Reason()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_Reason_m5CE0AD1B468DB01E33DE3166D2BBACF1C7A75FA9_inline (SpeechRecognitionCanceledEventArgs_tBCBCCC3B812C7A93A2C69906C6CE21E4313AAFD0 * __this, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_ErrorCode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_ErrorCode_mFF19E44FF8FE7ED536A6196004FC481C064E0F5A_inline (SpeechRecognitionCanceledEventArgs_tBCBCCC3B812C7A93A2C69906C6CE21E4313AAFD0 * __this, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_result(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognition_event_get_result_m4DA203B63EF3F8E6944D99BB42D98653FDC2CEFC (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___eventHandle0, intptr_t* ___result1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionResult__ctor_mCC7AB8F002D2D18C570A516379BC02C53EFF0818 (SpeechRecognitionResult_tBA7ADB26D600AEDF7114ABD5A8E1AE1C797F466E * __this, intptr_t ___resultPtr0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionResult__ctor_m41A680284FE5920D28E7C9FF16AD7A671C9DB272 (RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 * __this, intptr_t ___resultHandlePtr0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Recognizing_m04B3941BCB305E6EEA61C01B25221B6AFCB64CF9 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Recognized_m7B66BF8F7176BA99BD0719398E3DBF5B227337AA (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Canceled_m196DE0AF9B978BF526926931E8C64745D4461C0E (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognizing_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognizing_set_callback_m28536074A86D5AB1369F95C9B714D7818C6311BA (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoHandle0, CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Recognizing_mBCFF45A9074293638177355466BDD25A76629F10 (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Recognizing_mF5B0896939F3941899B5FD62D42070B0677B3D18 (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognized_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognized_set_callback_m4F3B1CF5955A9020E1924AB56B002BAFD8B70B85 (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoHandle0, CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Recognized_m452CB6D9E14C9ECD47C1CA5E6A4F96A577B5D86B (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Recognized_m5FBC660836B737333CD28FB3977644D482D2056C (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_canceled_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_canceled_set_callback_m222AC60BE8CAAE0E00D5A8E50031C1F99BBC532D (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoHandle0, CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Canceled_mCE313D273999287BFE5BC37517E0C8573AE9169D (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Canceled_mE48E2516A2404852413FABE6AECB5E3E9A9A09CD (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetRecognizerFromConfigDelegate__ctor_m20C5D68DC30492452813140BDB2974219F284DF6 (GetRecognizerFromConfigDelegate_t1E1956B672CBA1A2BDC15031DFC99B1DFBF39E26 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Recognizer::FromConfig(Microsoft.CognitiveServices.Speech.Recognizer/GetRecognizerFromConfigDelegate,Microsoft.CognitiveServices.Speech.SpeechConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * Recognizer_FromConfig_m4EBC18E31B66DBBDE63534A28644AB6DD241C672 (GetRecognizerFromConfigDelegate_t1E1956B672CBA1A2BDC15031DFC99B1DFBF39E26 * ___fromConfig0, SpeechConfig_t5C54B0C8BD36B97C0B09863CD865EC1404749E25 * ___speechConfig1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer__ctor_m5A53BD63443FC453CD24FE2221074E3EC659E025 (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoHandle0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer__ctor_mA212ABA7ACCB40EB42D035F7EE635E78F6ED0F68 (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoPtr0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_get_property_bag_m78DB85D0F192B71179FB5431EF9964B091015F04 (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoHandle0, intptr_t* ___propbag1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpeechRecognizer_set_Properties_mF66781C8B847863D19D8E0772EC05E0F454EF510_inline (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * ___value0, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * Task_Run_m201E4C04F97BCF541633AF913DF20C6FF7872E44 (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___action0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Finalize_m9750ABD8D70F016156BD0F8663C9B4B6CE9CF373 (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechRecognizer::get_Properties()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * SpeechRecognizer_get_Properties_m56DA0677021BA0F40F75E11BEBCC4EDCCF95A6C4_inline (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Dispose_mB79F3964354355E1B534A782677B72F0F17FB3B6 (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, bool ___disposing0, const RuntimeMethod* method);
// T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle<Microsoft.CognitiveServices.Speech.SpeechRecognizer>(System.IntPtr)
inline SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797_mF0A7AE29CF9AD6E518EE1B837041B5E4B35C8372 (intptr_t ___nativeHandle0, const RuntimeMethod* method)
{
	return ((  SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * (*) (intptr_t, const RuntimeMethod*))InteropSafeHandle_GetObjectFromWeakHandle_TisRuntimeObject_m40AA029F9816897CA5E260D26B4333E04316B1C2_gshared)(___nativeHandle0, method);
}
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m9A97AA6A45E8637897E5E97B5035CAD3ACF39ADD (EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * __this, RuntimeObject * ___sender0, SpeechRecognitionEventArgs_tDB55D8D092DA5EE56B1BBA231E256915FA8A6406 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 *, RuntimeObject *, SpeechRecognitionEventArgs_tDB55D8D092DA5EE56B1BBA231E256915FA8A6406 *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionCanceledEventArgs__ctor_m634909B5124346C7611D9FBF6D082E72083165C2 (SpeechRecognitionCanceledEventArgs_tBCBCCC3B812C7A93A2C69906C6CE21E4313AAFD0 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mDB24E20590B78D77E4D86AB16DC5FC7D55444430 (EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * __this, RuntimeObject * ___sender0, SpeechRecognitionCanceledEventArgs_tBCBCCC3B812C7A93A2C69906C6CE21E4313AAFD0 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 *, RuntimeObject *, SpeechRecognitionCanceledEventArgs_tBCBCCC3B812C7A93A2C69906C6CE21E4313AAFD0 *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::DoAsyncRecognitionAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_DoAsyncRecognitionAction_mB64950A6774B0D59E72F2962E5E9A7409DCE46BF (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___recoImplAction0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::speech_translation_config_from_subscription(System.IntPtr&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechTranslationConfig_speech_translation_config_from_subscription_mEA0CE1B7F91F0FAD66E3C8646BD4258E347CA34D (intptr_t* ___config0, String_t* ___subscriptionKey1, String_t* ___region2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechTranslationConfig__ctor_m55A368968F153795FB4C81A583F53DBC8038A43A (SpeechTranslationConfig_t42B90011A1EF7B464F33442DC1CFCD9A37177A53 * __this, intptr_t ___configPtr0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::speech_translation_config_add_target_language(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechTranslationConfig_speech_translation_config_add_target_language_m1C5B2CEA7607CD1D8C2976DE379F10FDD4ABAF4B (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___config0, String_t* ___language1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionEventArgs__ctor_m6A2FF47E651A996D20F80B21B3216560BEA24494 (TranslationRecognitionEventArgs_tB91AB6FD826F377BB0C58DAB09D2FB2BEF06D002 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::get_Result()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TranslationRecognitionResult_tE75370C810BE52E98050558DAF55C499C0E5C5A2 * TranslationRecognitionEventArgs_get_Result_m1D7CE61478E280F8E2CFA1E050A8F9891CB332D2_inline (TranslationRecognitionEventArgs_tB91AB6FD826F377BB0C58DAB09D2FB2BEF06D002 * __this, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::get_Reason()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_Reason_mD37070031AD0BC2EBE4E541422AC2818CD29C3F1_inline (TranslationRecognitionCanceledEventArgs_tD05B18077AB718A788C24ADB4A1FE3CF2593FEFE * __this, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::get_ErrorCode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_ErrorCode_m4762F2622F4FB7A4285AD393CA46022DAA79D397_inline (TranslationRecognitionCanceledEventArgs_tD05B18077AB718A788C24ADB4A1FE3CF2593FEFE * __this, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionResult__ctor_m8F3AA678E2BF7392D54F788D8F0D6CE95A5FB1E3 (TranslationRecognitionResult_tE75370C810BE52E98050558DAF55C499C0E5C5A2 * __this, intptr_t ___resultPtr0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::GetTranslationTexts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionResult_GetTranslationTexts_m103345A1BADB5B14768AD76D750EF019C19C6CE4 (TranslationRecognitionResult_tE75370C810BE52E98050558DAF55C499C0E5C5A2 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCE84582533EA9934933F3F1496451F3D9DA652A4 (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, RuntimeObject * ___arg24, const RuntimeMethod* method);
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::get_Translations()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* TranslationRecognitionResult_get_Translations_mDB43E322D12D1158F3CB5673E154F631C59BB9C0_inline (TranslationRecognitionResult_tE75370C810BE52E98050558DAF55C499C0E5C5A2 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m1960AEAA9CE1FE1F69994434FFEAE113BD3AB3C7_inline (KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2_inline (KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___values0, const RuntimeMethod* method);
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::recognizer_result_handle_is_valid(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecognitionResult_recognizer_result_handle_is_valid_m0461056AE8F887067E41F90018147C90FD01A6DD (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___result0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_text_result_get_translation_text_buffer_header(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_translation_text_result_get_translation_text_buffer_header_m2668F37BF9FAE0D04F1D34C8B30AA4A8A6A954B3 (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___handle0, intptr_t ___translationResultBuffer1, int32_t* ___lengthPointer2, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::ReadIntPtr(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_ReadIntPtr_m9449B8C9A1B8247086FC76F54A4426B5B17E8811 (intptr_t ___ptr0, int32_t ___ofs1, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfFail(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfFail_m2528B3C10CA3FC050E6D01EFABF83CC88DBCA4D9 (bool ___item0, int32_t ___error1, const RuntimeMethod* method);
// System.Int32 System.IntPtr::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_get_Size_m1342A61F11766A494F2F90D9B68CADAD62261929 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Recognizing_mA8D429CB9E8FFEC7C10E1F070F665B0BA84B0030 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Recognized_mF4796E7E5F690D4341C2BE50E1D2A8BD88354429 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Canceled_mF5ABD120E0772BA94E219F2AEBE3A4967A14CC7C (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_SynthesisResult(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_SynthesisResult_mEAE05BBDCF505C4C9517E0A3B145F0A75D84D7AA (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Recognizing_mCA94FA9628897C281138E33F6041BE9B59EFBD4C (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Recognizing_mBA98EB8295ACBBDBACD6464704BD90B0BC1101AF (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Recognized_m4A7DA49CC499B3B602BBF7E50187E94B4B7ACFFA (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Recognized_m26E6A00A709B851FD5A922A37719C60A29A863BC (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Canceled_m8D6B743B7A6A3EAB92D6BBA248D2A259B38C8C7C (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Canceled_mD588774BEB68BD8897A6BFA332672912F143C591 (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer__ctor_m30A493F6AF8B764F06DE38D047B559FB7EAB4490 (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoHandle0, const RuntimeMethod* method);
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TranslationRecognizer_set_Properties_m2885A31BD24A148C4B8EB79CE438E44B2179B509_inline (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * ___value0, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::translator_synthesizing_audio_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_translator_synthesizing_audio_set_callback_mABB2BE127951DEDA4095F439B71E3FD4E453D0A0 (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoHandle0, CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * ___callback1, intptr_t ___context2, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::get_Properties()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * TranslationRecognizer_get_Properties_m925EB0FFA9D16E0D34BB44876AA8F6611E2839FA_inline (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, const RuntimeMethod* method);
// T Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::GetObjectFromWeakHandle<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer>(System.IntPtr)
inline TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA_m8B53FF5B5E0E2D9118937B5A7B1E220EF049F635 (intptr_t ___nativeHandle0, const RuntimeMethod* method)
{
	return ((  TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * (*) (intptr_t, const RuntimeMethod*))InteropSafeHandle_GetObjectFromWeakHandle_TisRuntimeObject_m40AA029F9816897CA5E260D26B4333E04316B1C2_gshared)(___nativeHandle0, method);
}
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mC83A79A4E6C5FD3F03F8C6D52AD4CE3844DA841E (EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * __this, RuntimeObject * ___sender0, TranslationRecognitionEventArgs_tB91AB6FD826F377BB0C58DAB09D2FB2BEF06D002 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 *, RuntimeObject *, TranslationRecognitionEventArgs_tB91AB6FD826F377BB0C58DAB09D2FB2BEF06D002 *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionCanceledEventArgs__ctor_m061014AA8EC6CB9F98D2A2CBC4F45F4901D460A2 (TranslationRecognitionCanceledEventArgs_tD05B18077AB718A788C24ADB4A1FE3CF2593FEFE * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m52B9B734688BBD70836B9BBAFB6EDA2DAB959B44 (EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * __this, RuntimeObject * ___sender0, TranslationRecognitionCanceledEventArgs_tD05B18077AB718A788C24ADB4A1FE3CF2593FEFE * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 *, RuntimeObject *, TranslationRecognitionCanceledEventArgs_tD05B18077AB718A788C24ADB4A1FE3CF2593FEFE *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisEventArgs__ctor_mFF2F042C77F2C9A53E5E3F84D82462F36E7F05B6 (TranslationSynthesisEventArgs_t6DA67C6A6D2C0FE0CE20022D868042E874475E6F * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m90C803730FBF6E32D7BCCBC18070173899ADA43C (EventHandler_1_tE345DD93C65E9D79DD98B8145C49470E0550EE61 * __this, RuntimeObject * ___sender0, TranslationSynthesisEventArgs_t6DA67C6A6D2C0FE0CE20022D868042E874475E6F * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tE345DD93C65E9D79DD98B8145C49470E0550EE61 *, RuntimeObject *, TranslationSynthesisEventArgs_t6DA67C6A6D2C0FE0CE20022D868042E874475E6F *, const RuntimeMethod*))EventHandler_1_Invoke_mBF3979EE17B68658C4C1AB3A8D64B24F263E3B98_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisResult__ctor_m691EEBD612C0DBAE4B5A22BE51ED709888F58A67 (TranslationSynthesisResult_t3B0D43E9706F4004196979AE34C7DAF4EDFDBAEA * __this, intptr_t ___resultPtr0, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::get_Result()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TranslationSynthesisResult_t3B0D43E9706F4004196979AE34C7DAF4EDFDBAEA * TranslationSynthesisEventArgs_get_Result_mD5DBCA2DDACD4B90254C208BD06385EDF6BBE10E_inline (TranslationSynthesisEventArgs_t6DA67C6A6D2C0FE0CE20022D868042E874475E6F * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Byte>()
inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Array_Empty_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m6E1369AB0F50C5F57BD7D64D27D0FCA7828513DD_inline (const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* (*) (const RuntimeMethod*))Array_Empty_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m6E1369AB0F50C5F57BD7D64D27D0FCA7828513DD_gshared_inline)(method);
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::GetAudioData(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisResult_GetAudioData_mE782E9A83EF85CFCA8B8AC3827CACF596834E8B1 (TranslationSynthesisResult_t3B0D43E9706F4004196979AE34C7DAF4EDFDBAEA * __this, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___resultHandle0, const RuntimeMethod* method);
// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::get_Reason()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t TranslationSynthesisResult_get_Reason_mDA53BB6A24DC0980CCA0179C1A299C8B65CF5B38_inline (TranslationSynthesisResult_t3B0D43E9706F4004196979AE34C7DAF4EDFDBAEA * __this, const RuntimeMethod* method);
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_synthesis_result_get_audio_data(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_translation_synthesis_result_get_audio_data_m2D2B7A555C4F1F6F3319CDB0BF3526DFCB1FB377 (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___handle0, intptr_t ___audioBuffer1, int32_t* ___lengthPointer2, const RuntimeMethod* method);
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
// Microsoft.CognitiveServices.Speech.CancellationDetails Microsoft.CognitiveServices.Speech.CancellationDetails::FromResult(Microsoft.CognitiveServices.Speech.RecognitionResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * CancellationDetails_FromResult_m8CC67B3B88A390519550F82FB06BFC5D49B972D8 (RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CancellationDetails_FromResult_m8CC67B3B88A390519550F82FB06BFC5D49B972D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 * L_0 = ___result0;
		CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * L_1 = (CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 *)il2cpp_codegen_object_new(CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2_il2cpp_TypeInfo_var);
		CancellationDetails__ctor_m2AEA3FF2830DA2A22B120F39EAE10763223A38A5(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::.ctor(Microsoft.CognitiveServices.Speech.RecognitionResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails__ctor_m2AEA3FF2830DA2A22B120F39EAE10763223A38A5 (CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * __this, RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CancellationDetails__ctor_m2AEA3FF2830DA2A22B120F39EAE10763223A38A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 * L_0 = ___result0;
		SpxExceptionThrower_ThrowIfNull_mC3247410BA2C3E2E5E5EB0A5D03DA5ECC30C4FF5(L_0, (String_t*)NULL, /*hidden argument*/NULL);
		RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 * L_1 = ___result0;
		__this->set_recognitionResult_3(L_1);
		RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 * L_2 = __this->get_recognitionResult_3();
		NullCheck(L_2);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_3 = L_2->get_resultHandle_4();
		SpxExceptionThrower_ThrowIfNull_mC3247410BA2C3E2E5E5EB0A5D03DA5ECC30C4FF5(L_3, _stringLiteralF0B90EAA04931E1B84895E58C51DDDC38AFB2345, /*hidden argument*/NULL);
		RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 * L_4 = __this->get_recognitionResult_3();
		NullCheck(L_4);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_5 = L_4->get_resultHandle_4();
		intptr_t L_6 = CancellationDetails_result_get_reason_canceled_m8E2AC0B901F950ED5A144CEFA4AE4454EC72A4BE(L_5, (int32_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		CancellationDetails_set_Reason_m578B1960A6530BCC26465D19FFBBD66A74B3A9F3_inline(__this, L_7, /*hidden argument*/NULL);
		RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 * L_8 = __this->get_recognitionResult_3();
		NullCheck(L_8);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_9 = L_8->get_resultHandle_4();
		intptr_t L_10 = CancellationDetails_result_get_canceled_error_code_mC3014C1B8504724BFC14E4CF095474D3B6D91659(L_9, (int32_t*)(&V_1), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_10, /*hidden argument*/NULL);
		int32_t L_11 = V_1;
		CancellationDetails_set_ErrorCode_m17C4CA0669E323A99CF1EF485ECB7AE3C2D9737F_inline(__this, L_11, /*hidden argument*/NULL);
		RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 * L_12 = __this->get_recognitionResult_3();
		NullCheck(L_12);
		PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * L_13 = VirtFuncInvoker0< PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * >::Invoke(7 /* Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::get_Properties() */, L_12);
		NullCheck(L_13);
		String_t* L_14 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(5 /* System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetProperty(Microsoft.CognitiveServices.Speech.PropertyId) */, L_13, ((int32_t)5001));
		CancellationDetails_set_ErrorDetails_m612BA9D99F7B23DC7793DD5E9269C1B1B82CFC79_inline(__this, L_14, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.CancellationDetails::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_Reason_mFA299E969201C80764CE51E9385C711D1A5BE7C4 (CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_Reason(Microsoft.CognitiveServices.Speech.CancellationReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails_set_Reason_m578B1960A6530BCC26465D19FFBBD66A74B3A9F3 (CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CReasonU3Ek__BackingField_0(L_0);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_ErrorCode_mE36061E2CA470971CC88AB5CE10759721C613098 (CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorCode(Microsoft.CognitiveServices.Speech.CancellationErrorCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorCode_m17C4CA0669E323A99CF1EF485ECB7AE3C2D9737F (CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CErrorCodeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.CancellationDetails::get_ErrorDetails()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CancellationDetails_get_ErrorDetails_m753FE13177C2092EB81EBB530389877925316E2E (CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CErrorDetailsU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.CancellationDetails::set_ErrorDetails(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorDetails_m612BA9D99F7B23DC7793DD5E9269C1B1B82CFC79 (CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CErrorDetailsU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.CancellationDetails::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CancellationDetails_ToString_m67736791E1C2E3D6ACE84615BA3051BFE0227453 (CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CancellationDetails_ToString_m67736791E1C2E3D6ACE84615BA3051BFE0227453_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_0 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		int32_t L_1 = CancellationDetails_get_Reason_mFA299E969201C80764CE51E9385C711D1A5BE7C4_inline(__this, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(CancellationReason_tE850B9758CF6EA974ED3DC804AF0AE703C9CED0E_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = CancellationDetails_get_ErrorDetails_m753FE13177C2092EB81EBB530389877925316E2E_inline(__this, /*hidden argument*/NULL);
		String_t* L_5 = String_Format_m453C2840536781B718FF4D0F5C7EEC8E5481C435(L_0, _stringLiteral2BFCEB216C43A8AD2C6BA42B18CCB9F67DFF8384, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * __this, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___hreco0, ___hevent1, ___context2);

}
// System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackFunctionDelegate__ctor_mDE545F22DBFF62D4085AF8B43D6B192D54E00386 (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackFunctionDelegate_Invoke_mC262ABC4DA504D29BA712468E9DC1D68ED64A035 (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * __this, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___context2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___hreco0, ___hevent1, ___context2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___hreco0, ___hevent1, ___context2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___hreco0, ___hevent1, ___context2);
					else
						GenericVirtActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___hreco0, ___hevent1, ___context2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___hreco0, ___hevent1, ___context2);
					else
						VirtActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___hreco0, ___hevent1, ___context2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___hreco0) - 1), ___hevent1, ___context2, targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___hreco0, ___hevent1, ___context2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CallbackFunctionDelegate_BeginInvoke_m3D5F5039A15007348CAA8C088F795C5B9C87063B (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * __this, intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___context2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CallbackFunctionDelegate_BeginInvoke_m3D5F5039A15007348CAA8C088F795C5B9C87063B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___hreco0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___hevent1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___context2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CallbackFunctionDelegate_EndInvoke_mF17613B270D3C9BFDE8C80B6052F5BFFC0E14B20 (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL result_get_reason_canceled(void*, int32_t*);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_reason_canceled(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationReason&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CancellationDetails_result_get_reason_canceled_m8E2AC0B901F950ED5A144CEFA4AE4454EC72A4BE (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___result0, int32_t* ___reason1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_reason_canceled", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_reason_canceled)(____result0_marshaled, ___reason1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___reason1);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___result0, NULL);
	}

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL result_get_canceled_error_code(void*, int32_t*);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.CancellationDetails::result_get_canceled_error_code(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.CancellationErrorCode&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t CancellationDetails_result_get_canceled_error_code_mC3014C1B8504724BFC14E4CF095474D3B6D91659 (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___result0, int32_t* ___errorCode1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_canceled_error_code", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_canceled_error_code)(____result0_marshaled, ___errorCode1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___errorCode1);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___result0, NULL);
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object[] Microsoft.CognitiveServices.Speech.Internal.Diagnostics::Args(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Diagnostics_Args_m251253E55B990FCC7FF3EAD5A275736B01DBCB92 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ___args0;
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics_SPX_TRACE_VERBOSE_m426BBFEE0D63C3631ABC3B3DF179D99478F83CCC (String_t* ___message0, int32_t ___line1, String_t* ___caller2, String_t* ___file3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Diagnostics_SPX_TRACE_VERBOSE_m426BBFEE0D63C3631ABC3B3DF179D99478F83CCC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Diagnostics_t28A15A1B1D7D8B65A3BB2DE322E40C272D46DE6F_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = Diagnostics_Args_m251253E55B990FCC7FF3EAD5A275736B01DBCB92(L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___line1;
		String_t* L_4 = ___caller2;
		String_t* L_5 = ___file3;
		Diagnostics_SPX_TRACE_VERBOSE_m6908A21A209406C576DBADED0D873DE54C3E6735(L_0, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::SPX_TRACE_VERBOSE(System.String,System.Object[],System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics_SPX_TRACE_VERBOSE_m6908A21A209406C576DBADED0D873DE54C3E6735 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, int32_t ___line2, String_t* ___caller3, String_t* ___file4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Diagnostics_SPX_TRACE_VERBOSE_m6908A21A209406C576DBADED0D873DE54C3E6735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___format0;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = ___args1;
		String_t* L_2 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = ___file4;
		int32_t L_4 = ___line2;
		String_t* L_5 = V_0;
		DiagnosticsInterop_diagnostics_log_trace_string_m3E6E8D19DBDD8948CAC22FEDAAE1BEF27C5069E4(((int32_t)16), _stringLiteral36CC7F353E484986A2C7074187724E66D7D8EB22, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.Diagnostics::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Diagnostics__cctor_m31311509DDC17D7F6EFF5F2FECB24F2C81A230C1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Diagnostics__cctor_m31311509DDC17D7F6EFF5F2FECB24F2C81A230C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_0, /*hidden argument*/NULL);
		((Diagnostics_t28A15A1B1D7D8B65A3BB2DE322E40C272D46DE6F_StaticFields*)il2cpp_codegen_static_fields_for(Diagnostics_t28A15A1B1D7D8B65A3BB2DE322E40C272D46DE6F_il2cpp_TypeInfo_var))->set_lockObj_0(L_0);
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
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void STDCALL diagnostics_log_trace_string(int32_t, char*, char*, int32_t, char*);
#endif
// System.Void Microsoft.CognitiveServices.Speech.Internal.DiagnosticsInterop::diagnostics_log_trace_string(System.Int32,System.String,System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsInterop_diagnostics_log_trace_string_m3E6E8D19DBDD8948CAC22FEDAAE1BEF27C5069E4 (int32_t ___level0, String_t* ___title1, String_t* ___fileName2, int32_t ___lineNumber3, String_t* ___message4, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc) (int32_t, char*, char*, int32_t, char*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t) + sizeof(char*) + sizeof(char*) + sizeof(int32_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "diagnostics_log_trace_string", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___title1' to native representation
	char* ____title1_marshaled = NULL;
	____title1_marshaled = il2cpp_codegen_marshal_string(___title1);

	// Marshaling of parameter '___fileName2' to native representation
	char* ____fileName2_marshaled = NULL;
	____fileName2_marshaled = il2cpp_codegen_marshal_string(___fileName2);

	// Marshaling of parameter '___message4' to native representation
	char* ____message4_marshaled = NULL;
	____message4_marshaled = il2cpp_codegen_marshal_string(___message4);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(diagnostics_log_trace_string)(___level0, ____title1_marshaled, ____fileName2_marshaled, ___lineNumber3, ____message4_marshaled);
	#else
	il2cppPInvokeFunc(___level0, ____title1_marshaled, ____fileName2_marshaled, ___lineNumber3, ____message4_marshaled);
	#endif

	// Marshaling cleanup of parameter '___title1' native representation
	il2cpp_codegen_marshal_free(____title1_marshaled);
	____title1_marshaled = NULL;

	// Marshaling cleanup of parameter '___fileName2' native representation
	il2cpp_codegen_marshal_free(____fileName2_marshaled);
	____fileName2_marshaled = NULL;

	// Marshaling cleanup of parameter '___message4' native representation
	il2cpp_codegen_marshal_free(____message4_marshaled);
	____message4_marshaled = NULL;

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_event_handle_release(intptr_t);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.EventArgs::recognizer_event_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t EventArgs_recognizer_event_handle_release_mA58732A27533E21F519F2812B9BB4E11D3FE6A0F (intptr_t ___eventHandle0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_event_handle_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_event_handle_release)(___eventHandle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___eventHandle0);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 (HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 * __this, intptr_t ___hresult0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___hresult0);

	return returnValue;
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.HandleRelease::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRelease__ctor_m38C14A53FE9403DFAD6B13923B2D9FACA01588AE (HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.HandleRelease::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HandleRelease_Invoke_mA31FABBD50FD886AAB189A142C08D208E7CF88F1 (HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 * __this, intptr_t ___hresult0, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___hresult0, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___hresult0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___hresult0);
					else
						result = GenericVirtFuncInvoker1< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___hresult0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___hresult0);
					else
						result = VirtFuncInvoker1< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___hresult0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___hresult0) - 1), targetMethod);
				}
				typedef intptr_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___hresult0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.CognitiveServices.Speech.Internal.HandleRelease::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandleRelease_BeginInvoke_m1576462886942C995508EF4B25ACE0BD643AD4CC (HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 * __this, intptr_t ___hresult0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandleRelease_BeginInvoke_m1576462886942C995508EF4B25ACE0BD643AD4CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___hresult0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.HandleRelease::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t HandleRelease_EndInvoke_m61AD6E1B231ABB56127AECECC4CCF4EB49E84E82 (HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::.ctor(System.IntPtr,Microsoft.CognitiveServices.Speech.Internal.HandleRelease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteropSafeHandle__ctor_mABAE89E85BC9B1A642696DAF491F83BEA4A9A4BF (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * __this, intptr_t ___handle0, HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 * ___releaseHandle1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteropSafeHandle__ctor_mABAE89E85BC9B1A642696DAF491F83BEA4A9A4BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SafeHandle__ctor_m1C6D7FAF3570FDEB923B03B39966B9ACA1530442(__this, (intptr_t)(0), (bool)1, /*hidden argument*/NULL);
		HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 * L_0 = ___releaseHandle1;
		__this->set_releaseHandleFunc_6(L_0);
		intptr_t L_1 = ___handle0;
		SafeHandle_SetHandle_m84A4309A0B6AFD09D5CD087B172BF37F999CA288_inline(__this, (intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::get_IsInvalid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteropSafeHandle_get_IsInvalid_m7B650E05CC0F9FDC965F989000D795364899B5EA (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteropSafeHandle_get_IsInvalid_m7B650E05CC0F9FDC965F989000D795364899B5EA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ((SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383 *)__this)->get_handle_0();
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		intptr_t L_2 = ((SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383 *)__this)->get_handle_0();
		intptr_t L_3;
		memset((&L_3), 0, sizeof(L_3));
		IntPtr__ctor_mA56CC06850BB1156300659D754DDA844E8F755C6((&L_3), (-1), /*hidden argument*/NULL);
		bool L_4 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_2, (intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0024:
	{
		return (bool)1;
	}
}
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::ReleaseHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteropSafeHandle_ReleaseHandle_m0F16317A8B4DAD0E7BB83AF9133F8347F215C96C (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteropSafeHandle_ReleaseHandle_m0F16317A8B4DAD0E7BB83AF9133F8347F215C96C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 * L_0 = __this->get_releaseHandleFunc_6();
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 * L_1 = __this->get_releaseHandleFunc_6();
		intptr_t L_2 = ((SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383 *)__this)->get_handle_0();
		NullCheck(L_1);
		intptr_t L_3 = HandleRelease_Invoke_mA31FABBD50FD886AAB189A142C08D208E7CF88F1(L_1, (intptr_t)L_2, /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD((intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_releaseHandleFunc_6((HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 *)NULL);
		((SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383 *)__this)->set_handle_0((intptr_t)(0));
	}

IL_0030:
	{
		return (bool)1;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteropSafeHandle_Dispose_mBAC748D63BED31C7AE9C52FAFD7021BAEF550E2A (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteropSafeHandle_Dispose_mBAC748D63BED31C7AE9C52FAFD7021BAEF550E2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___disposing0;
		bool L_1 = L_0;
		RuntimeObject * L_2 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_4 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral9587A06E8685138DFC15602C51FFD58FC042A52C, L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Diagnostics_t28A15A1B1D7D8B65A3BB2DE322E40C272D46DE6F_il2cpp_TypeInfo_var);
		Diagnostics_SPX_TRACE_VERBOSE_m426BBFEE0D63C3631ABC3B3DF179D99478F83CCC(L_4, ((int32_t)72), _stringLiteral878767DEA09DD65D9E99925D1BBF35B9EAD4D939, _stringLiteral373568A9B01F744F3AF1C97ECD130CD611D19585, /*hidden argument*/NULL);
		VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle() */, __this);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InteropSafeHandle_ToString_m7AFD257CCBD3614B93AB93FBAB3B20F0C2CA3D4D (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteropSafeHandle_ToString_m7AFD257CCBD3614B93AB93FBAB3B20F0C2CA3D4D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t* L_0 = ((SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383 *)__this)->get_address_of_handle_0();
		String_t* L_1 = IntPtr_ToString_m6ADB8DBD989D878D694B4031CC08461B1E2C51FF((intptr_t*)L_0, _stringLiteral35B7B3BC3A740D5C3ABCA0D75B53F0E1E1EE998A, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteropSafeHandle_Finalize_mC31469A6FA4524D8D5A9F478DB8862E03797FAEF (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteropSafeHandle_Finalize_mC31469A6FA4524D8D5A9F478DB8862E03797FAEF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralF8738A36F223E3439CE1D4B42CCD82871C33E94D, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Diagnostics_t28A15A1B1D7D8B65A3BB2DE322E40C272D46DE6F_il2cpp_TypeInfo_var);
		Diagnostics_SPX_TRACE_VERBOSE_m426BBFEE0D63C3631ABC3B3DF179D99478F83CCC(L_1, ((int32_t)93), _stringLiteral45CBA2DC20411DD9EC01754632B97E0F780E4D29, _stringLiteral373568A9B01F744F3AF1C97ECD130CD611D19585, /*hidden argument*/NULL);
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x31, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		SafeHandle_Finalize_mF8763A690AA71052660B3DEF4D4CFE7C7EAF2AEF(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x31, IL_0031)
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
// System.Void Microsoft.CognitiveServices.Speech.Internal.MonoPInvokeCallbackAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_m84F89E9CB4C97ED968D0BCAAF2FDBB52AC7CB666 (MonoPInvokeCallbackAttribute_t7E8F200D861B536FF25556F63B01F00935440ADB * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___t0;
		__this->set_type_0(L_0);
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
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL property_bag_set_string(void*, int32_t, intptr_t, intptr_t);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_set_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_set_string_m254D86EE8C87716C0280F589951781F4B7E3E87F (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___propbag0, int32_t ___id1, intptr_t ___name2, intptr_t ___value3, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, int32_t, intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "property_bag_set_string", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___propbag0' to native representation
	void* ____propbag0_marshaled = NULL;
	if (___propbag0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("propbag"), NULL);
	bool ___safeHandle_reference_incremented_for____propbag0 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___propbag0, (&___safeHandle_reference_incremented_for____propbag0), NULL);
	____propbag0_marshaled = reinterpret_cast<void*>((___propbag0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(property_bag_set_string)(____propbag0_marshaled, ___id1, ___name2, ___value3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____propbag0_marshaled, ___id1, ___name2, ___value3);
	#endif

	// Marshaling cleanup of parameter '___propbag0' native representation
	if (___safeHandle_reference_incremented_for____propbag0)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___propbag0, NULL);
	}

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL property_bag_get_string(void*, int32_t, intptr_t, intptr_t);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_get_string(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_get_string_m6A3EE72C8C9483AF2F42D5CB11C27EFCF5847398 (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___propbag0, int32_t ___id1, intptr_t ___name2, intptr_t ___defaultValue3, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, int32_t, intptr_t, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t) + sizeof(intptr_t) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "property_bag_get_string", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___propbag0' to native representation
	void* ____propbag0_marshaled = NULL;
	if (___propbag0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("propbag"), NULL);
	bool ___safeHandle_reference_incremented_for____propbag0 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___propbag0, (&___safeHandle_reference_incremented_for____propbag0), NULL);
	____propbag0_marshaled = reinterpret_cast<void*>((___propbag0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(property_bag_get_string)(____propbag0_marshaled, ___id1, ___name2, ___defaultValue3);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____propbag0_marshaled, ___id1, ___name2, ___defaultValue3);
	#endif

	// Marshaling cleanup of parameter '___propbag0' native representation
	if (___safeHandle_reference_incremented_for____propbag0)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___propbag0, NULL);
	}

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL property_bag_free_string(intptr_t);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_free_string(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_free_string_mA44FF2FF1DE00E76E1933C0620A19743E53E2065 (intptr_t ___ptr0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "property_bag_free_string", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(property_bag_free_string)(___ptr0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___ptr0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL property_bag_release(intptr_t);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.PropertyCollection::property_bag_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t PropertyCollection_property_bag_release_mA09923F79379625389DD82D332418C57163435B0 (intptr_t ___propbag0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "property_bag_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(property_bag_release)(___propbag0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___propbag0);
	#endif

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL result_get_reason(void*, int32_t*);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_reason(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.ResultReason&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_reason_mA12191A2CF4F15BDEB0B9384864025F7AA1637FA (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___result0, int32_t* ___reason1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_reason", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_reason)(____result0_marshaled, ___reason1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___reason1);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___result0, NULL);
	}

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL result_get_result_id(void*, intptr_t, uint32_t);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_result_id(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_result_id_m72882D96F5F2C62A44735EC4AE5F370FB852496E (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___result0, intptr_t ___resultId1, uint32_t ___resultIdLength2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_result_id", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_result_id)(____result0_marshaled, ___resultId1, ___resultIdLength2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___resultId1, ___resultIdLength2);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___result0, NULL);
	}

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL result_get_text(void*, intptr_t, uint32_t);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_text(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_text_m5282BD9595677A7E09ACD0D31D9298AB2B09B5C1 (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___result0, intptr_t ___text1, uint32_t ___textLength2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_text", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_text)(____result0_marshaled, ___text1, ___textLength2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___text1, ___textLength2);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___result0, NULL);
	}

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL result_get_property_bag(void*, intptr_t*);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::result_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_result_get_property_bag_m83F3C6584317CBE18F359A49CAA38D8A39BF8FD3 (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___result0, intptr_t* ___hpropbag1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "result_get_property_bag", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(result_get_property_bag)(____result0_marshaled, ___hpropbag1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____result0_marshaled, ___hpropbag1);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___result0, NULL);
	}

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t STDCALL recognizer_result_handle_is_valid(void*);
#endif
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::recognizer_result_handle_is_valid(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RecognitionResult_recognizer_result_handle_is_valid_m0461056AE8F887067E41F90018147C90FD01A6DD (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___result0, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc) (void*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_result_handle_is_valid", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___result0' to native representation
	void* ____result0_marshaled = NULL;
	if (___result0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("result"), NULL);
	bool ___safeHandle_reference_incremented_for____result0 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___result0, (&___safeHandle_reference_incremented_for____result0), NULL);
	____result0_marshaled = reinterpret_cast<void*>((___result0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_result_handle_is_valid)(____result0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____result0_marshaled);
	#endif

	// Marshaling cleanup of parameter '___result0' native representation
	if (___safeHandle_reference_incremented_for____result0)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___result0, NULL);
	}

	return static_cast<bool>(returnValue);
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_result_handle_release(intptr_t);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::recognizer_result_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_recognizer_result_handle_release_mCBF8BCD60731C507F593669FECC6DB7260F84ECC (intptr_t ___result0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_result_handle_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_result_handle_release)(___result0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___result0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL translation_text_result_get_translation_text_buffer_header(void*, intptr_t, int32_t*);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_text_result_get_translation_text_buffer_header(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_translation_text_result_get_translation_text_buffer_header_m2668F37BF9FAE0D04F1D34C8B30AA4A8A6A954B3 (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___handle0, intptr_t ___translationResultBuffer1, int32_t* ___lengthPointer2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "translation_text_result_get_translation_text_buffer_header", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___handle0' to native representation
	void* ____handle0_marshaled = NULL;
	if (___handle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("handle"), NULL);
	bool ___safeHandle_reference_incremented_for____handle0 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___handle0, (&___safeHandle_reference_incremented_for____handle0), NULL);
	____handle0_marshaled = reinterpret_cast<void*>((___handle0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(translation_text_result_get_translation_text_buffer_header)(____handle0_marshaled, ___translationResultBuffer1, ___lengthPointer2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____handle0_marshaled, ___translationResultBuffer1, ___lengthPointer2);
	#endif

	// Marshaling cleanup of parameter '___handle0' native representation
	if (___safeHandle_reference_incremented_for____handle0)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___handle0, NULL);
	}

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL translation_synthesis_result_get_audio_data(void*, intptr_t, int32_t*);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.RecognitionResult::translation_synthesis_result_get_audio_data(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t RecognitionResult_translation_synthesis_result_get_audio_data_m2D2B7A555C4F1F6F3319CDB0BF3526DFCB1FB377 (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___handle0, intptr_t ___audioBuffer1, int32_t* ___lengthPointer2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t, int32_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "translation_synthesis_result_get_audio_data", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___handle0' to native representation
	void* ____handle0_marshaled = NULL;
	if (___handle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("handle"), NULL);
	bool ___safeHandle_reference_incremented_for____handle0 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___handle0, (&___safeHandle_reference_incremented_for____handle0), NULL);
	____handle0_marshaled = reinterpret_cast<void*>((___handle0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(translation_synthesis_result_get_audio_data)(____handle0_marshaled, ___audioBuffer1, ___lengthPointer2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____handle0_marshaled, ___audioBuffer1, ___lengthPointer2);
	#endif

	// Marshaling cleanup of parameter '___handle0' native representation
	if (___safeHandle_reference_incremented_for____handle0)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___handle0, NULL);
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_get_property_bag(void*, intptr_t*);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_get_property_bag_m78DB85D0F192B71179FB5431EF9964B091015F04 (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoHandle0, intptr_t* ___propbag1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_get_property_bag", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_get_property_bag)(____recoHandle0_marshaled, ___propbag1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ___propbag1);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___recoHandle0, NULL);
	}

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_handle_release(intptr_t);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_handle_release_m81270BB2C41BB84A47D2DC443CDBAC7AA2141281 (intptr_t ___recoHandle0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_handle_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_handle_release)(___recoHandle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___recoHandle0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_start_continuous_recognition_async(void*, intptr_t*);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_start_continuous_recognition_async_m2322F7A1288A1725BFF85E8951BF5BA92F064A1D (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoHandle0, intptr_t* ___asyncHandle1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_start_continuous_recognition_async", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_start_continuous_recognition_async)(____recoHandle0_marshaled, ___asyncHandle1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ___asyncHandle1);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___recoHandle0, NULL);
	}

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_start_continuous_recognition_async_wait_for(intptr_t, uint32_t);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_start_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_start_continuous_recognition_async_wait_for_m25CC951D64F9416A6D9C02E5ADC467BEC087D8F2 (intptr_t ___asyncHandle0, uint32_t ___milliseconds1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_start_continuous_recognition_async_wait_for", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_start_continuous_recognition_async_wait_for)(___asyncHandle0, ___milliseconds1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___asyncHandle0, ___milliseconds1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_stop_continuous_recognition_async(void*, intptr_t*);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_stop_continuous_recognition_async_m47FE099E1180174B9C901384FAC5D4AE754C46AF (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoHandle0, intptr_t* ___asyncHandle1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_stop_continuous_recognition_async", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_stop_continuous_recognition_async)(____recoHandle0_marshaled, ___asyncHandle1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ___asyncHandle1);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___recoHandle0, NULL);
	}

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_stop_continuous_recognition_async_wait_for(intptr_t, uint32_t);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_stop_continuous_recognition_async_wait_for(System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_stop_continuous_recognition_async_wait_for_mA778073DD4C45F082625DF485852B0D08EA69734 (intptr_t ___asyncHandle0, uint32_t ___milliseconds1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_stop_continuous_recognition_async_wait_for", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_stop_continuous_recognition_async_wait_for)(___asyncHandle0, ___milliseconds1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___asyncHandle0, ___milliseconds1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_async_handle_release(intptr_t);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_async_handle_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_async_handle_release_m91AD76F45CBBC2A1FC8B78A255D3D7E743F8DD70 (intptr_t ___asyncHandle0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_async_handle_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_async_handle_release)(___asyncHandle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___asyncHandle0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_recognition_event_get_offset(void*, uint64_t*);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_offset(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognition_event_get_offset_mE3B3CAB20D9E25B244FBD501506EE0700BD23721 (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___eventHandle0, uint64_t* ___offset1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, uint64_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(uint64_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_recognition_event_get_offset", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___eventHandle0' to native representation
	void* ____eventHandle0_marshaled = NULL;
	if (___eventHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("eventHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____eventHandle0 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___eventHandle0, (&___safeHandle_reference_incremented_for____eventHandle0), NULL);
	____eventHandle0_marshaled = reinterpret_cast<void*>((___eventHandle0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_recognition_event_get_offset)(____eventHandle0_marshaled, ___offset1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____eventHandle0_marshaled, ___offset1);
	#endif

	// Marshaling cleanup of parameter '___eventHandle0' native representation
	if (___safeHandle_reference_incremented_for____eventHandle0)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___eventHandle0, NULL);
	}

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_session_event_get_session_id(void*, intptr_t, uint32_t);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_event_get_session_id(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_event_get_session_id_m4381CE0315B710E24BB0610D5C021D6FB6940FA6 (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___eventHandle0, intptr_t ___sessionIdStr1, uint32_t ___sessionId2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_session_event_get_session_id", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___eventHandle0' to native representation
	void* ____eventHandle0_marshaled = NULL;
	if (___eventHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("eventHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____eventHandle0 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___eventHandle0, (&___safeHandle_reference_incremented_for____eventHandle0), NULL);
	____eventHandle0_marshaled = reinterpret_cast<void*>((___eventHandle0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_session_event_get_session_id)(____eventHandle0_marshaled, ___sessionIdStr1, ___sessionId2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____eventHandle0_marshaled, ___sessionIdStr1, ___sessionId2);
	#endif

	// Marshaling cleanup of parameter '___eventHandle0' native representation
	if (___safeHandle_reference_incremented_for____eventHandle0)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___eventHandle0, NULL);
	}

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_recognition_event_get_result(void*, intptr_t*);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognition_event_get_result(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognition_event_get_result_m4DA203B63EF3F8E6944D99BB42D98653FDC2CEFC (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___eventHandle0, intptr_t* ___result1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_recognition_event_get_result", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___eventHandle0' to native representation
	void* ____eventHandle0_marshaled = NULL;
	if (___eventHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("eventHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____eventHandle0 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___eventHandle0, (&___safeHandle_reference_incremented_for____eventHandle0), NULL);
	____eventHandle0_marshaled = reinterpret_cast<void*>((___eventHandle0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_recognition_event_get_result)(____eventHandle0_marshaled, ___result1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____eventHandle0_marshaled, ___result1);
	#endif

	// Marshaling cleanup of parameter '___eventHandle0' native representation
	if (___safeHandle_reference_incremented_for____eventHandle0)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___eventHandle0, NULL);
	}

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_session_started_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_started_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_started_set_callback_mAD7BA5FACE695E2EF603EBAB87835F312E3DD5B3 (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoHandle0, CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_session_started_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_session_started_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___recoHandle0, NULL);
	}

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_session_stopped_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_session_stopped_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_session_stopped_set_callback_m8300A4A86349CEE28C34FF4AFAAE6CEB685A4CE2 (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoHandle0, CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_session_stopped_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_session_stopped_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___recoHandle0, NULL);
	}

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_speech_start_detected_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_start_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_speech_start_detected_set_callback_m58AA90C6CD1B4F2190071E56A1AF2FBD5F179BF8 (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoHandle0, CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_speech_start_detected_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_speech_start_detected_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___recoHandle0, NULL);
	}

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_speech_end_detected_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_speech_end_detected_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_speech_end_detected_set_callback_mB106BEC5AE0BB846C4448C9A7FD63854AE536A43 (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoHandle0, CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_speech_end_detected_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_speech_end_detected_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___recoHandle0, NULL);
	}

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_recognizing_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognizing_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognizing_set_callback_m28536074A86D5AB1369F95C9B714D7818C6311BA (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoHandle0, CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_recognizing_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_recognizing_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___recoHandle0, NULL);
	}

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_recognized_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_recognized_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_recognized_set_callback_m4F3B1CF5955A9020E1924AB56B002BAFD8B70B85 (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoHandle0, CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_recognized_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_recognized_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___recoHandle0, NULL);
	}

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_canceled_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::recognizer_canceled_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_recognizer_canceled_set_callback_m222AC60BE8CAAE0E00D5A8E50031C1F99BBC532D (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoHandle0, CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_canceled_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_canceled_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___recoHandle0, NULL);
	}

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL translator_synthesizing_audio_set_callback(void*, Il2CppMethodPointer, intptr_t);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Recognizer::translator_synthesizing_audio_set_callback(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.CallbackFunctionDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Recognizer_translator_synthesizing_audio_set_callback_mABB2BE127951DEDA4095F439B71E3FD4E453D0A0 (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoHandle0, CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * ___callback1, intptr_t ___context2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(void*) + sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "translator_synthesizing_audio_set_callback", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___recoHandle0' to native representation
	void* ____recoHandle0_marshaled = NULL;
	if (___recoHandle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("recoHandle"), NULL);
	bool ___safeHandle_reference_incremented_for____recoHandle0 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___recoHandle0, (&___safeHandle_reference_incremented_for____recoHandle0), NULL);
	____recoHandle0_marshaled = reinterpret_cast<void*>((___recoHandle0)->get_handle_0());

	// Marshaling of parameter '___callback1' to native representation
	Il2CppMethodPointer ____callback1_marshaled = NULL;
	____callback1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___callback1));

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(translator_synthesizing_audio_set_callback)(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____recoHandle0_marshaled, ____callback1_marshaled, ___context2);
	#endif

	// Marshaling cleanup of parameter '___recoHandle0' native representation
	if (___safeHandle_reference_incremented_for____recoHandle0)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___recoHandle0, NULL);
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL speech_config_from_subscription(intptr_t*, char*, char*);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_from_subscription(System.IntPtr&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_from_subscription_m6A4E54C48B3AF570223BFFACC0268DD6EB7ADD3E (intptr_t* ___config0, String_t* ___subscriptionKey1, String_t* ___region2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t*, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "speech_config_from_subscription", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___subscriptionKey1' to native representation
	char* ____subscriptionKey1_marshaled = NULL;
	____subscriptionKey1_marshaled = il2cpp_codegen_marshal_string(___subscriptionKey1);

	// Marshaling of parameter '___region2' to native representation
	char* ____region2_marshaled = NULL;
	____region2_marshaled = il2cpp_codegen_marshal_string(___region2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(speech_config_from_subscription)(___config0, ____subscriptionKey1_marshaled, ____region2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___config0, ____subscriptionKey1_marshaled, ____region2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___subscriptionKey1' native representation
	il2cpp_codegen_marshal_free(____subscriptionKey1_marshaled);
	____subscriptionKey1_marshaled = NULL;

	// Marshaling cleanup of parameter '___region2' native representation
	il2cpp_codegen_marshal_free(____region2_marshaled);
	____region2_marshaled = NULL;

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL speech_config_release(intptr_t);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_release_m810D0EEA705EE9AF26F7C4E8CE19E0C599F73F42 (intptr_t ___config0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "speech_config_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(speech_config_release)(___config0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___config0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL speech_config_get_property_bag(void*, intptr_t*);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechConfig::speech_config_get_property_bag(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechConfig_speech_config_get_property_bag_m0FC35AFD276675B7761F5CF950AAA402FC53B01E (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___config0, intptr_t* ___propbag1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "speech_config_get_property_bag", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___config0' to native representation
	void* ____config0_marshaled = NULL;
	if (___config0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("config"), NULL);
	bool ___safeHandle_reference_incremented_for____config0 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___config0, (&___safeHandle_reference_incremented_for____config0), NULL);
	____config0_marshaled = reinterpret_cast<void*>((___config0)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(speech_config_get_property_bag)(____config0_marshaled, ___propbag1);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____config0_marshaled, ___propbag1);
	#endif

	// Marshaling cleanup of parameter '___config0' native representation
	if (___safeHandle_reference_incremented_for____config0)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___config0, NULL);
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL speech_translation_config_from_subscription(intptr_t*, char*, char*);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::speech_translation_config_from_subscription(System.IntPtr&,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechTranslationConfig_speech_translation_config_from_subscription_mEA0CE1B7F91F0FAD66E3C8646BD4258E347CA34D (intptr_t* ___config0, String_t* ___subscriptionKey1, String_t* ___region2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t*, char*, char*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(char*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "speech_translation_config_from_subscription", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___subscriptionKey1' to native representation
	char* ____subscriptionKey1_marshaled = NULL;
	____subscriptionKey1_marshaled = il2cpp_codegen_marshal_string(___subscriptionKey1);

	// Marshaling of parameter '___region2' to native representation
	char* ____region2_marshaled = NULL;
	____region2_marshaled = il2cpp_codegen_marshal_string(___region2);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(speech_translation_config_from_subscription)(___config0, ____subscriptionKey1_marshaled, ____region2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___config0, ____subscriptionKey1_marshaled, ____region2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___subscriptionKey1' native representation
	il2cpp_codegen_marshal_free(____subscriptionKey1_marshaled);
	____subscriptionKey1_marshaled = NULL;

	// Marshaling cleanup of parameter '___region2' native representation
	il2cpp_codegen_marshal_free(____region2_marshaled);
	____region2_marshaled = NULL;

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL speech_translation_config_add_target_language(void*, char*);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpeechTranslationConfig::speech_translation_config_add_target_language(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpeechTranslationConfig_speech_translation_config_add_target_language_m1C5B2CEA7607CD1D8C2976DE379F10FDD4ABAF4B (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___config0, String_t* ___language1, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (void*, char*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "speech_translation_config_add_target_language", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___config0' to native representation
	void* ____config0_marshaled = NULL;
	if (___config0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("config"), NULL);
	bool ___safeHandle_reference_incremented_for____config0 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___config0, (&___safeHandle_reference_incremented_for____config0), NULL);
	____config0_marshaled = reinterpret_cast<void*>((___config0)->get_handle_0());

	// Marshaling of parameter '___language1' to native representation
	char* ____language1_marshaled = NULL;
	____language1_marshaled = il2cpp_codegen_marshal_string(___language1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(speech_translation_config_add_target_language)(____config0_marshaled, ____language1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____config0_marshaled, ____language1_marshaled);
	#endif

	// Marshaling cleanup of parameter '___config0' native representation
	if (___safeHandle_reference_incremented_for____config0)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___config0, NULL);
	}

	// Marshaling cleanup of parameter '___language1' native representation
	il2cpp_codegen_marshal_free(____language1_marshaled);
	____language1_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Microsoft.CognitiveServices.Speech.Internal.SpxError::GetMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpxError_GetMessage_m506E5ABB75630EE5E4B0EC3CA995C4E7DB1A6CBE (intptr_t ___errorHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpxError_GetMessage_m506E5ABB75630EE5E4B0EC3CA995C4E7DB1A6CBE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_0;
		intptr_t L_1 = ___errorHandle0;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t9D55DE98A6FCFAB772164D80F70B6393100AE342_il2cpp_TypeInfo_var);
		intptr_t L_2 = SpxError_error_get_message_m95606AFC05E1D182E9BFD9E1B4399671BDB77C5C((intptr_t)L_1, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_2;
		intptr_t L_3 = V_1;
		bool L_4 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		intptr_t L_5 = V_1;
		String_t* L_6 = Utf8StringMarshaler_MarshalNativeToManaged_mE3176B3F81593CCDD474A1DF3813804ECE4A79E7((intptr_t)L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0021:
	{
		String_t* L_7 = V_0;
		return L_7;
	}
}
// System.Int32 Microsoft.CognitiveServices.Speech.Internal.SpxError::GetErrorCode(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpxError_GetErrorCode_mC3BB6E08711E97986F04F148CF10A99E6D0B6819 (intptr_t ___errorHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpxError_GetErrorCode_mC3BB6E08711E97986F04F148CF10A99E6D0B6819_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		intptr_t L_0 = ___errorHandle0;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t9D55DE98A6FCFAB772164D80F70B6393100AE342_il2cpp_TypeInfo_var);
		intptr_t L_1 = SpxError_error_get_error_code_m52E3DDF2AE7134765295E48E1E4352C626354A9D((intptr_t)L_0, /*hidden argument*/NULL);
		int32_t L_2 = IntPtr_op_Explicit_mD69722A4C61D33FE70E790325C6E0DC690F9494F((intptr_t)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_4 = IntPtr_ToInt32_mD079F59AC1B0E135C9601014C12CE622EC2A083E((intptr_t*)(&___errorHandle0), /*hidden argument*/NULL);
		return L_4;
	}

IL_0017:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxError::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxError_Release_m2DA7CB533EAA4E308AB97DD5E67E91295DB4CFC3 (intptr_t ___errorHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpxError_Release_m2DA7CB533EAA4E308AB97DD5E67E91295DB4CFC3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___errorHandle0;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t9D55DE98A6FCFAB772164D80F70B6393100AE342_il2cpp_TypeInfo_var);
		intptr_t L_1 = SpxError_error_release_m0A048C5108A6021E5B674AE40B2558586E697AED((intptr_t)L_0, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.CognitiveServices.Speech.Internal.SpxError::ReleaseNoThrow(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpxError_ReleaseNoThrow_mD5BC5A60CF3E6942A0897C06A99B0F23929CA582 (intptr_t ___errorHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpxError_ReleaseNoThrow_mD5BC5A60CF3E6942A0897C06A99B0F23929CA582_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___errorHandle0;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t9D55DE98A6FCFAB772164D80F70B6393100AE342_il2cpp_TypeInfo_var);
		intptr_t L_1 = SpxError_error_release_m0A048C5108A6021E5B674AE40B2558586E697AED((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		intptr_t L_2 = V_0;
		bool L_3 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		return L_3;
	}
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL error_get_message(intptr_t);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_message(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_get_message_m95606AFC05E1D182E9BFD9E1B4399671BDB77C5C (intptr_t ___errorHandle0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "error_get_message", IL2CPP_CALL_STDCALL, CHARSET_ANSI, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(error_get_message)(___errorHandle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___errorHandle0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL error_get_error_code(intptr_t);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_get_error_code(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_get_error_code_m52E3DDF2AE7134765295E48E1E4352C626354A9D (intptr_t ___errorHandle0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "error_get_error_code", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(error_get_error_code)(___errorHandle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___errorHandle0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL error_release(intptr_t);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxError::error_release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxError_error_release_m0A048C5108A6021E5B674AE40B2558586E697AED (intptr_t ___errorHandle0, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "error_release", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(error_release)(___errorHandle0);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___errorHandle0);
	#endif

	return returnValue;
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxError::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxError__cctor_m32BA068ABFF5B96AEDEEDAD9FA83D28BD0683F7B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpxError__cctor_m32BA068ABFF5B96AEDEEDAD9FA83D28BD0683F7B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = IntPtr_op_Explicit_m62A5ED7757661C8DB6AEF4816829ED92A1929F91(((int32_t)25), /*hidden argument*/NULL);
		((SpxError_t9D55DE98A6FCFAB772164D80F70B6393100AE342_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t9D55DE98A6FCFAB772164D80F70B6393100AE342_il2cpp_TypeInfo_var))->set_BufferTooSmall_0((intptr_t)L_0);
		intptr_t L_1 = IntPtr_op_Explicit_m62A5ED7757661C8DB6AEF4816829ED92A1929F91(((int32_t)27), /*hidden argument*/NULL);
		((SpxError_t9D55DE98A6FCFAB772164D80F70B6393100AE342_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t9D55DE98A6FCFAB772164D80F70B6393100AE342_il2cpp_TypeInfo_var))->set_RuntimeError_1((intptr_t)L_1);
		intptr_t L_2 = IntPtr_op_Explicit_m62A5ED7757661C8DB6AEF4816829ED92A1929F91(((int32_t)33), /*hidden argument*/NULL);
		((SpxError_t9D55DE98A6FCFAB772164D80F70B6393100AE342_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t9D55DE98A6FCFAB772164D80F70B6393100AE342_il2cpp_TypeInfo_var))->set_InvalidHandle_2((intptr_t)L_2);
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
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfFail(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911 (intptr_t ___hr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		intptr_t L_0 = ___hr0;
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005c;
		}
	}
	{
		intptr_t L_2 = ___hr0;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t9D55DE98A6FCFAB772164D80F70B6393100AE342_il2cpp_TypeInfo_var);
		int32_t L_3 = SpxError_GetErrorCode_mC3BB6E08711E97986F04F148CF10A99E6D0B6819((intptr_t)L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		intptr_t L_4 = ___hr0;
		String_t* L_5 = SpxError_GetMessage_m506E5ABB75630EE5E4B0EC3CA995C4E7DB1A6CBE((intptr_t)L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		String_t* L_6 = V_1;
		bool L_7 = String_IsNullOrWhiteSpace_m62102CA65546AE151DC8254B72110F4AA48E2135(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_8 = CultureInfo_get_CurrentCulture_mD86F3D8E5D332FB304F80D9B9CA4DE849C2A6831(/*hidden argument*/NULL);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_9 = CultureInfo_get_CurrentCulture_mD86F3D8E5D332FB304F80D9B9CA4DE849C2A6831(/*hidden argument*/NULL);
		String_t* L_10 = Int32_ToString_mE527694B0C55AE14FDCBE1D9C848446C18E22C09((int32_t*)(&V_0), _stringLiteralC032ADC1FF629C9B66F22749AD667E6BEADF144B, L_9, /*hidden argument*/NULL);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_11 = CultureInfo_get_CurrentCulture_mD86F3D8E5D332FB304F80D9B9CA4DE849C2A6831(/*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_12 = String_ToLower_m91732DBE4AE31B77EA3BB2C185E66513919968A5(L_10, L_11, /*hidden argument*/NULL);
		String_t* L_13 = String_Format_m30892041DA5F50D7B8CFD82FFC0F55B5B97A2B7F(L_8, _stringLiteral64085F963C39744AD35D09F73B1738EC5A984B3A, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
	}

IL_004e:
	{
		intptr_t L_14 = ___hr0;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t9D55DE98A6FCFAB772164D80F70B6393100AE342_il2cpp_TypeInfo_var);
		SpxError_ReleaseNoThrow_mD5BC5A60CF3E6942A0897C06A99B0F23929CA582((intptr_t)L_14, /*hidden argument*/NULL);
		String_t* L_15 = V_1;
		ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * L_16 = (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 *)il2cpp_codegen_object_new(ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var);
		ApplicationException__ctor_mDC26CE8ECD0DDA5C8FA50C8E8B2614F3B50FC308(L_16, L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911_RuntimeMethod_var);
	}

IL_005c:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfNull_mC3247410BA2C3E2E5E5EB0A5D03DA5ECC30C4FF5 (RuntimeObject * ___item0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpxExceptionThrower_ThrowIfNull_mC3247410BA2C3E2E5E5EB0A5D03DA5ECC30C4FF5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___item0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1 = ___message1;
		bool L_2 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		___message1 = _stringLiteral0B69D15E3C902F5DFC0442C5043DE38983103D08;
	}

IL_0012:
	{
		String_t* L_3 = ___message1;
		ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * L_4 = (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 *)il2cpp_codegen_object_new(ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var);
		ApplicationException__ctor_mDC26CE8ECD0DDA5C8FA50C8E8B2614F3B50FC308(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, SpxExceptionThrower_ThrowIfNull_mC3247410BA2C3E2E5E5EB0A5D03DA5ECC30C4FF5_RuntimeMethod_var);
	}

IL_0019:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfNull(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfNull_m2979CAFE21C599A40FB34AAE7777FF5BF0B9E03C (intptr_t ___item0, String_t* ___message1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::ThrowIfFail(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_ThrowIfFail_m2528B3C10CA3FC050E6D01EFABF83CC88DBCA4D9 (bool ___item0, int32_t ___error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpxExceptionThrower_ThrowIfFail_m2528B3C10CA3FC050E6D01EFABF83CC88DBCA4D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		bool L_0 = ___item0;
		if (L_0)
		{
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_1 = CultureInfo_get_CurrentCulture_mD86F3D8E5D332FB304F80D9B9CA4DE849C2A6831(/*hidden argument*/NULL);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_2 = CultureInfo_get_CurrentCulture_mD86F3D8E5D332FB304F80D9B9CA4DE849C2A6831(/*hidden argument*/NULL);
		String_t* L_3 = Int32_ToString_mE527694B0C55AE14FDCBE1D9C848446C18E22C09((int32_t*)(&___error1), _stringLiteralC032ADC1FF629C9B66F22749AD667E6BEADF144B, L_2, /*hidden argument*/NULL);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_4 = CultureInfo_get_CurrentCulture_mD86F3D8E5D332FB304F80D9B9CA4DE849C2A6831(/*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_5 = String_ToLower_m91732DBE4AE31B77EA3BB2C185E66513919968A5(L_3, L_4, /*hidden argument*/NULL);
		String_t* L_6 = String_Format_m30892041DA5F50D7B8CFD82FFC0F55B5B97A2B7F(L_1, _stringLiteral1F49328DEA07F5DC1396FEA989A59FA53140C93A, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7 = V_0;
		ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 * L_8 = (ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74 *)il2cpp_codegen_object_new(ApplicationException_t664823C3E0D3E1E7C7FA1C0DB4E19E98E9811C74_il2cpp_TypeInfo_var);
		ApplicationException__ctor_mDC26CE8ECD0DDA5C8FA50C8E8B2614F3B50FC308(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, SpxExceptionThrower_ThrowIfFail_m2528B3C10CA3FC050E6D01EFABF83CC88DBCA4D9_RuntimeMethod_var);
	}

IL_0035:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogErrorIfFail(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD (intptr_t ___hr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		intptr_t L_0 = ___hr0;
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		intptr_t L_2 = ___hr0;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t9D55DE98A6FCFAB772164D80F70B6393100AE342_il2cpp_TypeInfo_var);
		int32_t L_3 = SpxError_GetErrorCode_mC3BB6E08711E97986F04F148CF10A99E6D0B6819((intptr_t)L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_4 = CultureInfo_get_CurrentCulture_mD86F3D8E5D332FB304F80D9B9CA4DE849C2A6831(/*hidden argument*/NULL);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_5 = CultureInfo_get_CurrentCulture_mD86F3D8E5D332FB304F80D9B9CA4DE849C2A6831(/*hidden argument*/NULL);
		String_t* L_6 = Int32_ToString_mE527694B0C55AE14FDCBE1D9C848446C18E22C09((int32_t*)(&V_0), _stringLiteralC032ADC1FF629C9B66F22749AD667E6BEADF144B, L_5, /*hidden argument*/NULL);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_7 = CultureInfo_get_CurrentCulture_mD86F3D8E5D332FB304F80D9B9CA4DE849C2A6831(/*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_8 = String_ToLower_m91732DBE4AE31B77EA3BB2C185E66513919968A5(L_6, L_7, /*hidden argument*/NULL);
		String_t* L_9 = String_Format_m30892041DA5F50D7B8CFD82FFC0F55B5B97A2B7F(L_4, _stringLiteral8A718D1742D39AFA4BC354C36BD7F92926AD7B20, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		intptr_t L_10 = ___hr0;
		SpxError_Release_m2DA7CB533EAA4E308AB97DD5E67E91295DB4CFC3((intptr_t)L_10, /*hidden argument*/NULL);
	}

IL_0045:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxExceptionThrower::LogError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpxExceptionThrower_LogError_m0A082DA2E1A7C1F0846E271B2AAA63673CE20402 (String_t* ___message0, const RuntimeMethod* method)
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
// System.String Microsoft.CognitiveServices.Speech.Internal.SpxFactory::GetDataFromHandleUsingDelegate(Microsoft.CognitiveServices.Speech.Internal.SpxFactory_GetResultDelegate,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpxFactory_GetDataFromHandleUsingDelegate_m864B17EE1E702BEEB5256615631DD41B11E21ACC (GetResultDelegate_tCCF20F70641FCD818F1873F47ADC40B7AFAF0B4C * ___functionPtr0, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___handle1, int32_t ___maxCharCount2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpxFactory_GetDataFromHandleUsingDelegate_m864B17EE1E702BEEB5256615631DD41B11E21ACC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_0;
		int32_t L_1 = ___maxCharCount2;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		intptr_t L_2 = Marshal_AllocHGlobal_m3BFCB876D7469108C8676D6DD90D943806C13A58(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_2;
	}

IL_000f:
	try
	{ // begin try (depth: 1)
		GetResultDelegate_tCCF20F70641FCD818F1873F47ADC40B7AFAF0B4C * L_3 = ___functionPtr0;
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_4 = ___handle1;
		intptr_t L_5 = V_1;
		int32_t L_6 = ___maxCharCount2;
		NullCheck(L_3);
		intptr_t L_7 = GetResultDelegate_Invoke_m1A07425BBA386BDA80E13AFAF93445F73BCD61DC(L_3, L_4, (intptr_t)L_5, L_6, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_7, /*hidden argument*/NULL);
		intptr_t L_8 = V_1;
		String_t* L_9 = Utf8StringMarshaler_MarshalNativeToManaged_mE3176B3F81593CCDD474A1DF3813804ECE4A79E7((intptr_t)L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		IL2CPP_LEAVE(0x2D, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		intptr_t L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_mF098DF00F5341FDE4747A6F2004D5A0C9B03ED85((intptr_t)L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
	}

IL_002d:
	{
		String_t* L_11 = V_0;
		return L_11;
	}
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_create_speech_recognizer_from_config(intptr_t*, void*, void*);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory::recognizer_create_speech_recognizer_from_config(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxFactory_recognizer_create_speech_recognizer_from_config_mB5E66482C47F87CC44048B0190CB00A9C8F9C529 (intptr_t* ___recoHandle0, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___speechconfig1, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___audioInput2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t*, void*, void*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_create_speech_recognizer_from_config", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___speechconfig1' to native representation
	void* ____speechconfig1_marshaled = NULL;
	if (___speechconfig1 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("speechconfig"), NULL);
	bool ___safeHandle_reference_incremented_for____speechconfig1 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___speechconfig1, (&___safeHandle_reference_incremented_for____speechconfig1), NULL);
	____speechconfig1_marshaled = reinterpret_cast<void*>((___speechconfig1)->get_handle_0());

	// Marshaling of parameter '___audioInput2' to native representation
	void* ____audioInput2_marshaled = NULL;
	if (___audioInput2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("audioInput"), NULL);
	bool ___safeHandle_reference_incremented_for____audioInput2 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___audioInput2, (&___safeHandle_reference_incremented_for____audioInput2), NULL);
	____audioInput2_marshaled = reinterpret_cast<void*>((___audioInput2)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_create_speech_recognizer_from_config)(___recoHandle0, ____speechconfig1_marshaled, ____audioInput2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___recoHandle0, ____speechconfig1_marshaled, ____audioInput2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___speechconfig1' native representation
	if (___safeHandle_reference_incremented_for____speechconfig1)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___speechconfig1, NULL);
	}

	// Marshaling cleanup of parameter '___audioInput2' native representation
	if (___safeHandle_reference_incremented_for____audioInput2)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___audioInput2, NULL);
	}

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t STDCALL recognizer_create_translation_recognizer_from_config(intptr_t*, void*, void*);
#endif
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory::recognizer_create_translation_recognizer_from_config(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SpxFactory_recognizer_create_translation_recognizer_from_config_mB1DE2DFA2EAEC9857328CCAA2D62182FDD7F827A (intptr_t* ___recoHandle0, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___speechconfig1, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___audioInput2, const RuntimeMethod* method)
{
	typedef intptr_t (STDCALL *PInvokeFunc) (intptr_t*, void*, void*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*) + sizeof(void*) + sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("Microsoft.CognitiveServices.Speech.core.dll"), "recognizer_create_translation_recognizer_from_config", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___speechconfig1' to native representation
	void* ____speechconfig1_marshaled = NULL;
	if (___speechconfig1 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("speechconfig"), NULL);
	bool ___safeHandle_reference_incremented_for____speechconfig1 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___speechconfig1, (&___safeHandle_reference_incremented_for____speechconfig1), NULL);
	____speechconfig1_marshaled = reinterpret_cast<void*>((___speechconfig1)->get_handle_0());

	// Marshaling of parameter '___audioInput2' to native representation
	void* ____audioInput2_marshaled = NULL;
	if (___audioInput2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("audioInput"), NULL);
	bool ___safeHandle_reference_incremented_for____audioInput2 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___audioInput2, (&___safeHandle_reference_incremented_for____audioInput2), NULL);
	____audioInput2_marshaled = reinterpret_cast<void*>((___audioInput2)->get_handle_0());

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(recognizer_create_translation_recognizer_from_config)(___recoHandle0, ____speechconfig1_marshaled, ____audioInput2_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___recoHandle0, ____speechconfig1_marshaled, ____audioInput2_marshaled);
	#endif

	// Marshaling cleanup of parameter '___speechconfig1' native representation
	if (___safeHandle_reference_incremented_for____speechconfig1)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___speechconfig1, NULL);
	}

	// Marshaling cleanup of parameter '___audioInput2' native representation
	if (___safeHandle_reference_incremented_for____audioInput2)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___audioInput2, NULL);
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_GetResultDelegate_tCCF20F70641FCD818F1873F47ADC40B7AFAF0B4C (GetResultDelegate_tCCF20F70641FCD818F1873F47ADC40B7AFAF0B4C * __this, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(void*, intptr_t, uint32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___handle0' to native representation
	void* ____handle0_marshaled = NULL;
	if (___handle0 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("handle"), NULL);
	bool ___safeHandle_reference_incremented_for____handle0 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___handle0, (&___safeHandle_reference_incremented_for____handle0), NULL);
	____handle0_marshaled = reinterpret_cast<void*>((___handle0)->get_handle_0());

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(____handle0_marshaled, ___result1, ___maxCharCount2);

	// Marshaling cleanup of parameter '___handle0' native representation
	if (___safeHandle_reference_incremented_for____handle0)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___handle0, NULL);
	}

	return returnValue;
}
// System.Void Microsoft.CognitiveServices.Speech.Internal.SpxFactory_GetResultDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetResultDelegate__ctor_mF25D15A597578900AB701F4ECFB335601637EFCB (GetResultDelegate_tCCF20F70641FCD818F1873F47ADC40B7AFAF0B4C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory_GetResultDelegate::Invoke(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetResultDelegate_Invoke_m1A07425BBA386BDA80E13AFAF93445F73BCD61DC (GetResultDelegate_tCCF20F70641FCD818F1873F47ADC40B7AFAF0B4C * __this, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA *, intptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___handle0, ___result1, ___maxCharCount2, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA *, intptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___handle0, ___result1, ___maxCharCount2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker2< intptr_t, intptr_t, uint32_t >::Invoke(targetMethod, ___handle0, ___result1, ___maxCharCount2);
					else
						result = GenericVirtFuncInvoker2< intptr_t, intptr_t, uint32_t >::Invoke(targetMethod, ___handle0, ___result1, ___maxCharCount2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< intptr_t, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___handle0, ___result1, ___maxCharCount2);
					else
						result = VirtFuncInvoker2< intptr_t, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___handle0, ___result1, ___maxCharCount2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject*, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___result1) - 1), ___maxCharCount2, targetMethod);
				}
				typedef intptr_t (*FunctionPointerType) (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA *, intptr_t, uint32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___handle0, ___result1, ___maxCharCount2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< intptr_t, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA *, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___handle0, ___result1, ___maxCharCount2);
					else
						result = GenericVirtFuncInvoker3< intptr_t, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA *, intptr_t, uint32_t >::Invoke(targetMethod, targetThis, ___handle0, ___result1, ___maxCharCount2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< intptr_t, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA *, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___handle0, ___result1, ___maxCharCount2);
					else
						result = VirtFuncInvoker3< intptr_t, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA *, intptr_t, uint32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___handle0, ___result1, ___maxCharCount2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject*, intptr_t, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___handle0) - 1), ___result1, ___maxCharCount2, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef intptr_t (*FunctionPointerType) (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA *, intptr_t, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___handle0, ___result1, ___maxCharCount2, targetMethod);
				}
				else
				{
					typedef intptr_t (*FunctionPointerType) (void*, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA *, intptr_t, uint32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___handle0, ___result1, ___maxCharCount2, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.CognitiveServices.Speech.Internal.SpxFactory_GetResultDelegate::BeginInvoke(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.IntPtr,System.UInt32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetResultDelegate_BeginInvoke_m76BB19734CBBBAC73782A3F7A787E0BCA3CEE8AF (GetResultDelegate_tCCF20F70641FCD818F1873F47ADC40B7AFAF0B4C * __this, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___handle0, intptr_t ___result1, uint32_t ___maxCharCount2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GetResultDelegate_BeginInvoke_m76BB19734CBBBAC73782A3F7A787E0BCA3CEE8AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___handle0;
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___result1);
	__d_args[2] = Box(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var, &___maxCharCount2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.SpxFactory_GetResultDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetResultDelegate_EndInvoke_m13D38F9F57CD675AE1084BB48AE0F7C1A9CD8C41 (GetResultDelegate_tCCF20F70641FCD818F1873F47ADC40B7AFAF0B4C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalNativeToManaged(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utf8StringMarshaler_MarshalNativeToManaged_mE3176B3F81593CCDD474A1DF3813804ECE4A79E7 (intptr_t ___native0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utf8StringMarshaler_MarshalNativeToManaged_mE3176B3F81593CCDD474A1DF3813804ECE4A79E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_1 = NULL;
	{
		intptr_t L_0 = ___native0;
		bool L_1 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_2;
	}

IL_0013:
	{
		V_0 = 0;
		goto IL_001b;
	}

IL_0017:
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_001b:
	{
		intptr_t L_4 = ___native0;
		int32_t L_5 = V_0;
		intptr_t L_6 = IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644((intptr_t)L_4, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		uint8_t L_7 = Marshal_ReadByte_mB4D51F2938DA99C179E0D8A23A5BDFB39EADF70D((intptr_t)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)4194304))))
		{
			goto IL_0017;
		}
	}

IL_0031:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)4194304))))
		{
			goto IL_0058;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_10 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		int32_t L_11 = ((int32_t)4194304);
		RuntimeObject * L_12 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13 = String_Format_m30892041DA5F50D7B8CFD82FFC0F55B5B97A2B7F(L_10, _stringLiteralC024A2B5837E1949DB907276D6042F53F65D45E2, L_12, /*hidden argument*/NULL);
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_14 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, Utf8StringMarshaler_MarshalNativeToManaged_mE3176B3F81593CCDD474A1DF3813804ECE4A79E7_RuntimeMethod_var);
	}

IL_0058:
	{
		int32_t L_15 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_15);
		V_1 = L_16;
		intptr_t L_17 = ___native0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_18 = V_1;
		int32_t L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_Copy_m64744D9E23AFC00AA06CD6B057E19B7C0CE4C0C2((intptr_t)L_17, L_18, 0, L_19, /*hidden argument*/NULL);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_20 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_21 = V_1;
		NullCheck(L_20);
		String_t* L_22 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(42 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_20, L_21);
		return L_22;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utf8StringMarshaler_MarshalManagedToNative_m2EB3F0F826B4A93D6C3A63565F0BEA647C0BAA34 (String_t* ___str0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___str0;
		intptr_t L_1 = Utf8StringMarshaler_MarshalManagedToNative_mF66EF1E5F35BAE95CD414179F3EF8D672C098B3B(L_0, (int32_t*)(&V_0), /*hidden argument*/NULL);
		return (intptr_t)L_1;
	}
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Internal.Utf8StringMarshaler::MarshalManagedToNative(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utf8StringMarshaler_MarshalManagedToNative_mF66EF1E5F35BAE95CD414179F3EF8D672C098B3B (String_t* ___str0, int32_t* ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utf8StringMarshaler_MarshalManagedToNative_mF66EF1E5F35BAE95CD414179F3EF8D672C098B3B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		String_t* L_0 = ___str0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		int32_t* L_1 = ___length1;
		*((int32_t*)L_1) = (int32_t)0;
		return (intptr_t)(0);
	}

IL_000c:
	{
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_2 = Encoding_get_UTF8_m67C8652936B681E7BC7505E459E88790E0FF16D9(/*hidden argument*/NULL);
		String_t* L_3 = ___str0;
		NullCheck(L_2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = VirtFuncInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, String_t* >::Invoke(25 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, L_3);
		V_0 = L_4;
		int32_t* L_5 = ___length1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_6 = V_0;
		NullCheck(L_6);
		*((int32_t*)L_5) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))), (int32_t)1));
		int32_t* L_7 = ___length1;
		int32_t L_8 = *((int32_t*)L_7);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		intptr_t L_9 = Marshal_AllocHGlobal_m3BFCB876D7469108C8676D6DD90D943806C13A58(L_8, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_9;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_10 = V_0;
		intptr_t L_11 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_12 = V_0;
		NullCheck(L_12);
		Marshal_Copy_m0486DFF229946F0F9E6A04DDDF3BC9E5F1609A5A(L_10, 0, (intptr_t)L_11, (((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))), /*hidden argument*/NULL);
		intptr_t L_13 = V_1;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = V_0;
		NullCheck(L_14);
		intptr_t L_15 = IntPtr_op_Addition_mD815D6B36C7DFA1F89481720D3D46A6484BB9644((intptr_t)L_13, (((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))), /*hidden argument*/NULL);
		Marshal_WriteByte_m5373E5581EE0B0BBA4EA518E2D5187BFE5466244((intptr_t)L_15, (uint8_t)0, /*hidden argument*/NULL);
		intptr_t L_16 = V_1;
		return (intptr_t)L_16;
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
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection__ctor_mA9184AF1E753A0FA6F0AA9151AD16E9D2465A557 (PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * __this, intptr_t ___propertyBagPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyCollection__ctor_mA9184AF1E753A0FA6F0AA9151AD16E9D2465A557_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___propertyBagPtr0;
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		intptr_t L_2 = ___propertyBagPtr0;
		HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 * L_3 = (HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 *)il2cpp_codegen_object_new(HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4_il2cpp_TypeInfo_var);
		HandleRelease__ctor_m38C14A53FE9403DFAD6B13923B2D9FACA01588AE(L_3, NULL, (intptr_t)((intptr_t)PropertyCollection_property_bag_release_mA09923F79379625389DD82D332418C57163435B0_RuntimeMethod_var), /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_4 = (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA *)il2cpp_codegen_object_new(InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_mABAE89E85BC9B1A642696DAF491F83BEA4A9A4BF(L_4, (intptr_t)L_2, L_3, /*hidden argument*/NULL);
		__this->set_propbagHandle_0(L_4);
	}

IL_002b:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection_Close_mA9970357DE133999377FD4AC51B3B6EF4C1FC437 (PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * __this, const RuntimeMethod* method)
{
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_0 = __this->get_propbagHandle_0();
		NullCheck(L_0);
		SafeHandle_Dispose_m6433E520A7D38A8C424843DFCDB5EF2384EC8A6A(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetProperty(Microsoft.CognitiveServices.Speech.PropertyId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PropertyCollection_GetProperty_mDF937E9084584AF726BB281F07ED5E091F22D83B (PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyCollection_GetProperty_mDF937E9084584AF726BB281F07ED5E091F22D83B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_0 = __this->get_propbagHandle_0();
		SpxExceptionThrower_ThrowIfNull_mC3247410BA2C3E2E5E5EB0A5D03DA5ECC30C4FF5(L_0, (String_t*)NULL, /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_1 = __this->get_propbagHandle_0();
		int32_t L_2 = ___id0;
		String_t* L_3 = PropertyCollection_GetPropertyString_mD7C5DE1FC7DAA1A59F619945F21E70465DC65EEB(__this, L_1, L_2, (String_t*)NULL, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(Microsoft.CognitiveServices.Speech.PropertyId,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection_SetProperty_m679D655AE85517FA950ADCF4D89CD492D366D987 (PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * __this, int32_t ___id0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyCollection_SetProperty_m679D655AE85517FA950ADCF4D89CD492D366D987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_0 = __this->get_propbagHandle_0();
		SpxExceptionThrower_ThrowIfNull_mC3247410BA2C3E2E5E5EB0A5D03DA5ECC30C4FF5(L_0, (String_t*)NULL, /*hidden argument*/NULL);
		String_t* L_1 = ___value1;
		intptr_t L_2 = Utf8StringMarshaler_MarshalManagedToNative_m2EB3F0F826B4A93D6C3A63565F0BEA647C0BAA34(L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_3 = __this->get_propbagHandle_0();
		int32_t L_4 = ___id0;
		intptr_t L_5 = V_0;
		intptr_t L_6 = PropertyCollection_property_bag_set_string_m254D86EE8C87716C0280F589951781F4B7E3E87F(L_3, L_4, (intptr_t)(0), (intptr_t)L_5, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_6, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x33, FINALLY_002c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		intptr_t L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_mF098DF00F5341FDE4747A6F2004D5A0C9B03ED85((intptr_t)L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x33, IL_0033)
	}

IL_0033:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection_SetProperty_mA1833B3E126FF8240B3326AA80E9EAABD53534A4 (PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * __this, String_t* ___propertyName0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyCollection_SetProperty_mA1833B3E126FF8240B3326AA80E9EAABD53534A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_0 = __this->get_propbagHandle_0();
		SpxExceptionThrower_ThrowIfNull_mC3247410BA2C3E2E5E5EB0A5D03DA5ECC30C4FF5(L_0, (String_t*)NULL, /*hidden argument*/NULL);
		String_t* L_1 = ___value1;
		intptr_t L_2 = Utf8StringMarshaler_MarshalManagedToNative_m2EB3F0F826B4A93D6C3A63565F0BEA647C0BAA34(L_1, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		String_t* L_3 = ___propertyName0;
		intptr_t L_4 = Utf8StringMarshaler_MarshalManagedToNative_m2EB3F0F826B4A93D6C3A63565F0BEA647C0BAA34(L_3, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_4;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_5 = __this->get_propbagHandle_0();
		intptr_t L_6 = V_1;
		intptr_t L_7 = V_0;
		intptr_t L_8 = PropertyCollection_property_bag_set_string_m254D86EE8C87716C0280F589951781F4B7E3E87F(L_5, (-1), (intptr_t)L_6, (intptr_t)L_7, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_8, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x3C, FINALLY_002f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002f;
	}

FINALLY_002f:
	{ // begin finally (depth: 1)
		intptr_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_mF098DF00F5341FDE4747A6F2004D5A0C9B03ED85((intptr_t)L_9, /*hidden argument*/NULL);
		intptr_t L_10 = V_1;
		Marshal_FreeHGlobal_mF098DF00F5341FDE4747A6F2004D5A0C9B03ED85((intptr_t)L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(47)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(47)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
	}

IL_003c:
	{
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetPropertyString(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PropertyCollection_GetPropertyString_mD7C5DE1FC7DAA1A59F619945F21E70465DC65EEB (PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * __this, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___propHandle0, int32_t ___id1, String_t* ___name2, String_t* ___defaultValue3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyCollection_GetPropertyString_mD7C5DE1FC7DAA1A59F619945F21E70465DC65EEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		V_0 = L_0;
		String_t* L_1 = ___name2;
		intptr_t L_2 = Utf8StringMarshaler_MarshalManagedToNative_m2EB3F0F826B4A93D6C3A63565F0BEA647C0BAA34(L_1, /*hidden argument*/NULL);
		V_1 = (intptr_t)L_2;
		String_t* L_3 = ___defaultValue3;
		intptr_t L_4 = Utf8StringMarshaler_MarshalManagedToNative_m2EB3F0F826B4A93D6C3A63565F0BEA647C0BAA34(L_3, /*hidden argument*/NULL);
		V_2 = (intptr_t)L_4;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_5 = ___propHandle0;
			int32_t L_6 = ___id1;
			intptr_t L_7 = V_1;
			intptr_t L_8 = V_2;
			intptr_t L_9 = PropertyCollection_property_bag_get_string_m6A3EE72C8C9483AF2F42D5CB11C27EFCF5847398(L_5, L_6, (intptr_t)L_7, (intptr_t)L_8, /*hidden argument*/NULL);
			V_3 = (intptr_t)L_9;
			intptr_t L_10 = V_3;
			bool L_11 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_10, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0041;
			}
		}

IL_002c:
		try
		{ // begin try (depth: 2)
			intptr_t L_12 = V_3;
			String_t* L_13 = Utf8StringMarshaler_MarshalNativeToManaged_mE3176B3F81593CCDD474A1DF3813804ECE4A79E7((intptr_t)L_12, /*hidden argument*/NULL);
			V_0 = L_13;
			IL2CPP_LEAVE(0x50, FINALLY_0035);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0035;
		}

FINALLY_0035:
		{ // begin finally (depth: 2)
			intptr_t L_14 = V_3;
			intptr_t L_15 = PropertyCollection_property_bag_free_string_mA44FF2FF1DE00E76E1933C0620A19743E53E2065((intptr_t)L_14, /*hidden argument*/NULL);
			SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_15, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(53)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(53)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x50, FINALLY_0043);
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		intptr_t L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_mF098DF00F5341FDE4747A6F2004D5A0C9B03ED85((intptr_t)L_16, /*hidden argument*/NULL);
		intptr_t L_17 = V_2;
		Marshal_FreeHGlobal_mF098DF00F5341FDE4747A6F2004D5A0C9B03ED85((intptr_t)L_17, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(67)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x50, IL_0050)
	}

IL_0050:
	{
		String_t* L_18 = V_0;
		return L_18;
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
// System.Void Microsoft.CognitiveServices.Speech.RecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionEventArgs__ctor_m461FB32C4087EB9186809AA45718D717ABA56228 (RecognitionEventArgs_t2D86DE32531190D1EB7F13161D122F51921857B4 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	{
		intptr_t L_0 = ___eventHandlePtr0;
		SessionEventArgs__ctor_m6EB4C8FB47CD8ACFDED454634F1E9C30E719805C(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_1 = ((SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845 *)__this)->get_eventHandle_1();
		SpxExceptionThrower_ThrowIfNull_mC3247410BA2C3E2E5E5EB0A5D03DA5ECC30C4FF5(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		V_0 = (((int64_t)((int64_t)0)));
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_2 = ((SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845 *)__this)->get_eventHandle_1();
		intptr_t L_3 = Recognizer_recognizer_recognition_event_get_offset_mE3B3CAB20D9E25B244FBD501506EE0700BD23721(L_2, (uint64_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_3, /*hidden argument*/NULL);
		uint64_t L_4 = V_0;
		__this->set_U3COffsetU3Ek__BackingField_5(L_4);
		return;
	}
}
// System.UInt64 Microsoft.CognitiveServices.Speech.RecognitionEventArgs::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t RecognitionEventArgs_get_Offset_m1B25331E2A8187D036670E2F774D31AFA7A96C90 (RecognitionEventArgs_t2D86DE32531190D1EB7F13161D122F51921857B4 * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_U3COffsetU3Ek__BackingField_5();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.RecognitionEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecognitionEventArgs_ToString_mFAB28C00AE08304EA8352340ECBE022B33AEE064 (RecognitionEventArgs_t2D86DE32531190D1EB7F13161D122F51921857B4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecognitionEventArgs_ToString_mFAB28C00AE08304EA8352340ECBE022B33AEE064_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_0 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_1 = SessionEventArgs_get_SessionId_mF73CFD57B462E48C3591A157402336B3123DBFDD_inline(__this, /*hidden argument*/NULL);
		uint64_t L_2 = RecognitionEventArgs_get_Offset_m1B25331E2A8187D036670E2F774D31AFA7A96C90_inline(__this, /*hidden argument*/NULL);
		uint64_t L_3 = L_2;
		RuntimeObject * L_4 = Box(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Format_m453C2840536781B718FF4D0F5C7EEC8E5481C435(L_0, _stringLiteralAB669C2AAE5B83A0747EE6830BB5FDB7A3ED634C, L_1, L_4, /*hidden argument*/NULL);
		return L_5;
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
// System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionResult__ctor_m41A680284FE5920D28E7C9FF16AD7A671C9DB272 (RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 * __this, intptr_t ___resultHandlePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecognitionResult__ctor_m41A680284FE5920D28E7C9FF16AD7A671C9DB272_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___resultHandlePtr0;
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00b1;
		}
	}
	{
		intptr_t L_2 = ___resultHandlePtr0;
		HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 * L_3 = (HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 *)il2cpp_codegen_object_new(HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4_il2cpp_TypeInfo_var);
		HandleRelease__ctor_m38C14A53FE9403DFAD6B13923B2D9FACA01588AE(L_3, NULL, (intptr_t)((intptr_t)RecognitionResult_recognizer_result_handle_release_mCBF8BCD60731C507F593669FECC6DB7260F84ECC_RuntimeMethod_var), /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_4 = (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA *)il2cpp_codegen_object_new(InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_mABAE89E85BC9B1A642696DAF491F83BEA4A9A4BF(L_4, (intptr_t)L_2, L_3, /*hidden argument*/NULL);
		__this->set_resultHandle_4(L_4);
		GetResultDelegate_tCCF20F70641FCD818F1873F47ADC40B7AFAF0B4C * L_5 = (GetResultDelegate_tCCF20F70641FCD818F1873F47ADC40B7AFAF0B4C *)il2cpp_codegen_object_new(GetResultDelegate_tCCF20F70641FCD818F1873F47ADC40B7AFAF0B4C_il2cpp_TypeInfo_var);
		GetResultDelegate__ctor_mF25D15A597578900AB701F4ECFB335601637EFCB(L_5, NULL, (intptr_t)((intptr_t)RecognitionResult_result_get_result_id_m72882D96F5F2C62A44735EC4AE5F370FB852496E_RuntimeMethod_var), /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_6 = __this->get_resultHandle_4();
		String_t* L_7 = SpxFactory_GetDataFromHandleUsingDelegate_m864B17EE1E702BEEB5256615631DD41B11E21ACC(L_5, L_6, ((int32_t)2048), /*hidden argument*/NULL);
		__this->set_U3CResultIdU3Ek__BackingField_0(L_7);
		GetResultDelegate_tCCF20F70641FCD818F1873F47ADC40B7AFAF0B4C * L_8 = (GetResultDelegate_tCCF20F70641FCD818F1873F47ADC40B7AFAF0B4C *)il2cpp_codegen_object_new(GetResultDelegate_tCCF20F70641FCD818F1873F47ADC40B7AFAF0B4C_il2cpp_TypeInfo_var);
		GetResultDelegate__ctor_mF25D15A597578900AB701F4ECFB335601637EFCB(L_8, NULL, (intptr_t)((intptr_t)RecognitionResult_result_get_text_m5282BD9595677A7E09ACD0D31D9298AB2B09B5C1_RuntimeMethod_var), /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_9 = __this->get_resultHandle_4();
		String_t* L_10 = SpxFactory_GetDataFromHandleUsingDelegate_m864B17EE1E702BEEB5256615631DD41B11E21ACC(L_8, L_9, ((int32_t)2048), /*hidden argument*/NULL);
		__this->set_U3CTextU3Ek__BackingField_2(L_10);
		V_0 = 0;
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_11 = __this->get_resultHandle_4();
		intptr_t L_12 = RecognitionResult_result_get_reason_mA12191A2CF4F15BDEB0B9384864025F7AA1637FA(L_11, (int32_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		__this->set_U3CReasonU3Ek__BackingField_1(L_13);
		V_1 = (intptr_t)(0);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_14 = __this->get_resultHandle_4();
		intptr_t L_15 = RecognitionResult_result_get_property_bag_m83F3C6584317CBE18F359A49CAA38D8A39BF8FD3(L_14, (intptr_t*)(&V_1), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_15, /*hidden argument*/NULL);
		intptr_t L_16 = V_1;
		PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * L_17 = (PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 *)il2cpp_codegen_object_new(PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870_il2cpp_TypeInfo_var);
		PropertyCollection__ctor_mA9184AF1E753A0FA6F0AA9151AD16E9D2465A557(L_17, (intptr_t)L_16, /*hidden argument*/NULL);
		RecognitionResult_set_Properties_mC1A2601BE02CC3F56013BC78DE0B6080C8506897_inline(__this, L_17, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecognitionResult_get_ResultId_m7A0642DB5B767C3D72C6C1AE263189FC9E716B6D (RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CResultIdU3Ek__BackingField_0();
		return L_0;
	}
}
// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RecognitionResult_get_Reason_m40585A0DE0842E26C8F52E62625BD10E8C264ACA (RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_1();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecognitionResult_get_Text_mC2C012A14C98A7923666852B4FD2B4C5914ED78B (RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTextU3Ek__BackingField_2();
		return L_0;
	}
}
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * RecognitionResult_get_Properties_m205F2DC517C756A011831E182A3EBD2E897D4407 (RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 * __this, const RuntimeMethod* method)
{
	{
		PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * L_0 = __this->get_U3CPropertiesU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.RecognitionResult::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionResult_set_Properties_mC1A2601BE02CC3F56013BC78DE0B6080C8506897 (RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 * __this, PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * ___value0, const RuntimeMethod* method)
{
	{
		PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * L_0 = ___value0;
		__this->set_U3CPropertiesU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.RecognitionResult::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RecognitionResult_ToString_m4F8114C8C702EF6B2D92F0C080BA0645D4C524AC (RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecognitionResult_ToString_m4F8114C8C702EF6B2D92F0C080BA0645D4C524AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_0 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId() */, __this);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_2;
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason() */, __this);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(ResultReason_tB34D6499A6E863A6A566D23D69FF0013124D2890_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_4;
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text() */, __this);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = L_8;
		PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * L_11 = VirtFuncInvoker0< PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * >::Invoke(7 /* Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.RecognitionResult::get_Properties() */, __this);
		NullCheck(L_11);
		String_t* L_12 = VirtFuncInvoker1< String_t*, int32_t >::Invoke(5 /* System.String Microsoft.CognitiveServices.Speech.PropertyCollection::GetProperty(Microsoft.CognitiveServices.Speech.PropertyId) */, L_11, ((int32_t)5000));
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_12);
		String_t* L_13 = String_Format_mF68EE0DEC1AA5ADE9DFEF9AE0508E428FBB10EFD(L_0, _stringLiteralCB9C26A7599011BB08AD190A17EDA0D26C53575A, L_10, /*hidden argument*/NULL);
		return L_13;
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
extern "C" void CDECL ReversePInvokeWrapper_Recognizer_FireEvent_SetSessionStarted_mCF41D541D7BE7A62317E86900F2AA2623A0F1E56(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Recognizer_FireEvent_SetSessionStarted_mCF41D541D7BE7A62317E86900F2AA2623A0F1E56(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_Recognizer_FireEvent_SetSessionStopped_m1744D16CE80810C45299095BB9350EF74CD697F0(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Recognizer_FireEvent_SetSessionStopped_m1744D16CE80810C45299095BB9350EF74CD697F0(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_Recognizer_FireEvent_SpeechStartDetected_m5A0303B793DEE63CA3E1C5360C0B3CFB051454F1(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Recognizer_FireEvent_SpeechStartDetected_m5A0303B793DEE63CA3E1C5360C0B3CFB051454F1(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_Recognizer_FireEvent_SpeechEndDetected_m60B70E7C6524081E1C6E4E208EB989E6AF4FA984(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Recognizer_FireEvent_SpeechEndDetected_m60B70E7C6524081E1C6E4E208EB989E6AF4FA984(___hreco0, ___hevent1, ___pvContext2, NULL);

}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SessionStarted_mABA2AFFD9ED2E90F78F52E09DDAAE6016D3D1290 (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_add__SessionStarted_mABA2AFFD9ED2E90F78F52E09DDAAE6016D3D1290_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * V_0 = NULL;
	EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * V_1 = NULL;
	EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * V_2 = NULL;
	{
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_0 = __this->get__SessionStarted_0();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_2 = V_1;
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B_il2cpp_TypeInfo_var));
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B ** L_5 = __this->get_address_of__SessionStarted_0();
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_6 = V_2;
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_7 = V_1;
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B *>((EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_9 = V_0;
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B *)L_9) == ((RuntimeObject*)(EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SessionStarted_m1DEB85971A7C25D29EDBEA2C1969C15462973172 (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_remove__SessionStarted_m1DEB85971A7C25D29EDBEA2C1969C15462973172_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * V_0 = NULL;
	EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * V_1 = NULL;
	EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * V_2 = NULL;
	{
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_0 = __this->get__SessionStarted_0();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_2 = V_1;
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B_il2cpp_TypeInfo_var));
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B ** L_5 = __this->get_address_of__SessionStarted_0();
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_6 = V_2;
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_7 = V_1;
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B *>((EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_9 = V_0;
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B *)L_9) == ((RuntimeObject*)(EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SessionStopped_mCA2C511C7C5E2AC13CF61093BE2FFFE1FBF47584 (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_add__SessionStopped_mCA2C511C7C5E2AC13CF61093BE2FFFE1FBF47584_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * V_0 = NULL;
	EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * V_1 = NULL;
	EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * V_2 = NULL;
	{
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_0 = __this->get__SessionStopped_1();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_2 = V_1;
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B_il2cpp_TypeInfo_var));
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B ** L_5 = __this->get_address_of__SessionStopped_1();
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_6 = V_2;
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_7 = V_1;
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B *>((EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_9 = V_0;
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B *)L_9) == ((RuntimeObject*)(EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SessionStopped_m6287430E5F33931F8D4705D273D335B5E30EF1EF (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_remove__SessionStopped_m6287430E5F33931F8D4705D273D335B5E30EF1EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * V_0 = NULL;
	EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * V_1 = NULL;
	EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * V_2 = NULL;
	{
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_0 = __this->get__SessionStopped_1();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_2 = V_1;
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B_il2cpp_TypeInfo_var));
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B ** L_5 = __this->get_address_of__SessionStopped_1();
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_6 = V_2;
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_7 = V_1;
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B *>((EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_9 = V_0;
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B *)L_9) == ((RuntimeObject*)(EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SpeechStartDetected_mB2B58A6A1CDCC75C1FA0C73F12D3E3214FD1237E (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_add__SpeechStartDetected_mB2B58A6A1CDCC75C1FA0C73F12D3E3214FD1237E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * V_0 = NULL;
	EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * V_1 = NULL;
	EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * V_2 = NULL;
	{
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_0 = __this->get__SpeechStartDetected_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_2 = V_1;
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F_il2cpp_TypeInfo_var));
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F ** L_5 = __this->get_address_of__SpeechStartDetected_2();
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_6 = V_2;
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_7 = V_1;
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F *>((EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_9 = V_0;
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F *)L_9) == ((RuntimeObject*)(EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SpeechStartDetected_mDDC93504ACEADE5901E702515CF5F624A45E1E39 (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_remove__SpeechStartDetected_mDDC93504ACEADE5901E702515CF5F624A45E1E39_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * V_0 = NULL;
	EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * V_1 = NULL;
	EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * V_2 = NULL;
	{
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_0 = __this->get__SpeechStartDetected_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_2 = V_1;
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F_il2cpp_TypeInfo_var));
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F ** L_5 = __this->get_address_of__SpeechStartDetected_2();
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_6 = V_2;
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_7 = V_1;
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F *>((EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_9 = V_0;
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F *)L_9) == ((RuntimeObject*)(EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add__SpeechEndDetected_m82C4AE98DD1AE4E7FCE970743E32E2F19B4BFD34 (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_add__SpeechEndDetected_m82C4AE98DD1AE4E7FCE970743E32E2F19B4BFD34_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * V_0 = NULL;
	EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * V_1 = NULL;
	EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * V_2 = NULL;
	{
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_0 = __this->get__SpeechEndDetected_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_2 = V_1;
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F_il2cpp_TypeInfo_var));
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F ** L_5 = __this->get_address_of__SpeechEndDetected_3();
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_6 = V_2;
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_7 = V_1;
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F *>((EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_9 = V_0;
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F *)L_9) == ((RuntimeObject*)(EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove__SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove__SpeechEndDetected_m4ECEDF962186E1CBA5D99C497C92D3BE1BFE8409 (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_remove__SpeechEndDetected_m4ECEDF962186E1CBA5D99C497C92D3BE1BFE8409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * V_0 = NULL;
	EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * V_1 = NULL;
	EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * V_2 = NULL;
	{
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_0 = __this->get__SpeechEndDetected_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_2 = V_1;
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F_il2cpp_TypeInfo_var));
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F ** L_5 = __this->get_address_of__SpeechEndDetected_3();
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_6 = V_2;
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_7 = V_1;
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F *>((EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_9 = V_0;
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F *)L_9) == ((RuntimeObject*)(EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add_SessionStarted_m1ED72D3EB43AF873238336D92FB6BD7AFE3BFF6D (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * ___value0, const RuntimeMethod* method)
{
	{
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_0 = __this->get__SessionStarted_0();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_1 = __this->get_recoHandle_4();
		CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * L_2 = __this->get_sessionStartedCallbackDelegate_12();
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_3 = __this->get_gch_14();
		intptr_t L_4 = GCHandle_ToIntPtr_m8CF7D07846B0C741B04A2A4E5E9B5D505F4B3CCE(L_3, /*hidden argument*/NULL);
		intptr_t L_5 = Recognizer_recognizer_session_started_set_callback_mAD7BA5FACE695E2EF603EBAB87835F312E3DD5B3(L_1, L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_6 = ___value0;
		Recognizer_add__SessionStarted_mABA2AFFD9ED2E90F78F52E09DDAAE6016D3D1290(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SessionStarted(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove_SessionStarted_mB67A9E901D4B3920C5D44B186ABEC49859629F24 (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_remove_SessionStarted_mB67A9E901D4B3920C5D44B186ABEC49859629F24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_0 = ___value0;
		Recognizer_remove__SessionStarted_m1DEB85971A7C25D29EDBEA2C1969C15462973172(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_1 = __this->get__SessionStarted_0();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_2 = __this->get_recoHandle_4();
		intptr_t L_3 = Recognizer_recognizer_session_started_set_callback_mAD7BA5FACE695E2EF603EBAB87835F312E3DD5B3(L_2, (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add_SessionStopped_m028437879ECB65F9E49FC8D5753C3E6DC3CF5C0E (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * ___value0, const RuntimeMethod* method)
{
	{
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_0 = __this->get__SessionStopped_1();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_1 = __this->get_recoHandle_4();
		CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * L_2 = __this->get_sessionStoppedCallbackDelegate_13();
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_3 = __this->get_gch_14();
		intptr_t L_4 = GCHandle_ToIntPtr_m8CF7D07846B0C741B04A2A4E5E9B5D505F4B3CCE(L_3, /*hidden argument*/NULL);
		intptr_t L_5 = Recognizer_recognizer_session_stopped_set_callback_m8300A4A86349CEE28C34FF4AFAAE6CEB685A4CE2(L_1, L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_6 = ___value0;
		Recognizer_add__SessionStopped_mCA2C511C7C5E2AC13CF61093BE2FFFE1FBF47584(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SessionStopped(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SessionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove_SessionStopped_m87B980BF6B2F659B2138687FBA6DCB509B05E5BD (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_remove_SessionStopped_m87B980BF6B2F659B2138687FBA6DCB509B05E5BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_0 = ___value0;
		Recognizer_remove__SessionStopped_m6287430E5F33931F8D4705D273D335B5E30EF1EF(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_1 = __this->get__SessionStopped_1();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_2 = __this->get_recoHandle_4();
		intptr_t L_3 = Recognizer_recognizer_session_stopped_set_callback_m8300A4A86349CEE28C34FF4AFAAE6CEB685A4CE2(L_2, (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add_SpeechStartDetected_m15CD6124464F5598BEFD17771EC307FFACA81295 (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * ___value0, const RuntimeMethod* method)
{
	{
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_0 = __this->get__SpeechStartDetected_2();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_1 = __this->get_recoHandle_4();
		CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * L_2 = __this->get_speechStartDetectedCallbackDelegate_10();
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_3 = __this->get_gch_14();
		intptr_t L_4 = GCHandle_ToIntPtr_m8CF7D07846B0C741B04A2A4E5E9B5D505F4B3CCE(L_3, /*hidden argument*/NULL);
		intptr_t L_5 = Recognizer_recognizer_speech_start_detected_set_callback_m58AA90C6CD1B4F2190071E56A1AF2FBD5F179BF8(L_1, L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_6 = ___value0;
		Recognizer_add__SpeechStartDetected_mB2B58A6A1CDCC75C1FA0C73F12D3E3214FD1237E(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SpeechStartDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove_SpeechStartDetected_mB56D9D4D6F25EC269808ECB98F71F617FD8F4B3E (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_remove_SpeechStartDetected_mB56D9D4D6F25EC269808ECB98F71F617FD8F4B3E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_0 = ___value0;
		Recognizer_remove__SpeechStartDetected_mDDC93504ACEADE5901E702515CF5F624A45E1E39(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_1 = __this->get__SpeechStartDetected_2();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_2 = __this->get_recoHandle_4();
		intptr_t L_3 = Recognizer_recognizer_speech_start_detected_set_callback_m58AA90C6CD1B4F2190071E56A1AF2FBD5F179BF8(L_2, (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::add_SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_add_SpeechEndDetected_mC93AC350E6A570044899A9E7506C089DB3DAAE6E (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * ___value0, const RuntimeMethod* method)
{
	{
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_0 = __this->get__SpeechEndDetected_3();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_1 = __this->get_recoHandle_4();
		CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * L_2 = __this->get_speechEndDetectedCallbackDelegate_11();
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_3 = __this->get_gch_14();
		intptr_t L_4 = GCHandle_ToIntPtr_m8CF7D07846B0C741B04A2A4E5E9B5D505F4B3CCE(L_3, /*hidden argument*/NULL);
		intptr_t L_5 = Recognizer_recognizer_speech_end_detected_set_callback_mB106BEC5AE0BB846C4448C9A7FD63854AE536A43(L_1, L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_6 = ___value0;
		Recognizer_add__SpeechEndDetected_m82C4AE98DD1AE4E7FCE970743E32E2F19B4BFD34(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::remove_SpeechEndDetected(System.EventHandler`1<Microsoft.CognitiveServices.Speech.RecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_remove_SpeechEndDetected_m750776680F3BED04653DCFE9645272542F1C0954 (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_remove_SpeechEndDetected_m750776680F3BED04653DCFE9645272542F1C0954_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_0 = ___value0;
		Recognizer_remove__SpeechEndDetected_m4ECEDF962186E1CBA5D99C497C92D3BE1BFE8409(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_1 = __this->get__SpeechEndDetected_3();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_2 = __this->get_recoHandle_4();
		intptr_t L_3 = Recognizer_recognizer_speech_end_detected_set_callback_mB106BEC5AE0BB846C4448C9A7FD63854AE536A43(L_2, (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer__ctor_mA212ABA7ACCB40EB42D035F7EE635E78F6ED0F68 (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer__ctor_mA212ABA7ACCB40EB42D035F7EE635E78F6ED0F68_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_asyncStartContinuousHandle_6((intptr_t)(0));
		__this->set_asyncStopContinuousHandle_7((intptr_t)(0));
		__this->set_asyncStartKeywordHandle_8((intptr_t)(0));
		__this->set_asyncStopKeywordHandle_9((intptr_t)(0));
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_0, /*hidden argument*/NULL);
		__this->set_recognizerLock_17(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_1 = ___recoPtr0;
		SpxExceptionThrower_ThrowIfNull_mC3247410BA2C3E2E5E5EB0A5D03DA5ECC30C4FF5(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_2 = ___recoPtr0;
		__this->set_recoHandle_4(L_2);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_3 = ___recoPtr0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		__this->set_pointerHandle_5(L_4);
		String_t* L_5 = __this->get_pointerHandle_5();
		String_t* L_6 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralE70752A87286B8233066BB57CD3191284DF0D886, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Diagnostics_t28A15A1B1D7D8B65A3BB2DE322E40C272D46DE6F_il2cpp_TypeInfo_var);
		Diagnostics_SPX_TRACE_VERBOSE_m426BBFEE0D63C3631ABC3B3DF179D99478F83CCC(L_6, ((int32_t)120), _stringLiteral61949ED5CFFA2530579D719C807A8522959586DD, _stringLiteralC572E80329F9A497E490BA67B983D5483C71586C, /*hidden argument*/NULL);
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_7 = GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E(__this, 0, /*hidden argument*/NULL);
		__this->set_gch_14(L_7);
		CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * L_8 = (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_mDE545F22DBFF62D4085AF8B43D6B192D54E00386(L_8, NULL, (intptr_t)((intptr_t)Recognizer_FireEvent_SpeechStartDetected_m5A0303B793DEE63CA3E1C5360C0B3CFB051454F1_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_speechStartDetectedCallbackDelegate_10(L_8);
		CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * L_9 = (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_mDE545F22DBFF62D4085AF8B43D6B192D54E00386(L_9, NULL, (intptr_t)((intptr_t)Recognizer_FireEvent_SpeechEndDetected_m60B70E7C6524081E1C6E4E208EB989E6AF4FA984_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_speechEndDetectedCallbackDelegate_11(L_9);
		CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * L_10 = (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_mDE545F22DBFF62D4085AF8B43D6B192D54E00386(L_10, NULL, (intptr_t)((intptr_t)Recognizer_FireEvent_SetSessionStarted_mCF41D541D7BE7A62317E86900F2AA2623A0F1E56_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_sessionStartedCallbackDelegate_12(L_10);
		CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * L_11 = (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_mDE545F22DBFF62D4085AF8B43D6B192D54E00386(L_11, NULL, (intptr_t)((intptr_t)Recognizer_FireEvent_SetSessionStopped_m1744D16CE80810C45299095BB9350EF74CD697F0_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_sessionStoppedCallbackDelegate_13(L_11);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Finalize_m9750ABD8D70F016156BD0F8663C9B4B6CE9CF373 (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_Finalize_m9750ABD8D70F016156BD0F8663C9B4B6CE9CF373_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		String_t* L_0 = __this->get_pointerHandle_5();
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral00CC17103B1BA38150947A2F99820A2A7D96382A, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Diagnostics_t28A15A1B1D7D8B65A3BB2DE322E40C272D46DE6F_il2cpp_TypeInfo_var);
		Diagnostics_SPX_TRACE_VERBOSE_m426BBFEE0D63C3631ABC3B3DF179D99478F83CCC(L_1, ((int32_t)131), _stringLiteral45CBA2DC20411DD9EC01754632B97E0F780E4D29, _stringLiteralC572E80329F9A497E490BA67B983D5483C71586C, /*hidden argument*/NULL);
		il2cpp_codegen_memory_barrier();
		__this->set_isDisposing_16(1);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x3D, FINALLY_0036);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0036;
	}

FINALLY_0036:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(54)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(54)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
	}

IL_003d:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Dispose_m408BD97F98DBB1025787B4A323C0C7960EF7FA3A (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_Dispose_m408BD97F98DBB1025787B4A323C0C7960EF7FA3A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			il2cpp_codegen_memory_barrier();
			__this->set_isDisposing_16(1);
			RuntimeObject * L_0 = __this->get_recognizerLock_17();
			V_0 = L_0;
			V_1 = (bool)0;
		}

IL_0012:
		try
		{ // begin try (depth: 2)
			{
				RuntimeObject * L_1 = V_0;
				Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
				int32_t L_2 = __this->get_activeAsyncRecognitionCounter_18();
				if (!L_2)
				{
					goto IL_002d;
				}
			}

IL_0022:
			{
				InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_3 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
				InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_3, _stringLiteral06B9B5B82E32475BBFC18C786300116C35702B8E, /*hidden argument*/NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Recognizer_Dispose_m408BD97F98DBB1025787B4A323C0C7960EF7FA3A_RuntimeMethod_var);
			}

IL_002d:
			{
				IL2CPP_LEAVE(0x47, FINALLY_002f);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_002f;
		}

FINALLY_002f:
		{ // begin finally (depth: 2)
			{
				bool L_4 = V_1;
				if (!L_4)
				{
					goto IL_0038;
				}
			}

IL_0032:
			{
				RuntimeObject * L_5 = V_0;
				Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_5, /*hidden argument*/NULL);
			}

IL_0038:
			{
				IL2CPP_END_FINALLY(47)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(47)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x47, FINALLY_0039);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0039;
	}

FINALLY_0039:
	{ // begin finally (depth: 1)
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean) */, __this, (bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(57)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(57)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x47, IL_0047)
	}

IL_0047:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_Dispose_mB79F3964354355E1B534A782677B72F0F17FB3B6 (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_Dispose_mB79F3964354355E1B534A782677B72F0F17FB3B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___disposing0;
		bool L_1 = L_0;
		RuntimeObject * L_2 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = __this->get_pointerHandle_5();
		String_t* L_4 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral9587A06E8685138DFC15602C51FFD58FC042A52C, L_2, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Diagnostics_t28A15A1B1D7D8B65A3BB2DE322E40C272D46DE6F_il2cpp_TypeInfo_var);
		Diagnostics_SPX_TRACE_VERBOSE_m426BBFEE0D63C3631ABC3B3DF179D99478F83CCC(L_4, ((int32_t)169), _stringLiteral878767DEA09DD65D9E99925D1BBF35B9EAD4D939, _stringLiteralC572E80329F9A497E490BA67B983D5483C71586C, /*hidden argument*/NULL);
		bool L_5 = __this->get_disposed_15();
		il2cpp_codegen_memory_barrier();
		if (!L_5)
		{
			goto IL_0035;
		}
	}
	{
		return;
	}

IL_0035:
	{
		__this->set_speechStartDetectedCallbackDelegate_10((CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL);
		__this->set_speechEndDetectedCallbackDelegate_11((CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL);
		__this->set_sessionStartedCallbackDelegate_12((CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL);
		__this->set_sessionStoppedCallbackDelegate_13((CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL);
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * L_6 = __this->get_address_of_gch_14();
		bool L_7 = GCHandle_get_IsAllocated_m91323BCB568B1150F90515EF862B00F193E77808((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0069;
		}
	}
	{
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * L_8 = __this->get_address_of_gch_14();
		GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)L_8, /*hidden argument*/NULL);
	}

IL_0069:
	{
		il2cpp_codegen_memory_barrier();
		__this->set_disposed_15(1);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStarted(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SetSessionStarted_mCF41D541D7BE7A62317E86900F2AA2623A0F1E56 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_FireEvent_SetSessionStarted_mCF41D541D7BE7A62317E86900F2AA2623A0F1E56_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * V_0 = NULL;
	SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * G_B5_0 = NULL;
	EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9_mCE8339A439406C6DB4BBE679382FECAC5EA23270((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9_mCE8339A439406C6DB4BBE679382FECAC5EA23270_RuntimeMethod_var);
			V_0 = L_1;
			Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_0040;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845 * L_6 = (SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845 *)il2cpp_codegen_object_new(SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845_il2cpp_TypeInfo_var);
			SessionEventArgs__ctor_m6EB4C8FB47CD8ACFDED454634F1E9C30E719805C(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_8 = L_7->get__SessionStarted_0();
			EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * L_10 = V_0;
			SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845 * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m4E30EF0CFE14A53FD5A09C654C00B8CB48ACDB8F(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_m4E30EF0CFE14A53FD5A09C654C00B8CB48ACDB8F_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_0040;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)__exception_local);
		Exception_t * L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m0A082DA2E1A7C1F0846E271B2AAA63673CE20402(L_13, /*hidden argument*/NULL);
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SetSessionStopped(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SetSessionStopped_m1744D16CE80810C45299095BB9350EF74CD697F0 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_FireEvent_SetSessionStopped_m1744D16CE80810C45299095BB9350EF74CD697F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * V_0 = NULL;
	SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * G_B5_0 = NULL;
	EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9_mCE8339A439406C6DB4BBE679382FECAC5EA23270((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9_mCE8339A439406C6DB4BBE679382FECAC5EA23270_RuntimeMethod_var);
			V_0 = L_1;
			Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_0040;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845 * L_6 = (SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845 *)il2cpp_codegen_object_new(SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845_il2cpp_TypeInfo_var);
			SessionEventArgs__ctor_m6EB4C8FB47CD8ACFDED454634F1E9C30E719805C(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_8 = L_7->get__SessionStopped_1();
			EventHandler_1_tD0959A596AEF6EDA277FF66A3E29BC935CE5115B * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * L_10 = V_0;
			SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845 * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m4E30EF0CFE14A53FD5A09C654C00B8CB48ACDB8F(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_m4E30EF0CFE14A53FD5A09C654C00B8CB48ACDB8F_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_0040;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)__exception_local);
		Exception_t * L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m0A082DA2E1A7C1F0846E271B2AAA63673CE20402(L_13, /*hidden argument*/NULL);
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechStartDetected(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SpeechStartDetected_m5A0303B793DEE63CA3E1C5360C0B3CFB051454F1 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_FireEvent_SpeechStartDetected_m5A0303B793DEE63CA3E1C5360C0B3CFB051454F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * V_0 = NULL;
	RecognitionEventArgs_t2D86DE32531190D1EB7F13161D122F51921857B4 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * G_B5_0 = NULL;
	EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9_mCE8339A439406C6DB4BBE679382FECAC5EA23270((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9_mCE8339A439406C6DB4BBE679382FECAC5EA23270_RuntimeMethod_var);
			V_0 = L_1;
			Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_0040;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			RecognitionEventArgs_t2D86DE32531190D1EB7F13161D122F51921857B4 * L_6 = (RecognitionEventArgs_t2D86DE32531190D1EB7F13161D122F51921857B4 *)il2cpp_codegen_object_new(RecognitionEventArgs_t2D86DE32531190D1EB7F13161D122F51921857B4_il2cpp_TypeInfo_var);
			RecognitionEventArgs__ctor_m461FB32C4087EB9186809AA45718D717ABA56228(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_8 = L_7->get__SpeechStartDetected_2();
			EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * L_10 = V_0;
			RecognitionEventArgs_t2D86DE32531190D1EB7F13161D122F51921857B4 * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m79DB36680671F98319E31F48ED4CF7D1B93C12D0(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_m79DB36680671F98319E31F48ED4CF7D1B93C12D0_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_0040;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)__exception_local);
		Exception_t * L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m0A082DA2E1A7C1F0846E271B2AAA63673CE20402(L_13, /*hidden argument*/NULL);
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::FireEvent_SpeechEndDetected(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_FireEvent_SpeechEndDetected_m60B70E7C6524081E1C6E4E208EB989E6AF4FA984 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_FireEvent_SpeechEndDetected_m60B70E7C6524081E1C6E4E208EB989E6AF4FA984_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * V_0 = NULL;
	RecognitionEventArgs_t2D86DE32531190D1EB7F13161D122F51921857B4 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * G_B5_0 = NULL;
	EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9_mCE8339A439406C6DB4BBE679382FECAC5EA23270((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisRecognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9_mCE8339A439406C6DB4BBE679382FECAC5EA23270_RuntimeMethod_var);
			V_0 = L_1;
			Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = L_3->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_0040;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			RecognitionEventArgs_t2D86DE32531190D1EB7F13161D122F51921857B4 * L_6 = (RecognitionEventArgs_t2D86DE32531190D1EB7F13161D122F51921857B4 *)il2cpp_codegen_object_new(RecognitionEventArgs_t2D86DE32531190D1EB7F13161D122F51921857B4_il2cpp_TypeInfo_var);
			RecognitionEventArgs__ctor_m461FB32C4087EB9186809AA45718D717ABA56228(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_8 = L_7->get__SpeechEndDetected_3();
			EventHandler_1_t9976BE7F0371E19C3FD6626BDDBB8DDCEA13064F * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * L_10 = V_0;
			RecognitionEventArgs_t2D86DE32531190D1EB7F13161D122F51921857B4 * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m79DB36680671F98319E31F48ED4CF7D1B93C12D0(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_m79DB36680671F98319E31F48ED4CF7D1B93C12D0_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_0040;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)__exception_local);
		Exception_t * L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m0A082DA2E1A7C1F0846E271B2AAA63673CE20402(L_13, /*hidden argument*/NULL);
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::DoAsyncRecognitionAction(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_DoAsyncRecognitionAction_mB64950A6774B0D59E72F2962E5E9A7409DCE46BF (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___recoImplAction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_DoAsyncRecognitionAction_mB64950A6774B0D59E72F2962E5E9A7409DCE46BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = __this->get_recognizerLock_17();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		int32_t L_2 = __this->get_activeAsyncRecognitionCounter_18();
		__this->set_activeAsyncRecognitionCounter_18(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		IL2CPP_LEAVE(0x2B, FINALLY_0021);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		{
			bool L_3 = V_1;
			if (!L_3)
			{
				goto IL_002a;
			}
		}

IL_0024:
		{
			RuntimeObject * L_4 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_4, /*hidden argument*/NULL);
		}

IL_002a:
		{
			IL2CPP_END_FINALLY(33)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2B, IL_002b)
	}

IL_002b:
	{
		bool L_5 = __this->get_disposed_15();
		il2cpp_codegen_memory_barrier();
		if (L_5)
		{
			goto IL_003f;
		}
	}
	{
		bool L_6 = __this->get_isDisposing_16();
		il2cpp_codegen_memory_barrier();
		if (!L_6)
		{
			goto IL_0050;
		}
	}

IL_003f:
	{
		Type_t * L_7 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_7);
		ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A * L_9 = (ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A *)il2cpp_codegen_object_new(ObjectDisposedException_tF68E471ECD1419AD7C51137B742837395F50B69A_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m8B5D23EA08E42BDE6BC5233CC666295F19BBD2F9(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, Recognizer_DoAsyncRecognitionAction_mB64950A6774B0D59E72F2962E5E9A7409DCE46BF_RuntimeMethod_var);
	}

IL_0050:
	{
	}

IL_0051:
	try
	{ // begin try (depth: 1)
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_10 = ___recoImplAction0;
		SpxExceptionThrower_ThrowIfNull_mC3247410BA2C3E2E5E5EB0A5D03DA5ECC30C4FF5(L_10, (String_t*)NULL, /*hidden argument*/NULL);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_11 = ___recoImplAction0;
		NullCheck(L_11);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_11, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x8C, FINALLY_0060);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0060;
	}

FINALLY_0060:
	{ // begin finally (depth: 1)
		{
			RuntimeObject * L_12 = __this->get_recognizerLock_17();
			V_2 = L_12;
			V_3 = (bool)0;
		}

IL_0069:
		try
		{ // begin try (depth: 2)
			RuntimeObject * L_13 = V_2;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_13, (bool*)(&V_3), /*hidden argument*/NULL);
			int32_t L_14 = __this->get_activeAsyncRecognitionCounter_18();
			__this->set_activeAsyncRecognitionCounter_18(((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1)));
			IL2CPP_LEAVE(0x8B, FINALLY_0081);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0081;
		}

FINALLY_0081:
		{ // begin finally (depth: 2)
			{
				bool L_15 = V_3;
				if (!L_15)
				{
					goto IL_008a;
				}
			}

IL_0084:
			{
				RuntimeObject * L_16 = V_2;
				Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_16, /*hidden argument*/NULL);
			}

IL_008a:
			{
				IL2CPP_END_FINALLY(129)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(129)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x8B, IL_008b)
		}

IL_008b:
		{
			IL2CPP_END_FINALLY(96)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(96)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8C, IL_008c)
	}

IL_008c:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::StartContinuousRecognition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_StartContinuousRecognition_m2A030F4CAA792DFFFA04C9FF5FF14F70BA05458A (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_StartContinuousRecognition_m2A030F4CAA792DFFFA04C9FF5FF14F70BA05458A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_asyncStartContinuousHandle_6();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		intptr_t L_2 = __this->get_asyncStartContinuousHandle_6();
		intptr_t L_3 = Recognizer_recognizer_async_handle_release_m91AD76F45CBBC2A1FC8B78A255D3D7E743F8DD70((intptr_t)L_2, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_4 = __this->get_recoHandle_4();
		SpxExceptionThrower_ThrowIfNull_mC3247410BA2C3E2E5E5EB0A5D03DA5ECC30C4FF5(L_4, _stringLiteral6BA569B8DA8733ED59135DD71FE81FDE1FD32DC1, /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_5 = __this->get_recoHandle_4();
		intptr_t* L_6 = __this->get_address_of_asyncStartContinuousHandle_6();
		intptr_t L_7 = Recognizer_recognizer_start_continuous_recognition_async_m2322F7A1288A1725BFF85E8951BF5BA92F064A1D(L_5, (intptr_t*)L_6, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_7, /*hidden argument*/NULL);
		intptr_t L_8 = __this->get_asyncStartContinuousHandle_6();
		intptr_t L_9 = Recognizer_recognizer_start_continuous_recognition_async_wait_for_m25CC951D64F9416A6D9C02E5ADC467BEC087D8F2((intptr_t)L_8, (-1), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_9, /*hidden argument*/NULL);
		intptr_t L_10 = __this->get_asyncStartContinuousHandle_6();
		intptr_t L_11 = Recognizer_recognizer_async_handle_release_m91AD76F45CBBC2A1FC8B78A255D3D7E743F8DD70((intptr_t)L_10, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_11, /*hidden argument*/NULL);
		__this->set_asyncStartContinuousHandle_6((intptr_t)(0));
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer::StopContinuousRecognition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Recognizer_StopContinuousRecognition_m6E569B61B4D371939A219D172F8D841CED5CC265 (Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_StopContinuousRecognition_m6E569B61B4D371939A219D172F8D841CED5CC265_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_asyncStopContinuousHandle_7();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		intptr_t L_2 = __this->get_asyncStopContinuousHandle_7();
		intptr_t L_3 = Recognizer_recognizer_async_handle_release_m91AD76F45CBBC2A1FC8B78A255D3D7E743F8DD70((intptr_t)L_2, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_4 = __this->get_recoHandle_4();
		SpxExceptionThrower_ThrowIfNull_mC3247410BA2C3E2E5E5EB0A5D03DA5ECC30C4FF5(L_4, _stringLiteral6BA569B8DA8733ED59135DD71FE81FDE1FD32DC1, /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_5 = __this->get_recoHandle_4();
		intptr_t* L_6 = __this->get_address_of_asyncStopContinuousHandle_7();
		intptr_t L_7 = Recognizer_recognizer_stop_continuous_recognition_async_m47FE099E1180174B9C901384FAC5D4AE754C46AF(L_5, (intptr_t*)L_6, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_7, /*hidden argument*/NULL);
		intptr_t L_8 = __this->get_asyncStopContinuousHandle_7();
		intptr_t L_9 = Recognizer_recognizer_stop_continuous_recognition_async_wait_for_mA778073DD4C45F082625DF485852B0D08EA69734((intptr_t)L_8, (-1), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_9, /*hidden argument*/NULL);
		intptr_t L_10 = __this->get_asyncStopContinuousHandle_7();
		intptr_t L_11 = Recognizer_recognizer_async_handle_release_m91AD76F45CBBC2A1FC8B78A255D3D7E743F8DD70((intptr_t)L_10, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_11, /*hidden argument*/NULL);
		__this->set_asyncStopContinuousHandle_7((intptr_t)(0));
		return;
	}
}
// Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle Microsoft.CognitiveServices.Speech.Recognizer::FromConfig(Microsoft.CognitiveServices.Speech.Recognizer_GetRecognizerFromConfigDelegate,Microsoft.CognitiveServices.Speech.SpeechConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * Recognizer_FromConfig_m4EBC18E31B66DBBDE63534A28644AB6DD241C672 (GetRecognizerFromConfigDelegate_t1E1956B672CBA1A2BDC15031DFC99B1DFBF39E26 * ___fromConfig0, SpeechConfig_t5C54B0C8BD36B97C0B09863CD865EC1404749E25 * ___speechConfig1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Recognizer_FromConfig_m4EBC18E31B66DBBDE63534A28644AB6DD241C672_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * V_1 = NULL;
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * V_3 = NULL;
	InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		SpeechConfig_t5C54B0C8BD36B97C0B09863CD865EC1404749E25 * L_0 = ___speechConfig1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralC08BB306BFDF99D194D7CE9FEF63D780EA81E2DB, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Recognizer_FromConfig_m4EBC18E31B66DBBDE63534A28644AB6DD241C672_RuntimeMethod_var);
	}

IL_000e:
	{
		V_0 = (intptr_t)(0);
		intptr_t L_2 = V_0;
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_3 = (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA *)il2cpp_codegen_object_new(InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_mABAE89E85BC9B1A642696DAF491F83BEA4A9A4BF(L_3, (intptr_t)L_2, (HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 *)NULL, /*hidden argument*/NULL);
		V_1 = L_3;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		V_2 = (intptr_t)(0);
		GetRecognizerFromConfigDelegate_t1E1956B672CBA1A2BDC15031DFC99B1DFBF39E26 * L_4 = ___fromConfig0;
		SpeechConfig_t5C54B0C8BD36B97C0B09863CD865EC1404749E25 * L_5 = ___speechConfig1;
		NullCheck(L_5);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_6 = L_5->get_configHandle_0();
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_7 = V_1;
		NullCheck(L_4);
		intptr_t L_8 = GetRecognizerFromConfigDelegate_Invoke_m14621955E4734DC3826C0529478917B086465142(L_4, (intptr_t*)(&V_2), L_6, L_7, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_8, /*hidden argument*/NULL);
		intptr_t L_9 = V_2;
		HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 * L_10 = (HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 *)il2cpp_codegen_object_new(HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4_il2cpp_TypeInfo_var);
		HandleRelease__ctor_m38C14A53FE9403DFAD6B13923B2D9FACA01588AE(L_10, NULL, (intptr_t)((intptr_t)Recognizer_recognizer_handle_release_m81270BB2C41BB84A47D2DC443CDBAC7AA2141281_RuntimeMethod_var), /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_11 = (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA *)il2cpp_codegen_object_new(InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_mABAE89E85BC9B1A642696DAF491F83BEA4A9A4BF(L_11, (intptr_t)L_9, L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		SpeechConfig_t5C54B0C8BD36B97C0B09863CD865EC1404749E25 * L_12 = ___speechConfig1;
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_KeepAlive_mE836EDA45A7C6BFDCEA004B9089FA6B4810BDA89(L_12, /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_13 = V_3;
		V_4 = L_13;
		IL2CPP_LEAVE(0x5E, FINALLY_0054);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0054;
	}

FINALLY_0054:
	{ // begin finally (depth: 1)
		{
			InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_14 = V_1;
			if (!L_14)
			{
				goto IL_005d;
			}
		}

IL_0057:
		{
			InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_15 = V_1;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_15);
		}

IL_005d:
		{
			IL2CPP_END_FINALLY(84)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(84)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
	}

IL_005e:
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_16 = V_4;
		return L_16;
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
IL2CPP_EXTERN_C  intptr_t DelegatePInvokeWrapper_GetRecognizerFromConfigDelegate_t1E1956B672CBA1A2BDC15031DFC99B1DFBF39E26 (GetRecognizerFromConfigDelegate_t1E1956B672CBA1A2BDC15031DFC99B1DFBF39E26 * __this, intptr_t* ___phreco0, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___speechconfig1, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___audioInput2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc)(intptr_t*, void*, void*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___speechconfig1' to native representation
	void* ____speechconfig1_marshaled = NULL;
	if (___speechconfig1 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("speechconfig"), NULL);
	bool ___safeHandle_reference_incremented_for____speechconfig1 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___speechconfig1, (&___safeHandle_reference_incremented_for____speechconfig1), NULL);
	____speechconfig1_marshaled = reinterpret_cast<void*>((___speechconfig1)->get_handle_0());

	// Marshaling of parameter '___audioInput2' to native representation
	void* ____audioInput2_marshaled = NULL;
	if (___audioInput2 == NULL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("audioInput"), NULL);
	bool ___safeHandle_reference_incremented_for____audioInput2 = false;
	SafeHandle_DangerousAddRef_m38ABCE4B3DF7CEA3B6C79996C22E1D532E10F085(___audioInput2, (&___safeHandle_reference_incremented_for____audioInput2), NULL);
	____audioInput2_marshaled = reinterpret_cast<void*>((___audioInput2)->get_handle_0());

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___phreco0, ____speechconfig1_marshaled, ____audioInput2_marshaled);

	// Marshaling cleanup of parameter '___speechconfig1' native representation
	if (___safeHandle_reference_incremented_for____speechconfig1)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___speechconfig1, NULL);
	}

	// Marshaling cleanup of parameter '___audioInput2' native representation
	if (___safeHandle_reference_incremented_for____audioInput2)
	{
		SafeHandle_DangerousRelease_m3D5C78EBCD583C58AE715F7A8AC1BD3BA976CF01(___audioInput2, NULL);
	}

	return returnValue;
}
// System.Void Microsoft.CognitiveServices.Speech.Recognizer_GetRecognizerFromConfigDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetRecognizerFromConfigDelegate__ctor_m20C5D68DC30492452813140BDB2974219F284DF6 (GetRecognizerFromConfigDelegate_t1E1956B672CBA1A2BDC15031DFC99B1DFBF39E26 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer_GetRecognizerFromConfigDelegate::Invoke(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetRecognizerFromConfigDelegate_Invoke_m14621955E4734DC3826C0529478917B086465142 (GetRecognizerFromConfigDelegate_t1E1956B672CBA1A2BDC15031DFC99B1DFBF39E26 * __this, intptr_t* ___phreco0, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___speechconfig1, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___audioInput2, const RuntimeMethod* method)
{
	intptr_t result;
	memset((&result), 0, sizeof(result));
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef intptr_t (*FunctionPointerType) (intptr_t*, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA *, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___phreco0, ___speechconfig1, ___audioInput2, targetMethod);
			}
			else
			{
				// closed
				typedef intptr_t (*FunctionPointerType) (void*, intptr_t*, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA *, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___phreco0, ___speechconfig1, ___audioInput2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< intptr_t, intptr_t*, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA *, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * >::Invoke(targetMethod, targetThis, ___phreco0, ___speechconfig1, ___audioInput2);
					else
						result = GenericVirtFuncInvoker3< intptr_t, intptr_t*, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA *, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * >::Invoke(targetMethod, targetThis, ___phreco0, ___speechconfig1, ___audioInput2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< intptr_t, intptr_t*, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA *, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___phreco0, ___speechconfig1, ___audioInput2);
					else
						result = VirtFuncInvoker3< intptr_t, intptr_t*, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA *, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___phreco0, ___speechconfig1, ___audioInput2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef intptr_t (*FunctionPointerType) (RuntimeObject*, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA *, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___phreco0) - 1), ___speechconfig1, ___audioInput2, targetMethod);
				}
				typedef intptr_t (*FunctionPointerType) (void*, intptr_t*, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA *, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___phreco0, ___speechconfig1, ___audioInput2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.CognitiveServices.Speech.Recognizer_GetRecognizerFromConfigDelegate::BeginInvoke(System.IntPtr&,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetRecognizerFromConfigDelegate_BeginInvoke_m5848807B4D7059D62BD5151DBD6BD1E79DC5631A (GetRecognizerFromConfigDelegate_t1E1956B672CBA1A2BDC15031DFC99B1DFBF39E26 * __this, intptr_t* ___phreco0, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___speechconfig1, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___audioInput2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GetRecognizerFromConfigDelegate_BeginInvoke_m5848807B4D7059D62BD5151DBD6BD1E79DC5631A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &*___phreco0);
	__d_args[1] = ___speechconfig1;
	__d_args[2] = ___audioInput2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.IntPtr Microsoft.CognitiveServices.Speech.Recognizer_GetRecognizerFromConfigDelegate::EndInvoke(System.IntPtr&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GetRecognizerFromConfigDelegate_EndInvoke_m9FD9C4C44E663DB4CC6D937F4345F72C0D25E396 (GetRecognizerFromConfigDelegate_t1E1956B672CBA1A2BDC15031DFC99B1DFBF39E26 * __this, intptr_t* ___phreco0, RuntimeObject* ___result1, const RuntimeMethod* method)
{
	void* ___out_args[] = {
	___phreco0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return *(intptr_t*)UnBox ((RuntimeObject*)__result);
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
// System.Void Microsoft.CognitiveServices.Speech.SessionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SessionEventArgs__ctor_m6EB4C8FB47CD8ACFDED454634F1E9C30E719805C (SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SessionEventArgs__ctor_m6EB4C8FB47CD8ACFDED454634F1E9C30E719805C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E_il2cpp_TypeInfo_var);
		EventArgs__ctor_m3551293259861C5A78CD47689D559F828ED29DF7(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___eventHandlePtr0;
		SpxExceptionThrower_ThrowIfNull_m2979CAFE21C599A40FB34AAE7777FF5BF0B9E03C((intptr_t)L_0, (String_t*)NULL, /*hidden argument*/NULL);
		intptr_t L_1 = ___eventHandlePtr0;
		HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 * L_2 = (HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 *)il2cpp_codegen_object_new(HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4_il2cpp_TypeInfo_var);
		HandleRelease__ctor_m38C14A53FE9403DFAD6B13923B2D9FACA01588AE(L_2, NULL, (intptr_t)((intptr_t)EventArgs_recognizer_event_handle_release_mA58732A27533E21F519F2812B9BB4E11D3FE6A0F_RuntimeMethod_var), /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_3 = (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA *)il2cpp_codegen_object_new(InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_mABAE89E85BC9B1A642696DAF491F83BEA4A9A4BF(L_3, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		__this->set_eventHandle_1(L_3);
		GetResultDelegate_tCCF20F70641FCD818F1873F47ADC40B7AFAF0B4C * L_4 = (GetResultDelegate_tCCF20F70641FCD818F1873F47ADC40B7AFAF0B4C *)il2cpp_codegen_object_new(GetResultDelegate_tCCF20F70641FCD818F1873F47ADC40B7AFAF0B4C_il2cpp_TypeInfo_var);
		GetResultDelegate__ctor_mF25D15A597578900AB701F4ECFB335601637EFCB(L_4, NULL, (intptr_t)((intptr_t)Recognizer_recognizer_session_event_get_session_id_m4381CE0315B710E24BB0610D5C021D6FB6940FA6_RuntimeMethod_var), /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_5 = __this->get_eventHandle_1();
		String_t* L_6 = SpxFactory_GetDataFromHandleUsingDelegate_m864B17EE1E702BEEB5256615631DD41B11E21ACC(L_4, L_5, ((int32_t)37), /*hidden argument*/NULL);
		__this->set_U3CSessionIdU3Ek__BackingField_4(L_6);
		return;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::get_SessionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionEventArgs_get_SessionId_mF73CFD57B462E48C3591A157402336B3123DBFDD (SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CSessionIdU3Ek__BackingField_4();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SessionEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SessionEventArgs_ToString_m181C4F9B90EA0F31D52DE360A9A0FAF6724083D0 (SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SessionEventArgs_ToString_m181C4F9B90EA0F31D52DE360A9A0FAF6724083D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_0 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_1 = SessionEventArgs_get_SessionId_mF73CFD57B462E48C3591A157402336B3123DBFDD_inline(__this, /*hidden argument*/NULL);
		String_t* L_2 = String_Format_m30892041DA5F50D7B8CFD82FFC0F55B5B97A2B7F(L_0, _stringLiteral3C07AB1310A392CD9658F9776198D977552A3232, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig__ctor_mAFAF1B4E70735A979E996E6894F40F75CDCD18C9 (SpeechConfig_t5C54B0C8BD36B97C0B09863CD865EC1404749E25 * __this, intptr_t ___configPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechConfig__ctor_mAFAF1B4E70735A979E996E6894F40F75CDCD18C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___configPtr0;
		SpxExceptionThrower_ThrowIfNull_m2979CAFE21C599A40FB34AAE7777FF5BF0B9E03C((intptr_t)L_0, (String_t*)NULL, /*hidden argument*/NULL);
		intptr_t L_1 = ___configPtr0;
		HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 * L_2 = (HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 *)il2cpp_codegen_object_new(HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4_il2cpp_TypeInfo_var);
		HandleRelease__ctor_m38C14A53FE9403DFAD6B13923B2D9FACA01588AE(L_2, NULL, (intptr_t)((intptr_t)SpeechConfig_speech_config_release_m810D0EEA705EE9AF26F7C4E8CE19E0C599F73F42_RuntimeMethod_var), /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_3 = (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA *)il2cpp_codegen_object_new(InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_mABAE89E85BC9B1A642696DAF491F83BEA4A9A4BF(L_3, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		__this->set_configHandle_0(L_3);
		V_0 = (intptr_t)(0);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_4 = __this->get_configHandle_0();
		intptr_t L_5 = SpeechConfig_speech_config_get_property_bag_m0FC35AFD276675B7761F5CF950AAA402FC53B01E(L_4, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_5, /*hidden argument*/NULL);
		intptr_t L_6 = V_0;
		PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * L_7 = (PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 *)il2cpp_codegen_object_new(PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870_il2cpp_TypeInfo_var);
		PropertyCollection__ctor_mA9184AF1E753A0FA6F0AA9151AD16E9D2465A557(L_7, (intptr_t)L_6, /*hidden argument*/NULL);
		__this->set_progBag_1(L_7);
		SpeechConfig_SetProperty_mD3294ED7F69346BB957F2881AD9C4A94981C0981(__this, _stringLiteralABA75C5C6D6AC34CA8B4C02E370033622C073B25, _stringLiteralE4BC4B1059294A74BCDA71CD96A0C1B71757D094, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.SpeechConfig Microsoft.CognitiveServices.Speech.SpeechConfig::FromSubscription(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechConfig_t5C54B0C8BD36B97C0B09863CD865EC1404749E25 * SpeechConfig_FromSubscription_mFCACA12424DB57C976F9BBEB647DF44D0643BC0A (String_t* ___subscriptionKey0, String_t* ___region1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechConfig_FromSubscription_mFCACA12424DB57C976F9BBEB647DF44D0643BC0A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = (intptr_t)(0);
		String_t* L_0 = ___subscriptionKey0;
		String_t* L_1 = ___region1;
		intptr_t L_2 = SpeechConfig_speech_config_from_subscription_m6A4E54C48B3AF570223BFFACC0268DD6EB7ADD3E((intptr_t*)(&V_0), L_0, L_1, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_2, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		SpeechConfig_t5C54B0C8BD36B97C0B09863CD865EC1404749E25 * L_4 = (SpeechConfig_t5C54B0C8BD36B97C0B09863CD865EC1404749E25 *)il2cpp_codegen_object_new(SpeechConfig_t5C54B0C8BD36B97C0B09863CD865EC1404749E25_il2cpp_TypeInfo_var);
		SpeechConfig__ctor_mAFAF1B4E70735A979E996E6894F40F75CDCD18C9(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::set_SpeechRecognitionLanguage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig_set_SpeechRecognitionLanguage_mB6D817A28D4B3DB4A428CAE03946F9F2916ABA01 (SpeechConfig_t5C54B0C8BD36B97C0B09863CD865EC1404749E25 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * L_0 = __this->get_progBag_1();
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker2< int32_t, String_t* >::Invoke(6 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(Microsoft.CognitiveServices.Speech.PropertyId,System.String) */, L_0, ((int32_t)3001), L_1);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechConfig::SetProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechConfig_SetProperty_mD3294ED7F69346BB957F2881AD9C4A94981C0981 (SpeechConfig_t5C54B0C8BD36B97C0B09863CD865EC1404749E25 * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method)
{
	{
		PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * L_0 = __this->get_progBag_1();
		String_t* L_1 = ___name0;
		String_t* L_2 = ___value1;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(7 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::SetProperty(System.String,System.String) */, L_0, L_1, L_2);
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionCanceledEventArgs__ctor_m634909B5124346C7611D9FBF6D082E72083165C2 (SpeechRecognitionCanceledEventArgs_tBCBCCC3B812C7A93A2C69906C6CE21E4313AAFD0 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method)
{
	CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * V_0 = NULL;
	{
		intptr_t L_0 = ___eventHandlePtr0;
		SpeechRecognitionEventArgs__ctor_m579703E107124C6ABC9D07C40ACD3A2FDD241758(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		SpeechRecognitionResult_tBA7ADB26D600AEDF7114ABD5A8E1AE1C797F466E * L_1 = SpeechRecognitionEventArgs_get_Result_m249E934B104F937DF7D70FC516EE99BB0A0F3564_inline(__this, /*hidden argument*/NULL);
		CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * L_2 = CancellationDetails_FromResult_m8CC67B3B88A390519550F82FB06BFC5D49B972D8(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = CancellationDetails_get_Reason_mFA299E969201C80764CE51E9385C711D1A5BE7C4_inline(L_3, /*hidden argument*/NULL);
		__this->set_U3CReasonU3Ek__BackingField_7(L_4);
		CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = CancellationDetails_get_ErrorCode_mE36061E2CA470971CC88AB5CE10759721C613098_inline(L_5, /*hidden argument*/NULL);
		__this->set_U3CErrorCodeU3Ek__BackingField_8(L_6);
		CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = CancellationDetails_get_ErrorDetails_m753FE13177C2092EB81EBB530389877925316E2E_inline(L_7, /*hidden argument*/NULL);
		__this->set_U3CErrorDetailsU3Ek__BackingField_9(L_8);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_Reason_m5CE0AD1B468DB01E33DE3166D2BBACF1C7A75FA9 (SpeechRecognitionCanceledEventArgs_tBCBCCC3B812C7A93A2C69906C6CE21E4313AAFD0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_7();
		return L_0;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_ErrorCode_mFF19E44FF8FE7ED536A6196004FC481C064E0F5A (SpeechRecognitionCanceledEventArgs_tBCBCCC3B812C7A93A2C69906C6CE21E4313AAFD0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_8();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpeechRecognitionCanceledEventArgs_ToString_m22545242D570915603572ADEAEE1A0E0343A89B5 (SpeechRecognitionCanceledEventArgs_tBCBCCC3B812C7A93A2C69906C6CE21E4313AAFD0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognitionCanceledEventArgs_ToString_m22545242D570915603572ADEAEE1A0E0343A89B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_0 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		String_t* L_3 = SessionEventArgs_get_SessionId_mF73CFD57B462E48C3591A157402336B3123DBFDD_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_2;
		SpeechRecognitionResult_tBA7ADB26D600AEDF7114ABD5A8E1AE1C797F466E * L_5 = SpeechRecognitionEventArgs_get_Result_m249E934B104F937DF7D70FC516EE99BB0A0F3564_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId() */, L_5);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_4;
		int32_t L_8 = SpeechRecognitionCanceledEventArgs_get_Reason_m5CE0AD1B468DB01E33DE3166D2BBACF1C7A75FA9_inline(__this, /*hidden argument*/NULL);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(CancellationReason_tE850B9758CF6EA974ED3DC804AF0AE703C9CED0E_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_7;
		int32_t L_12 = SpeechRecognitionCanceledEventArgs_get_ErrorCode_mFF19E44FF8FE7ED536A6196004FC481C064E0F5A_inline(__this, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(CancellationErrorCode_t65E36EC1830F74E6042F87D0CAA22A14F3BFD072_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		String_t* L_15 = String_Format_mF68EE0DEC1AA5ADE9DFEF9AE0508E428FBB10EFD(L_0, _stringLiteralD54D8B68F790E0F03534C5CA2D0D6EC15545532B, L_11, /*hidden argument*/NULL);
		return L_15;
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionEventArgs__ctor_m579703E107124C6ABC9D07C40ACD3A2FDD241758 (SpeechRecognitionEventArgs_tDB55D8D092DA5EE56B1BBA231E256915FA8A6406 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognitionEventArgs__ctor_m579703E107124C6ABC9D07C40ACD3A2FDD241758_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___eventHandlePtr0;
		RecognitionEventArgs__ctor_m461FB32C4087EB9186809AA45718D717ABA56228(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)(0);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_1 = ((SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845 *)__this)->get_eventHandle_1();
		intptr_t L_2 = Recognizer_recognizer_recognition_event_get_result_m4DA203B63EF3F8E6944D99BB42D98653FDC2CEFC(L_1, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_2, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		SpeechRecognitionResult_tBA7ADB26D600AEDF7114ABD5A8E1AE1C797F466E * L_4 = (SpeechRecognitionResult_tBA7ADB26D600AEDF7114ABD5A8E1AE1C797F466E *)il2cpp_codegen_object_new(SpeechRecognitionResult_tBA7ADB26D600AEDF7114ABD5A8E1AE1C797F466E_il2cpp_TypeInfo_var);
		SpeechRecognitionResult__ctor_mCC7AB8F002D2D18C570A516379BC02C53EFF0818(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_U3CResultU3Ek__BackingField_6(L_4);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.SpeechRecognitionResult Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechRecognitionResult_tBA7ADB26D600AEDF7114ABD5A8E1AE1C797F466E * SpeechRecognitionEventArgs_get_Result_m249E934B104F937DF7D70FC516EE99BB0A0F3564 (SpeechRecognitionEventArgs_tDB55D8D092DA5EE56B1BBA231E256915FA8A6406 * __this, const RuntimeMethod* method)
{
	{
		SpeechRecognitionResult_tBA7ADB26D600AEDF7114ABD5A8E1AE1C797F466E * L_0 = __this->get_U3CResultU3Ek__BackingField_6();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SpeechRecognitionEventArgs_ToString_m0FFB9A33D71F4C2F0440679047766BE7A40D36FA (SpeechRecognitionEventArgs_tDB55D8D092DA5EE56B1BBA231E256915FA8A6406 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognitionEventArgs_ToString_m0FFB9A33D71F4C2F0440679047766BE7A40D36FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_0 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		String_t* L_3 = SessionEventArgs_get_SessionId_mF73CFD57B462E48C3591A157402336B3123DBFDD_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_2;
		SpeechRecognitionResult_tBA7ADB26D600AEDF7114ABD5A8E1AE1C797F466E * L_5 = SpeechRecognitionEventArgs_get_Result_m249E934B104F937DF7D70FC516EE99BB0A0F3564_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId() */, L_5);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_4;
		SpeechRecognitionResult_tBA7ADB26D600AEDF7114ABD5A8E1AE1C797F466E * L_8 = SpeechRecognitionEventArgs_get_Result_m249E934B104F937DF7D70FC516EE99BB0A0F3564_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason() */, L_8);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(ResultReason_tB34D6499A6E863A6A566D23D69FF0013124D2890_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_11);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_7;
		SpeechRecognitionResult_tBA7ADB26D600AEDF7114ABD5A8E1AE1C797F466E * L_13 = SpeechRecognitionEventArgs_get_Result_m249E934B104F937DF7D70FC516EE99BB0A0F3564_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text() */, L_13);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		String_t* L_15 = String_Format_mF68EE0DEC1AA5ADE9DFEF9AE0508E428FBB10EFD(L_0, _stringLiteral8ED7667D94D00DEA04134913FADA0B2C3C2A531F, L_12, /*hidden argument*/NULL);
		return L_15;
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognitionResult__ctor_mCC7AB8F002D2D18C570A516379BC02C53EFF0818 (SpeechRecognitionResult_tBA7ADB26D600AEDF7114ABD5A8E1AE1C797F466E * __this, intptr_t ___resultPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___resultPtr0;
		RecognitionResult__ctor_m41A680284FE5920D28E7C9FF16AD7A671C9DB272(__this, (intptr_t)L_0, /*hidden argument*/NULL);
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
extern "C" void CDECL ReversePInvokeWrapper_SpeechRecognizer_FireEvent_Recognizing_m04B3941BCB305E6EEA61C01B25221B6AFCB64CF9(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SpeechRecognizer_FireEvent_Recognizing_m04B3941BCB305E6EEA61C01B25221B6AFCB64CF9(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SpeechRecognizer_FireEvent_Recognized_m7B66BF8F7176BA99BD0719398E3DBF5B227337AA(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SpeechRecognizer_FireEvent_Recognized_m7B66BF8F7176BA99BD0719398E3DBF5B227337AA(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_SpeechRecognizer_FireEvent_Canceled_m196DE0AF9B978BF526926931E8C64745D4461C0E(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	SpeechRecognizer_FireEvent_Canceled_m196DE0AF9B978BF526926931E8C64745D4461C0E(___hreco0, ___hevent1, ___pvContext2, NULL);

}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Recognizing_mBCFF45A9074293638177355466BDD25A76629F10 (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_add__Recognizing_mBCFF45A9074293638177355466BDD25A76629F10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * V_0 = NULL;
	EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * V_1 = NULL;
	EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * V_2 = NULL;
	{
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_0 = __this->get__Recognizing_19();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_2 = V_1;
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2_il2cpp_TypeInfo_var));
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 ** L_5 = __this->get_address_of__Recognizing_19();
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_6 = V_2;
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_7 = V_1;
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 *>((EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_9 = V_0;
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 *)L_9) == ((RuntimeObject*)(EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Recognizing_mF5B0896939F3941899B5FD62D42070B0677B3D18 (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_remove__Recognizing_mF5B0896939F3941899B5FD62D42070B0677B3D18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * V_0 = NULL;
	EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * V_1 = NULL;
	EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * V_2 = NULL;
	{
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_0 = __this->get__Recognizing_19();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_2 = V_1;
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2_il2cpp_TypeInfo_var));
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 ** L_5 = __this->get_address_of__Recognizing_19();
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_6 = V_2;
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_7 = V_1;
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 *>((EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_9 = V_0;
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 *)L_9) == ((RuntimeObject*)(EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Recognized_m452CB6D9E14C9ECD47C1CA5E6A4F96A577B5D86B (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_add__Recognized_m452CB6D9E14C9ECD47C1CA5E6A4F96A577B5D86B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * V_0 = NULL;
	EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * V_1 = NULL;
	EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * V_2 = NULL;
	{
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_0 = __this->get__Recognized_20();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_2 = V_1;
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2_il2cpp_TypeInfo_var));
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 ** L_5 = __this->get_address_of__Recognized_20();
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_6 = V_2;
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_7 = V_1;
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 *>((EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_9 = V_0;
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 *)L_9) == ((RuntimeObject*)(EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Recognized_m5FBC660836B737333CD28FB3977644D482D2056C (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_remove__Recognized_m5FBC660836B737333CD28FB3977644D482D2056C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * V_0 = NULL;
	EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * V_1 = NULL;
	EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * V_2 = NULL;
	{
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_0 = __this->get__Recognized_20();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_2 = V_1;
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2_il2cpp_TypeInfo_var));
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 ** L_5 = __this->get_address_of__Recognized_20();
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_6 = V_2;
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_7 = V_1;
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 *>((EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_9 = V_0;
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 *)L_9) == ((RuntimeObject*)(EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add__Canceled_mCE313D273999287BFE5BC37517E0C8573AE9169D (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_add__Canceled_mCE313D273999287BFE5BC37517E0C8573AE9169D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * V_0 = NULL;
	EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * V_1 = NULL;
	EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * V_2 = NULL;
	{
		EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * L_0 = __this->get__Canceled_21();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * L_2 = V_1;
		EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4_il2cpp_TypeInfo_var));
		EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 ** L_5 = __this->get_address_of__Canceled_21();
		EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * L_6 = V_2;
		EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * L_7 = V_1;
		EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 *>((EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * L_9 = V_0;
		EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 *)L_9) == ((RuntimeObject*)(EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove__Canceled_mE48E2516A2404852413FABE6AECB5E3E9A9A09CD (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_remove__Canceled_mE48E2516A2404852413FABE6AECB5E3E9A9A09CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * V_0 = NULL;
	EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * V_1 = NULL;
	EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * V_2 = NULL;
	{
		EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * L_0 = __this->get__Canceled_21();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * L_2 = V_1;
		EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4_il2cpp_TypeInfo_var));
		EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 ** L_5 = __this->get_address_of__Canceled_21();
		EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * L_6 = V_2;
		EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * L_7 = V_1;
		EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 *>((EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * L_9 = V_0;
		EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 *)L_9) == ((RuntimeObject*)(EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add_Recognizing_mDD4B9F4FADA673CD654F345E8979A3C0EC82EF2F (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * ___value0, const RuntimeMethod* method)
{
	{
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_0 = __this->get__Recognizing_19();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_1 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * L_2 = __this->get_recognizingCallbackDelegate_22();
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_3 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_gch_14();
		intptr_t L_4 = GCHandle_ToIntPtr_m8CF7D07846B0C741B04A2A4E5E9B5D505F4B3CCE(L_3, /*hidden argument*/NULL);
		intptr_t L_5 = Recognizer_recognizer_recognizing_set_callback_m28536074A86D5AB1369F95C9B714D7818C6311BA(L_1, L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_6 = ___value0;
		SpeechRecognizer_add__Recognizing_mBCFF45A9074293638177355466BDD25A76629F10(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove_Recognizing_m47F3F7544807E40A9F448CC9504644265CEADD4B (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_remove_Recognizing_m47F3F7544807E40A9F448CC9504644265CEADD4B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_0 = ___value0;
		SpeechRecognizer_remove__Recognizing_mF5B0896939F3941899B5FD62D42070B0677B3D18(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_1 = __this->get__Recognizing_19();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_2 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		intptr_t L_3 = Recognizer_recognizer_recognizing_set_callback_m28536074A86D5AB1369F95C9B714D7818C6311BA(L_2, (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add_Recognized_mB492B0A09F6B8F9652D950BE045D51FCAC0C1E1B (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * ___value0, const RuntimeMethod* method)
{
	{
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_0 = __this->get__Recognized_20();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_1 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * L_2 = __this->get_recognizedCallbackDelegate_23();
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_3 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_gch_14();
		intptr_t L_4 = GCHandle_ToIntPtr_m8CF7D07846B0C741B04A2A4E5E9B5D505F4B3CCE(L_3, /*hidden argument*/NULL);
		intptr_t L_5 = Recognizer_recognizer_recognized_set_callback_m4F3B1CF5955A9020E1924AB56B002BAFD8B70B85(L_1, L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_6 = ___value0;
		SpeechRecognizer_add__Recognized_m452CB6D9E14C9ECD47C1CA5E6A4F96A577B5D86B(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove_Recognized_m220F1B2BC237C0E5A079818B13EF8758E63B2578 (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_remove_Recognized_m220F1B2BC237C0E5A079818B13EF8758E63B2578_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_0 = ___value0;
		SpeechRecognizer_remove__Recognized_m5FBC660836B737333CD28FB3977644D482D2056C(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_1 = __this->get__Recognized_20();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_2 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		intptr_t L_3 = Recognizer_recognizer_recognized_set_callback_m4F3B1CF5955A9020E1924AB56B002BAFD8B70B85(L_2, (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::add_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_add_Canceled_mB3B1B1BC7AE2400CFEC9D87EBE99FD20157A70BD (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * ___value0, const RuntimeMethod* method)
{
	{
		EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * L_0 = __this->get__Canceled_21();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_1 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * L_2 = __this->get_canceledCallbackDelegate_24();
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_3 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_gch_14();
		intptr_t L_4 = GCHandle_ToIntPtr_m8CF7D07846B0C741B04A2A4E5E9B5D505F4B3CCE(L_3, /*hidden argument*/NULL);
		intptr_t L_5 = Recognizer_recognizer_canceled_set_callback_m222AC60BE8CAAE0E00D5A8E50031C1F99BBC532D(L_1, L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * L_6 = ___value0;
		SpeechRecognizer_add__Canceled_mCE313D273999287BFE5BC37517E0C8573AE9169D(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::remove_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.SpeechRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_remove_Canceled_mF2A2D6A26EE1E2025E1DD556BF28FEB1C645C538 (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_remove_Canceled_mF2A2D6A26EE1E2025E1DD556BF28FEB1C645C538_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * L_0 = ___value0;
		SpeechRecognizer_remove__Canceled_mE48E2516A2404852413FABE6AECB5E3E9A9A09CD(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * L_1 = __this->get__Canceled_21();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_2 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		intptr_t L_3 = Recognizer_recognizer_canceled_set_callback_m222AC60BE8CAAE0E00D5A8E50031C1F99BBC532D(L_2, (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.SpeechConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer__ctor_m8F0C6A4C2A429A294414B5A6947C042E5CF6A5FE (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, SpeechConfig_t5C54B0C8BD36B97C0B09863CD865EC1404749E25 * ___speechConfig0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer__ctor_m8F0C6A4C2A429A294414B5A6947C042E5CF6A5FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GetRecognizerFromConfigDelegate_t1E1956B672CBA1A2BDC15031DFC99B1DFBF39E26 * L_0 = (GetRecognizerFromConfigDelegate_t1E1956B672CBA1A2BDC15031DFC99B1DFBF39E26 *)il2cpp_codegen_object_new(GetRecognizerFromConfigDelegate_t1E1956B672CBA1A2BDC15031DFC99B1DFBF39E26_il2cpp_TypeInfo_var);
		GetRecognizerFromConfigDelegate__ctor_m20C5D68DC30492452813140BDB2974219F284DF6(L_0, NULL, (intptr_t)((intptr_t)SpxFactory_recognizer_create_speech_recognizer_from_config_mB5E66482C47F87CC44048B0190CB00A9C8F9C529_RuntimeMethod_var), /*hidden argument*/NULL);
		SpeechConfig_t5C54B0C8BD36B97C0B09863CD865EC1404749E25 * L_1 = ___speechConfig0;
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_2 = Recognizer_FromConfig_m4EBC18E31B66DBBDE63534A28644AB6DD241C672(L_0, L_1, /*hidden argument*/NULL);
		SpeechRecognizer__ctor_m5A53BD63443FC453CD24FE2221074E3EC659E025(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer__ctor_m5A53BD63443FC453CD24FE2221074E3EC659E025 (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer__ctor_m5A53BD63443FC453CD24FE2221074E3EC659E025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_0 = ___recoHandle0;
		Recognizer__ctor_mA212ABA7ACCB40EB42D035F7EE635E78F6ED0F68(__this, L_0, /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_1 = ___recoHandle0;
		SpxExceptionThrower_ThrowIfNull_mC3247410BA2C3E2E5E5EB0A5D03DA5ECC30C4FF5(L_1, _stringLiteral6BA569B8DA8733ED59135DD71FE81FDE1FD32DC1, /*hidden argument*/NULL);
		CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * L_2 = (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_mDE545F22DBFF62D4085AF8B43D6B192D54E00386(L_2, NULL, (intptr_t)((intptr_t)SpeechRecognizer_FireEvent_Recognizing_m04B3941BCB305E6EEA61C01B25221B6AFCB64CF9_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_recognizingCallbackDelegate_22(L_2);
		CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * L_3 = (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_mDE545F22DBFF62D4085AF8B43D6B192D54E00386(L_3, NULL, (intptr_t)((intptr_t)SpeechRecognizer_FireEvent_Recognized_m7B66BF8F7176BA99BD0719398E3DBF5B227337AA_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_recognizedCallbackDelegate_23(L_3);
		CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * L_4 = (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_mDE545F22DBFF62D4085AF8B43D6B192D54E00386(L_4, NULL, (intptr_t)((intptr_t)SpeechRecognizer_FireEvent_Canceled_m196DE0AF9B978BF526926931E8C64745D4461C0E_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_canceledCallbackDelegate_24(L_4);
		V_0 = (intptr_t)(0);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_5 = ___recoHandle0;
		intptr_t L_6 = Recognizer_recognizer_get_property_bag_m78DB85D0F192B71179FB5431EF9964B091015F04(L_5, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_6, /*hidden argument*/NULL);
		intptr_t L_7 = V_0;
		PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * L_8 = (PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 *)il2cpp_codegen_object_new(PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870_il2cpp_TypeInfo_var);
		PropertyCollection__ctor_mA9184AF1E753A0FA6F0AA9151AD16E9D2465A557(L_8, (intptr_t)L_7, /*hidden argument*/NULL);
		SpeechRecognizer_set_Properties_mF66781C8B847863D19D8E0772EC05E0F454EF510_inline(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.SpeechRecognizer::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * SpeechRecognizer_get_Properties_m56DA0677021BA0F40F75E11BEBCC4EDCCF95A6C4 (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, const RuntimeMethod* method)
{
	{
		PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * L_0 = __this->get_U3CPropertiesU3Ek__BackingField_25();
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_set_Properties_mF66781C8B847863D19D8E0772EC05E0F454EF510 (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * ___value0, const RuntimeMethod* method)
{
	{
		PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * L_0 = ___value0;
		__this->set_U3CPropertiesU3Ek__BackingField_25(L_0);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.SpeechRecognizer::StartContinuousRecognitionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * SpeechRecognizer_StartContinuousRecognitionAsync_m282E75F85AFA36D5514BCF0583100C7ED75E7AAF (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_StartContinuousRecognitionAsync_m282E75F85AFA36D5514BCF0583100C7ED75E7AAF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_0, __this, (intptr_t)((intptr_t)SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__44_0_m42101489CDD2C57A969B6DBBDC532D41D6A6C747_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_1 = Task_Run_m201E4C04F97BCF541633AF913DF20C6FF7872E44(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.SpeechRecognizer::StopContinuousRecognitionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * SpeechRecognizer_StopContinuousRecognitionAsync_mBE703D597C3CBD7DF9CB13FAA65445B0B3B9A4D4 (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_StopContinuousRecognitionAsync_mBE703D597C3CBD7DF9CB13FAA65445B0B3B9A4D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_0, __this, (intptr_t)((intptr_t)SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__45_0_m664F8A1FC652005363F52F6A914C916D21742D58_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_1 = Task_Run_m201E4C04F97BCF541633AF913DF20C6FF7872E44(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_Finalize_mA74ECCBCD4232CF7C2D9A2846E60D1149C344373 (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		il2cpp_codegen_memory_barrier();
		((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->set_isDisposing_16(1);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x19, FINALLY_0012);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0012;
	}

FINALLY_0012:
	{ // begin finally (depth: 1)
		Recognizer_Finalize_m9750ABD8D70F016156BD0F8663C9B4B6CE9CF373(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(18)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(18)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x19, IL_0019)
	}

IL_0019:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_Dispose_mF6B21E1F4EA19B8C9A660AA2DD8D57957747AF89 (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_Dispose_mF6B21E1F4EA19B8C9A660AA2DD8D57957747AF89_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * G_B7_0 = NULL;
	InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * G_B6_0 = NULL;
	PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * G_B10_0 = NULL;
	PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * G_B9_0 = NULL;
	{
		bool L_0 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_disposed_15();
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_1 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		if (!L_1)
		{
			goto IL_00b0;
		}
	}
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_2 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		intptr_t L_3 = Recognizer_recognizer_recognizing_set_callback_m28536074A86D5AB1369F95C9B714D7818C6311BA(L_2, (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD((intptr_t)L_3, /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_4 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		intptr_t L_5 = Recognizer_recognizer_recognized_set_callback_m4F3B1CF5955A9020E1924AB56B002BAFD8B70B85(L_4, (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD((intptr_t)L_5, /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_6 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		intptr_t L_7 = Recognizer_recognizer_canceled_set_callback_m222AC60BE8CAAE0E00D5A8E50031C1F99BBC532D(L_6, (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD((intptr_t)L_7, /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_8 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		intptr_t L_9 = Recognizer_recognizer_session_started_set_callback_mAD7BA5FACE695E2EF603EBAB87835F312E3DD5B3(L_8, (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD((intptr_t)L_9, /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_10 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		intptr_t L_11 = Recognizer_recognizer_session_stopped_set_callback_m8300A4A86349CEE28C34FF4AFAAE6CEB685A4CE2(L_10, (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD((intptr_t)L_11, /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_12 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		intptr_t L_13 = Recognizer_recognizer_speech_start_detected_set_callback_m58AA90C6CD1B4F2190071E56A1AF2FBD5F179BF8(L_12, (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD((intptr_t)L_13, /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_14 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		intptr_t L_15 = Recognizer_recognizer_speech_end_detected_set_callback_mB106BEC5AE0BB846C4448C9A7FD63854AE536A43(L_14, (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD((intptr_t)L_15, /*hidden argument*/NULL);
	}

IL_00b0:
	{
		bool L_16 = ___disposing0;
		if (!L_16)
		{
			goto IL_00d5;
		}
	}
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_17 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_18 = L_17;
		G_B6_0 = L_18;
		if (L_18)
		{
			G_B7_0 = L_18;
			goto IL_00bf;
		}
	}
	{
		goto IL_00c4;
	}

IL_00bf:
	{
		NullCheck(G_B7_0);
		SafeHandle_Dispose_m6433E520A7D38A8C424843DFCDB5EF2384EC8A6A(G_B7_0, /*hidden argument*/NULL);
	}

IL_00c4:
	{
		PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * L_19 = SpeechRecognizer_get_Properties_m56DA0677021BA0F40F75E11BEBCC4EDCCF95A6C4_inline(__this, /*hidden argument*/NULL);
		PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * L_20 = L_19;
		G_B9_0 = L_20;
		if (L_20)
		{
			G_B10_0 = L_20;
			goto IL_00d0;
		}
	}
	{
		goto IL_00d5;
	}

IL_00d0:
	{
		NullCheck(G_B10_0);
		VirtActionInvoker0::Invoke(4 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::Close() */, G_B10_0);
	}

IL_00d5:
	{
		__this->set_recognizingCallbackDelegate_22((CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL);
		__this->set_recognizedCallbackDelegate_23((CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL);
		__this->set_canceledCallbackDelegate_24((CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL);
		__this->set_audioInputKeepAlive_26((AudioConfig_tCB874753FD328FB0FE6B8176886CD6DD2E1D610A *)NULL);
		bool L_21 = ___disposing0;
		Recognizer_Dispose_mB79F3964354355E1B534A782677B72F0F17FB3B6(__this, L_21, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Recognizing_m04B3941BCB305E6EEA61C01B25221B6AFCB64CF9 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_FireEvent_Recognizing_m04B3941BCB305E6EEA61C01B25221B6AFCB64CF9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * V_0 = NULL;
	SpeechRecognitionEventArgs_tDB55D8D092DA5EE56B1BBA231E256915FA8A6406 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * G_B5_0 = NULL;
	EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797_mF0A7AE29CF9AD6E518EE1B837041B5E4B35C8372((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797_mF0A7AE29CF9AD6E518EE1B837041B5E4B35C8372_RuntimeMethod_var);
			V_0 = L_1;
			SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)L_3)->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_0040;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			SpeechRecognitionEventArgs_tDB55D8D092DA5EE56B1BBA231E256915FA8A6406 * L_6 = (SpeechRecognitionEventArgs_tDB55D8D092DA5EE56B1BBA231E256915FA8A6406 *)il2cpp_codegen_object_new(SpeechRecognitionEventArgs_tDB55D8D092DA5EE56B1BBA231E256915FA8A6406_il2cpp_TypeInfo_var);
			SpeechRecognitionEventArgs__ctor_m579703E107124C6ABC9D07C40ACD3A2FDD241758(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_8 = L_7->get__Recognizing_19();
			EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * L_10 = V_0;
			SpeechRecognitionEventArgs_tDB55D8D092DA5EE56B1BBA231E256915FA8A6406 * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m9A97AA6A45E8637897E5E97B5035CAD3ACF39ADD(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_m9A97AA6A45E8637897E5E97B5035CAD3ACF39ADD_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_0040;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)__exception_local);
		Exception_t * L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m0A082DA2E1A7C1F0846E271B2AAA63673CE20402(L_13, /*hidden argument*/NULL);
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Recognized_m7B66BF8F7176BA99BD0719398E3DBF5B227337AA (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_FireEvent_Recognized_m7B66BF8F7176BA99BD0719398E3DBF5B227337AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * V_0 = NULL;
	SpeechRecognitionEventArgs_tDB55D8D092DA5EE56B1BBA231E256915FA8A6406 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * G_B5_0 = NULL;
	EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797_mF0A7AE29CF9AD6E518EE1B837041B5E4B35C8372((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797_mF0A7AE29CF9AD6E518EE1B837041B5E4B35C8372_RuntimeMethod_var);
			V_0 = L_1;
			SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)L_3)->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_0040;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			SpeechRecognitionEventArgs_tDB55D8D092DA5EE56B1BBA231E256915FA8A6406 * L_6 = (SpeechRecognitionEventArgs_tDB55D8D092DA5EE56B1BBA231E256915FA8A6406 *)il2cpp_codegen_object_new(SpeechRecognitionEventArgs_tDB55D8D092DA5EE56B1BBA231E256915FA8A6406_il2cpp_TypeInfo_var);
			SpeechRecognitionEventArgs__ctor_m579703E107124C6ABC9D07C40ACD3A2FDD241758(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_8 = L_7->get__Recognized_20();
			EventHandler_1_t7485C255E3421704548902EDCF47416A0193E1F2 * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * L_10 = V_0;
			SpeechRecognitionEventArgs_tDB55D8D092DA5EE56B1BBA231E256915FA8A6406 * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m9A97AA6A45E8637897E5E97B5035CAD3ACF39ADD(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_m9A97AA6A45E8637897E5E97B5035CAD3ACF39ADD_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_0040;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)__exception_local);
		Exception_t * L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m0A082DA2E1A7C1F0846E271B2AAA63673CE20402(L_13, /*hidden argument*/NULL);
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_FireEvent_Canceled_m196DE0AF9B978BF526926931E8C64745D4461C0E (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_FireEvent_Canceled_m196DE0AF9B978BF526926931E8C64745D4461C0E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * V_0 = NULL;
	SpeechRecognitionCanceledEventArgs_tBCBCCC3B812C7A93A2C69906C6CE21E4313AAFD0 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * G_B5_0 = NULL;
	EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797_mF0A7AE29CF9AD6E518EE1B837041B5E4B35C8372((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisSpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797_mF0A7AE29CF9AD6E518EE1B837041B5E4B35C8372_RuntimeMethod_var);
			V_0 = L_1;
			SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)L_3)->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_0040;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			SpeechRecognitionCanceledEventArgs_tBCBCCC3B812C7A93A2C69906C6CE21E4313AAFD0 * L_6 = (SpeechRecognitionCanceledEventArgs_tBCBCCC3B812C7A93A2C69906C6CE21E4313AAFD0 *)il2cpp_codegen_object_new(SpeechRecognitionCanceledEventArgs_tBCBCCC3B812C7A93A2C69906C6CE21E4313AAFD0_il2cpp_TypeInfo_var);
			SpeechRecognitionCanceledEventArgs__ctor_m634909B5124346C7611D9FBF6D082E72083165C2(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * L_8 = L_7->get__Canceled_21();
			EventHandler_1_t85490FD461632DDC8E8E5083650474488599BEE4 * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * L_10 = V_0;
			SpeechRecognitionCanceledEventArgs_tBCBCCC3B812C7A93A2C69906C6CE21E4313AAFD0 * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_mDB24E20590B78D77E4D86AB16DC5FC7D55444430(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_mDB24E20590B78D77E4D86AB16DC5FC7D55444430_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_0040;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)__exception_local);
		Exception_t * L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m0A082DA2E1A7C1F0846E271B2AAA63673CE20402(L_13, /*hidden argument*/NULL);
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::<StartContinuousRecognitionAsync>b__44_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__44_0_m42101489CDD2C57A969B6DBBDC532D41D6A6C747 (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__44_0_m42101489CDD2C57A969B6DBBDC532D41D6A6C747_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_0, __this, (intptr_t)((intptr_t)Recognizer_StartContinuousRecognition_m2A030F4CAA792DFFFA04C9FF5FF14F70BA05458A_RuntimeMethod_var), /*hidden argument*/NULL);
		Recognizer_DoAsyncRecognitionAction_mB64950A6774B0D59E72F2962E5E9A7409DCE46BF(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechRecognizer::<StopContinuousRecognitionAsync>b__45_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__45_0_m664F8A1FC652005363F52F6A914C916D21742D58 (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__45_0_m664F8A1FC652005363F52F6A914C916D21742D58_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_0, __this, (intptr_t)((intptr_t)Recognizer_StopContinuousRecognition_m6E569B61B4D371939A219D172F8D841CED5CC265_RuntimeMethod_var), /*hidden argument*/NULL);
		Recognizer_DoAsyncRecognitionAction_mB64950A6774B0D59E72F2962E5E9A7409DCE46BF(__this, L_0, /*hidden argument*/NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechTranslationConfig__ctor_m55A368968F153795FB4C81A583F53DBC8038A43A (SpeechTranslationConfig_t42B90011A1EF7B464F33442DC1CFCD9A37177A53 * __this, intptr_t ___configPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechTranslationConfig__ctor_m55A368968F153795FB4C81A583F53DBC8038A43A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set_targetLanguages_2(L_0);
		intptr_t L_1 = ___configPtr0;
		SpeechConfig__ctor_mAFAF1B4E70735A979E996E6894F40F75CDCD18C9(__this, (intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.SpeechTranslationConfig Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::FromSubscription(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpeechTranslationConfig_t42B90011A1EF7B464F33442DC1CFCD9A37177A53 * SpeechTranslationConfig_FromSubscription_m81603F9F084E80243E8DE16467CEBC6FF349FA7D (String_t* ___subscriptionKey0, String_t* ___region1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpeechTranslationConfig_FromSubscription_m81603F9F084E80243E8DE16467CEBC6FF349FA7D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = (intptr_t)(0);
		String_t* L_0 = ___subscriptionKey0;
		String_t* L_1 = ___region1;
		intptr_t L_2 = SpeechTranslationConfig_speech_translation_config_from_subscription_mEA0CE1B7F91F0FAD66E3C8646BD4258E347CA34D((intptr_t*)(&V_0), L_0, L_1, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_2, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		SpeechTranslationConfig_t42B90011A1EF7B464F33442DC1CFCD9A37177A53 * L_4 = (SpeechTranslationConfig_t42B90011A1EF7B464F33442DC1CFCD9A37177A53 *)il2cpp_codegen_object_new(SpeechTranslationConfig_t42B90011A1EF7B464F33442DC1CFCD9A37177A53_il2cpp_TypeInfo_var);
		SpeechTranslationConfig__ctor_m55A368968F153795FB4C81A583F53DBC8038A43A(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.SpeechTranslationConfig::AddTargetLanguage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechTranslationConfig_AddTargetLanguage_mB3C0C4F15802A24D62C1EC036D82893AAB183259 (SpeechTranslationConfig_t42B90011A1EF7B464F33442DC1CFCD9A37177A53 * __this, String_t* ___language0, const RuntimeMethod* method)
{
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_0 = ((SpeechConfig_t5C54B0C8BD36B97C0B09863CD865EC1404749E25 *)__this)->get_configHandle_0();
		String_t* L_1 = ___language0;
		intptr_t L_2 = SpeechTranslationConfig_speech_translation_config_add_target_language_m1C5B2CEA7607CD1D8C2976DE379F10FDD4ABAF4B(L_0, L_1, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_2, /*hidden argument*/NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionCanceledEventArgs__ctor_m061014AA8EC6CB9F98D2A2CBC4F45F4901D460A2 (TranslationRecognitionCanceledEventArgs_tD05B18077AB718A788C24ADB4A1FE3CF2593FEFE * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method)
{
	CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * V_0 = NULL;
	{
		intptr_t L_0 = ___eventHandlePtr0;
		TranslationRecognitionEventArgs__ctor_m6A2FF47E651A996D20F80B21B3216560BEA24494(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		TranslationRecognitionResult_tE75370C810BE52E98050558DAF55C499C0E5C5A2 * L_1 = TranslationRecognitionEventArgs_get_Result_m1D7CE61478E280F8E2CFA1E050A8F9891CB332D2_inline(__this, /*hidden argument*/NULL);
		CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * L_2 = CancellationDetails_FromResult_m8CC67B3B88A390519550F82FB06BFC5D49B972D8(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = CancellationDetails_get_Reason_mFA299E969201C80764CE51E9385C711D1A5BE7C4_inline(L_3, /*hidden argument*/NULL);
		__this->set_U3CReasonU3Ek__BackingField_7(L_4);
		CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = CancellationDetails_get_ErrorCode_mE36061E2CA470971CC88AB5CE10759721C613098_inline(L_5, /*hidden argument*/NULL);
		__this->set_U3CErrorCodeU3Ek__BackingField_8(L_6);
		CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = CancellationDetails_get_ErrorDetails_m753FE13177C2092EB81EBB530389877925316E2E_inline(L_7, /*hidden argument*/NULL);
		__this->set_U3CErrorDetailsU3Ek__BackingField_9(L_8);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationReason Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_Reason_mD37070031AD0BC2EBE4E541422AC2818CD29C3F1 (TranslationRecognitionCanceledEventArgs_tD05B18077AB718A788C24ADB4A1FE3CF2593FEFE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_7();
		return L_0;
	}
}
// Microsoft.CognitiveServices.Speech.CancellationErrorCode Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_ErrorCode_m4762F2622F4FB7A4285AD393CA46022DAA79D397 (TranslationRecognitionCanceledEventArgs_tD05B18077AB718A788C24ADB4A1FE3CF2593FEFE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_8();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TranslationRecognitionCanceledEventArgs_ToString_m391D99CD10C5CBAE651344047A3E2980B60173FA (TranslationRecognitionCanceledEventArgs_tD05B18077AB718A788C24ADB4A1FE3CF2593FEFE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationRecognitionCanceledEventArgs_ToString_m391D99CD10C5CBAE651344047A3E2980B60173FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_0 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = L_1;
		String_t* L_3 = SessionEventArgs_get_SessionId_mF73CFD57B462E48C3591A157402336B3123DBFDD_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_2;
		TranslationRecognitionResult_tE75370C810BE52E98050558DAF55C499C0E5C5A2 * L_5 = TranslationRecognitionEventArgs_get_Result_m1D7CE61478E280F8E2CFA1E050A8F9891CB332D2_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId() */, L_5);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_4;
		int32_t L_8 = TranslationRecognitionCanceledEventArgs_get_Reason_mD37070031AD0BC2EBE4E541422AC2818CD29C3F1_inline(__this, /*hidden argument*/NULL);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(CancellationReason_tE850B9758CF6EA974ED3DC804AF0AE703C9CED0E_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_7;
		int32_t L_12 = TranslationRecognitionCanceledEventArgs_get_ErrorCode_m4762F2622F4FB7A4285AD393CA46022DAA79D397_inline(__this, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(CancellationErrorCode_t65E36EC1830F74E6042F87D0CAA22A14F3BFD072_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		String_t* L_15 = String_Format_mF68EE0DEC1AA5ADE9DFEF9AE0508E428FBB10EFD(L_0, _stringLiteralD54D8B68F790E0F03534C5CA2D0D6EC15545532B, L_11, /*hidden argument*/NULL);
		return L_15;
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
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionEventArgs__ctor_m6A2FF47E651A996D20F80B21B3216560BEA24494 (TranslationRecognitionEventArgs_tB91AB6FD826F377BB0C58DAB09D2FB2BEF06D002 * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationRecognitionEventArgs__ctor_m6A2FF47E651A996D20F80B21B3216560BEA24494_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___eventHandlePtr0;
		RecognitionEventArgs__ctor_m461FB32C4087EB9186809AA45718D717ABA56228(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)(0);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_1 = ((SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845 *)__this)->get_eventHandle_1();
		intptr_t L_2 = Recognizer_recognizer_recognition_event_get_result_m4DA203B63EF3F8E6944D99BB42D98653FDC2CEFC(L_1, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_2, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		TranslationRecognitionResult_tE75370C810BE52E98050558DAF55C499C0E5C5A2 * L_4 = (TranslationRecognitionResult_tE75370C810BE52E98050558DAF55C499C0E5C5A2 *)il2cpp_codegen_object_new(TranslationRecognitionResult_tE75370C810BE52E98050558DAF55C499C0E5C5A2_il2cpp_TypeInfo_var);
		TranslationRecognitionResult__ctor_m8F3AA678E2BF7392D54F788D8F0D6CE95A5FB1E3(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_U3CResultU3Ek__BackingField_6(L_4);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TranslationRecognitionResult_tE75370C810BE52E98050558DAF55C499C0E5C5A2 * TranslationRecognitionEventArgs_get_Result_m1D7CE61478E280F8E2CFA1E050A8F9891CB332D2 (TranslationRecognitionEventArgs_tB91AB6FD826F377BB0C58DAB09D2FB2BEF06D002 * __this, const RuntimeMethod* method)
{
	{
		TranslationRecognitionResult_tE75370C810BE52E98050558DAF55C499C0E5C5A2 * L_0 = __this->get_U3CResultU3Ek__BackingField_6();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TranslationRecognitionEventArgs_ToString_m30AF9D7339ABC41D86C3F5D10343FB4E965C4AA5 (TranslationRecognitionEventArgs_tB91AB6FD826F377BB0C58DAB09D2FB2BEF06D002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationRecognitionEventArgs_ToString_m30AF9D7339ABC41D86C3F5D10343FB4E965C4AA5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_0 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_1 = SessionEventArgs_get_SessionId_mF73CFD57B462E48C3591A157402336B3123DBFDD_inline(__this, /*hidden argument*/NULL);
		TranslationRecognitionResult_tE75370C810BE52E98050558DAF55C499C0E5C5A2 * L_2 = TranslationRecognitionEventArgs_get_Result_m1D7CE61478E280F8E2CFA1E050A8F9891CB332D2_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4 = String_Format_m453C2840536781B718FF4D0F5C7EEC8E5481C435(L_0, _stringLiteralBC1AC5A8EE842A7C84F7BDB982C54F4A5AD1CA52, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionResult__ctor_m8F3AA678E2BF7392D54F788D8F0D6CE95A5FB1E3 (TranslationRecognitionResult_tE75370C810BE52E98050558DAF55C499C0E5C5A2 * __this, intptr_t ___resultPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___resultPtr0;
		RecognitionResult__ctor_m41A680284FE5920D28E7C9FF16AD7A671C9DB272(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		TranslationRecognitionResult_GetTranslationTexts_m103345A1BADB5B14768AD76D750EF019C19C6CE4(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::get_Translations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TranslationRecognitionResult_get_Translations_mDB43E322D12D1158F3CB5673E154F631C59BB9C0 (TranslationRecognitionResult_tE75370C810BE52E98050558DAF55C499C0E5C5A2 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_0 = __this->get_translationTextResultMap_6();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TranslationRecognitionResult_ToString_m843C36EF6E29023E82F4C1C1D054BAADCB714B8E (TranslationRecognitionResult_tE75370C810BE52E98050558DAF55C499C0E5C5A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationRecognitionResult_ToString_m843C36EF6E29023E82F4C1C1D054BAADCB714B8E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_0 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(4 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_ResultId() */, __this);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.RecognitionResult::get_Reason() */, __this);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(ResultReason_tB34D6499A6E863A6A566D23D69FF0013124D2890_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String Microsoft.CognitiveServices.Speech.RecognitionResult::get_Text() */, __this);
		String_t* L_6 = String_Format_mCE84582533EA9934933F3F1496451F3D9DA652A4(L_0, _stringLiteralF14369AF7DBF85692CB7DC350F182784AC5E3C39, L_1, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		RuntimeObject* L_7 = TranslationRecognitionResult_get_Translations_mDB43E322D12D1158F3CB5673E154F631C59BB9C0_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		RuntimeObject* L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_t950001EE7450B6EBC976BC9AFDCFCA50D3BD4A9E_il2cpp_TypeInfo_var, L_7);
		V_1 = L_8;
	}

IL_0033:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0078;
		}

IL_0035:
		{
			RuntimeObject* L_9 = V_1;
			NullCheck(L_9);
			KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  L_10 = InterfaceFuncInvoker0< KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t05127AC436FAC6107A5BE96190220DEF47EB326E_il2cpp_TypeInfo_var, L_9);
			V_2 = L_10;
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)6);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = L_11;
			String_t* L_13 = V_0;
			NullCheck(L_12);
			ArrayElementTypeCheck (L_12, L_13);
			(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_13);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_14 = L_12;
			NullCheck(L_14);
			ArrayElementTypeCheck (L_14, _stringLiteral9B6AB0D90551F373BFB09A86A7C3B54C35F09AE3);
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral9B6AB0D90551F373BFB09A86A7C3B54C35F09AE3);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_15 = L_14;
			String_t* L_16 = KeyValuePair_2_get_Key_m1960AEAA9CE1FE1F69994434FFEAE113BD3AB3C7_inline((KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m1960AEAA9CE1FE1F69994434FFEAE113BD3AB3C7_RuntimeMethod_var);
			NullCheck(L_15);
			ArrayElementTypeCheck (L_15, L_16);
			(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_16);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_17 = L_15;
			NullCheck(L_17);
			ArrayElementTypeCheck (L_17, _stringLiteralB2D66CDA1142A3EA44D49FB9E153D2562B61CA50);
			(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralB2D66CDA1142A3EA44D49FB9E153D2562B61CA50);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_18 = L_17;
			String_t* L_19 = KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2_inline((KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2_RuntimeMethod_var);
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, L_19);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_19);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_20 = L_18;
			NullCheck(L_20);
			ArrayElementTypeCheck (L_20, _stringLiteral532A529B35D1EE840F9EDC0621676E0467B38CF1);
			(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral532A529B35D1EE840F9EDC0621676E0467B38CF1);
			String_t* L_21 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_20, /*hidden argument*/NULL);
			V_0 = L_21;
		}

IL_0078:
		{
			RuntimeObject* L_22 = V_1;
			NullCheck(L_22);
			bool L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_0035;
			}
		}

IL_0080:
		{
			IL2CPP_LEAVE(0x8C, FINALLY_0082);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0082;
	}

FINALLY_0082:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_24 = V_1;
			if (!L_24)
			{
				goto IL_008b;
			}
		}

IL_0085:
		{
			RuntimeObject* L_25 = V_1;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_25);
		}

IL_008b:
		{
			IL2CPP_END_FINALLY(130)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(130)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8C, IL_008c)
	}

IL_008c:
	{
		String_t* L_26 = V_0;
		return L_26;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionResult::GetTranslationTexts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognitionResult_GetTranslationTexts_m103345A1BADB5B14768AD76D750EF019C19C6CE4 (TranslationRecognitionResult_tE75370C810BE52E98050558DAF55C499C0E5C5A2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationRecognitionResult_GetTranslationTexts_m103345A1BADB5B14768AD76D750EF019C19C6CE4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	intptr_t V_7;
	memset((&V_7), 0, sizeof(V_7));
	intptr_t V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	intptr_t V_10;
	memset((&V_10), 0, sizeof(V_10));
	String_t* V_11 = NULL;
	intptr_t V_12;
	memset((&V_12), 0, sizeof(V_12));
	String_t* V_13 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_0 = ((RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 *)__this)->get_resultHandle_4();
		SpxExceptionThrower_ThrowIfNull_mC3247410BA2C3E2E5E5EB0A5D03DA5ECC30C4FF5(L_0, _stringLiteral866637F135B384E42CDE1C9BB154CDCEB1B83E71, /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_1 = ((RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 *)__this)->get_resultHandle_4();
		bool L_2 = RecognitionResult_recognizer_result_handle_is_valid_m0461056AE8F887067E41F90018147C90FD01A6DD(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0122;
		}
	}
	{
		V_0 = 0;
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_3 = (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *)il2cpp_codegen_object_new(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B(L_3, /*hidden argument*/Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B_RuntimeMethod_var);
		__this->set_translationTextResultMap_6(L_3);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_4 = ((RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 *)__this)->get_resultHandle_4();
		intptr_t L_5 = RecognitionResult_translation_text_result_get_translation_text_buffer_header_m2668F37BF9FAE0D04F1D34C8B30AA4A8A6A954B3(L_4, (intptr_t)(0), (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_5;
		intptr_t L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t9D55DE98A6FCFAB772164D80F70B6393100AE342_il2cpp_TypeInfo_var);
		intptr_t L_7 = ((SpxError_t9D55DE98A6FCFAB772164D80F70B6393100AE342_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t9D55DE98A6FCFAB772164D80F70B6393100AE342_il2cpp_TypeInfo_var))->get_BufferTooSmall_0();
		bool L_8 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_6, (intptr_t)L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0122;
		}
	}
	{
		int32_t L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		intptr_t L_10 = Marshal_AllocHGlobal_m3BFCB876D7469108C8676D6DD90D943806C13A58(L_9, /*hidden argument*/NULL);
		V_2 = (intptr_t)L_10;
	}

IL_0057:
	try
	{ // begin try (depth: 1)
		{
			InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_11 = ((RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 *)__this)->get_resultHandle_4();
			intptr_t L_12 = V_2;
			intptr_t L_13 = RecognitionResult_translation_text_result_get_translation_text_buffer_header_m2668F37BF9FAE0D04F1D34C8B30AA4A8A6A954B3(L_11, (intptr_t)L_12, (int32_t*)(&V_0), /*hidden argument*/NULL);
			SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_13, /*hidden argument*/NULL);
			V_3 = 0;
			intptr_t L_14 = V_2;
			int32_t L_15 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
			intptr_t L_16 = Marshal_ReadIntPtr_m9449B8C9A1B8247086FC76F54A4426B5B17E8811((intptr_t)L_14, L_15, /*hidden argument*/NULL);
			int32_t L_17 = IntPtr_op_Explicit_mD69722A4C61D33FE70E790325C6E0DC690F9494F((intptr_t)L_16, /*hidden argument*/NULL);
			V_4 = L_17;
			int32_t L_18 = V_4;
			int32_t L_19 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(SpxError_t9D55DE98A6FCFAB772164D80F70B6393100AE342_il2cpp_TypeInfo_var);
			intptr_t L_20 = ((SpxError_t9D55DE98A6FCFAB772164D80F70B6393100AE342_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t9D55DE98A6FCFAB772164D80F70B6393100AE342_il2cpp_TypeInfo_var))->get_RuntimeError_1();
			V_8 = (intptr_t)L_20;
			int32_t L_21 = IntPtr_ToInt32_mD079F59AC1B0E135C9601014C12CE622EC2A083E((intptr_t*)(&V_8), /*hidden argument*/NULL);
			SpxExceptionThrower_ThrowIfFail_m2528B3C10CA3FC050E6D01EFABF83CC88DBCA4D9((bool)((((int32_t)L_18) == ((int32_t)L_19))? 1 : 0), L_21, /*hidden argument*/NULL);
			int32_t L_22 = V_3;
			int32_t L_23 = IntPtr_get_Size_m1342A61F11766A494F2F90D9B68CADAD62261929(/*hidden argument*/NULL);
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)L_23));
			intptr_t L_24 = V_2;
			int32_t L_25 = V_3;
			intptr_t L_26 = Marshal_ReadIntPtr_m9449B8C9A1B8247086FC76F54A4426B5B17E8811((intptr_t)L_24, L_25, /*hidden argument*/NULL);
			int32_t L_27 = IntPtr_op_Explicit_mD69722A4C61D33FE70E790325C6E0DC690F9494F((intptr_t)L_26, /*hidden argument*/NULL);
			V_5 = L_27;
			int32_t L_28 = V_3;
			int32_t L_29 = IntPtr_get_Size_m1342A61F11766A494F2F90D9B68CADAD62261929(/*hidden argument*/NULL);
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)L_29));
			intptr_t L_30 = V_2;
			int32_t L_31 = V_3;
			intptr_t L_32 = Marshal_ReadIntPtr_m9449B8C9A1B8247086FC76F54A4426B5B17E8811((intptr_t)L_30, L_31, /*hidden argument*/NULL);
			V_6 = (intptr_t)L_32;
			int32_t L_33 = V_3;
			int32_t L_34 = IntPtr_get_Size_m1342A61F11766A494F2F90D9B68CADAD62261929(/*hidden argument*/NULL);
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)L_34));
			intptr_t L_35 = V_2;
			int32_t L_36 = V_3;
			intptr_t L_37 = Marshal_ReadIntPtr_m9449B8C9A1B8247086FC76F54A4426B5B17E8811((intptr_t)L_35, L_36, /*hidden argument*/NULL);
			V_7 = (intptr_t)L_37;
			V_9 = 0;
			goto IL_0113;
		}

IL_00cf:
		{
			int32_t L_38 = IntPtr_get_Size_m1342A61F11766A494F2F90D9B68CADAD62261929(/*hidden argument*/NULL);
			int32_t L_39 = V_9;
			V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_38, (int32_t)L_39));
			intptr_t L_40 = V_6;
			int32_t L_41 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
			intptr_t L_42 = Marshal_ReadIntPtr_m9449B8C9A1B8247086FC76F54A4426B5B17E8811((intptr_t)L_40, L_41, /*hidden argument*/NULL);
			V_10 = (intptr_t)L_42;
			intptr_t L_43 = V_10;
			String_t* L_44 = Utf8StringMarshaler_MarshalNativeToManaged_mE3176B3F81593CCDD474A1DF3813804ECE4A79E7((intptr_t)L_43, /*hidden argument*/NULL);
			V_11 = L_44;
			intptr_t L_45 = V_7;
			int32_t L_46 = V_3;
			intptr_t L_47 = Marshal_ReadIntPtr_m9449B8C9A1B8247086FC76F54A4426B5B17E8811((intptr_t)L_45, L_46, /*hidden argument*/NULL);
			V_12 = (intptr_t)L_47;
			intptr_t L_48 = V_12;
			String_t* L_49 = Utf8StringMarshaler_MarshalNativeToManaged_mE3176B3F81593CCDD474A1DF3813804ECE4A79E7((intptr_t)L_48, /*hidden argument*/NULL);
			V_13 = L_49;
			Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_50 = __this->get_translationTextResultMap_6();
			String_t* L_51 = V_11;
			String_t* L_52 = V_13;
			NullCheck(L_50);
			Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD(L_50, L_51, L_52, /*hidden argument*/Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD_RuntimeMethod_var);
			int32_t L_53 = V_9;
			V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
		}

IL_0113:
		{
			int32_t L_54 = V_9;
			int32_t L_55 = V_5;
			if ((((int32_t)L_54) < ((int32_t)L_55)))
			{
				goto IL_00cf;
			}
		}

IL_0119:
		{
			IL2CPP_LEAVE(0x122, FINALLY_011b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_011b;
	}

FINALLY_011b:
	{ // begin finally (depth: 1)
		intptr_t L_56 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_mF098DF00F5341FDE4747A6F2004D5A0C9B03ED85((intptr_t)L_56, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(283)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(283)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x122, IL_0122)
	}

IL_0122:
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
extern "C" void CDECL ReversePInvokeWrapper_TranslationRecognizer_FireEvent_Recognizing_mA8D429CB9E8FFEC7C10E1F070F665B0BA84B0030(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	TranslationRecognizer_FireEvent_Recognizing_mA8D429CB9E8FFEC7C10E1F070F665B0BA84B0030(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_TranslationRecognizer_FireEvent_Recognized_mF4796E7E5F690D4341C2BE50E1D2A8BD88354429(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	TranslationRecognizer_FireEvent_Recognized_mF4796E7E5F690D4341C2BE50E1D2A8BD88354429(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_TranslationRecognizer_FireEvent_Canceled_mF5ABD120E0772BA94E219F2AEBE3A4967A14CC7C(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	TranslationRecognizer_FireEvent_Canceled_mF5ABD120E0772BA94E219F2AEBE3A4967A14CC7C(___hreco0, ___hevent1, ___pvContext2, NULL);

}
extern "C" void CDECL ReversePInvokeWrapper_TranslationRecognizer_FireEvent_SynthesisResult_mEAE05BBDCF505C4C9517E0A3B145F0A75D84D7AA(intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	TranslationRecognizer_FireEvent_SynthesisResult_mEAE05BBDCF505C4C9517E0A3B145F0A75D84D7AA(___hreco0, ___hevent1, ___pvContext2, NULL);

}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Recognizing_mCA94FA9628897C281138E33F6041BE9B59EFBD4C (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationRecognizer_add__Recognizing_mCA94FA9628897C281138E33F6041BE9B59EFBD4C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * V_0 = NULL;
	EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * V_1 = NULL;
	EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * V_2 = NULL;
	{
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_0 = __this->get__Recognizing_19();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_2 = V_1;
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26_il2cpp_TypeInfo_var));
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 ** L_5 = __this->get_address_of__Recognizing_19();
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_6 = V_2;
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_7 = V_1;
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 *>((EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_9 = V_0;
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 *)L_9) == ((RuntimeObject*)(EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Recognizing_mBA98EB8295ACBBDBACD6464704BD90B0BC1101AF (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationRecognizer_remove__Recognizing_mBA98EB8295ACBBDBACD6464704BD90B0BC1101AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * V_0 = NULL;
	EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * V_1 = NULL;
	EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * V_2 = NULL;
	{
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_0 = __this->get__Recognizing_19();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_2 = V_1;
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26_il2cpp_TypeInfo_var));
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 ** L_5 = __this->get_address_of__Recognizing_19();
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_6 = V_2;
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_7 = V_1;
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 *>((EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_9 = V_0;
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 *)L_9) == ((RuntimeObject*)(EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Recognized_m4A7DA49CC499B3B602BBF7E50187E94B4B7ACFFA (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationRecognizer_add__Recognized_m4A7DA49CC499B3B602BBF7E50187E94B4B7ACFFA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * V_0 = NULL;
	EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * V_1 = NULL;
	EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * V_2 = NULL;
	{
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_0 = __this->get__Recognized_20();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_2 = V_1;
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26_il2cpp_TypeInfo_var));
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 ** L_5 = __this->get_address_of__Recognized_20();
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_6 = V_2;
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_7 = V_1;
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 *>((EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_9 = V_0;
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 *)L_9) == ((RuntimeObject*)(EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Recognized_m26E6A00A709B851FD5A922A37719C60A29A863BC (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationRecognizer_remove__Recognized_m26E6A00A709B851FD5A922A37719C60A29A863BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * V_0 = NULL;
	EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * V_1 = NULL;
	EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * V_2 = NULL;
	{
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_0 = __this->get__Recognized_20();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_2 = V_1;
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26_il2cpp_TypeInfo_var));
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 ** L_5 = __this->get_address_of__Recognized_20();
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_6 = V_2;
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_7 = V_1;
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 *>((EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_9 = V_0;
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 *)L_9) == ((RuntimeObject*)(EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add__Canceled_m8D6B743B7A6A3EAB92D6BBA248D2A259B38C8C7C (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationRecognizer_add__Canceled_m8D6B743B7A6A3EAB92D6BBA248D2A259B38C8C7C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * V_0 = NULL;
	EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * V_1 = NULL;
	EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * V_2 = NULL;
	{
		EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * L_0 = __this->get__Canceled_21();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * L_2 = V_1;
		EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287_il2cpp_TypeInfo_var));
		EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 ** L_5 = __this->get_address_of__Canceled_21();
		EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * L_6 = V_2;
		EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * L_7 = V_1;
		EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 *>((EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * L_9 = V_0;
		EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 *)L_9) == ((RuntimeObject*)(EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove__Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove__Canceled_mD588774BEB68BD8897A6BFA332672912F143C591 (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationRecognizer_remove__Canceled_mD588774BEB68BD8897A6BFA332672912F143C591_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * V_0 = NULL;
	EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * V_1 = NULL;
	EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * V_2 = NULL;
	{
		EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * L_0 = __this->get__Canceled_21();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * L_2 = V_1;
		EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 *)CastclassSealed((RuntimeObject*)L_4, EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287_il2cpp_TypeInfo_var));
		EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 ** L_5 = __this->get_address_of__Canceled_21();
		EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * L_6 = V_2;
		EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * L_7 = V_1;
		EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 *>((EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 **)L_5, L_6, L_7);
		V_0 = L_8;
		EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * L_9 = V_0;
		EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 *)L_9) == ((RuntimeObject*)(EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add_Recognizing_m67D532A7D04B4831715816E256DB3B17427E8A6E (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * ___value0, const RuntimeMethod* method)
{
	{
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_0 = __this->get__Recognizing_19();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_1 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * L_2 = __this->get_recognizingCallbackDelegate_24();
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_3 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_gch_14();
		intptr_t L_4 = GCHandle_ToIntPtr_m8CF7D07846B0C741B04A2A4E5E9B5D505F4B3CCE(L_3, /*hidden argument*/NULL);
		intptr_t L_5 = Recognizer_recognizer_recognizing_set_callback_m28536074A86D5AB1369F95C9B714D7818C6311BA(L_1, L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_6 = ___value0;
		TranslationRecognizer_add__Recognizing_mCA94FA9628897C281138E33F6041BE9B59EFBD4C(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove_Recognizing(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove_Recognizing_mF7751DD217F9B58B8166E1CBB2AF7936B3D1B950 (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationRecognizer_remove_Recognizing_mF7751DD217F9B58B8166E1CBB2AF7936B3D1B950_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_0 = ___value0;
		TranslationRecognizer_remove__Recognizing_mBA98EB8295ACBBDBACD6464704BD90B0BC1101AF(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_1 = __this->get__Recognizing_19();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_2 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		intptr_t L_3 = Recognizer_recognizer_recognizing_set_callback_m28536074A86D5AB1369F95C9B714D7818C6311BA(L_2, (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add_Recognized_m4E94E7F03297CB6194CC85085DF74C4E5BF6CE7F (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * ___value0, const RuntimeMethod* method)
{
	{
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_0 = __this->get__Recognized_20();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_1 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * L_2 = __this->get_recognizedCallbackDelegate_25();
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_3 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_gch_14();
		intptr_t L_4 = GCHandle_ToIntPtr_m8CF7D07846B0C741B04A2A4E5E9B5D505F4B3CCE(L_3, /*hidden argument*/NULL);
		intptr_t L_5 = Recognizer_recognizer_recognized_set_callback_m4F3B1CF5955A9020E1924AB56B002BAFD8B70B85(L_1, L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_6 = ___value0;
		TranslationRecognizer_add__Recognized_m4A7DA49CC499B3B602BBF7E50187E94B4B7ACFFA(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove_Recognized(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove_Recognized_m58914DC22FB05CC109E995A09A1775A8D943CBE0 (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationRecognizer_remove_Recognized_m58914DC22FB05CC109E995A09A1775A8D943CBE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_0 = ___value0;
		TranslationRecognizer_remove__Recognized_m26E6A00A709B851FD5A922A37719C60A29A863BC(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_1 = __this->get__Recognized_20();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_2 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		intptr_t L_3 = Recognizer_recognizer_recognized_set_callback_m4F3B1CF5955A9020E1924AB56B002BAFD8B70B85(L_2, (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::add_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_add_Canceled_mB54275ABE59490C19A1FCED23C4545847CDB3EDE (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * ___value0, const RuntimeMethod* method)
{
	{
		EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * L_0 = __this->get__Canceled_21();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_1 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * L_2 = __this->get_canceledCallbackDelegate_26();
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_3 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_gch_14();
		intptr_t L_4 = GCHandle_ToIntPtr_m8CF7D07846B0C741B04A2A4E5E9B5D505F4B3CCE(L_3, /*hidden argument*/NULL);
		intptr_t L_5 = Recognizer_recognizer_canceled_set_callback_m222AC60BE8CAAE0E00D5A8E50031C1F99BBC532D(L_1, L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_5, /*hidden argument*/NULL);
	}

IL_0029:
	{
		EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * L_6 = ___value0;
		TranslationRecognizer_add__Canceled_m8D6B743B7A6A3EAB92D6BBA248D2A259B38C8C7C(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::remove_Canceled(System.EventHandler`1<Microsoft.CognitiveServices.Speech.Translation.TranslationRecognitionCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_remove_Canceled_m5006AC8827A487546F98104D3A62103FFF00671F (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationRecognizer_remove_Canceled_m5006AC8827A487546F98104D3A62103FFF00671F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * L_0 = ___value0;
		TranslationRecognizer_remove__Canceled_mD588774BEB68BD8897A6BFA332672912F143C591(__this, L_0, /*hidden argument*/NULL);
		EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * L_1 = __this->get__Canceled_21();
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_2 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		intptr_t L_3 = Recognizer_recognizer_canceled_set_callback_m222AC60BE8CAAE0E00D5A8E50031C1F99BBC532D(L_2, (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD((intptr_t)L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::.ctor(Microsoft.CognitiveServices.Speech.SpeechTranslationConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer__ctor_m6C17DF3CBAA86392096A296DFA407B0B18B5F68D (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, SpeechTranslationConfig_t42B90011A1EF7B464F33442DC1CFCD9A37177A53 * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationRecognizer__ctor_m6C17DF3CBAA86392096A296DFA407B0B18B5F68D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GetRecognizerFromConfigDelegate_t1E1956B672CBA1A2BDC15031DFC99B1DFBF39E26 * L_0 = (GetRecognizerFromConfigDelegate_t1E1956B672CBA1A2BDC15031DFC99B1DFBF39E26 *)il2cpp_codegen_object_new(GetRecognizerFromConfigDelegate_t1E1956B672CBA1A2BDC15031DFC99B1DFBF39E26_il2cpp_TypeInfo_var);
		GetRecognizerFromConfigDelegate__ctor_m20C5D68DC30492452813140BDB2974219F284DF6(L_0, NULL, (intptr_t)((intptr_t)SpxFactory_recognizer_create_translation_recognizer_from_config_mB1DE2DFA2EAEC9857328CCAA2D62182FDD7F827A_RuntimeMethod_var), /*hidden argument*/NULL);
		SpeechTranslationConfig_t42B90011A1EF7B464F33442DC1CFCD9A37177A53 * L_1 = ___config0;
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_2 = Recognizer_FromConfig_m4EBC18E31B66DBBDE63534A28644AB6DD241C672(L_0, L_1, /*hidden argument*/NULL);
		TranslationRecognizer__ctor_m30A493F6AF8B764F06DE38D047B559FB7EAB4490(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::.ctor(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer__ctor_m30A493F6AF8B764F06DE38D047B559FB7EAB4490 (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___recoHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationRecognizer__ctor_m30A493F6AF8B764F06DE38D047B559FB7EAB4490_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_0 = ___recoHandle0;
		Recognizer__ctor_mA212ABA7ACCB40EB42D035F7EE635E78F6ED0F68(__this, L_0, /*hidden argument*/NULL);
		CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * L_1 = (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_mDE545F22DBFF62D4085AF8B43D6B192D54E00386(L_1, NULL, (intptr_t)((intptr_t)TranslationRecognizer_FireEvent_Recognizing_mA8D429CB9E8FFEC7C10E1F070F665B0BA84B0030_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_recognizingCallbackDelegate_24(L_1);
		CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * L_2 = (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_mDE545F22DBFF62D4085AF8B43D6B192D54E00386(L_2, NULL, (intptr_t)((intptr_t)TranslationRecognizer_FireEvent_Recognized_mF4796E7E5F690D4341C2BE50E1D2A8BD88354429_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_recognizedCallbackDelegate_25(L_2);
		CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * L_3 = (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_mDE545F22DBFF62D4085AF8B43D6B192D54E00386(L_3, NULL, (intptr_t)((intptr_t)TranslationRecognizer_FireEvent_Canceled_mF5ABD120E0772BA94E219F2AEBE3A4967A14CC7C_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_canceledCallbackDelegate_26(L_3);
		CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 * L_4 = (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)il2cpp_codegen_object_new(CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35_il2cpp_TypeInfo_var);
		CallbackFunctionDelegate__ctor_mDE545F22DBFF62D4085AF8B43D6B192D54E00386(L_4, NULL, (intptr_t)((intptr_t)TranslationRecognizer_FireEvent_SynthesisResult_mEAE05BBDCF505C4C9517E0A3B145F0A75D84D7AA_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_translationSynthesisCallbackDelegate_27(L_4);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_5 = ___recoHandle0;
		SpxExceptionThrower_ThrowIfNull_mC3247410BA2C3E2E5E5EB0A5D03DA5ECC30C4FF5(L_5, _stringLiteral6BA569B8DA8733ED59135DD71FE81FDE1FD32DC1, /*hidden argument*/NULL);
		V_0 = (intptr_t)(0);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_6 = ___recoHandle0;
		intptr_t L_7 = Recognizer_recognizer_get_property_bag_m78DB85D0F192B71179FB5431EF9964B091015F04(L_6, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_7, /*hidden argument*/NULL);
		intptr_t L_8 = V_0;
		PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * L_9 = (PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 *)il2cpp_codegen_object_new(PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870_il2cpp_TypeInfo_var);
		PropertyCollection__ctor_mA9184AF1E753A0FA6F0AA9151AD16E9D2465A557(L_9, (intptr_t)L_8, /*hidden argument*/NULL);
		TranslationRecognizer_set_Properties_m2885A31BD24A148C4B8EB79CE438E44B2179B509_inline(__this, L_9, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.PropertyCollection Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * TranslationRecognizer_get_Properties_m925EB0FFA9D16E0D34BB44876AA8F6611E2839FA (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, const RuntimeMethod* method)
{
	{
		PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * L_0 = __this->get_U3CPropertiesU3Ek__BackingField_23();
		return L_0;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::set_Properties(Microsoft.CognitiveServices.Speech.PropertyCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_set_Properties_m2885A31BD24A148C4B8EB79CE438E44B2179B509 (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * ___value0, const RuntimeMethod* method)
{
	{
		PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * L_0 = ___value0;
		__this->set_U3CPropertiesU3Ek__BackingField_23(L_0);
		return;
	}
}
// System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::StartContinuousRecognitionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * TranslationRecognizer_StartContinuousRecognitionAsync_m6171E2374D614CD945A8B6C4A2055E5C45019BCA (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationRecognizer_StartContinuousRecognitionAsync_m6171E2374D614CD945A8B6C4A2055E5C45019BCA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_0, __this, (intptr_t)((intptr_t)TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__43_0_m4D3D737AE4B9C780C880E60BD7084AE7171C5AB6_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_1 = Task_Run_m201E4C04F97BCF541633AF913DF20C6FF7872E44(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Threading.Tasks.Task Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::StopContinuousRecognitionAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * TranslationRecognizer_StopContinuousRecognitionAsync_m1773A26F88A95B7C8FF9539F0B1DD1DDB845CEA5 (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationRecognizer_StopContinuousRecognitionAsync_m1773A26F88A95B7C8FF9539F0B1DD1DDB845CEA5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_0, __this, (intptr_t)((intptr_t)TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__44_0_m42FA92DD686BA88181F433709FF0C6C668241447_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_il2cpp_TypeInfo_var);
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_1 = Task_Run_m201E4C04F97BCF541633AF913DF20C6FF7872E44(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_Finalize_mB6C164E2D8C470F067FC2AE26D8368B62F0DC824 (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		il2cpp_codegen_memory_barrier();
		((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->set_isDisposing_16(1);
		VirtActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.CognitiveServices.Speech.Recognizer::Dispose(System.Boolean) */, __this, (bool)0);
		IL2CPP_LEAVE(0x19, FINALLY_0012);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0012;
	}

FINALLY_0012:
	{ // begin finally (depth: 1)
		Recognizer_Finalize_m9750ABD8D70F016156BD0F8663C9B4B6CE9CF373(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(18)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(18)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x19, IL_0019)
	}

IL_0019:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_Dispose_mD9A3D65412E5EB29E792C9BFC144358928E6FFB5 (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationRecognizer_Dispose_mD9A3D65412E5EB29E792C9BFC144358928E6FFB5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * G_B7_0 = NULL;
	InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * G_B6_0 = NULL;
	PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * G_B10_0 = NULL;
	PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * G_B9_0 = NULL;
	{
		bool L_0 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_disposed_15();
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_1 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		if (!L_1)
		{
			goto IL_00c6;
		}
	}
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_2 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		intptr_t L_3 = Recognizer_recognizer_recognizing_set_callback_m28536074A86D5AB1369F95C9B714D7818C6311BA(L_2, (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD((intptr_t)L_3, /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_4 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		intptr_t L_5 = Recognizer_recognizer_recognized_set_callback_m4F3B1CF5955A9020E1924AB56B002BAFD8B70B85(L_4, (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD((intptr_t)L_5, /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_6 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		intptr_t L_7 = Recognizer_recognizer_canceled_set_callback_m222AC60BE8CAAE0E00D5A8E50031C1F99BBC532D(L_6, (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD((intptr_t)L_7, /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_8 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		intptr_t L_9 = Recognizer_translator_synthesizing_audio_set_callback_mABB2BE127951DEDA4095F439B71E3FD4E453D0A0(L_8, (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD((intptr_t)L_9, /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_10 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		intptr_t L_11 = Recognizer_recognizer_session_started_set_callback_mAD7BA5FACE695E2EF603EBAB87835F312E3DD5B3(L_10, (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD((intptr_t)L_11, /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_12 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		intptr_t L_13 = Recognizer_recognizer_session_stopped_set_callback_m8300A4A86349CEE28C34FF4AFAAE6CEB685A4CE2(L_12, (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD((intptr_t)L_13, /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_14 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		intptr_t L_15 = Recognizer_recognizer_speech_start_detected_set_callback_m58AA90C6CD1B4F2190071E56A1AF2FBD5F179BF8(L_14, (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD((intptr_t)L_15, /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_16 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		intptr_t L_17 = Recognizer_recognizer_speech_end_detected_set_callback_mB106BEC5AE0BB846C4448C9A7FD63854AE536A43(L_16, (CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL, (intptr_t)(0), /*hidden argument*/NULL);
		SpxExceptionThrower_LogErrorIfFail_mC27E865F834245B35B0DCCC3C627670AEEE9A0BD((intptr_t)L_17, /*hidden argument*/NULL);
	}

IL_00c6:
	{
		bool L_18 = ___disposing0;
		if (!L_18)
		{
			goto IL_00eb;
		}
	}
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_19 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)__this)->get_recoHandle_4();
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_20 = L_19;
		G_B6_0 = L_20;
		if (L_20)
		{
			G_B7_0 = L_20;
			goto IL_00d5;
		}
	}
	{
		goto IL_00da;
	}

IL_00d5:
	{
		NullCheck(G_B7_0);
		SafeHandle_Dispose_m6433E520A7D38A8C424843DFCDB5EF2384EC8A6A(G_B7_0, /*hidden argument*/NULL);
	}

IL_00da:
	{
		PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * L_21 = TranslationRecognizer_get_Properties_m925EB0FFA9D16E0D34BB44876AA8F6611E2839FA_inline(__this, /*hidden argument*/NULL);
		PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * L_22 = L_21;
		G_B9_0 = L_22;
		if (L_22)
		{
			G_B10_0 = L_22;
			goto IL_00e6;
		}
	}
	{
		goto IL_00eb;
	}

IL_00e6:
	{
		NullCheck(G_B10_0);
		VirtActionInvoker0::Invoke(4 /* System.Void Microsoft.CognitiveServices.Speech.PropertyCollection::Close() */, G_B10_0);
	}

IL_00eb:
	{
		__this->set_recognizingCallbackDelegate_24((CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL);
		__this->set_recognizedCallbackDelegate_25((CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL);
		__this->set_canceledCallbackDelegate_26((CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL);
		__this->set_translationSynthesisCallbackDelegate_27((CallbackFunctionDelegate_tCCAD97D49ABF8BC9FC62F3CAA16106056A31AC35 *)NULL);
		__this->set_audioInputKeepAlive_28((AudioConfig_tCB874753FD328FB0FE6B8176886CD6DD2E1D610A *)NULL);
		bool L_23 = ___disposing0;
		Recognizer_Dispose_mB79F3964354355E1B534A782677B72F0F17FB3B6(__this, L_23, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Recognizing(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Recognizing_mA8D429CB9E8FFEC7C10E1F070F665B0BA84B0030 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationRecognizer_FireEvent_Recognizing_mA8D429CB9E8FFEC7C10E1F070F665B0BA84B0030_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * V_0 = NULL;
	TranslationRecognitionEventArgs_tB91AB6FD826F377BB0C58DAB09D2FB2BEF06D002 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * G_B5_0 = NULL;
	EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA_m8B53FF5B5E0E2D9118937B5A7B1E220EF049F635((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA_m8B53FF5B5E0E2D9118937B5A7B1E220EF049F635_RuntimeMethod_var);
			V_0 = L_1;
			TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)L_3)->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_0040;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			TranslationRecognitionEventArgs_tB91AB6FD826F377BB0C58DAB09D2FB2BEF06D002 * L_6 = (TranslationRecognitionEventArgs_tB91AB6FD826F377BB0C58DAB09D2FB2BEF06D002 *)il2cpp_codegen_object_new(TranslationRecognitionEventArgs_tB91AB6FD826F377BB0C58DAB09D2FB2BEF06D002_il2cpp_TypeInfo_var);
			TranslationRecognitionEventArgs__ctor_m6A2FF47E651A996D20F80B21B3216560BEA24494(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_8 = L_7->get__Recognizing_19();
			EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * L_10 = V_0;
			TranslationRecognitionEventArgs_tB91AB6FD826F377BB0C58DAB09D2FB2BEF06D002 * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_mC83A79A4E6C5FD3F03F8C6D52AD4CE3844DA841E(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_mC83A79A4E6C5FD3F03F8C6D52AD4CE3844DA841E_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_0040;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)__exception_local);
		Exception_t * L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m0A082DA2E1A7C1F0846E271B2AAA63673CE20402(L_13, /*hidden argument*/NULL);
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Recognized(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Recognized_mF4796E7E5F690D4341C2BE50E1D2A8BD88354429 (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationRecognizer_FireEvent_Recognized_mF4796E7E5F690D4341C2BE50E1D2A8BD88354429_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * V_0 = NULL;
	TranslationRecognitionEventArgs_tB91AB6FD826F377BB0C58DAB09D2FB2BEF06D002 * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * G_B5_0 = NULL;
	EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA_m8B53FF5B5E0E2D9118937B5A7B1E220EF049F635((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA_m8B53FF5B5E0E2D9118937B5A7B1E220EF049F635_RuntimeMethod_var);
			V_0 = L_1;
			TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)L_3)->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_0040;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			TranslationRecognitionEventArgs_tB91AB6FD826F377BB0C58DAB09D2FB2BEF06D002 * L_6 = (TranslationRecognitionEventArgs_tB91AB6FD826F377BB0C58DAB09D2FB2BEF06D002 *)il2cpp_codegen_object_new(TranslationRecognitionEventArgs_tB91AB6FD826F377BB0C58DAB09D2FB2BEF06D002_il2cpp_TypeInfo_var);
			TranslationRecognitionEventArgs__ctor_m6A2FF47E651A996D20F80B21B3216560BEA24494(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_8 = L_7->get__Recognized_20();
			EventHandler_1_t473D5C9161E85C61AFFC21333EE74CDDA2F91A26 * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * L_10 = V_0;
			TranslationRecognitionEventArgs_tB91AB6FD826F377BB0C58DAB09D2FB2BEF06D002 * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_mC83A79A4E6C5FD3F03F8C6D52AD4CE3844DA841E(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_mC83A79A4E6C5FD3F03F8C6D52AD4CE3844DA841E_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_0040;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)__exception_local);
		Exception_t * L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m0A082DA2E1A7C1F0846E271B2AAA63673CE20402(L_13, /*hidden argument*/NULL);
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_Canceled(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_Canceled_mF5ABD120E0772BA94E219F2AEBE3A4967A14CC7C (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationRecognizer_FireEvent_Canceled_mF5ABD120E0772BA94E219F2AEBE3A4967A14CC7C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * V_0 = NULL;
	TranslationRecognitionCanceledEventArgs_tD05B18077AB718A788C24ADB4A1FE3CF2593FEFE * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * G_B5_0 = NULL;
	EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA_m8B53FF5B5E0E2D9118937B5A7B1E220EF049F635((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA_m8B53FF5B5E0E2D9118937B5A7B1E220EF049F635_RuntimeMethod_var);
			V_0 = L_1;
			TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)L_3)->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_0040;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			TranslationRecognitionCanceledEventArgs_tD05B18077AB718A788C24ADB4A1FE3CF2593FEFE * L_6 = (TranslationRecognitionCanceledEventArgs_tD05B18077AB718A788C24ADB4A1FE3CF2593FEFE *)il2cpp_codegen_object_new(TranslationRecognitionCanceledEventArgs_tD05B18077AB718A788C24ADB4A1FE3CF2593FEFE_il2cpp_TypeInfo_var);
			TranslationRecognitionCanceledEventArgs__ctor_m061014AA8EC6CB9F98D2A2CBC4F45F4901D460A2(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * L_8 = L_7->get__Canceled_21();
			EventHandler_1_t8D87EF1FCD2AF2C6C9A4CF16FE964F68C7369287 * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * L_10 = V_0;
			TranslationRecognitionCanceledEventArgs_tD05B18077AB718A788C24ADB4A1FE3CF2593FEFE * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m52B9B734688BBD70836B9BBAFB6EDA2DAB959B44(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_m52B9B734688BBD70836B9BBAFB6EDA2DAB959B44_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_0040;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)__exception_local);
		Exception_t * L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m0A082DA2E1A7C1F0846E271B2AAA63673CE20402(L_13, /*hidden argument*/NULL);
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::FireEvent_SynthesisResult(System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_FireEvent_SynthesisResult_mEAE05BBDCF505C4C9517E0A3B145F0A75D84D7AA (intptr_t ___hreco0, intptr_t ___hevent1, intptr_t ___pvContext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationRecognizer_FireEvent_SynthesisResult_mEAE05BBDCF505C4C9517E0A3B145F0A75D84D7AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * V_0 = NULL;
	TranslationSynthesisEventArgs_t6DA67C6A6D2C0FE0CE20022D868042E874475E6F * V_1 = NULL;
	Exception_t * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	EventHandler_1_tE345DD93C65E9D79DD98B8145C49470E0550EE61 * G_B5_0 = NULL;
	EventHandler_1_tE345DD93C65E9D79DD98B8145C49470E0550EE61 * G_B4_0 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = ___pvContext2;
			TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * L_1 = InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA_m8B53FF5B5E0E2D9118937B5A7B1E220EF049F635((intptr_t)L_0, /*hidden argument*/InteropSafeHandle_GetObjectFromWeakHandle_TisTranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA_m8B53FF5B5E0E2D9118937B5A7B1E220EF049F635_RuntimeMethod_var);
			V_0 = L_1;
			TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * L_2 = V_0;
			if (!L_2)
			{
				goto IL_0014;
			}
		}

IL_000a:
		{
			TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * L_3 = V_0;
			NullCheck(L_3);
			bool L_4 = ((Recognizer_t1C175EE685E747941AB656D2EE9EA66511BD69B9 *)L_3)->get_isDisposing_16();
			il2cpp_codegen_memory_barrier();
			if (!L_4)
			{
				goto IL_0016;
			}
		}

IL_0014:
		{
			goto IL_0040;
		}

IL_0016:
		{
			intptr_t L_5 = ___hevent1;
			TranslationSynthesisEventArgs_t6DA67C6A6D2C0FE0CE20022D868042E874475E6F * L_6 = (TranslationSynthesisEventArgs_t6DA67C6A6D2C0FE0CE20022D868042E874475E6F *)il2cpp_codegen_object_new(TranslationSynthesisEventArgs_t6DA67C6A6D2C0FE0CE20022D868042E874475E6F_il2cpp_TypeInfo_var);
			TranslationSynthesisEventArgs__ctor_mFF2F042C77F2C9A53E5E3F84D82462F36E7F05B6(L_6, (intptr_t)L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * L_7 = V_0;
			NullCheck(L_7);
			EventHandler_1_tE345DD93C65E9D79DD98B8145C49470E0550EE61 * L_8 = L_7->get__Synthesizing_22();
			EventHandler_1_tE345DD93C65E9D79DD98B8145C49470E0550EE61 * L_9 = L_8;
			G_B4_0 = L_9;
			if (L_9)
			{
				G_B5_0 = L_9;
				goto IL_0029;
			}
		}

IL_0026:
		{
			goto IL_0030;
		}

IL_0029:
		{
			TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * L_10 = V_0;
			TranslationSynthesisEventArgs_t6DA67C6A6D2C0FE0CE20022D868042E874475E6F * L_11 = V_1;
			NullCheck(G_B5_0);
			EventHandler_1_Invoke_m90C803730FBF6E32D7BCCBC18070173899ADA43C(G_B5_0, L_10, L_11, /*hidden argument*/EventHandler_1_Invoke_m90C803730FBF6E32D7BCCBC18070173899ADA43C_RuntimeMethod_var);
		}

IL_0030:
		{
			goto IL_0040;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0032;
		throw e;
	}

CATCH_0032:
	{ // begin catch(System.Exception)
		V_2 = ((Exception_t *)__exception_local);
		Exception_t * L_12 = V_2;
		NullCheck(L_12);
		String_t* L_13 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_12);
		SpxExceptionThrower_LogError_m0A082DA2E1A7C1F0846E271B2AAA63673CE20402(L_13, /*hidden argument*/NULL);
		goto IL_0040;
	} // end catch (depth: 1)

IL_0040:
	{
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::<StartContinuousRecognitionAsync>b__43_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__43_0_m4D3D737AE4B9C780C880E60BD7084AE7171C5AB6 (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationRecognizer_U3CStartContinuousRecognitionAsyncU3Eb__43_0_m4D3D737AE4B9C780C880E60BD7084AE7171C5AB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_0, __this, (intptr_t)((intptr_t)Recognizer_StartContinuousRecognition_m2A030F4CAA792DFFFA04C9FF5FF14F70BA05458A_RuntimeMethod_var), /*hidden argument*/NULL);
		Recognizer_DoAsyncRecognitionAction_mB64950A6774B0D59E72F2962E5E9A7409DCE46BF(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationRecognizer::<StopContinuousRecognitionAsync>b__44_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__44_0_m42FA92DD686BA88181F433709FF0C6C668241447 (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationRecognizer_U3CStopContinuousRecognitionAsyncU3Eb__44_0_m42FA92DD686BA88181F433709FF0C6C668241447_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_0 = (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)il2cpp_codegen_object_new(Action_t591D2A86165F896B4B800BB5C25CE18672A55579_il2cpp_TypeInfo_var);
		Action__ctor_m570E96B2A0C48BC1DC6788460316191F24572760(L_0, __this, (intptr_t)((intptr_t)Recognizer_StopContinuousRecognition_m6E569B61B4D371939A219D172F8D841CED5CC265_RuntimeMethod_var), /*hidden argument*/NULL);
		Recognizer_DoAsyncRecognitionAction_mB64950A6774B0D59E72F2962E5E9A7409DCE46BF(__this, L_0, /*hidden argument*/NULL);
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
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisEventArgs__ctor_mFF2F042C77F2C9A53E5E3F84D82462F36E7F05B6 (TranslationSynthesisEventArgs_t6DA67C6A6D2C0FE0CE20022D868042E874475E6F * __this, intptr_t ___eventHandlePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationSynthesisEventArgs__ctor_mFF2F042C77F2C9A53E5E3F84D82462F36E7F05B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___eventHandlePtr0;
		SessionEventArgs__ctor_m6EB4C8FB47CD8ACFDED454634F1E9C30E719805C(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)(0);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_1 = ((SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845 *)__this)->get_eventHandle_1();
		intptr_t L_2 = Recognizer_recognizer_recognition_event_get_result_m4DA203B63EF3F8E6944D99BB42D98653FDC2CEFC(L_1, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_2, /*hidden argument*/NULL);
		intptr_t L_3 = V_0;
		TranslationSynthesisResult_t3B0D43E9706F4004196979AE34C7DAF4EDFDBAEA * L_4 = (TranslationSynthesisResult_t3B0D43E9706F4004196979AE34C7DAF4EDFDBAEA *)il2cpp_codegen_object_new(TranslationSynthesisResult_t3B0D43E9706F4004196979AE34C7DAF4EDFDBAEA_il2cpp_TypeInfo_var);
		TranslationSynthesisResult__ctor_m691EEBD612C0DBAE4B5A22BE51ED709888F58A67(L_4, (intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_U3CResultU3Ek__BackingField_5(L_4);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TranslationSynthesisResult_t3B0D43E9706F4004196979AE34C7DAF4EDFDBAEA * TranslationSynthesisEventArgs_get_Result_mD5DBCA2DDACD4B90254C208BD06385EDF6BBE10E (TranslationSynthesisEventArgs_t6DA67C6A6D2C0FE0CE20022D868042E874475E6F * __this, const RuntimeMethod* method)
{
	{
		TranslationSynthesisResult_t3B0D43E9706F4004196979AE34C7DAF4EDFDBAEA * L_0 = __this->get_U3CResultU3Ek__BackingField_5();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisEventArgs::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TranslationSynthesisEventArgs_ToString_mEF6F6B8610D5798919FC2A15B9B3FDB8972F46B9 (TranslationSynthesisEventArgs_t6DA67C6A6D2C0FE0CE20022D868042E874475E6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationSynthesisEventArgs_ToString_mEF6F6B8610D5798919FC2A15B9B3FDB8972F46B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_0 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		String_t* L_1 = SessionEventArgs_get_SessionId_mF73CFD57B462E48C3591A157402336B3123DBFDD_inline(__this, /*hidden argument*/NULL);
		TranslationSynthesisResult_t3B0D43E9706F4004196979AE34C7DAF4EDFDBAEA * L_2 = TranslationSynthesisEventArgs_get_Result_mD5DBCA2DDACD4B90254C208BD06385EDF6BBE10E_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4 = String_Format_m453C2840536781B718FF4D0F5C7EEC8E5481C435(L_0, _stringLiteralBC1AC5A8EE842A7C84F7BDB982C54F4A5AD1CA52, L_1, L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisResult__ctor_m691EEBD612C0DBAE4B5A22BE51ED709888F58A67 (TranslationSynthesisResult_t3B0D43E9706F4004196979AE34C7DAF4EDFDBAEA * __this, intptr_t ___resultPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationSynthesisResult__ctor_m691EEBD612C0DBAE4B5A22BE51ED709888F58A67_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = Array_Empty_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m6E1369AB0F50C5F57BD7D64D27D0FCA7828513DD_inline(/*hidden argument*/Array_Empty_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m6E1369AB0F50C5F57BD7D64D27D0FCA7828513DD_RuntimeMethod_var);
		__this->set_audio_1(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		intptr_t L_1 = ___resultPtr0;
		SpxExceptionThrower_ThrowIfNull_m2979CAFE21C599A40FB34AAE7777FF5BF0B9E03C((intptr_t)L_1, (String_t*)NULL, /*hidden argument*/NULL);
		intptr_t L_2 = ___resultPtr0;
		HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 * L_3 = (HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4 *)il2cpp_codegen_object_new(HandleRelease_t2BC4B35BC3DD7C04472EB5FE425F91C6114856D4_il2cpp_TypeInfo_var);
		HandleRelease__ctor_m38C14A53FE9403DFAD6B13923B2D9FACA01588AE(L_3, NULL, (intptr_t)((intptr_t)RecognitionResult_recognizer_result_handle_release_mCBF8BCD60731C507F593669FECC6DB7260F84ECC_RuntimeMethod_var), /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_4 = (InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA *)il2cpp_codegen_object_new(InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA_il2cpp_TypeInfo_var);
		InteropSafeHandle__ctor_mABAE89E85BC9B1A642696DAF491F83BEA4A9A4BF(L_4, (intptr_t)L_2, L_3, /*hidden argument*/NULL);
		__this->set_resultHandle_2(L_4);
		V_0 = 0;
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_5 = __this->get_resultHandle_2();
		intptr_t L_6 = RecognitionResult_result_get_reason_mA12191A2CF4F15BDEB0B9384864025F7AA1637FA(L_5, (int32_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		__this->set_U3CReasonU3Ek__BackingField_0(L_7);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_8 = __this->get_resultHandle_2();
		TranslationSynthesisResult_GetAudioData_mE782E9A83EF85CFCA8B8AC3827CACF596834E8B1(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.CognitiveServices.Speech.ResultReason Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TranslationSynthesisResult_get_Reason_mDA53BB6A24DC0980CCA0179C1A299C8B65CF5B38 (TranslationSynthesisResult_t3B0D43E9706F4004196979AE34C7DAF4EDFDBAEA * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_0();
		return L_0;
	}
}
// System.String Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TranslationSynthesisResult_ToString_mBC31F78A4B7E9294167426A72C9B33A5B53996C0 (TranslationSynthesisResult_t3B0D43E9706F4004196979AE34C7DAF4EDFDBAEA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationSynthesisResult_ToString_mBC31F78A4B7E9294167426A72C9B33A5B53996C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_0 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		int32_t L_1 = TranslationSynthesisResult_get_Reason_mDA53BB6A24DC0980CCA0179C1A299C8B65CF5B38_inline(__this, /*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(ResultReason_tB34D6499A6E863A6A566D23D69FF0013124D2890_il2cpp_TypeInfo_var, &L_2);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_4 = __this->get_audio_1();
		NullCheck(L_4);
		int32_t L_5 = (((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))));
		RuntimeObject * L_6 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7 = String_Format_m453C2840536781B718FF4D0F5C7EEC8E5481C435(L_0, _stringLiteralA9B3F64B6475CF7F39B8C0A6BFFCCF483577D328, L_3, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		int32_t L_8 = TranslationSynthesisResult_get_Reason_mDA53BB6A24DC0980CCA0179C1A299C8B65CF5B38_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_004d;
		}
	}
	{
		String_t* L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_10 = CultureInfo_get_InvariantCulture_mF13B47F8A763CE6A9C8A8BB2EED33FF8F7A63A72(/*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_RuntimeMethod_var);
		String_t* L_12 = String_Format_mF68EE0DEC1AA5ADE9DFEF9AE0508E428FBB10EFD(L_10, _stringLiteralAF8DFC3C5D4593EA429262712EECB3A109BDFFA4, L_11, /*hidden argument*/NULL);
		String_t* L_13 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_9, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
	}

IL_004d:
	{
		String_t* L_14 = V_0;
		return L_14;
	}
}
// System.Void Microsoft.CognitiveServices.Speech.Translation.TranslationSynthesisResult::GetAudioData(Microsoft.CognitiveServices.Speech.Internal.InteropSafeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TranslationSynthesisResult_GetAudioData_mE782E9A83EF85CFCA8B8AC3827CACF596834E8B1 (TranslationSynthesisResult_t3B0D43E9706F4004196979AE34C7DAF4EDFDBAEA * __this, InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * ___resultHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TranslationSynthesisResult_GetAudioData_mE782E9A83EF85CFCA8B8AC3827CACF596834E8B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_0 = ___resultHandle0;
		SpxExceptionThrower_ThrowIfNull_mC3247410BA2C3E2E5E5EB0A5D03DA5ECC30C4FF5(L_0, _stringLiteral9D767AA3732E5ED3AF5D1BA2A194E218BA775018, /*hidden argument*/NULL);
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_1 = ___resultHandle0;
		bool L_2 = RecognitionResult_recognizer_result_handle_is_valid_m0461056AE8F887067E41F90018147C90FD01A6DD(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_006f;
		}
	}
	{
		V_0 = 0;
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_3 = ___resultHandle0;
		intptr_t L_4 = RecognitionResult_translation_synthesis_result_get_audio_data_m2D2B7A555C4F1F6F3319CDB0BF3526DFCB1FB377(L_3, (intptr_t)(0), (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_4;
		intptr_t L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SpxError_t9D55DE98A6FCFAB772164D80F70B6393100AE342_il2cpp_TypeInfo_var);
		intptr_t L_6 = ((SpxError_t9D55DE98A6FCFAB772164D80F70B6393100AE342_StaticFields*)il2cpp_codegen_static_fields_for(SpxError_t9D55DE98A6FCFAB772164D80F70B6393100AE342_il2cpp_TypeInfo_var))->get_BufferTooSmall_0();
		bool L_7 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_5, (intptr_t)L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		intptr_t L_9 = Marshal_AllocHGlobal_m3BFCB876D7469108C8676D6DD90D943806C13A58(L_8, /*hidden argument*/NULL);
		V_2 = (intptr_t)L_9;
	}

IL_0037:
	try
	{ // begin try (depth: 1)
		InteropSafeHandle_tE6E707DF798024CE6633F47CAB8A99B52DE104FA * L_10 = ___resultHandle0;
		intptr_t L_11 = V_2;
		intptr_t L_12 = RecognitionResult_translation_synthesis_result_get_audio_data_m2D2B7A555C4F1F6F3319CDB0BF3526DFCB1FB377(L_10, (intptr_t)L_11, (int32_t*)(&V_0), /*hidden argument*/NULL);
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_14 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_13);
		__this->set_audio_1(L_14);
		intptr_t L_15 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_16 = __this->get_audio_1();
		int32_t L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_Copy_m64744D9E23AFC00AA06CD6B057E19B7C0CE4C0C2((intptr_t)L_15, L_16, 0, L_17, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x68, FINALLY_0061);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0061;
	}

FINALLY_0061:
	{ // begin finally (depth: 1)
		intptr_t L_18 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_mF098DF00F5341FDE4747A6F2004D5A0C9B03ED85((intptr_t)L_18, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(97)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(97)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x68, IL_0068)
	}

IL_0068:
	{
		return;
	}

IL_0069:
	{
		intptr_t L_19 = V_1;
		SpxExceptionThrower_ThrowIfFail_m90C92380A9E7BF9B63F1192DE120A1A5E9445911((intptr_t)L_19, /*hidden argument*/NULL);
	}

IL_006f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CancellationDetails_set_Reason_m578B1960A6530BCC26465D19FFBBD66A74B3A9F3_inline (CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CReasonU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorCode_m17C4CA0669E323A99CF1EF485ECB7AE3C2D9737F_inline (CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CErrorCodeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void CancellationDetails_set_ErrorDetails_m612BA9D99F7B23DC7793DD5E9269C1B1B82CFC79_inline (CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CErrorDetailsU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_Reason_mFA299E969201C80764CE51E9385C711D1A5BE7C4_inline (CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* CancellationDetails_get_ErrorDetails_m753FE13177C2092EB81EBB530389877925316E2E_inline (CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CErrorDetailsU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SafeHandle_SetHandle_m84A4309A0B6AFD09D5CD087B172BF37F999CA288_inline (SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383 * __this, intptr_t ___handle0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___handle0;
		__this->set_handle_0((intptr_t)L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* SessionEventArgs_get_SessionId_mF73CFD57B462E48C3591A157402336B3123DBFDD_inline (SessionEventArgs_t17920A98AB41FD4D9CDD2AEC9BEDBBC5A7F68845 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CSessionIdU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint64_t RecognitionEventArgs_get_Offset_m1B25331E2A8187D036670E2F774D31AFA7A96C90_inline (RecognitionEventArgs_t2D86DE32531190D1EB7F13161D122F51921857B4 * __this, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = __this->get_U3COffsetU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RecognitionResult_set_Properties_mC1A2601BE02CC3F56013BC78DE0B6080C8506897_inline (RecognitionResult_tA8BAC8FED1544FC1296F2637D79600E6B20B5429 * __this, PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * ___value0, const RuntimeMethod* method)
{
	{
		PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * L_0 = ___value0;
		__this->set_U3CPropertiesU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR SpeechRecognitionResult_tBA7ADB26D600AEDF7114ABD5A8E1AE1C797F466E * SpeechRecognitionEventArgs_get_Result_m249E934B104F937DF7D70FC516EE99BB0A0F3564_inline (SpeechRecognitionEventArgs_tDB55D8D092DA5EE56B1BBA231E256915FA8A6406 * __this, const RuntimeMethod* method)
{
	{
		SpeechRecognitionResult_tBA7ADB26D600AEDF7114ABD5A8E1AE1C797F466E * L_0 = __this->get_U3CResultU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t CancellationDetails_get_ErrorCode_mE36061E2CA470971CC88AB5CE10759721C613098_inline (CancellationDetails_tCDBE2B9CA51C8DAD1334670E7FFF009A2CF68AA2 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_Reason_m5CE0AD1B468DB01E33DE3166D2BBACF1C7A75FA9_inline (SpeechRecognitionCanceledEventArgs_tBCBCCC3B812C7A93A2C69906C6CE21E4313AAFD0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t SpeechRecognitionCanceledEventArgs_get_ErrorCode_mFF19E44FF8FE7ED536A6196004FC481C064E0F5A_inline (SpeechRecognitionCanceledEventArgs_tBCBCCC3B812C7A93A2C69906C6CE21E4313AAFD0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void SpeechRecognizer_set_Properties_mF66781C8B847863D19D8E0772EC05E0F454EF510_inline (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * ___value0, const RuntimeMethod* method)
{
	{
		PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * L_0 = ___value0;
		__this->set_U3CPropertiesU3Ek__BackingField_25(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * SpeechRecognizer_get_Properties_m56DA0677021BA0F40F75E11BEBCC4EDCCF95A6C4_inline (SpeechRecognizer_tB35146FA42CB44343F96ED6A47238E52B8A75797 * __this, const RuntimeMethod* method)
{
	{
		PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * L_0 = __this->get_U3CPropertiesU3Ek__BackingField_25();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TranslationRecognitionResult_tE75370C810BE52E98050558DAF55C499C0E5C5A2 * TranslationRecognitionEventArgs_get_Result_m1D7CE61478E280F8E2CFA1E050A8F9891CB332D2_inline (TranslationRecognitionEventArgs_tB91AB6FD826F377BB0C58DAB09D2FB2BEF06D002 * __this, const RuntimeMethod* method)
{
	{
		TranslationRecognitionResult_tE75370C810BE52E98050558DAF55C499C0E5C5A2 * L_0 = __this->get_U3CResultU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_Reason_mD37070031AD0BC2EBE4E541422AC2818CD29C3F1_inline (TranslationRecognitionCanceledEventArgs_tD05B18077AB718A788C24ADB4A1FE3CF2593FEFE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t TranslationRecognitionCanceledEventArgs_get_ErrorCode_m4762F2622F4FB7A4285AD393CA46022DAA79D397_inline (TranslationRecognitionCanceledEventArgs_tD05B18077AB718A788C24ADB4A1FE3CF2593FEFE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR RuntimeObject* TranslationRecognitionResult_get_Translations_mDB43E322D12D1158F3CB5673E154F631C59BB9C0_inline (TranslationRecognitionResult_tE75370C810BE52E98050558DAF55C499C0E5C5A2 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_0 = __this->get_translationTextResultMap_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TranslationRecognizer_set_Properties_m2885A31BD24A148C4B8EB79CE438E44B2179B509_inline (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * ___value0, const RuntimeMethod* method)
{
	{
		PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * L_0 = ___value0;
		__this->set_U3CPropertiesU3Ek__BackingField_23(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * TranslationRecognizer_get_Properties_m925EB0FFA9D16E0D34BB44876AA8F6611E2839FA_inline (TranslationRecognizer_t86821B7EC1366568B527267EC8C7637083CBDAEA * __this, const RuntimeMethod* method)
{
	{
		PropertyCollection_t203D5CA3871B4F26A8D832CD9978A9EB17050870 * L_0 = __this->get_U3CPropertiesU3Ek__BackingField_23();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TranslationSynthesisResult_t3B0D43E9706F4004196979AE34C7DAF4EDFDBAEA * TranslationSynthesisEventArgs_get_Result_mD5DBCA2DDACD4B90254C208BD06385EDF6BBE10E_inline (TranslationSynthesisEventArgs_t6DA67C6A6D2C0FE0CE20022D868042E874475E6F * __this, const RuntimeMethod* method)
{
	{
		TranslationSynthesisResult_t3B0D43E9706F4004196979AE34C7DAF4EDFDBAEA * L_0 = __this->get_U3CResultU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t TranslationSynthesisResult_get_Reason_mDA53BB6A24DC0980CCA0179C1A299C8B65CF5B38_inline (TranslationSynthesisResult_t3B0D43E9706F4004196979AE34C7DAF4EDFDBAEA * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CReasonU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* Array_Empty_TisRuntimeObject_m9CF99326FAC8A01A4A25C90AA97F0799BA35ECAB_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = ((EmptyArray_1_tCF137C88A5824F413EFB5A2F31664D8207E61D26_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m9D4E9BCBAB1BE560871A0889C851FC22A09975F4_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared_inline (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* Array_Empty_TisByte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_m6E1369AB0F50C5F57BD7D64D27D0FCA7828513DD_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = ((EmptyArray_1_t138215D75D34CDCC9D3A3248006BB81FC3F9609C_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)L_0;
	}
}
