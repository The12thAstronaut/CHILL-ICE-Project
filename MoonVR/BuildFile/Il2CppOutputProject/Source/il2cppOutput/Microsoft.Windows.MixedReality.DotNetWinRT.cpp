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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericVirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t9FDB1E11FC6370067E1F2B823E82C173448B19E6;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2;
// Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics
struct ISpatialAnchorExporterStatics_t678004F7593EA7BABBE321CEDC2B19C7CCBB29A7;
// Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics/<>c
struct U3CU3Ec_t0AF46CD18687150C5FBDA8D1EB3A088B5E49659A;
// Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics/Vftbl/_RequestAccessAsync
struct _RequestAccessAsync_tDBB08AC3923195BB0C653BF8E058D65837714F7C;
// Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem
struct ISpatialCoordinateSystem_t539C9440C0D44A165C8826A2A91B412F7AEA6A24;
// Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem/Vftbl/_TryGetTransformTo
struct _TryGetTransformTo_t2C72E101F6B0DFFFC29D72FD60EDDF21808FBCD9;
// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics
struct ISpatialGraphInteropPreviewStatics_tA6235090F28BD06BD7C7946FD10E0986B7DE0AF9;
// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics/Vftbl/_CreateCoordinateSystemForNode
struct _CreateCoordinateSystemForNode_t7F54D94DA8BC650182C6CAB5914643492CB82914;
// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics/Vftbl/_CreateCoordinateSystemForNodeWithPosition
struct _CreateCoordinateSystemForNodeWithPosition_t1F5C2245F6FD546C93C26C838E22EF8B9E00AB11;
// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics/Vftbl/_CreateCoordinateSystemForNodeWithPositionAndOrientation
struct _CreateCoordinateSystemForNodeWithPositionAndOrientation_t0FBAD401AAEF6FAAA886FA5C41A945FACC6CA633;
// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics/Vftbl/_CreateLocatorForNode
struct _CreateLocatorForNode_tA6613267E6F4CCDD4347EAFAC82D482C417F9E0C;
// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2
struct ISpatialGraphInteropPreviewStatics2_t9F8CFA5570E00335B319319183ED55A7BE64ED16;
// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2/Vftbl/_TryCreateFrameOfReference
struct _TryCreateFrameOfReference_tA355B36593FB6D3A3ED83E565320893B667BB8F0;
// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2/Vftbl/_TryCreateFrameOfReferenceWithPosition
struct _TryCreateFrameOfReferenceWithPosition_t7FD522ED57738CD26FEDB47DB132D4870FCF1E64;
// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2/Vftbl/_TryCreateFrameOfReferenceWithPositionAndOrientation
struct _TryCreateFrameOfReferenceWithPositionAndOrientation_t96DDB7C1358BE8BAAFB3B4E38001AEBE05AD25F9;
// Microsoft.Windows.Perception.Spatial.Preview.SpatialGraphInteropPreview/Statics
struct Statics_tDBC4F59A0CD2DE79CBDFFC7AF2A16F52654846A5;
// Microsoft.Windows.Perception.Spatial.SpatialAnchorExporter/Statics
struct Statics_t7FE7A57817F231EE3258C2CCE00A163511066167;
// Microsoft.Windows.Perception.Spatial.SpatialCoordinateSystem
struct SpatialCoordinateSystem_t74AEBD257DE2AFEB649A5505161BE715E0BF46C8;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<WinRT.Interop.IAsyncOperation/CompletedHandler>
struct Action_1_tE089E527B3CD85164C9FB409BE928F4D29731157;
// System.AppDomain
struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Attribute
struct Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.WeakReference`1<WinRT.DllModule>>[]
struct EntryU5BU5D_t7B14811260CE263593312D6072963636521F7EAF;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.WeakReference`1<WinRT.DllModule>>
struct KeyCollection_t6DCBB93535E6D9D5515BB42AF39297DE086FF11E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.WeakReference`1<WinRT.DllModule>>
struct ValueCollection_tA5A35EE1B1A2D8FFB9C721709F97ADDA7A656CB4;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA;
// System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>>
struct Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE;
// System.Collections.Generic.HashSet`1/Slot<System.IntPtr>[]
struct SlotU5BU5D_t6CDBECEABAF736A24C84D0D78B9A92940018E202;
// System.Collections.Generic.HashSet`1<System.IntPtr>
struct HashSet_1_t1B66B9848B6D563944C506FA6F90487B3DB7396D;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_tF753C9D7EA1419E3885E098F900AC2032A2944B7;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
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
// System.EventHandler
struct EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF;
// System.Exception
struct Exception_t;
// System.Func`1<Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2>
struct Func_1_t43234D68F3ABC78C8E275517F6810A0E91D1AC97;
// System.Func`1<Microsoft.Windows.Perception.Spatial.Preview.SpatialGraphInteropPreview/Statics>
struct Func_1_t28EE7BA9FFC238D02A686DF1F603659480781D81;
// System.Func`1<Microsoft.Windows.Perception.Spatial.SpatialAnchorExporter/Statics>
struct Func_1_t471C268536C7BAE0A2DED3FC0A233D3A5CC89F29;
// System.Func`1<System.Boolean>
struct Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1;
// System.Func`1<System.Collections.Generic.HashSet`1<System.IntPtr>>
struct Func_1_tB552F57AEBDE5EBC29095AB8F3BAF9EB55B1E25E;
// System.Func`1<System.Object>
struct Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Func`1<WinRT.WinrtModule>
struct Func_1_tE7A86D81F0BFC069D5CB998C2899B6287DBCFFCE;
// System.Func`2<System.Int32,Microsoft.Windows.Perception.Spatial.SpatialPerceptionAccessStatus>
struct Func_2_t1255F50D8FBA7BB723D85AB9EB862C75A432EEB2;
// System.Func`2<System.Int32,System.Int32Enum>
struct Func_2_t2CBC72121006E5126DE13FB60C631578D0BB4931;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.Windows.Perception.Spatial.SpatialPerceptionAccessStatus>>
struct Func_2_t5DDCA9EFE372A941E980D706E5A81B522B97B055;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Lazy`1<Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2>
struct Lazy_1_tD26FF389F7897C8553D1536923CBABC0ABA593E0;
// System.Lazy`1<System.Boolean>
struct Lazy_1_tD86FA2DBC6DDD534D2365617EE6B309478B2DCAE;
// System.Lazy`1<System.Collections.Generic.HashSet`1<System.IntPtr>>
struct Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18;
// System.Lazy`1<System.Object>
struct Lazy_1_t71F054A6BEAC691000784099D483C92D8C113AE7;
// System.NotImplementedException
struct NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4;
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
// System.Reflection.TypeInfo
struct TypeInfo_t9D6F65801A41B97F36138B15FD270A1550DBB3FC;
// System.ResolveEventHandler
struct ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5;
// System.Runtime.CompilerServices.IsUnmanagedAttribute
struct IsUnmanagedAttribute_tCBC3CA101F4414B34C67D6464DC056EFFCDA68D9;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskFactory`1<Microsoft.Windows.Perception.Spatial.SpatialPerceptionAccessStatus>
struct TaskFactory_1_t46250FF928B2E37CA22ACA0E8610DA9BEECFC420;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Threading.Tasks.Task`1<Microsoft.Windows.Perception.Spatial.SpatialPerceptionAccessStatus>
struct Task_1_tDD14A3F6150B55B689AA83F9A3274F946A7D67BE;
// System.Threading.WaitHandle
struct WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// System.WeakReference
struct WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D;
// System.WeakReference`1<Microsoft.Windows.Perception.Spatial.Preview.SpatialGraphInteropPreview/Statics>
struct WeakReference_1_tE1D6582CA80B8F0A1141D50F4EDE6A9C2A5AEA99;
// System.WeakReference`1<Microsoft.Windows.Perception.Spatial.SpatialAnchorExporter/Statics>
struct WeakReference_1_t8EE61D152A551A56537B3B15953938F0336D2098;
// System.WeakReference`1<System.Object>
struct WeakReference_1_tBC6A26E1BB0C3A272173A366499D2BBA015BC86C;
// System.WeakReference`1<WinRT.DllModule>
struct WeakReference_1_t582B68A827348E837D31F15DE589784EF4505E75;
// System.WeakReference`1<WinRT.WinrtModule>
struct WeakReference_1_tACC82BB4A2AE2C506A4E20F5AAD92E1D04E1D4F7;
// WinRT.Delegate
struct Delegate_t01789152B02E68157FD11FCBC21F63795C42E476;
// WinRT.Delegate/InitialReference
struct InitialReference_t18776180879E7D7B1F47934927C0DB540DB2EE4E;
// WinRT.DllModule
struct DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70;
// WinRT.DllModule/DllGetActivationFactory
struct DllGetActivationFactory_tDFDF607D5B79CFF73AE0359FEB1EB1C41EE6966B;
// WinRT.HString
struct HString_tE419B8347D4539E1392195AB582983128BBFF2E6;
// WinRT.IObjectReference
struct IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8;
// WinRT.Interop.DelegateProperty`1<System.Object>
struct DelegateProperty_1_t8A3EA199EDE0FD8582E17F2B4C85D086D8F1532C;
// WinRT.Interop.DelegateProperty`1<WinRT.Interop.IAsyncOperation/CompletedHandler>
struct DelegateProperty_1_tD9ACB29E556508E67776F11D93DD43F625DC8EA3;
// WinRT.Interop.IActivationFactoryVftbl/_ActivateInstance
struct _ActivateInstance_t4FF6B61658BD043CF30F2AE21E590CFCEDDD086A;
// WinRT.Interop.IAsyncInfo
struct IAsyncInfo_tF1F6A3A139BB86EE62ADEC082EE510976CBD093A;
// WinRT.Interop.IAsyncOperation
struct IAsyncOperation_t7AE926151C1DBB80AD17463891F756F6C083BC07;
// WinRT.Interop.IAsyncOperation/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tDA51E37F0B56D3B6D051DDF66541DD421F25C95F;
// WinRT.Interop.IAsyncOperation/CompletedHandler
struct CompletedHandler_t3E2FC9A9183C1D110D5835F69852DFD8A7B6964B;
// WinRT.Interop.IAsyncOperation_Enum`2<Microsoft.Windows.Perception.Spatial.SpatialPerceptionAccessStatus,Microsoft.Windows.Perception.Spatial.IAsyncOperationCompletedHandler_SpatialPerceptionAccessStatus>
struct IAsyncOperation_Enum_2_t19A0CBF95D678C4B1A6F0DFA63831B60FD7B63A9;
// WinRT.Interop.IAsyncOperation_Enum`2<System.Int32Enum,Microsoft.Windows.Perception.Spatial.IAsyncOperationCompletedHandler_SpatialPerceptionAccessStatus>
struct IAsyncOperation_Enum_2_t2128E6CBB078738FCFF3BE7B91330A00D3C430B6;
// WinRT.Interop.IDelegate2_Obj_Enum
struct IDelegate2_Obj_Enum_tDAE283FCD285A52E24B2CA3B344BF9784766348F;
// WinRT.Interop.IInspectableVftbl
struct IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32;
// WinRT.Interop.IInspectableVftbl/_GetIids
struct _GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125;
// WinRT.Interop.IInspectableVftbl/_GetRuntimeClassName
struct _GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65;
// WinRT.Interop.IInspectableVftbl/_GetTrustLevel
struct _GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823;
// WinRT.Interop.IUnknownVftbl
struct IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62;
// WinRT.Interop.IUnknownVftbl/_AddRef
struct _AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA;
// WinRT.Interop.IUnknownVftbl/_QueryInterface
struct _QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12;
// WinRT.Interop.IUnknownVftbl/_Release
struct _Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2;
// WinRT.Interop.MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_t771461BB3C5D4472CF3924A52CECFACE0057F061;
// WinRT.Interop._IAsyncOperation`2<System.Object,System.Int32Enum>
struct _IAsyncOperation_2_t90EF43749283B68BCEC78982740E576D2509834E;
// WinRT.Interop._IAsyncOperation`2<System.Threading.Tasks.Task`1<Microsoft.Windows.Perception.Spatial.SpatialPerceptionAccessStatus>,Microsoft.Windows.Perception.Spatial.SpatialPerceptionAccessStatus>
struct _IAsyncOperation_2_t617D18323221EC33FCB1FC4541F7BE9E31058D03;
// WinRT.Interop._get_PropertyAsEnum
struct _get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E;
// WinRT.Interop._get_PropertyAsInt
struct _get_PropertyAsInt_t8313A617DB0A557D1D90360CC3A2553A83E89A62;
// WinRT.Interop._get_PropertyAsMatrix4x4
struct _get_PropertyAsMatrix4x4_t472E5893D3A5D8929770A973793E19BC6F35EFED;
// WinRT.Interop._get_PropertyAsObject
struct _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5;
// WinRT.Interop._method0
struct _method0_t68810954DB248B2CD317989111F586F15200690B;
// WinRT.Interop._put_PropertyAsObject
struct _put_PropertyAsObject_t50B08BD6BB7FBD450046CD44CB2AC7A3310CBFDC;
// WinRT.Mono/<>c
struct U3CU3Ec_tCF1205861994CBA3AD829D9F29102894425047CC;
// WinRT.Mono/ThreadContext
struct ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22;
// WinRT.Mono/mono_thread_cleanup_initialize
struct mono_thread_cleanup_initialize_tE441F79B6973656DB9BD772C28288514CF2D0730;
// WinRT.Mono/mono_thread_cleanup_register
struct mono_thread_cleanup_register_t91E974F4BA3BB3C316698B53B7E3E91AFCF42EE7;
// WinRT.ObjectReference`1<Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics/Vftbl>
struct ObjectReference_1_t530F1E336D8E2AE06C0F8AD45027396D9CCF945E;
// WinRT.ObjectReference`1<Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem/Vftbl>
struct ObjectReference_1_tC6FFCE6D4A862A7EBF2A518A0AA80A0ED0D99A5A;
// WinRT.ObjectReference`1<Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics/Vftbl>
struct ObjectReference_1_tD07D53CD6B0E358A8023F2234DAA8FBEE947EABB;
// WinRT.ObjectReference`1<Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2/Vftbl>
struct ObjectReference_1_t7B9167D5590FAF87529386F35A3F649591B101B2;
// WinRT.ObjectReference`1<WinRT.Interop.IActivationFactoryVftbl>
struct ObjectReference_1_t0DC6E4D5526B1D82029F260034BF69B7B6407E9D;
// WinRT.ObjectReference`1<WinRT.Interop.IAsyncInfo/Vftbl>
struct ObjectReference_1_t69270BB4E7A44A4CBD4E25BE22C8373461A12F78;
// WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation/Vftbl>
struct ObjectReference_1_tA170C4C2A9CD8CC3F9693CA7DE47AEB8FE892974;
// WinRT.ObjectReference`1<WinRT.Interop.IInspectableVftbl>
struct ObjectReference_1_t28DA373EE505C8F3F300D370F9766734030471DA;
// WinRT.ObjectReference`1<WinRT.Interop.IReference_Matrix4x4>
struct ObjectReference_1_tC3B2ABBE63AA0BF3E73DF6371E9B4F68510B1003;
// WinRT.Platform/DotNETLinkage
struct DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293;
// WinRT.Platform/IL2CPPLinkage
struct IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB;
// WinRT.Platform/IPlatformLinkage
struct IPlatformLinkage_t8FCF461CF61EF6C60A6348C2043A1E41B2E673AA;
// WinRT.WeakLazy`1<Microsoft.Windows.Perception.Spatial.Preview.SpatialGraphInteropPreview/Statics>
struct WeakLazy_1_t4D8064E30345D896B6FAF9DCEC2247C38D0EC71F;
// WinRT.WeakLazy`1<Microsoft.Windows.Perception.Spatial.SpatialAnchorExporter/Statics>
struct WeakLazy_1_t1B33F4864FBC2BF734A2EFC982148B4D00DD2228;
// WinRT.WeakLazy`1<System.Object>
struct WeakLazy_1_tEB0E03E71A2A8DED940AC31A731A9809B1C23083;
// WinRT.WeakLazy`1<WinRT.WinrtModule>
struct WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153;
// WinRT.WinrtModule
struct WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tE089E527B3CD85164C9FB409BE928F4D29731157_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ActivationFactory_1_t0CDF5F28908A43BD81FA09B39A93ED3B5F017290_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ActivationFactory_1_t8C7B1AD277A35F31181903DD92944EE9EB31E7B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncStatus_t067E1F3C02D80A6C9A3C2CA1CAB65C2A9AB91218_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelegateProperty_1_tD9ACB29E556508E67776F11D93DD43F625DC8EA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllNotFoundException_tED90B6A78D4CF5AA565288E0BA88A990062A7F76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t43234D68F3ABC78C8E275517F6810A0E91D1AC97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t1255F50D8FBA7BB723D85AB9EB862C75A432EEB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncInfo_tF1F6A3A139BB86EE62ADEC082EE510976CBD093A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncOperation_Enum_2_t19A0CBF95D678C4B1A6F0DFA63831B60FD7B63A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncOperation_t7AE926151C1DBB80AD17463891F756F6C083BC07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDelegate2_Obj_Enum_tDAE283FCD285A52E24B2CA3B344BF9784766348F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlatformLinkage_t8FCF461CF61EF6C60A6348C2043A1E41B2E673AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISpatialCoordinateSystem_t539C9440C0D44A165C8826A2A91B412F7AEA6A24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISpatialGraphInteropPreviewStatics2_t9F8CFA5570E00335B319319183ED55A7BE64ED16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lazy_1_tD26FF389F7897C8553D1536923CBABC0ABA593E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lazy_1_tD86FA2DBC6DDD534D2365617EE6B309478B2DCAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mono_t22DED35DF53F81A03339C93DB68629D193273A02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialAnchorExporter_tEF6597A7C5BBAABC751BDF2B097FA7C459862D1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialCoordinateSystem_t74AEBD257DE2AFEB649A5505161BE715E0BF46C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpatialGraphInteropPreview_tFD36CA20A6E54953B35EC4B17927E4F63CE97C6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tDA51E37F0B56D3B6D051DDF66541DD421F25C95F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0AF46CD18687150C5FBDA8D1EB3A088B5E49659A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCF1205861994CBA3AD829D9F29102894425047CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakLazy_1_t1B33F4864FBC2BF734A2EFC982148B4D00DD2228_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakLazy_1_t4D8064E30345D896B6FAF9DCEC2247C38D0EC71F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_1_t582B68A827348E837D31F15DE589784EF4505E75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _ActivateInstance_t4FF6B61658BD043CF30F2AE21E590CFCEDDD086A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _CreateCoordinateSystemForNodeWithPositionAndOrientation_t0FBAD401AAEF6FAAA886FA5C41A945FACC6CA633_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _CreateCoordinateSystemForNodeWithPosition_t1F5C2245F6FD546C93C26C838E22EF8B9E00AB11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _CreateCoordinateSystemForNode_t7F54D94DA8BC650182C6CAB5914643492CB82914_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _CreateLocatorForNode_tA6613267E6F4CCDD4347EAFAC82D482C417F9E0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _RequestAccessAsync_tDBB08AC3923195BB0C653BF8E058D65837714F7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _TryCreateFrameOfReferenceWithPositionAndOrientation_t96DDB7C1358BE8BAAFB3B4E38001AEBE05AD25F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _TryCreateFrameOfReferenceWithPosition_t7FD522ED57738CD26FEDB47DB132D4870FCF1E64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _TryCreateFrameOfReference_tA355B36593FB6D3A3ED83E565320893B667BB8F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _TryGetTransformTo_t2C72E101F6B0DFFFC29D72FD60EDDF21808FBCD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsInt_t8313A617DB0A557D1D90360CC3A2553A83E89A62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsMatrix4x4_t472E5893D3A5D8929770A973793E19BC6F35EFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _method0_t68810954DB248B2CD317989111F586F15200690B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _put_PropertyAsObject_t50B08BD6BB7FBD450046CD44CB2AC7A3310CBFDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral354E013B2891BB142566CA6E74E12AF1BF6CCD24;
IL2CPP_EXTERN_C String_t* _stringLiteral3F7D8861D4892EA34F92275C205E88C3DE52004C;
IL2CPP_EXTERN_C String_t* _stringLiteral6D0055D12CAAFCC74D1A53378B28C701AEED2AF5;
IL2CPP_EXTERN_C String_t* _stringLiteral74D559369E1958056E4727338451177BE8962EE3;
IL2CPP_EXTERN_C String_t* _stringLiteral926C699B76FD37CAEDEDABF4276A7BE84516E4DF;
IL2CPP_EXTERN_C String_t* _stringLiteralA83D56B7278BFEFDDC6F5821225DC12E0BECE2E8;
IL2CPP_EXTERN_C String_t* _stringLiteralAD13FBB4A95C3FFD451E2EAA8506541C4178E2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralD7B307108DC78F139B624211F6A0A31A94506FFE;
IL2CPP_EXTERN_C String_t* _stringLiteralE8796301CDCC7DF1634054849AC46971582B6600;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m85339D493212D3CFADF2109035BC1670DE9E2943_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActivationFactory_1_As_TisVftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114_m29D6B84C4BB3F1D58A3DCB7D4014429BF1CACBC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActivationFactory_1_As_TisVftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C_m9985B1ADEB4F4FC11CFF61CFE727050C2ED92DED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateProperty_1__ctor_mD4D1361B69BEE97BE29BA827AC82BAAEE422BFCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DelegateProperty_1_set_Value_mF785FDD12D2B41563D212D6631576AE634D5D1A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Delegate_AddRef_m6C0075DD613B61A79DC97B55451F67F11655E448_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Delegate_MarshalInvoke_TisCompletedHandler_t3E2FC9A9183C1D110D5835F69852DFD8A7B6964B_m3544FF55800B65F73582A5CB621FCFB6E975FE38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Delegate_QueryInterface_m73A63091D278F0BAF8148D0ADF6FF267467A3693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Delegate_Release_m25972AE16A8813A800DB9987F2B9CDCA0FC019E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Delegate_Release_m3540FAF46440C04BE3CB950F7489E378F654666F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Delegate__Dispose_m8F9080418D95E37A2DAE8A9440F88E63C34E9520_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m8FC423999B63B01CF06D71955893DACD2EEA3999_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m8175F3BDEF88EFB19A4F969E4CDF7B8CE3271B6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mF678B2F289B0764AA3183D0C030EE2300D713B57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_mAECA381FC0AA61139100EF468EE819A98431DE5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_mF0DB33F273784EF928C0AB503E741B90AEF16BFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m669CA673E04D739B1650A67730E208DB4A87B3B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mD1078C245664F32D05FE0B958860B9943FF366EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_m0396A90EB111C444993138A23C8BD61D2999CAA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mB409A367BF3EA85DF0977C23B8F36504BFDFDB5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAsyncOperation_Enum_2__ctor_m5B94F9594DB224E2B67A843AEDBDC7B6B3FBB983_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IAsyncOperation__OnCompleted_m17475ECDB1599EBD553EB977AE3B4A6DAA99C5C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IL2CPPLinkage__AddDllDirectory_mE8CA4F5FF2C0DD78D7A86953337ED2AE04F67660_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IObjectReference_As_TisVftbl_tA006332DC96A64591EEDDB7F1732C41894681B96_m61156E1718CE84A35B02CB75EEA5933FE98CA9F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IObjectReference_As_TisVftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2_mF97C951CC4D00E4433E7822BD1B0DBC3105EF970_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IObjectReference_As_TisVftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042_m48F8449253BD48F0D36E61D2E0460C4559570CAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1__ctor_m0E54033725AC5EF4E0928FFFF699906B06A51DC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1__ctor_mA6DE95A47EAD7BE89179EDDD6E334481CDBCF83B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1__ctor_mEB219C44325F989211E530FDC445E82632698EFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1_get_Value_m67D23433D36E7578679746143DC11784AF19CABC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lazy_1_get_Value_m72F242F54A5243549F688D7D976338368267CCD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetFunctionPointerForDelegate_TisIDelegate2_Obj_Enum_tDAE283FCD285A52E24B2CA3B344BF9784766348F_m3EB30148EDE6F6FFE970093AD002C30FB7A68A99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetFunctionPointerForDelegate_Tis_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA_m244F5486C9035E14360274F805ACCC678176AED1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetFunctionPointerForDelegate_Tis_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12_m0A97EEEA0025A3947684D1107A83A541B50298F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_GetFunctionPointerForDelegate_Tis_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2_mB7C12F74C4A35E93DDE85A017BE78AB44B5448D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_PtrToStructure_TisUnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F_m731A84F7FEEDF32D55905BF37DF9DBE45D8F866F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_SizeOf_TisIDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE_m5EA1D0752BF7FCCC9098A92C5964E8AE0B2F619D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_SizeOf_TisUnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F_m7751951F47A6D68941008CAD6B1692621742E1CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_StructureToPtr_TisIDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE_m95AF195BDECCCA866C9E68BCFE011CDF637FA734_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Marshal_StructureToPtr_TisUnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F_mDAFE68DE2FF5B571CD00D012B08F901DD0F87906_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleReference_Release_mCBB02150B5DEE435F1C7E5DEEE91A862BD49E7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m36E93ED21F3B7474DE9962FE9EBA51651B2D89EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_Attach_m0F8E9999482DEF775C007549487B061335BEAD3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_Attach_m115234CCEBF5F5198AB3D1BA7BBA7BFF4EC9EB69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_Attach_m222C34E726851CAF0922BA49E41E7AF509CFFC65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_Attach_m6C8B14FB255F90174B832AE9C975E14076D422B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectReference_1_FromNativePtr_m36F49CBCEA4FD201ED2364610053ED8318D7FB67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Platform_GetProcAddress_Tismono_thread_cleanup_initialize_tE441F79B6973656DB9BD772C28288514CF2D0730_mF8A02DDD1EF4728107316C7CA2F1C9BDD404F75E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Platform_GetProcAddress_Tismono_thread_cleanup_register_t91E974F4BA3BB3C316698B53B7E3E91AFCF42EE7_m5B289DB8590CF009F46BCD2D455688D0360E0F8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Platform_TryGetProcAddress_TisDllGetActivationFactory_tDFDF607D5B79CFF73AE0359FEB1EB1C41EE6966B_mD54E89432FD96FCC347B0B9765FAC259780D7012_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Statics_U3C_ctorU3Eb__1_0_mF5E2F49E0BB6F16C9B5A610C5E3C7C061284521B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThreadContext_CurrentDomain_DomainUnload_mAD1E70CDB9A85C96DD821F454DB423A3488793E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRequestAccessAsyncU3Eb__5_0_m8555D12409A122546EF5D4A00D6B605B97E3C3FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__7_0_m589BB91DA9CCDFE131CEE4877F130BB8413B4D42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3C_OnCompletedU3Eb__0_m74B79726140D2655D1D31D933CBD5D849C648350_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakLazy_1__ctor_m4B1D290A17980D337D2FF4E5D8FCA8A2ABE10C4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakLazy_1__ctor_m65ED6EBC027570B38493560D542DF3CE7D0E45A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakLazy_1__ctor_m9503513860B79E3247877B381D1E5D650F851D97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakLazy_1_get_Value_m3B539A349FBDEA92492D918DFD6CE5EA21A68B3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakLazy_1_get_Value_mA1F822FE45CF4E2272183F6EE23F10016C354918_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakLazy_1_get_Value_mAA6BB939910F3C6367B566A1DB03AF627AA4C098_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1_TryGetTarget_m32C6E67C08B4DFE53E7E5262B7D534B0B61B0F72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WeakReference_1__ctor_mEF3D62A2C3A5F07179A0BE4A00A3312FD1BFBC66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _IAsyncOperation_2_AsTask_m2FF345E71722CB3ACD983BCAF7E87BCADD3152DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IAgileObjectVftbl_t576F117596790657CE35723C6C436B5268073C12_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t CompletedHandler_BeginInvoke_mDB904331436CE4E30B86667DDC0B32B1908E3731_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Delegate_AddRef_m6C0075DD613B61A79DC97B55451F67F11655E448_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Delegate_FindObject_m70F877EB3F42415197F2598A2A32F936158408A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Delegate_QueryInterface_m67538820C6B882600AB356EB9A302F8835E4F75E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Delegate_QueryInterface_m73A63091D278F0BAF8148D0ADF6FF267467A3693_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Delegate_Release_m25972AE16A8813A800DB9987F2B9CDCA0FC019E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Delegate_Release_m3540FAF46440C04BE3CB950F7489E378F654666F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Delegate__Dispose_m8F9080418D95E37A2DAE8A9440F88E63C34E9520_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Delegate__cctor_m6E2128FFAC15F5B833F198C1951225DC861313AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Delegate__ctor_m9A6EDE351CCA09690116A0B8A668CD99AAA5A304_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DllGetActivationFactory_BeginInvoke_mEAD2F1B77D402D82A65177F69FBDD24D860CD4D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DllModule_GetActivationFactory_m414E61634C0E727E8CBC5AC96EDC460E680A15AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DllModule_TryLoad_m6BD21F7087DB12111225A8972F7760B83D74DA65_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DllModule__cctor_m1018503F194333B6361FA02D7C2CF3AD41EB603E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DotNETLinkage__GetHRForLastWin32Error_mFE15268CDFFCFA53FF69B5C1E4A0036D553261CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HString_Dispose_mFFCE063EF17A9FB22C80AE11227BAB6AD886929F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HString_ToString_m45720BC19837F1401FA943D4E1DB02C6BFE7C60F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HString__ctor_m4709179D1DDC0A3B4381BA1DC47394F33330C53B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAsyncInfo_Cancel_m2995BEA6C614A720387B03419A746A90D4AA48AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAsyncInfo_get_ErrorCode_m1A81A0F297B267E6580F9E75F2CF7469027E221C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAsyncInfo_op_Implicit_m0EAC13AFF5C222E2342460242EB49D6326862EBC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAsyncInfo_op_Implicit_m3A0A3D99DED163331E392F1C3EB200C78C9798D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAsyncOperation__OnCompleted_m17475ECDB1599EBD553EB977AE3B4A6DAA99C5C9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAsyncOperation__cctor_mBD4C755B6823DF2FDCA87D71DA66FA0782542E4A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAsyncOperation__ctor_m2C70FB839D61EC75B179680D75A8516C7DDE9785_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IAsyncOperation_set_Completed_mFEE224F54E8C00CFF93CC0DA4F9C548E5A792429_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IDelegate2_Obj_Enum_BeginInvoke_m934693F02C2FC90B46804C538117411F38E39730_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IL2CPPLinkage__AddDllDirectory_mE8CA4F5FF2C0DD78D7A86953337ED2AE04F67660_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ISpatialAnchorExporterStatics_RequestAccessAsync_mF3B451FDCCAA42B7CADDAD4712FB0B07CB22E424_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ISpatialCoordinateSystem_TryGetTransformTo_m1CBBE876C881B902B5BBAF51BE63447868989801_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ISpatialCoordinateSystem_op_Implicit_m8714EE75AE0CE3096281441DA14D673F33364536_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ISpatialGraphInteropPreviewStatics2_op_Implicit_m2353780E3D0E344DA9972D21473FFB59F64D0800_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ISpatialGraphInteropPreviewStatics2_op_Implicit_m4979FB726D7748AD125E55E3A0E2A34C5247E27E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ISpatialGraphInteropPreviewStatics_CreateCoordinateSystemForNode_m00363BA49C3195F24BB8717F0D0BA29B48A17FEA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InitialReference_Dispose_mB97D265D7C67A55E1A5AC0E90C22025491C4272C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InitialReference__ctor_m75FBD0FDB95E0F6A7C17BD2EB33D1A4CB2A2F3A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Matrix4x4_get_Identity_m2AA00AFFC1AB287EB10E93B25E2B34E7F39CBD0DMicrosoft_Windows_MixedReality_DotNetWinRT_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ModuleReference_AllocateRefCount_mF29677460F7566406254BFDCD44E47BB5BFECA3B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ModuleReference_Allocate_m22CB010050F3ABA58AE721231CF961BEB4E7E2B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ModuleReference_Release_mCBB02150B5DEE435F1C7E5DEEE91A862BD49E7BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Mono__cctor_m4DD9982514D5F8404D09437C9D481BE8D7D843B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_AddDllDirectory_mDBF08428063CDC47D60B7E7115EA27EA12389AAE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_CoDecrementMTAUsage_m66889F502E9C529EF25F1E87C756262177570F67_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_CoIncrementMTAUsage_m1B89CA44FA1D3C0CAC2A9CEC561B1275F4C677B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_FreeLibrary_mA760C95B6712C55E42A1FDDF88373685B7069723_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_GetHRForLastWin32Error_m8250038252C4DC6060D1F858823872804F9835AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_RoGetActivationFactory_m79C4AC3A75F1498F6494256E5A113D5E6802A01D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_TryLoadLibraryExW_m02C79A74A06C659CF7455920EEEDBCDAD23FEF9C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_WindowsCreateString_m738195D3E2596563126446D7B671B674C2FC3EEE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_WindowsDeleteString_m6CEE353E8DF2F3A0845E0C515E9DC382742887C8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform_WindowsGetStringRawBuffer_m58557E46079156E084D25CF7B802D568BD92E283_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Platform__cctor_mA454D12C759041A58BB7AEE225EF33E6D7A99941_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialAnchorExporter_RequestAccessAsync_mCA6CADD8C805378CEF0CD5D97F30BCC4D330F766_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialAnchorExporter__cctor_m83A0ED689FCF8630E1474F103F0B338AF4420359_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialCoordinateSystem_FromNativePtr_m3FAFCB47022006950AF77BF2C07F784929D30DDF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialGraphInteropPreview_CreateCoordinateSystemForNode_mEF97E93AF6C77422A9CCF61FA933137D6F54D982_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpatialGraphInteropPreview__cctor_mAF4993A6BCDFEFA8AD89C64A58BC349AE78959E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Statics__ctor_m1A368A48A1D507CFE38ABE9F0D2ABB290616D283_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Statics__ctor_mA17BAA6A4E8B32BA162EBA2547A016B997858589_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThreadContext_CurrentDomain_DomainUnload_mAD1E70CDB9A85C96DD821F454DB423A3488793E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThreadContext_RegisterPossiblyNonForeignThread_mD8D18E7C5E6C3E8033C6EDA8E4154B42CC670E2A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThreadContext__cctor_mB902BCF113B652D96AD4786F8A461ED7FD6D5731_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ThreadContext__ctor_m9856BC9B7CB57B4CFDDCF7BDCBCAA5B3759E0C9B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__7_0_m589BB91DA9CCDFE131CEE4877F130BB8413B4D42_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m8868DC9A9BCF4091467F941D67348D683C3CDCEC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m96EA7386195DB520E0C32D4C43589CC1DA65AB89_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinrtModule_GetActivationFactory_mA194712F1A7D1C10FBC71B630AAC46AA55A2E9D0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinrtModule__cctor_mD72D09AFC48B0DF3DEBE16B735971B6F2CB00FB0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinrtModule__ctor_m3C996E4E7220B563CA16A0010CF620E6C85F3403_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WinrtModule_get_Instance_mF2B4119EC32D8795E6D42278FEEB65EBAA02E774_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _ActivateInstance_BeginInvoke_m8067D3AF4C84BC6B6DAB4007D7E07672AC736A83_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _AddRef_BeginInvoke_m5CA9015C7E4FACE6B54A28469F79967A0B8EB20D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _CreateCoordinateSystemForNodeWithPositionAndOrientation_BeginInvoke_m4CC48673FA263F631308B74969F5AA54A0D6FDB2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _CreateCoordinateSystemForNodeWithPosition_BeginInvoke_m37201E86FC4E5B2887253B00A9D0A1C86A946ABB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _CreateCoordinateSystemForNode_BeginInvoke_mE1330A5AEE209F198F482094E832B30AE818E580_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _CreateLocatorForNode_BeginInvoke_m5B93633654EB88E67975081F0BDD814DB6F5780B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _GetIids_BeginInvoke_m05502023EB64136565DD8D3E424ED6F98855263F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _GetRuntimeClassName_BeginInvoke_m675A7C7ADA75FD949D7511192FC38A8E326593B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _GetTrustLevel_BeginInvoke_mD24EAEB06BAEC666A8B5A64205DCA63B79306E0A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _QueryInterface_BeginInvoke_mB4BE34BCEE6436E6834DA9D35EA5D4C7CBFE1C70_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _Release_BeginInvoke_m8A47B48EF4B351507577F321F34031D58E2EE69E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _RequestAccessAsync_BeginInvoke_mCCD80FAF022A388D57B30189847B9D8ACCDFCB36_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _TryCreateFrameOfReferenceWithPositionAndOrientation_BeginInvoke_m3380823A4876640679E5EB802FC69C29AA100C7C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _TryCreateFrameOfReferenceWithPosition_BeginInvoke_mCB481F6167AEBBA942C44BF7CCA24D87F756681A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _TryCreateFrameOfReference_BeginInvoke_m85ED6418AB7337A25012C5DA67E460FBF881545B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _TryGetTransformTo_BeginInvoke_mB7096B37CD3A29E867389C8C2845CFFA492F57AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _get_PropertyAsEnum_BeginInvoke_mFD3E8999EA31000765D67F70751FAC9618CEEF8D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _get_PropertyAsInt_BeginInvoke_mE47D5AA15C6161DFEB0EA568E9D578B5EF50CAAD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _get_PropertyAsMatrix4x4_BeginInvoke_mD1E7503948A35521E8E1288AE88D9243BEF5073A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _get_PropertyAsObject_BeginInvoke_m388E4D3AB3CA188D15863C25513AB56EB52D5531_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _method0_BeginInvoke_m42C34EEA417820949CCF7963E148B4B07A7B1669_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t _put_PropertyAsObject_BeginInvoke_mA6ECFA7FB04C0BED64A8C2FF09F83E9ADAD22DA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t mono_thread_cleanup_register_BeginInvoke_m80F8CF0E5B7363B797B45D17419A616A5FAD00CC_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32;;
struct IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com;
struct IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com;;
struct IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke;
struct IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke;;
struct IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62;;
struct IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_com;
struct IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_com;;
struct IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_pinvoke;
struct IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_pinvoke;;

struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t12DFAB3F809506E289FC8D72565A29870E8F99E3 
{
public:

public:
};


// System.Object


// Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics
struct  ISpatialAnchorExporterStatics_t678004F7593EA7BABBE321CEDC2B19C7CCBB29A7  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics_Vftbl> Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics::_obj
	ObjectReference_1_t530F1E336D8E2AE06C0F8AD45027396D9CCF945E * ____obj_0;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(ISpatialAnchorExporterStatics_t678004F7593EA7BABBE321CEDC2B19C7CCBB29A7, ____obj_0)); }
	inline ObjectReference_1_t530F1E336D8E2AE06C0F8AD45027396D9CCF945E * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_t530F1E336D8E2AE06C0F8AD45027396D9CCF945E ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_t530F1E336D8E2AE06C0F8AD45027396D9CCF945E * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_0), (void*)value);
	}
};


// Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics_<>c
struct  U3CU3Ec_t0AF46CD18687150C5FBDA8D1EB3A088B5E49659A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t0AF46CD18687150C5FBDA8D1EB3A088B5E49659A_StaticFields
{
public:
	// Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics_<>c Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics_<>c::<>9
	U3CU3Ec_t0AF46CD18687150C5FBDA8D1EB3A088B5E49659A * ___U3CU3E9_0;
	// System.Func`2<System.Int32,Microsoft.Windows.Perception.Spatial.SpatialPerceptionAccessStatus> Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics_<>c::<>9__5_0
	Func_2_t1255F50D8FBA7BB723D85AB9EB862C75A432EEB2 * ___U3CU3E9__5_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0AF46CD18687150C5FBDA8D1EB3A088B5E49659A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t0AF46CD18687150C5FBDA8D1EB3A088B5E49659A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t0AF46CD18687150C5FBDA8D1EB3A088B5E49659A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t0AF46CD18687150C5FBDA8D1EB3A088B5E49659A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0AF46CD18687150C5FBDA8D1EB3A088B5E49659A_StaticFields, ___U3CU3E9__5_0_1)); }
	inline Func_2_t1255F50D8FBA7BB723D85AB9EB862C75A432EEB2 * get_U3CU3E9__5_0_1() const { return ___U3CU3E9__5_0_1; }
	inline Func_2_t1255F50D8FBA7BB723D85AB9EB862C75A432EEB2 ** get_address_of_U3CU3E9__5_0_1() { return &___U3CU3E9__5_0_1; }
	inline void set_U3CU3E9__5_0_1(Func_2_t1255F50D8FBA7BB723D85AB9EB862C75A432EEB2 * value)
	{
		___U3CU3E9__5_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_0_1), (void*)value);
	}
};


// Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem
struct  ISpatialCoordinateSystem_t539C9440C0D44A165C8826A2A91B412F7AEA6A24  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem_Vftbl> Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem::_obj
	ObjectReference_1_tC6FFCE6D4A862A7EBF2A518A0AA80A0ED0D99A5A * ____obj_0;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(ISpatialCoordinateSystem_t539C9440C0D44A165C8826A2A91B412F7AEA6A24, ____obj_0)); }
	inline ObjectReference_1_tC6FFCE6D4A862A7EBF2A518A0AA80A0ED0D99A5A * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_tC6FFCE6D4A862A7EBF2A518A0AA80A0ED0D99A5A ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_tC6FFCE6D4A862A7EBF2A518A0AA80A0ED0D99A5A * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_0), (void*)value);
	}
};


// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics
struct  ISpatialGraphInteropPreviewStatics_tA6235090F28BD06BD7C7946FD10E0986B7DE0AF9  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl> Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics::_obj
	ObjectReference_1_tD07D53CD6B0E358A8023F2234DAA8FBEE947EABB * ____obj_0;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(ISpatialGraphInteropPreviewStatics_tA6235090F28BD06BD7C7946FD10E0986B7DE0AF9, ____obj_0)); }
	inline ObjectReference_1_tD07D53CD6B0E358A8023F2234DAA8FBEE947EABB * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_tD07D53CD6B0E358A8023F2234DAA8FBEE947EABB ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_tD07D53CD6B0E358A8023F2234DAA8FBEE947EABB * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_0), (void*)value);
	}
};


// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2
struct  ISpatialGraphInteropPreviewStatics2_t9F8CFA5570E00335B319319183ED55A7BE64ED16  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2_Vftbl> Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2::_obj
	ObjectReference_1_t7B9167D5590FAF87529386F35A3F649591B101B2 * ____obj_0;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(ISpatialGraphInteropPreviewStatics2_t9F8CFA5570E00335B319319183ED55A7BE64ED16, ____obj_0)); }
	inline ObjectReference_1_t7B9167D5590FAF87529386F35A3F649591B101B2 * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_t7B9167D5590FAF87529386F35A3F649591B101B2 ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_t7B9167D5590FAF87529386F35A3F649591B101B2 * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_0), (void*)value);
	}
};


// Microsoft.Windows.Perception.Spatial.Preview.SpatialGraphInteropPreview
struct  SpatialGraphInteropPreview_tFD36CA20A6E54953B35EC4B17927E4F63CE97C6A  : public RuntimeObject
{
public:

public:
};

struct SpatialGraphInteropPreview_tFD36CA20A6E54953B35EC4B17927E4F63CE97C6A_StaticFields
{
public:
	// WinRT.WeakLazy`1<Microsoft.Windows.Perception.Spatial.Preview.SpatialGraphInteropPreview_Statics> Microsoft.Windows.Perception.Spatial.Preview.SpatialGraphInteropPreview::_statics
	WeakLazy_1_t4D8064E30345D896B6FAF9DCEC2247C38D0EC71F * ____statics_0;

public:
	inline static int32_t get_offset_of__statics_0() { return static_cast<int32_t>(offsetof(SpatialGraphInteropPreview_tFD36CA20A6E54953B35EC4B17927E4F63CE97C6A_StaticFields, ____statics_0)); }
	inline WeakLazy_1_t4D8064E30345D896B6FAF9DCEC2247C38D0EC71F * get__statics_0() const { return ____statics_0; }
	inline WeakLazy_1_t4D8064E30345D896B6FAF9DCEC2247C38D0EC71F ** get_address_of__statics_0() { return &____statics_0; }
	inline void set__statics_0(WeakLazy_1_t4D8064E30345D896B6FAF9DCEC2247C38D0EC71F * value)
	{
		____statics_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____statics_0), (void*)value);
	}
};


// Microsoft.Windows.Perception.Spatial.SpatialAnchorExporter
struct  SpatialAnchorExporter_tEF6597A7C5BBAABC751BDF2B097FA7C459862D1C  : public RuntimeObject
{
public:

public:
};

struct SpatialAnchorExporter_tEF6597A7C5BBAABC751BDF2B097FA7C459862D1C_StaticFields
{
public:
	// WinRT.WeakLazy`1<Microsoft.Windows.Perception.Spatial.SpatialAnchorExporter_Statics> Microsoft.Windows.Perception.Spatial.SpatialAnchorExporter::_statics
	WeakLazy_1_t1B33F4864FBC2BF734A2EFC982148B4D00DD2228 * ____statics_0;

public:
	inline static int32_t get_offset_of__statics_0() { return static_cast<int32_t>(offsetof(SpatialAnchorExporter_tEF6597A7C5BBAABC751BDF2B097FA7C459862D1C_StaticFields, ____statics_0)); }
	inline WeakLazy_1_t1B33F4864FBC2BF734A2EFC982148B4D00DD2228 * get__statics_0() const { return ____statics_0; }
	inline WeakLazy_1_t1B33F4864FBC2BF734A2EFC982148B4D00DD2228 ** get_address_of__statics_0() { return &____statics_0; }
	inline void set__statics_0(WeakLazy_1_t1B33F4864FBC2BF734A2EFC982148B4D00DD2228 * value)
	{
		____statics_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____statics_0), (void*)value);
	}
};


// Microsoft.Windows.Perception.Spatial.SpatialCoordinateSystem
struct  SpatialCoordinateSystem_t74AEBD257DE2AFEB649A5505161BE715E0BF46C8  : public RuntimeObject
{
public:
	// Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem Microsoft.Windows.Perception.Spatial.SpatialCoordinateSystem::_interface
	ISpatialCoordinateSystem_t539C9440C0D44A165C8826A2A91B412F7AEA6A24 * ____interface_0;

public:
	inline static int32_t get_offset_of__interface_0() { return static_cast<int32_t>(offsetof(SpatialCoordinateSystem_t74AEBD257DE2AFEB649A5505161BE715E0BF46C8, ____interface_0)); }
	inline ISpatialCoordinateSystem_t539C9440C0D44A165C8826A2A91B412F7AEA6A24 * get__interface_0() const { return ____interface_0; }
	inline ISpatialCoordinateSystem_t539C9440C0D44A165C8826A2A91B412F7AEA6A24 ** get_address_of__interface_0() { return &____interface_0; }
	inline void set__interface_0(ISpatialCoordinateSystem_t539C9440C0D44A165C8826A2A91B412F7AEA6A24 * value)
	{
		____interface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interface_0), (void*)value);
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


// System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>>
struct  Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t7B14811260CE263593312D6072963636521F7EAF* ___entries_1;
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
	KeyCollection_t6DCBB93535E6D9D5515BB42AF39297DE086FF11E * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA5A35EE1B1A2D8FFB9C721709F97ADDA7A656CB4 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE, ___entries_1)); }
	inline EntryU5BU5D_t7B14811260CE263593312D6072963636521F7EAF* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t7B14811260CE263593312D6072963636521F7EAF** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t7B14811260CE263593312D6072963636521F7EAF* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE, ___keys_7)); }
	inline KeyCollection_t6DCBB93535E6D9D5515BB42AF39297DE086FF11E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t6DCBB93535E6D9D5515BB42AF39297DE086FF11E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t6DCBB93535E6D9D5515BB42AF39297DE086FF11E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE, ___values_8)); }
	inline ValueCollection_tA5A35EE1B1A2D8FFB9C721709F97ADDA7A656CB4 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA5A35EE1B1A2D8FFB9C721709F97ADDA7A656CB4 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA5A35EE1B1A2D8FFB9C721709F97ADDA7A656CB4 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.IntPtr>
struct  HashSet_1_t1B66B9848B6D563944C506FA6F90487B3DB7396D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1_Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t6CDBECEABAF736A24C84D0D78B9A92940018E202* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t1B66B9848B6D563944C506FA6F90487B3DB7396D, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t1B66B9848B6D563944C506FA6F90487B3DB7396D, ____slots_8)); }
	inline SlotU5BU5D_t6CDBECEABAF736A24C84D0D78B9A92940018E202* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t6CDBECEABAF736A24C84D0D78B9A92940018E202** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t6CDBECEABAF736A24C84D0D78B9A92940018E202* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t1B66B9848B6D563944C506FA6F90487B3DB7396D, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t1B66B9848B6D563944C506FA6F90487B3DB7396D, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t1B66B9848B6D563944C506FA6F90487B3DB7396D, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t1B66B9848B6D563944C506FA6F90487B3DB7396D, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t1B66B9848B6D563944C506FA6F90487B3DB7396D, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t1B66B9848B6D563944C506FA6F90487B3DB7396D, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
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


// System.Lazy`1<Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2>
struct  Lazy_1_tD26FF389F7897C8553D1536923CBABC0ABA593E0  : public RuntimeObject
{
public:
	// System.Object System.Lazy`1::m_boxed
	RuntimeObject * ___m_boxed_1;
	// System.Func`1<T> System.Lazy`1::m_valueFactory
	Func_1_t43234D68F3ABC78C8E275517F6810A0E91D1AC97 * ___m_valueFactory_2;
	// System.Object System.Lazy`1::m_threadSafeObj
	RuntimeObject * ___m_threadSafeObj_3;

public:
	inline static int32_t get_offset_of_m_boxed_1() { return static_cast<int32_t>(offsetof(Lazy_1_tD26FF389F7897C8553D1536923CBABC0ABA593E0, ___m_boxed_1)); }
	inline RuntimeObject * get_m_boxed_1() const { return ___m_boxed_1; }
	inline RuntimeObject ** get_address_of_m_boxed_1() { return &___m_boxed_1; }
	inline void set_m_boxed_1(RuntimeObject * value)
	{
		___m_boxed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_boxed_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_valueFactory_2() { return static_cast<int32_t>(offsetof(Lazy_1_tD26FF389F7897C8553D1536923CBABC0ABA593E0, ___m_valueFactory_2)); }
	inline Func_1_t43234D68F3ABC78C8E275517F6810A0E91D1AC97 * get_m_valueFactory_2() const { return ___m_valueFactory_2; }
	inline Func_1_t43234D68F3ABC78C8E275517F6810A0E91D1AC97 ** get_address_of_m_valueFactory_2() { return &___m_valueFactory_2; }
	inline void set_m_valueFactory_2(Func_1_t43234D68F3ABC78C8E275517F6810A0E91D1AC97 * value)
	{
		___m_valueFactory_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_valueFactory_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_threadSafeObj_3() { return static_cast<int32_t>(offsetof(Lazy_1_tD26FF389F7897C8553D1536923CBABC0ABA593E0, ___m_threadSafeObj_3)); }
	inline RuntimeObject * get_m_threadSafeObj_3() const { return ___m_threadSafeObj_3; }
	inline RuntimeObject ** get_address_of_m_threadSafeObj_3() { return &___m_threadSafeObj_3; }
	inline void set_m_threadSafeObj_3(RuntimeObject * value)
	{
		___m_threadSafeObj_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_threadSafeObj_3), (void*)value);
	}
};

struct Lazy_1_tD26FF389F7897C8553D1536923CBABC0ABA593E0_StaticFields
{
public:
	// System.Func`1<T> System.Lazy`1::ALREADY_INVOKED_SENTINEL
	Func_1_t43234D68F3ABC78C8E275517F6810A0E91D1AC97 * ___ALREADY_INVOKED_SENTINEL_0;

public:
	inline static int32_t get_offset_of_ALREADY_INVOKED_SENTINEL_0() { return static_cast<int32_t>(offsetof(Lazy_1_tD26FF389F7897C8553D1536923CBABC0ABA593E0_StaticFields, ___ALREADY_INVOKED_SENTINEL_0)); }
	inline Func_1_t43234D68F3ABC78C8E275517F6810A0E91D1AC97 * get_ALREADY_INVOKED_SENTINEL_0() const { return ___ALREADY_INVOKED_SENTINEL_0; }
	inline Func_1_t43234D68F3ABC78C8E275517F6810A0E91D1AC97 ** get_address_of_ALREADY_INVOKED_SENTINEL_0() { return &___ALREADY_INVOKED_SENTINEL_0; }
	inline void set_ALREADY_INVOKED_SENTINEL_0(Func_1_t43234D68F3ABC78C8E275517F6810A0E91D1AC97 * value)
	{
		___ALREADY_INVOKED_SENTINEL_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ALREADY_INVOKED_SENTINEL_0), (void*)value);
	}
};


// System.Lazy`1<System.Boolean>
struct  Lazy_1_tD86FA2DBC6DDD534D2365617EE6B309478B2DCAE  : public RuntimeObject
{
public:
	// System.Object System.Lazy`1::m_boxed
	RuntimeObject * ___m_boxed_1;
	// System.Func`1<T> System.Lazy`1::m_valueFactory
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___m_valueFactory_2;
	// System.Object System.Lazy`1::m_threadSafeObj
	RuntimeObject * ___m_threadSafeObj_3;

public:
	inline static int32_t get_offset_of_m_boxed_1() { return static_cast<int32_t>(offsetof(Lazy_1_tD86FA2DBC6DDD534D2365617EE6B309478B2DCAE, ___m_boxed_1)); }
	inline RuntimeObject * get_m_boxed_1() const { return ___m_boxed_1; }
	inline RuntimeObject ** get_address_of_m_boxed_1() { return &___m_boxed_1; }
	inline void set_m_boxed_1(RuntimeObject * value)
	{
		___m_boxed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_boxed_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_valueFactory_2() { return static_cast<int32_t>(offsetof(Lazy_1_tD86FA2DBC6DDD534D2365617EE6B309478B2DCAE, ___m_valueFactory_2)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_m_valueFactory_2() const { return ___m_valueFactory_2; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_m_valueFactory_2() { return &___m_valueFactory_2; }
	inline void set_m_valueFactory_2(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___m_valueFactory_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_valueFactory_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_threadSafeObj_3() { return static_cast<int32_t>(offsetof(Lazy_1_tD86FA2DBC6DDD534D2365617EE6B309478B2DCAE, ___m_threadSafeObj_3)); }
	inline RuntimeObject * get_m_threadSafeObj_3() const { return ___m_threadSafeObj_3; }
	inline RuntimeObject ** get_address_of_m_threadSafeObj_3() { return &___m_threadSafeObj_3; }
	inline void set_m_threadSafeObj_3(RuntimeObject * value)
	{
		___m_threadSafeObj_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_threadSafeObj_3), (void*)value);
	}
};

struct Lazy_1_tD86FA2DBC6DDD534D2365617EE6B309478B2DCAE_StaticFields
{
public:
	// System.Func`1<T> System.Lazy`1::ALREADY_INVOKED_SENTINEL
	Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___ALREADY_INVOKED_SENTINEL_0;

public:
	inline static int32_t get_offset_of_ALREADY_INVOKED_SENTINEL_0() { return static_cast<int32_t>(offsetof(Lazy_1_tD86FA2DBC6DDD534D2365617EE6B309478B2DCAE_StaticFields, ___ALREADY_INVOKED_SENTINEL_0)); }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * get_ALREADY_INVOKED_SENTINEL_0() const { return ___ALREADY_INVOKED_SENTINEL_0; }
	inline Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 ** get_address_of_ALREADY_INVOKED_SENTINEL_0() { return &___ALREADY_INVOKED_SENTINEL_0; }
	inline void set_ALREADY_INVOKED_SENTINEL_0(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * value)
	{
		___ALREADY_INVOKED_SENTINEL_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ALREADY_INVOKED_SENTINEL_0), (void*)value);
	}
};


// System.Lazy`1<System.Collections.Generic.HashSet`1<System.IntPtr>>
struct  Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18  : public RuntimeObject
{
public:
	// System.Object System.Lazy`1::m_boxed
	RuntimeObject * ___m_boxed_1;
	// System.Func`1<T> System.Lazy`1::m_valueFactory
	Func_1_tB552F57AEBDE5EBC29095AB8F3BAF9EB55B1E25E * ___m_valueFactory_2;
	// System.Object System.Lazy`1::m_threadSafeObj
	RuntimeObject * ___m_threadSafeObj_3;

public:
	inline static int32_t get_offset_of_m_boxed_1() { return static_cast<int32_t>(offsetof(Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18, ___m_boxed_1)); }
	inline RuntimeObject * get_m_boxed_1() const { return ___m_boxed_1; }
	inline RuntimeObject ** get_address_of_m_boxed_1() { return &___m_boxed_1; }
	inline void set_m_boxed_1(RuntimeObject * value)
	{
		___m_boxed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_boxed_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_valueFactory_2() { return static_cast<int32_t>(offsetof(Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18, ___m_valueFactory_2)); }
	inline Func_1_tB552F57AEBDE5EBC29095AB8F3BAF9EB55B1E25E * get_m_valueFactory_2() const { return ___m_valueFactory_2; }
	inline Func_1_tB552F57AEBDE5EBC29095AB8F3BAF9EB55B1E25E ** get_address_of_m_valueFactory_2() { return &___m_valueFactory_2; }
	inline void set_m_valueFactory_2(Func_1_tB552F57AEBDE5EBC29095AB8F3BAF9EB55B1E25E * value)
	{
		___m_valueFactory_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_valueFactory_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_threadSafeObj_3() { return static_cast<int32_t>(offsetof(Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18, ___m_threadSafeObj_3)); }
	inline RuntimeObject * get_m_threadSafeObj_3() const { return ___m_threadSafeObj_3; }
	inline RuntimeObject ** get_address_of_m_threadSafeObj_3() { return &___m_threadSafeObj_3; }
	inline void set_m_threadSafeObj_3(RuntimeObject * value)
	{
		___m_threadSafeObj_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_threadSafeObj_3), (void*)value);
	}
};

struct Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18_StaticFields
{
public:
	// System.Func`1<T> System.Lazy`1::ALREADY_INVOKED_SENTINEL
	Func_1_tB552F57AEBDE5EBC29095AB8F3BAF9EB55B1E25E * ___ALREADY_INVOKED_SENTINEL_0;

public:
	inline static int32_t get_offset_of_ALREADY_INVOKED_SENTINEL_0() { return static_cast<int32_t>(offsetof(Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18_StaticFields, ___ALREADY_INVOKED_SENTINEL_0)); }
	inline Func_1_tB552F57AEBDE5EBC29095AB8F3BAF9EB55B1E25E * get_ALREADY_INVOKED_SENTINEL_0() const { return ___ALREADY_INVOKED_SENTINEL_0; }
	inline Func_1_tB552F57AEBDE5EBC29095AB8F3BAF9EB55B1E25E ** get_address_of_ALREADY_INVOKED_SENTINEL_0() { return &___ALREADY_INVOKED_SENTINEL_0; }
	inline void set_ALREADY_INVOKED_SENTINEL_0(Func_1_tB552F57AEBDE5EBC29095AB8F3BAF9EB55B1E25E * value)
	{
		___ALREADY_INVOKED_SENTINEL_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ALREADY_INVOKED_SENTINEL_0), (void*)value);
	}
};


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

// WinRT.Delegate_InitialReference
struct  InitialReference_t18776180879E7D7B1F47934927C0DB540DB2EE4E  : public RuntimeObject
{
public:
	// WinRT.Delegate WinRT.Delegate_InitialReference::_delegate
	Delegate_t01789152B02E68157FD11FCBC21F63795C42E476 * ____delegate_0;

public:
	inline static int32_t get_offset_of__delegate_0() { return static_cast<int32_t>(offsetof(InitialReference_t18776180879E7D7B1F47934927C0DB540DB2EE4E, ____delegate_0)); }
	inline Delegate_t01789152B02E68157FD11FCBC21F63795C42E476 * get__delegate_0() const { return ____delegate_0; }
	inline Delegate_t01789152B02E68157FD11FCBC21F63795C42E476 ** get_address_of__delegate_0() { return &____delegate_0; }
	inline void set__delegate_0(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476 * value)
	{
		____delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____delegate_0), (void*)value);
	}
};


// WinRT.Interop.IAsyncInfo
struct  IAsyncInfo_tF1F6A3A139BB86EE62ADEC082EE510976CBD093A  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<WinRT.Interop.IAsyncInfo_Vftbl> WinRT.Interop.IAsyncInfo::_obj
	ObjectReference_1_t69270BB4E7A44A4CBD4E25BE22C8373461A12F78 * ____obj_0;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(IAsyncInfo_tF1F6A3A139BB86EE62ADEC082EE510976CBD093A, ____obj_0)); }
	inline ObjectReference_1_t69270BB4E7A44A4CBD4E25BE22C8373461A12F78 * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_t69270BB4E7A44A4CBD4E25BE22C8373461A12F78 ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_t69270BB4E7A44A4CBD4E25BE22C8373461A12F78 * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_0), (void*)value);
	}
};


// WinRT.Interop.IAsyncOperation
struct  IAsyncOperation_t7AE926151C1DBB80AD17463891F756F6C083BC07  : public RuntimeObject
{
public:
	// WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation_Vftbl> WinRT.Interop.IAsyncOperation::_obj
	ObjectReference_1_tA170C4C2A9CD8CC3F9693CA7DE47AEB8FE892974 * ____obj_0;
	// WinRT.Interop.DelegateProperty`1<WinRT.Interop.IAsyncOperation_CompletedHandler> WinRT.Interop.IAsyncOperation::_Completed
	DelegateProperty_1_tD9ACB29E556508E67776F11D93DD43F625DC8EA3 * ____Completed_2;

public:
	inline static int32_t get_offset_of__obj_0() { return static_cast<int32_t>(offsetof(IAsyncOperation_t7AE926151C1DBB80AD17463891F756F6C083BC07, ____obj_0)); }
	inline ObjectReference_1_tA170C4C2A9CD8CC3F9693CA7DE47AEB8FE892974 * get__obj_0() const { return ____obj_0; }
	inline ObjectReference_1_tA170C4C2A9CD8CC3F9693CA7DE47AEB8FE892974 ** get_address_of__obj_0() { return &____obj_0; }
	inline void set__obj_0(ObjectReference_1_tA170C4C2A9CD8CC3F9693CA7DE47AEB8FE892974 * value)
	{
		____obj_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_0), (void*)value);
	}

	inline static int32_t get_offset_of__Completed_2() { return static_cast<int32_t>(offsetof(IAsyncOperation_t7AE926151C1DBB80AD17463891F756F6C083BC07, ____Completed_2)); }
	inline DelegateProperty_1_tD9ACB29E556508E67776F11D93DD43F625DC8EA3 * get__Completed_2() const { return ____Completed_2; }
	inline DelegateProperty_1_tD9ACB29E556508E67776F11D93DD43F625DC8EA3 ** get_address_of__Completed_2() { return &____Completed_2; }
	inline void set__Completed_2(DelegateProperty_1_tD9ACB29E556508E67776F11D93DD43F625DC8EA3 * value)
	{
		____Completed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Completed_2), (void*)value);
	}
};

struct IAsyncOperation_t7AE926151C1DBB80AD17463891F756F6C083BC07_StaticFields
{
public:
	// WinRT.Interop.IDelegate2_Obj_Enum WinRT.Interop.IAsyncOperation::_OnCompletedDelegate
	IDelegate2_Obj_Enum_tDAE283FCD285A52E24B2CA3B344BF9784766348F * ____OnCompletedDelegate_1;

public:
	inline static int32_t get_offset_of__OnCompletedDelegate_1() { return static_cast<int32_t>(offsetof(IAsyncOperation_t7AE926151C1DBB80AD17463891F756F6C083BC07_StaticFields, ____OnCompletedDelegate_1)); }
	inline IDelegate2_Obj_Enum_tDAE283FCD285A52E24B2CA3B344BF9784766348F * get__OnCompletedDelegate_1() const { return ____OnCompletedDelegate_1; }
	inline IDelegate2_Obj_Enum_tDAE283FCD285A52E24B2CA3B344BF9784766348F ** get_address_of__OnCompletedDelegate_1() { return &____OnCompletedDelegate_1; }
	inline void set__OnCompletedDelegate_1(IDelegate2_Obj_Enum_tDAE283FCD285A52E24B2CA3B344BF9784766348F * value)
	{
		____OnCompletedDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____OnCompletedDelegate_1), (void*)value);
	}
};


// WinRT.Interop.IAsyncOperation_<>c__DisplayClass4_0
struct  U3CU3Ec__DisplayClass4_0_tDA51E37F0B56D3B6D051DDF66541DD421F25C95F  : public RuntimeObject
{
public:
	// System.Int32 WinRT.Interop.IAsyncOperation_<>c__DisplayClass4_0::status
	int32_t ___status_0;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tDA51E37F0B56D3B6D051DDF66541DD421F25C95F, ___status_0)); }
	inline int32_t get_status_0() const { return ___status_0; }
	inline int32_t* get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(int32_t value)
	{
		___status_0 = value;
	}
};


// WinRT.Mono
struct  Mono_t22DED35DF53F81A03339C93DB68629D193273A02  : public RuntimeObject
{
public:

public:
};

struct Mono_t22DED35DF53F81A03339C93DB68629D193273A02_StaticFields
{
public:
	// System.Lazy`1<System.Boolean> WinRT.Mono::_usingMono
	Lazy_1_tD86FA2DBC6DDD534D2365617EE6B309478B2DCAE * ____usingMono_0;

public:
	inline static int32_t get_offset_of__usingMono_0() { return static_cast<int32_t>(offsetof(Mono_t22DED35DF53F81A03339C93DB68629D193273A02_StaticFields, ____usingMono_0)); }
	inline Lazy_1_tD86FA2DBC6DDD534D2365617EE6B309478B2DCAE * get__usingMono_0() const { return ____usingMono_0; }
	inline Lazy_1_tD86FA2DBC6DDD534D2365617EE6B309478B2DCAE ** get_address_of__usingMono_0() { return &____usingMono_0; }
	inline void set__usingMono_0(Lazy_1_tD86FA2DBC6DDD534D2365617EE6B309478B2DCAE * value)
	{
		____usingMono_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____usingMono_0), (void*)value);
	}
};


// WinRT.Mono_<>c
struct  U3CU3Ec_tCF1205861994CBA3AD829D9F29102894425047CC  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCF1205861994CBA3AD829D9F29102894425047CC_StaticFields
{
public:
	// WinRT.Mono_<>c WinRT.Mono_<>c::<>9
	U3CU3Ec_tCF1205861994CBA3AD829D9F29102894425047CC * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCF1205861994CBA3AD829D9F29102894425047CC_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCF1205861994CBA3AD829D9F29102894425047CC * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCF1205861994CBA3AD829D9F29102894425047CC ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCF1205861994CBA3AD829D9F29102894425047CC * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// WinRT.Platform
struct  Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A  : public RuntimeObject
{
public:

public:
};

struct Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_StaticFields
{
public:
	// WinRT.Platform_IPlatformLinkage WinRT.Platform::_platformLinkage
	RuntimeObject* ____platformLinkage_0;

public:
	inline static int32_t get_offset_of__platformLinkage_0() { return static_cast<int32_t>(offsetof(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_StaticFields, ____platformLinkage_0)); }
	inline RuntimeObject* get__platformLinkage_0() const { return ____platformLinkage_0; }
	inline RuntimeObject** get_address_of__platformLinkage_0() { return &____platformLinkage_0; }
	inline void set__platformLinkage_0(RuntimeObject* value)
	{
		____platformLinkage_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____platformLinkage_0), (void*)value);
	}
};


// WinRT.Platform_DotNETLinkage
struct  DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293  : public RuntimeObject
{
public:

public:
};


// WinRT.Platform_IL2CPPLinkage
struct  IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB  : public RuntimeObject
{
public:

public:
};


// WinRT.WeakLazy`1<Microsoft.Windows.Perception.Spatial.Preview.SpatialGraphInteropPreview_Statics>
struct  WeakLazy_1_t4D8064E30345D896B6FAF9DCEC2247C38D0EC71F  : public RuntimeObject
{
public:
	// System.Func`1<T> WinRT.WeakLazy`1::_constructor
	Func_1_t28EE7BA9FFC238D02A686DF1F603659480781D81 * ____constructor_0;
	// System.WeakReference`1<T> WinRT.WeakLazy`1::_instance
	WeakReference_1_tE1D6582CA80B8F0A1141D50F4EDE6A9C2A5AEA99 * ____instance_1;

public:
	inline static int32_t get_offset_of__constructor_0() { return static_cast<int32_t>(offsetof(WeakLazy_1_t4D8064E30345D896B6FAF9DCEC2247C38D0EC71F, ____constructor_0)); }
	inline Func_1_t28EE7BA9FFC238D02A686DF1F603659480781D81 * get__constructor_0() const { return ____constructor_0; }
	inline Func_1_t28EE7BA9FFC238D02A686DF1F603659480781D81 ** get_address_of__constructor_0() { return &____constructor_0; }
	inline void set__constructor_0(Func_1_t28EE7BA9FFC238D02A686DF1F603659480781D81 * value)
	{
		____constructor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____constructor_0), (void*)value);
	}

	inline static int32_t get_offset_of__instance_1() { return static_cast<int32_t>(offsetof(WeakLazy_1_t4D8064E30345D896B6FAF9DCEC2247C38D0EC71F, ____instance_1)); }
	inline WeakReference_1_tE1D6582CA80B8F0A1141D50F4EDE6A9C2A5AEA99 * get__instance_1() const { return ____instance_1; }
	inline WeakReference_1_tE1D6582CA80B8F0A1141D50F4EDE6A9C2A5AEA99 ** get_address_of__instance_1() { return &____instance_1; }
	inline void set__instance_1(WeakReference_1_tE1D6582CA80B8F0A1141D50F4EDE6A9C2A5AEA99 * value)
	{
		____instance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_1), (void*)value);
	}
};


// WinRT.WeakLazy`1<Microsoft.Windows.Perception.Spatial.SpatialAnchorExporter_Statics>
struct  WeakLazy_1_t1B33F4864FBC2BF734A2EFC982148B4D00DD2228  : public RuntimeObject
{
public:
	// System.Func`1<T> WinRT.WeakLazy`1::_constructor
	Func_1_t471C268536C7BAE0A2DED3FC0A233D3A5CC89F29 * ____constructor_0;
	// System.WeakReference`1<T> WinRT.WeakLazy`1::_instance
	WeakReference_1_t8EE61D152A551A56537B3B15953938F0336D2098 * ____instance_1;

public:
	inline static int32_t get_offset_of__constructor_0() { return static_cast<int32_t>(offsetof(WeakLazy_1_t1B33F4864FBC2BF734A2EFC982148B4D00DD2228, ____constructor_0)); }
	inline Func_1_t471C268536C7BAE0A2DED3FC0A233D3A5CC89F29 * get__constructor_0() const { return ____constructor_0; }
	inline Func_1_t471C268536C7BAE0A2DED3FC0A233D3A5CC89F29 ** get_address_of__constructor_0() { return &____constructor_0; }
	inline void set__constructor_0(Func_1_t471C268536C7BAE0A2DED3FC0A233D3A5CC89F29 * value)
	{
		____constructor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____constructor_0), (void*)value);
	}

	inline static int32_t get_offset_of__instance_1() { return static_cast<int32_t>(offsetof(WeakLazy_1_t1B33F4864FBC2BF734A2EFC982148B4D00DD2228, ____instance_1)); }
	inline WeakReference_1_t8EE61D152A551A56537B3B15953938F0336D2098 * get__instance_1() const { return ____instance_1; }
	inline WeakReference_1_t8EE61D152A551A56537B3B15953938F0336D2098 ** get_address_of__instance_1() { return &____instance_1; }
	inline void set__instance_1(WeakReference_1_t8EE61D152A551A56537B3B15953938F0336D2098 * value)
	{
		____instance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_1), (void*)value);
	}
};


// WinRT.WeakLazy`1<WinRT.WinrtModule>
struct  WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153  : public RuntimeObject
{
public:
	// System.Func`1<T> WinRT.WeakLazy`1::_constructor
	Func_1_tE7A86D81F0BFC069D5CB998C2899B6287DBCFFCE * ____constructor_0;
	// System.WeakReference`1<T> WinRT.WeakLazy`1::_instance
	WeakReference_1_tACC82BB4A2AE2C506A4E20F5AAD92E1D04E1D4F7 * ____instance_1;

public:
	inline static int32_t get_offset_of__constructor_0() { return static_cast<int32_t>(offsetof(WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153, ____constructor_0)); }
	inline Func_1_tE7A86D81F0BFC069D5CB998C2899B6287DBCFFCE * get__constructor_0() const { return ____constructor_0; }
	inline Func_1_tE7A86D81F0BFC069D5CB998C2899B6287DBCFFCE ** get_address_of__constructor_0() { return &____constructor_0; }
	inline void set__constructor_0(Func_1_tE7A86D81F0BFC069D5CB998C2899B6287DBCFFCE * value)
	{
		____constructor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____constructor_0), (void*)value);
	}

	inline static int32_t get_offset_of__instance_1() { return static_cast<int32_t>(offsetof(WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153, ____instance_1)); }
	inline WeakReference_1_tACC82BB4A2AE2C506A4E20F5AAD92E1D04E1D4F7 * get__instance_1() const { return ____instance_1; }
	inline WeakReference_1_tACC82BB4A2AE2C506A4E20F5AAD92E1D04E1D4F7 ** get_address_of__instance_1() { return &____instance_1; }
	inline void set__instance_1(WeakReference_1_tACC82BB4A2AE2C506A4E20F5AAD92E1D04E1D4F7 * value)
	{
		____instance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_1), (void*)value);
	}
};


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct  EmbeddedAttribute_t9FDB1E11FC6370067E1F2B823E82C173448B19E6  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
};


// Microsoft.Windows.Perception.Spatial.IAsyncOperationCompletedHandler_SpatialPerceptionAccessStatus
struct  IAsyncOperationCompletedHandler_SpatialPerceptionAccessStatus_t9E00B6F83BE625FF0D5CB58B3963B2628E7757CA 
{
public:
	static const Il2CppGuid CLSID;

public:
	union
	{
		struct
		{
		};
		uint8_t IAsyncOperationCompletedHandler_SpatialPerceptionAccessStatus_t9E00B6F83BE625FF0D5CB58B3963B2628E7757CA__padding[1];
	};

public:
};


// Microsoft.Windows.Perception.Spatial.Preview.SpatialGraphInteropPreview_Statics
struct  Statics_tDBC4F59A0CD2DE79CBDFFC7AF2A16F52654846A5  : public ISpatialGraphInteropPreviewStatics_tA6235090F28BD06BD7C7946FD10E0986B7DE0AF9
{
public:
	// System.Lazy`1<Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2> Microsoft.Windows.Perception.Spatial.Preview.SpatialGraphInteropPreview_Statics::_interface2
	Lazy_1_tD26FF389F7897C8553D1536923CBABC0ABA593E0 * ____interface2_1;

public:
	inline static int32_t get_offset_of__interface2_1() { return static_cast<int32_t>(offsetof(Statics_tDBC4F59A0CD2DE79CBDFFC7AF2A16F52654846A5, ____interface2_1)); }
	inline Lazy_1_tD26FF389F7897C8553D1536923CBABC0ABA593E0 * get__interface2_1() const { return ____interface2_1; }
	inline Lazy_1_tD26FF389F7897C8553D1536923CBABC0ABA593E0 ** get_address_of__interface2_1() { return &____interface2_1; }
	inline void set__interface2_1(Lazy_1_tD26FF389F7897C8553D1536923CBABC0ABA593E0 * value)
	{
		____interface2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____interface2_1), (void*)value);
	}
};


// Microsoft.Windows.Perception.Spatial.SpatialAnchorExporter_Statics
struct  Statics_t7FE7A57817F231EE3258C2CCE00A163511066167  : public ISpatialAnchorExporterStatics_t678004F7593EA7BABBE321CEDC2B19C7CCBB29A7
{
public:

public:
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


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
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

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
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


// System.Numerics.Matrix4x4
struct  Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 
{
public:
	// System.Single System.Numerics.Matrix4x4::M11
	float ___M11_0;
	// System.Single System.Numerics.Matrix4x4::M12
	float ___M12_1;
	// System.Single System.Numerics.Matrix4x4::M13
	float ___M13_2;
	// System.Single System.Numerics.Matrix4x4::M14
	float ___M14_3;
	// System.Single System.Numerics.Matrix4x4::M21
	float ___M21_4;
	// System.Single System.Numerics.Matrix4x4::M22
	float ___M22_5;
	// System.Single System.Numerics.Matrix4x4::M23
	float ___M23_6;
	// System.Single System.Numerics.Matrix4x4::M24
	float ___M24_7;
	// System.Single System.Numerics.Matrix4x4::M31
	float ___M31_8;
	// System.Single System.Numerics.Matrix4x4::M32
	float ___M32_9;
	// System.Single System.Numerics.Matrix4x4::M33
	float ___M33_10;
	// System.Single System.Numerics.Matrix4x4::M34
	float ___M34_11;
	// System.Single System.Numerics.Matrix4x4::M41
	float ___M41_12;
	// System.Single System.Numerics.Matrix4x4::M42
	float ___M42_13;
	// System.Single System.Numerics.Matrix4x4::M43
	float ___M43_14;
	// System.Single System.Numerics.Matrix4x4::M44
	float ___M44_15;

public:
	inline static int32_t get_offset_of_M11_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M11_0)); }
	inline float get_M11_0() const { return ___M11_0; }
	inline float* get_address_of_M11_0() { return &___M11_0; }
	inline void set_M11_0(float value)
	{
		___M11_0 = value;
	}

	inline static int32_t get_offset_of_M12_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M12_1)); }
	inline float get_M12_1() const { return ___M12_1; }
	inline float* get_address_of_M12_1() { return &___M12_1; }
	inline void set_M12_1(float value)
	{
		___M12_1 = value;
	}

	inline static int32_t get_offset_of_M13_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M13_2)); }
	inline float get_M13_2() const { return ___M13_2; }
	inline float* get_address_of_M13_2() { return &___M13_2; }
	inline void set_M13_2(float value)
	{
		___M13_2 = value;
	}

	inline static int32_t get_offset_of_M14_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M14_3)); }
	inline float get_M14_3() const { return ___M14_3; }
	inline float* get_address_of_M14_3() { return &___M14_3; }
	inline void set_M14_3(float value)
	{
		___M14_3 = value;
	}

	inline static int32_t get_offset_of_M21_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M21_4)); }
	inline float get_M21_4() const { return ___M21_4; }
	inline float* get_address_of_M21_4() { return &___M21_4; }
	inline void set_M21_4(float value)
	{
		___M21_4 = value;
	}

	inline static int32_t get_offset_of_M22_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M22_5)); }
	inline float get_M22_5() const { return ___M22_5; }
	inline float* get_address_of_M22_5() { return &___M22_5; }
	inline void set_M22_5(float value)
	{
		___M22_5 = value;
	}

	inline static int32_t get_offset_of_M23_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M23_6)); }
	inline float get_M23_6() const { return ___M23_6; }
	inline float* get_address_of_M23_6() { return &___M23_6; }
	inline void set_M23_6(float value)
	{
		___M23_6 = value;
	}

	inline static int32_t get_offset_of_M24_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M24_7)); }
	inline float get_M24_7() const { return ___M24_7; }
	inline float* get_address_of_M24_7() { return &___M24_7; }
	inline void set_M24_7(float value)
	{
		___M24_7 = value;
	}

	inline static int32_t get_offset_of_M31_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M31_8)); }
	inline float get_M31_8() const { return ___M31_8; }
	inline float* get_address_of_M31_8() { return &___M31_8; }
	inline void set_M31_8(float value)
	{
		___M31_8 = value;
	}

	inline static int32_t get_offset_of_M32_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M32_9)); }
	inline float get_M32_9() const { return ___M32_9; }
	inline float* get_address_of_M32_9() { return &___M32_9; }
	inline void set_M32_9(float value)
	{
		___M32_9 = value;
	}

	inline static int32_t get_offset_of_M33_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M33_10)); }
	inline float get_M33_10() const { return ___M33_10; }
	inline float* get_address_of_M33_10() { return &___M33_10; }
	inline void set_M33_10(float value)
	{
		___M33_10 = value;
	}

	inline static int32_t get_offset_of_M34_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M34_11)); }
	inline float get_M34_11() const { return ___M34_11; }
	inline float* get_address_of_M34_11() { return &___M34_11; }
	inline void set_M34_11(float value)
	{
		___M34_11 = value;
	}

	inline static int32_t get_offset_of_M41_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M41_12)); }
	inline float get_M41_12() const { return ___M41_12; }
	inline float* get_address_of_M41_12() { return &___M41_12; }
	inline void set_M41_12(float value)
	{
		___M41_12 = value;
	}

	inline static int32_t get_offset_of_M42_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M42_13)); }
	inline float get_M42_13() const { return ___M42_13; }
	inline float* get_address_of_M42_13() { return &___M42_13; }
	inline void set_M42_13(float value)
	{
		___M42_13 = value;
	}

	inline static int32_t get_offset_of_M43_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M43_14)); }
	inline float get_M43_14() const { return ___M43_14; }
	inline float* get_address_of_M43_14() { return &___M43_14; }
	inline void set_M43_14(float value)
	{
		___M43_14 = value;
	}

	inline static int32_t get_offset_of_M44_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0, ___M44_15)); }
	inline float get_M44_15() const { return ___M44_15; }
	inline float* get_address_of_M44_15() { return &___M44_15; }
	inline void set_M44_15(float value)
	{
		___M44_15 = value;
	}
};

struct Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0_StaticFields
{
public:
	// System.Numerics.Matrix4x4 System.Numerics.Matrix4x4::_identity
	Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  ____identity_16;

public:
	inline static int32_t get_offset_of__identity_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0_StaticFields, ____identity_16)); }
	inline Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  get__identity_16() const { return ____identity_16; }
	inline Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 * get_address_of__identity_16() { return &____identity_16; }
	inline void set__identity_16(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  value)
	{
		____identity_16 = value;
	}
};


// System.Numerics.Quaternion
struct  Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A 
{
public:
	// System.Single System.Numerics.Quaternion::X
	float ___X_0;
	// System.Single System.Numerics.Quaternion::Y
	float ___Y_1;
	// System.Single System.Numerics.Quaternion::Z
	float ___Z_2;
	// System.Single System.Numerics.Quaternion::W
	float ___W_3;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}

	inline static int32_t get_offset_of_W_3() { return static_cast<int32_t>(offsetof(Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A, ___W_3)); }
	inline float get_W_3() const { return ___W_3; }
	inline float* get_address_of_W_3() { return &___W_3; }
	inline void set_W_3(float value)
	{
		___W_3 = value;
	}
};


// System.Numerics.Vector3
struct  Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 
{
public:
	// System.Single System.Numerics.Vector3::X
	float ___X_0;
	// System.Single System.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single System.Numerics.Vector3::Z
	float ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}
};


// System.Runtime.CompilerServices.IsUnmanagedAttribute
struct  IsUnmanagedAttribute_tCBC3CA101F4414B34C67D6464DC056EFFCDA68D9  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:

public:
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


// WinRT.Interop.IUnknownVftbl
struct  IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IUnknownVftbl__QueryInterface WinRT.Interop.IUnknownVftbl::QueryInterface
	_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 * ___QueryInterface_0;
	// WinRT.Interop.IUnknownVftbl__AddRef WinRT.Interop.IUnknownVftbl::AddRef
	_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA * ___AddRef_1;
	// WinRT.Interop.IUnknownVftbl__Release WinRT.Interop.IUnknownVftbl::Release
	_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 * ___Release_2;

public:
	inline static int32_t get_offset_of_QueryInterface_0() { return static_cast<int32_t>(offsetof(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62, ___QueryInterface_0)); }
	inline _QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 * get_QueryInterface_0() const { return ___QueryInterface_0; }
	inline _QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 ** get_address_of_QueryInterface_0() { return &___QueryInterface_0; }
	inline void set_QueryInterface_0(_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 * value)
	{
		___QueryInterface_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___QueryInterface_0), (void*)value);
	}

	inline static int32_t get_offset_of_AddRef_1() { return static_cast<int32_t>(offsetof(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62, ___AddRef_1)); }
	inline _AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA * get_AddRef_1() const { return ___AddRef_1; }
	inline _AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA ** get_address_of_AddRef_1() { return &___AddRef_1; }
	inline void set_AddRef_1(_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA * value)
	{
		___AddRef_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AddRef_1), (void*)value);
	}

	inline static int32_t get_offset_of_Release_2() { return static_cast<int32_t>(offsetof(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62, ___Release_2)); }
	inline _Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 * get_Release_2() const { return ___Release_2; }
	inline _Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 ** get_address_of_Release_2() { return &___Release_2; }
	inline void set_Release_2(_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 * value)
	{
		___Release_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Release_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of WinRT.Interop.IUnknownVftbl
struct IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_pinvoke
{
	Il2CppMethodPointer ___QueryInterface_0;
	Il2CppMethodPointer ___AddRef_1;
	Il2CppMethodPointer ___Release_2;
};
// Native definition for COM marshalling of WinRT.Interop.IUnknownVftbl
struct IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_com
{
	Il2CppMethodPointer ___QueryInterface_0;
	Il2CppMethodPointer ___AddRef_1;
	Il2CppMethodPointer ___Release_2;
};

// WinRT.Interop.MonoPInvokeCallbackAttribute
struct  MonoPInvokeCallbackAttribute_t771461BB3C5D4472CF3924A52CECFACE0057F061  : public Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74
{
public:
	// System.Type WinRT.Interop.MonoPInvokeCallbackAttribute::<DelegateType>k__BackingField
	Type_t * ___U3CDelegateTypeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CDelegateTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MonoPInvokeCallbackAttribute_t771461BB3C5D4472CF3924A52CECFACE0057F061, ___U3CDelegateTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CDelegateTypeU3Ek__BackingField_0() const { return ___U3CDelegateTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CDelegateTypeU3Ek__BackingField_0() { return &___U3CDelegateTypeU3Ek__BackingField_0; }
	inline void set_U3CDelegateTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CDelegateTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDelegateTypeU3Ek__BackingField_0), (void*)value);
	}
};


// WinRT.Interop._IAsyncOperation`2<System.Threading.Tasks.Task`1<Microsoft.Windows.Perception.Spatial.SpatialPerceptionAccessStatus>,Microsoft.Windows.Perception.Spatial.SpatialPerceptionAccessStatus>
struct  _IAsyncOperation_2_t617D18323221EC33FCB1FC4541F7BE9E31058D03  : public IAsyncOperation_t7AE926151C1DBB80AD17463891F756F6C083BC07
{
public:

public:
};


// Microsoft.Windows.Perception.Spatial.SpatialPerceptionAccessStatus
struct  SpatialPerceptionAccessStatus_t4BC330FFEC3CEEED0F60FA83374319F95C36B66C 
{
public:
	// System.Int32 Microsoft.Windows.Perception.Spatial.SpatialPerceptionAccessStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialPerceptionAccessStatus_t4BC330FFEC3CEEED0F60FA83374319F95C36B66C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.AppDomain
struct  AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject * ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject * ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9 * ___AssemblyLoad_11;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * ___AssemblyResolve_12;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___DomainUnload_13;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___ProcessExit_14;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * ___ResourceResolve_15;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * ___TypeResolve_16;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * ___UnhandledException_17;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF * ___FirstChanceException_18;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject * ____domain_manager_19;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * ___ReflectionOnlyAssemblyResolve_20;
	// System.Object System.AppDomain::_activation
	RuntimeObject * ____activation_21;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject * ____applicationIdentity_22;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___compatibility_switch_23;

public:
	inline static int32_t get_offset_of__mono_app_domain_1() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____mono_app_domain_1)); }
	inline intptr_t get__mono_app_domain_1() const { return ____mono_app_domain_1; }
	inline intptr_t* get_address_of__mono_app_domain_1() { return &____mono_app_domain_1; }
	inline void set__mono_app_domain_1(intptr_t value)
	{
		____mono_app_domain_1 = value;
	}

	inline static int32_t get_offset_of__evidence_6() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____evidence_6)); }
	inline RuntimeObject * get__evidence_6() const { return ____evidence_6; }
	inline RuntimeObject ** get_address_of__evidence_6() { return &____evidence_6; }
	inline void set__evidence_6(RuntimeObject * value)
	{
		____evidence_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_6), (void*)value);
	}

	inline static int32_t get_offset_of__granted_7() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____granted_7)); }
	inline RuntimeObject * get__granted_7() const { return ____granted_7; }
	inline RuntimeObject ** get_address_of__granted_7() { return &____granted_7; }
	inline void set__granted_7(RuntimeObject * value)
	{
		____granted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_7), (void*)value);
	}

	inline static int32_t get_offset_of__principalPolicy_8() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____principalPolicy_8)); }
	inline int32_t get__principalPolicy_8() const { return ____principalPolicy_8; }
	inline int32_t* get_address_of__principalPolicy_8() { return &____principalPolicy_8; }
	inline void set__principalPolicy_8(int32_t value)
	{
		____principalPolicy_8 = value;
	}

	inline static int32_t get_offset_of_AssemblyLoad_11() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___AssemblyLoad_11)); }
	inline AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9 * get_AssemblyLoad_11() const { return ___AssemblyLoad_11; }
	inline AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9 ** get_address_of_AssemblyLoad_11() { return &___AssemblyLoad_11; }
	inline void set_AssemblyLoad_11(AssemblyLoadEventHandler_t53F8340027F9EE67E8A22E7D8C1A3770345153C9 * value)
	{
		___AssemblyLoad_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyLoad_11), (void*)value);
	}

	inline static int32_t get_offset_of_AssemblyResolve_12() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___AssemblyResolve_12)); }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * get_AssemblyResolve_12() const { return ___AssemblyResolve_12; }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 ** get_address_of_AssemblyResolve_12() { return &___AssemblyResolve_12; }
	inline void set_AssemblyResolve_12(ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * value)
	{
		___AssemblyResolve_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyResolve_12), (void*)value);
	}

	inline static int32_t get_offset_of_DomainUnload_13() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___DomainUnload_13)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_DomainUnload_13() const { return ___DomainUnload_13; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_DomainUnload_13() { return &___DomainUnload_13; }
	inline void set_DomainUnload_13(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___DomainUnload_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DomainUnload_13), (void*)value);
	}

	inline static int32_t get_offset_of_ProcessExit_14() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___ProcessExit_14)); }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * get_ProcessExit_14() const { return ___ProcessExit_14; }
	inline EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C ** get_address_of_ProcessExit_14() { return &___ProcessExit_14; }
	inline void set_ProcessExit_14(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * value)
	{
		___ProcessExit_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProcessExit_14), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceResolve_15() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___ResourceResolve_15)); }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * get_ResourceResolve_15() const { return ___ResourceResolve_15; }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 ** get_address_of_ResourceResolve_15() { return &___ResourceResolve_15; }
	inline void set_ResourceResolve_15(ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * value)
	{
		___ResourceResolve_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResourceResolve_15), (void*)value);
	}

	inline static int32_t get_offset_of_TypeResolve_16() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___TypeResolve_16)); }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * get_TypeResolve_16() const { return ___TypeResolve_16; }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 ** get_address_of_TypeResolve_16() { return &___TypeResolve_16; }
	inline void set_TypeResolve_16(ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * value)
	{
		___TypeResolve_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeResolve_16), (void*)value);
	}

	inline static int32_t get_offset_of_UnhandledException_17() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___UnhandledException_17)); }
	inline UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * get_UnhandledException_17() const { return ___UnhandledException_17; }
	inline UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE ** get_address_of_UnhandledException_17() { return &___UnhandledException_17; }
	inline void set_UnhandledException_17(UnhandledExceptionEventHandler_tB0DFF05ABF7A3A234C87D4F7A71F98E9AB2D91DE * value)
	{
		___UnhandledException_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnhandledException_17), (void*)value);
	}

	inline static int32_t get_offset_of_FirstChanceException_18() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___FirstChanceException_18)); }
	inline EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF * get_FirstChanceException_18() const { return ___FirstChanceException_18; }
	inline EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF ** get_address_of_FirstChanceException_18() { return &___FirstChanceException_18; }
	inline void set_FirstChanceException_18(EventHandler_1_t1E35ED2E29145994C6C03E57601C6D48C61083FF * value)
	{
		___FirstChanceException_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FirstChanceException_18), (void*)value);
	}

	inline static int32_t get_offset_of__domain_manager_19() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____domain_manager_19)); }
	inline RuntimeObject * get__domain_manager_19() const { return ____domain_manager_19; }
	inline RuntimeObject ** get_address_of__domain_manager_19() { return &____domain_manager_19; }
	inline void set__domain_manager_19(RuntimeObject * value)
	{
		____domain_manager_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____domain_manager_19), (void*)value);
	}

	inline static int32_t get_offset_of_ReflectionOnlyAssemblyResolve_20() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___ReflectionOnlyAssemblyResolve_20)); }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * get_ReflectionOnlyAssemblyResolve_20() const { return ___ReflectionOnlyAssemblyResolve_20; }
	inline ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 ** get_address_of_ReflectionOnlyAssemblyResolve_20() { return &___ReflectionOnlyAssemblyResolve_20; }
	inline void set_ReflectionOnlyAssemblyResolve_20(ResolveEventHandler_t045C469BEA8B632FA99FE8867C921BA8DAE0BEE5 * value)
	{
		___ReflectionOnlyAssemblyResolve_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReflectionOnlyAssemblyResolve_20), (void*)value);
	}

	inline static int32_t get_offset_of__activation_21() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____activation_21)); }
	inline RuntimeObject * get__activation_21() const { return ____activation_21; }
	inline RuntimeObject ** get_address_of__activation_21() { return &____activation_21; }
	inline void set__activation_21(RuntimeObject * value)
	{
		____activation_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activation_21), (void*)value);
	}

	inline static int32_t get_offset_of__applicationIdentity_22() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ____applicationIdentity_22)); }
	inline RuntimeObject * get__applicationIdentity_22() const { return ____applicationIdentity_22; }
	inline RuntimeObject ** get_address_of__applicationIdentity_22() { return &____applicationIdentity_22; }
	inline void set__applicationIdentity_22(RuntimeObject * value)
	{
		____applicationIdentity_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____applicationIdentity_22), (void*)value);
	}

	inline static int32_t get_offset_of_compatibility_switch_23() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8, ___compatibility_switch_23)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_compatibility_switch_23() const { return ___compatibility_switch_23; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_compatibility_switch_23() { return &___compatibility_switch_23; }
	inline void set_compatibility_switch_23(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___compatibility_switch_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compatibility_switch_23), (void*)value);
	}
};

struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_StaticFields
{
public:
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * ___default_domain_10;

public:
	inline static int32_t get_offset_of__process_guid_2() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_StaticFields, ____process_guid_2)); }
	inline String_t* get__process_guid_2() const { return ____process_guid_2; }
	inline String_t** get_address_of__process_guid_2() { return &____process_guid_2; }
	inline void set__process_guid_2(String_t* value)
	{
		____process_guid_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____process_guid_2), (void*)value);
	}

	inline static int32_t get_offset_of_default_domain_10() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_StaticFields, ___default_domain_10)); }
	inline AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * get_default_domain_10() const { return ___default_domain_10; }
	inline AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 ** get_address_of_default_domain_10() { return &___default_domain_10; }
	inline void set_default_domain_10(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * value)
	{
		___default_domain_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_domain_10), (void*)value);
	}
};

struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___assembly_resolve_in_progress_refonly_5;
	// System.Object System.AppDomain::_principal
	RuntimeObject * ____principal_9;

public:
	inline static int32_t get_offset_of_type_resolve_in_progress_3() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields, ___type_resolve_in_progress_3)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_type_resolve_in_progress_3() const { return ___type_resolve_in_progress_3; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_type_resolve_in_progress_3() { return &___type_resolve_in_progress_3; }
	inline void set_type_resolve_in_progress_3(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___type_resolve_in_progress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_resolve_in_progress_3), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_4() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields, ___assembly_resolve_in_progress_4)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_assembly_resolve_in_progress_4() const { return ___assembly_resolve_in_progress_4; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_assembly_resolve_in_progress_4() { return &___assembly_resolve_in_progress_4; }
	inline void set_assembly_resolve_in_progress_4(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___assembly_resolve_in_progress_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_resolve_in_progress_4), (void*)value);
	}

	inline static int32_t get_offset_of_assembly_resolve_in_progress_refonly_5() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields, ___assembly_resolve_in_progress_refonly_5)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_assembly_resolve_in_progress_refonly_5() const { return ___assembly_resolve_in_progress_refonly_5; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_assembly_resolve_in_progress_refonly_5() { return &___assembly_resolve_in_progress_refonly_5; }
	inline void set_assembly_resolve_in_progress_refonly_5(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___assembly_resolve_in_progress_refonly_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assembly_resolve_in_progress_refonly_5), (void*)value);
	}

	inline static int32_t get_offset_of__principal_9() { return static_cast<int32_t>(offsetof(AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_ThreadStaticFields, ____principal_9)); }
	inline RuntimeObject * get__principal_9() const { return ____principal_9; }
	inline RuntimeObject ** get_address_of__principal_9() { return &____principal_9; }
	inline void set__principal_9(RuntimeObject * value)
	{
		____principal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____principal_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshaled_pinvoke : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	Il2CppIUnknown* ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	Il2CppIUnknown* ____activation_21;
	Il2CppIUnknown* ____applicationIdentity_22;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___compatibility_switch_23;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8_marshaled_com : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_11;
	Il2CppMethodPointer ___AssemblyResolve_12;
	Il2CppMethodPointer ___DomainUnload_13;
	Il2CppMethodPointer ___ProcessExit_14;
	Il2CppMethodPointer ___ResourceResolve_15;
	Il2CppMethodPointer ___TypeResolve_16;
	Il2CppMethodPointer ___UnhandledException_17;
	Il2CppMethodPointer ___FirstChanceException_18;
	Il2CppIUnknown* ____domain_manager_19;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_20;
	Il2CppIUnknown* ____activation_21;
	Il2CppIUnknown* ____applicationIdentity_22;
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___compatibility_switch_23;
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

// System.Nullable`1<System.Numerics.Matrix4x4>
struct  Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC 
{
public:
	// T System.Nullable`1::value
	Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC, ___value_0)); }
	inline Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  get_value_0() const { return ___value_0; }
	inline Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
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


// System.Threading.EventResetMode
struct  EventResetMode_t73BBF7417F0F56D4931942FF34B9EB3F677127D6 
{
public:
	// System.Int32 System.Threading.EventResetMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventResetMode_t73BBF7417F0F56D4931942FF34B9EB3F677127D6, ___value___2)); }
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


// System.Threading.WaitHandle
struct  WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshaled_pinvoke : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6_marshaled_com : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.WeakReference
struct  WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D, ___gcHandle_1)); }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  value)
	{
		___gcHandle_1 = value;
	}
};


// System.WeakReference`1<WinRT.DllModule>
struct  WeakReference_1_t582B68A827348E837D31F15DE589784EF4505E75  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.GCHandle System.WeakReference`1::handle
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ___handle_0;
	// System.Boolean System.WeakReference`1::trackResurrection
	bool ___trackResurrection_1;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(WeakReference_1_t582B68A827348E837D31F15DE589784EF4505E75, ___handle_0)); }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  get_handle_0() const { return ___handle_0; }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_trackResurrection_1() { return static_cast<int32_t>(offsetof(WeakReference_1_t582B68A827348E837D31F15DE589784EF4505E75, ___trackResurrection_1)); }
	inline bool get_trackResurrection_1() const { return ___trackResurrection_1; }
	inline bool* get_address_of_trackResurrection_1() { return &___trackResurrection_1; }
	inline void set_trackResurrection_1(bool value)
	{
		___trackResurrection_1 = value;
	}
};


// WinRT.AsyncStatus
struct  AsyncStatus_t067E1F3C02D80A6C9A3C2CA1CAB65C2A9AB91218 
{
public:
	// System.Int32 WinRT.AsyncStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsyncStatus_t067E1F3C02D80A6C9A3C2CA1CAB65C2A9AB91218, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// WinRT.Delegate_UnmanagedObject
struct  UnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F 
{
public:
	// System.IntPtr WinRT.Delegate_UnmanagedObject::_vftblPtr
	intptr_t ____vftblPtr_0;
	// System.IntPtr WinRT.Delegate_UnmanagedObject::_gchandlePtr
	intptr_t ____gchandlePtr_1;

public:
	inline static int32_t get_offset_of__vftblPtr_0() { return static_cast<int32_t>(offsetof(UnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F, ____vftblPtr_0)); }
	inline intptr_t get__vftblPtr_0() const { return ____vftblPtr_0; }
	inline intptr_t* get_address_of__vftblPtr_0() { return &____vftblPtr_0; }
	inline void set__vftblPtr_0(intptr_t value)
	{
		____vftblPtr_0 = value;
	}

	inline static int32_t get_offset_of__gchandlePtr_1() { return static_cast<int32_t>(offsetof(UnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F, ____gchandlePtr_1)); }
	inline intptr_t get__gchandlePtr_1() const { return ____gchandlePtr_1; }
	inline intptr_t* get_address_of__gchandlePtr_1() { return &____gchandlePtr_1; }
	inline void set__gchandlePtr_1(intptr_t value)
	{
		____gchandlePtr_1 = value;
	}
};


// WinRT.HString
struct  HString_tE419B8347D4539E1392195AB582983128BBFF2E6  : public RuntimeObject
{
public:
	// System.IntPtr WinRT.HString::Handle
	intptr_t ___Handle_0;

public:
	inline static int32_t get_offset_of_Handle_0() { return static_cast<int32_t>(offsetof(HString_tE419B8347D4539E1392195AB582983128BBFF2E6, ___Handle_0)); }
	inline intptr_t get_Handle_0() const { return ___Handle_0; }
	inline intptr_t* get_address_of_Handle_0() { return &___Handle_0; }
	inline void set_Handle_0(intptr_t value)
	{
		___Handle_0 = value;
	}
};


// WinRT.Interop.DelegateProperty`1<WinRT.Interop.IAsyncOperation_CompletedHandler>
struct  DelegateProperty_1_tD9ACB29E556508E67776F11D93DD43F625DC8EA3  : public RuntimeObject
{
public:
	// WinRT.Interop._get_PropertyAsObject WinRT.Interop.DelegateProperty`1::_get_Delegate
	_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * ____get_Delegate_0;
	// WinRT.Interop._put_PropertyAsObject WinRT.Interop.DelegateProperty`1::_put_Delegate
	_put_PropertyAsObject_t50B08BD6BB7FBD450046CD44CB2AC7A3310CBFDC * ____put_Delegate_1;
	// System.Guid WinRT.Interop.DelegateProperty`1::_iid
	Guid_t  ____iid_2;
	// WinRT.IObjectReference WinRT.Interop.DelegateProperty`1::_obj
	IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * ____obj_3;
	// System.IntPtr WinRT.Interop.DelegateProperty`1::_invokerPtr
	intptr_t ____invokerPtr_4;
	// T WinRT.Interop.DelegateProperty`1::_delegate
	CompletedHandler_t3E2FC9A9183C1D110D5835F69852DFD8A7B6964B * ____delegate_5;
	// System.IntPtr WinRT.Interop.DelegateProperty`1::_delegatePtr
	intptr_t ____delegatePtr_6;

public:
	inline static int32_t get_offset_of__get_Delegate_0() { return static_cast<int32_t>(offsetof(DelegateProperty_1_tD9ACB29E556508E67776F11D93DD43F625DC8EA3, ____get_Delegate_0)); }
	inline _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * get__get_Delegate_0() const { return ____get_Delegate_0; }
	inline _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 ** get_address_of__get_Delegate_0() { return &____get_Delegate_0; }
	inline void set__get_Delegate_0(_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * value)
	{
		____get_Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____get_Delegate_0), (void*)value);
	}

	inline static int32_t get_offset_of__put_Delegate_1() { return static_cast<int32_t>(offsetof(DelegateProperty_1_tD9ACB29E556508E67776F11D93DD43F625DC8EA3, ____put_Delegate_1)); }
	inline _put_PropertyAsObject_t50B08BD6BB7FBD450046CD44CB2AC7A3310CBFDC * get__put_Delegate_1() const { return ____put_Delegate_1; }
	inline _put_PropertyAsObject_t50B08BD6BB7FBD450046CD44CB2AC7A3310CBFDC ** get_address_of__put_Delegate_1() { return &____put_Delegate_1; }
	inline void set__put_Delegate_1(_put_PropertyAsObject_t50B08BD6BB7FBD450046CD44CB2AC7A3310CBFDC * value)
	{
		____put_Delegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____put_Delegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__iid_2() { return static_cast<int32_t>(offsetof(DelegateProperty_1_tD9ACB29E556508E67776F11D93DD43F625DC8EA3, ____iid_2)); }
	inline Guid_t  get__iid_2() const { return ____iid_2; }
	inline Guid_t * get_address_of__iid_2() { return &____iid_2; }
	inline void set__iid_2(Guid_t  value)
	{
		____iid_2 = value;
	}

	inline static int32_t get_offset_of__obj_3() { return static_cast<int32_t>(offsetof(DelegateProperty_1_tD9ACB29E556508E67776F11D93DD43F625DC8EA3, ____obj_3)); }
	inline IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * get__obj_3() const { return ____obj_3; }
	inline IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 ** get_address_of__obj_3() { return &____obj_3; }
	inline void set__obj_3(IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * value)
	{
		____obj_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____obj_3), (void*)value);
	}

	inline static int32_t get_offset_of__invokerPtr_4() { return static_cast<int32_t>(offsetof(DelegateProperty_1_tD9ACB29E556508E67776F11D93DD43F625DC8EA3, ____invokerPtr_4)); }
	inline intptr_t get__invokerPtr_4() const { return ____invokerPtr_4; }
	inline intptr_t* get_address_of__invokerPtr_4() { return &____invokerPtr_4; }
	inline void set__invokerPtr_4(intptr_t value)
	{
		____invokerPtr_4 = value;
	}

	inline static int32_t get_offset_of__delegate_5() { return static_cast<int32_t>(offsetof(DelegateProperty_1_tD9ACB29E556508E67776F11D93DD43F625DC8EA3, ____delegate_5)); }
	inline CompletedHandler_t3E2FC9A9183C1D110D5835F69852DFD8A7B6964B * get__delegate_5() const { return ____delegate_5; }
	inline CompletedHandler_t3E2FC9A9183C1D110D5835F69852DFD8A7B6964B ** get_address_of__delegate_5() { return &____delegate_5; }
	inline void set__delegate_5(CompletedHandler_t3E2FC9A9183C1D110D5835F69852DFD8A7B6964B * value)
	{
		____delegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____delegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__delegatePtr_6() { return static_cast<int32_t>(offsetof(DelegateProperty_1_tD9ACB29E556508E67776F11D93DD43F625DC8EA3, ____delegatePtr_6)); }
	inline intptr_t get__delegatePtr_6() const { return ____delegatePtr_6; }
	inline intptr_t* get_address_of__delegatePtr_6() { return &____delegatePtr_6; }
	inline void set__delegatePtr_6(intptr_t value)
	{
		____delegatePtr_6 = value;
	}
};


// WinRT.Interop.IAgileObjectVftbl
struct  IAgileObjectVftbl_t576F117596790657CE35723C6C436B5268073C12 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IUnknownVftbl WinRT.Interop.IAgileObjectVftbl::IUnknownVftbl
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  ___IUnknownVftbl_0;

public:
	inline static int32_t get_offset_of_IUnknownVftbl_0() { return static_cast<int32_t>(offsetof(IAgileObjectVftbl_t576F117596790657CE35723C6C436B5268073C12, ___IUnknownVftbl_0)); }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  get_IUnknownVftbl_0() const { return ___IUnknownVftbl_0; }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62 * get_address_of_IUnknownVftbl_0() { return &___IUnknownVftbl_0; }
	inline void set_IUnknownVftbl_0(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  value)
	{
		___IUnknownVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
	}
};

// Native definition for P/Invoke marshalling of WinRT.Interop.IAgileObjectVftbl
struct IAgileObjectVftbl_t576F117596790657CE35723C6C436B5268073C12_marshaled_pinvoke
{
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_pinvoke ___IUnknownVftbl_0;
};
// Native definition for COM marshalling of WinRT.Interop.IAgileObjectVftbl
struct IAgileObjectVftbl_t576F117596790657CE35723C6C436B5268073C12_marshaled_com
{
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_com ___IUnknownVftbl_0;
};

// WinRT.Interop.IAsyncOperation`2<Microsoft.Windows.Perception.Spatial.SpatialPerceptionAccessStatus,Microsoft.Windows.Perception.Spatial.IAsyncOperationCompletedHandler_SpatialPerceptionAccessStatus>
struct  IAsyncOperation_2_tAA4D0E5A2E8CB1879AEA030E2493F8548ACE60F7  : public _IAsyncOperation_2_t617D18323221EC33FCB1FC4541F7BE9E31058D03
{
public:

public:
};


// WinRT.Interop.IDelegateVftbl
struct  IDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE 
{
public:
	// System.IntPtr WinRT.Interop.IDelegateVftbl::QueryInterface
	intptr_t ___QueryInterface_0;
	// System.IntPtr WinRT.Interop.IDelegateVftbl::AddRef
	intptr_t ___AddRef_1;
	// System.IntPtr WinRT.Interop.IDelegateVftbl::Release
	intptr_t ___Release_2;
	// System.IntPtr WinRT.Interop.IDelegateVftbl::Invoke
	intptr_t ___Invoke_3;

public:
	inline static int32_t get_offset_of_QueryInterface_0() { return static_cast<int32_t>(offsetof(IDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE, ___QueryInterface_0)); }
	inline intptr_t get_QueryInterface_0() const { return ___QueryInterface_0; }
	inline intptr_t* get_address_of_QueryInterface_0() { return &___QueryInterface_0; }
	inline void set_QueryInterface_0(intptr_t value)
	{
		___QueryInterface_0 = value;
	}

	inline static int32_t get_offset_of_AddRef_1() { return static_cast<int32_t>(offsetof(IDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE, ___AddRef_1)); }
	inline intptr_t get_AddRef_1() const { return ___AddRef_1; }
	inline intptr_t* get_address_of_AddRef_1() { return &___AddRef_1; }
	inline void set_AddRef_1(intptr_t value)
	{
		___AddRef_1 = value;
	}

	inline static int32_t get_offset_of_Release_2() { return static_cast<int32_t>(offsetof(IDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE, ___Release_2)); }
	inline intptr_t get_Release_2() const { return ___Release_2; }
	inline intptr_t* get_address_of_Release_2() { return &___Release_2; }
	inline void set_Release_2(intptr_t value)
	{
		___Release_2 = value;
	}

	inline static int32_t get_offset_of_Invoke_3() { return static_cast<int32_t>(offsetof(IDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE, ___Invoke_3)); }
	inline intptr_t get_Invoke_3() const { return ___Invoke_3; }
	inline intptr_t* get_address_of_Invoke_3() { return &___Invoke_3; }
	inline void set_Invoke_3(intptr_t value)
	{
		___Invoke_3 = value;
	}
};


// WinRT.Interop.IInspectableVftbl
struct  IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IUnknownVftbl WinRT.Interop.IInspectableVftbl::IUnknownVftbl
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  ___IUnknownVftbl_0;
	// WinRT.Interop.IInspectableVftbl__GetIids WinRT.Interop.IInspectableVftbl::GetIids
	_GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125 * ___GetIids_1;
	// WinRT.Interop.IInspectableVftbl__GetRuntimeClassName WinRT.Interop.IInspectableVftbl::GetRuntimeClassName
	_GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65 * ___GetRuntimeClassName_2;
	// WinRT.Interop.IInspectableVftbl__GetTrustLevel WinRT.Interop.IInspectableVftbl::GetTrustLevel
	_GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823 * ___GetTrustLevel_3;

public:
	inline static int32_t get_offset_of_IUnknownVftbl_0() { return static_cast<int32_t>(offsetof(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32, ___IUnknownVftbl_0)); }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  get_IUnknownVftbl_0() const { return ___IUnknownVftbl_0; }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62 * get_address_of_IUnknownVftbl_0() { return &___IUnknownVftbl_0; }
	inline void set_IUnknownVftbl_0(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  value)
	{
		___IUnknownVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_GetIids_1() { return static_cast<int32_t>(offsetof(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32, ___GetIids_1)); }
	inline _GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125 * get_GetIids_1() const { return ___GetIids_1; }
	inline _GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125 ** get_address_of_GetIids_1() { return &___GetIids_1; }
	inline void set_GetIids_1(_GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125 * value)
	{
		___GetIids_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetIids_1), (void*)value);
	}

	inline static int32_t get_offset_of_GetRuntimeClassName_2() { return static_cast<int32_t>(offsetof(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32, ___GetRuntimeClassName_2)); }
	inline _GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65 * get_GetRuntimeClassName_2() const { return ___GetRuntimeClassName_2; }
	inline _GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65 ** get_address_of_GetRuntimeClassName_2() { return &___GetRuntimeClassName_2; }
	inline void set_GetRuntimeClassName_2(_GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65 * value)
	{
		___GetRuntimeClassName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetRuntimeClassName_2), (void*)value);
	}

	inline static int32_t get_offset_of_GetTrustLevel_3() { return static_cast<int32_t>(offsetof(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32, ___GetTrustLevel_3)); }
	inline _GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823 * get_GetTrustLevel_3() const { return ___GetTrustLevel_3; }
	inline _GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823 ** get_address_of_GetTrustLevel_3() { return &___GetTrustLevel_3; }
	inline void set_GetTrustLevel_3(_GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823 * value)
	{
		___GetTrustLevel_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetTrustLevel_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of WinRT.Interop.IInspectableVftbl
struct IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke
{
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_pinvoke ___IUnknownVftbl_0;
	Il2CppMethodPointer ___GetIids_1;
	Il2CppMethodPointer ___GetRuntimeClassName_2;
	Il2CppMethodPointer ___GetTrustLevel_3;
};
// Native definition for COM marshalling of WinRT.Interop.IInspectableVftbl
struct IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com
{
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_com ___IUnknownVftbl_0;
	Il2CppMethodPointer ___GetIids_1;
	Il2CppMethodPointer ___GetRuntimeClassName_2;
	Il2CppMethodPointer ___GetTrustLevel_3;
};

// WinRT.ModuleReference
struct  ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 
{
public:
	// System.Object WinRT.ModuleReference::_module
	RuntimeObject * ____module_0;
	// System.Int32* WinRT.ModuleReference::_refCountPtr
	int32_t* ____refCountPtr_1;
	// System.IntPtr WinRT.ModuleReference::_nativeHandle
	intptr_t ____nativeHandle_2;

public:
	inline static int32_t get_offset_of__module_0() { return static_cast<int32_t>(offsetof(ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23, ____module_0)); }
	inline RuntimeObject * get__module_0() const { return ____module_0; }
	inline RuntimeObject ** get_address_of__module_0() { return &____module_0; }
	inline void set__module_0(RuntimeObject * value)
	{
		____module_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____module_0), (void*)value);
	}

	inline static int32_t get_offset_of__refCountPtr_1() { return static_cast<int32_t>(offsetof(ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23, ____refCountPtr_1)); }
	inline int32_t* get__refCountPtr_1() const { return ____refCountPtr_1; }
	inline int32_t** get_address_of__refCountPtr_1() { return &____refCountPtr_1; }
	inline void set__refCountPtr_1(int32_t* value)
	{
		____refCountPtr_1 = value;
	}

	inline static int32_t get_offset_of__nativeHandle_2() { return static_cast<int32_t>(offsetof(ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23, ____nativeHandle_2)); }
	inline intptr_t get__nativeHandle_2() const { return ____nativeHandle_2; }
	inline intptr_t* get_address_of__nativeHandle_2() { return &____nativeHandle_2; }
	inline void set__nativeHandle_2(intptr_t value)
	{
		____nativeHandle_2 = value;
	}
};

// Native definition for P/Invoke marshalling of WinRT.ModuleReference
struct ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_marshaled_pinvoke
{
	Il2CppIUnknown* ____module_0;
	int32_t* ____refCountPtr_1;
	intptr_t ____nativeHandle_2;
};
// Native definition for COM marshalling of WinRT.ModuleReference
struct ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_marshaled_com
{
	Il2CppIUnknown* ____module_0;
	int32_t* ____refCountPtr_1;
	intptr_t ____nativeHandle_2;
};

// WinRT.Mono_ThreadContext
struct  ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22  : public RuntimeObject
{
public:

public:
};

struct ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields
{
public:
	// System.Lazy`1<System.Collections.Generic.HashSet`1<System.IntPtr>> WinRT.Mono_ThreadContext::_foreignThreads
	Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18 * ____foreignThreads_0;
	// System.Lazy`1<System.Collections.Generic.HashSet`1<System.IntPtr>> WinRT.Mono_ThreadContext::_presumedNonForeignThreads
	Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18 * ____presumedNonForeignThreads_1;
	// System.Threading.EventWaitHandle WinRT.Mono_ThreadContext::_threadCleanupRequested
	EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98 * ____threadCleanupRequested_2;
	// System.Threading.EventWaitHandle WinRT.Mono_ThreadContext::_threadCleanupCompleted
	EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98 * ____threadCleanupCompleted_3;
	// System.IntPtr WinRT.Mono_ThreadContext::_monoSupportHandle
	intptr_t ____monoSupportHandle_4;
	// WinRT.Mono_mono_thread_cleanup_register WinRT.Mono_ThreadContext::_cleanupRegister
	mono_thread_cleanup_register_t91E974F4BA3BB3C316698B53B7E3E91AFCF42EE7 * ____cleanupRegister_5;

public:
	inline static int32_t get_offset_of__foreignThreads_0() { return static_cast<int32_t>(offsetof(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields, ____foreignThreads_0)); }
	inline Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18 * get__foreignThreads_0() const { return ____foreignThreads_0; }
	inline Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18 ** get_address_of__foreignThreads_0() { return &____foreignThreads_0; }
	inline void set__foreignThreads_0(Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18 * value)
	{
		____foreignThreads_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____foreignThreads_0), (void*)value);
	}

	inline static int32_t get_offset_of__presumedNonForeignThreads_1() { return static_cast<int32_t>(offsetof(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields, ____presumedNonForeignThreads_1)); }
	inline Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18 * get__presumedNonForeignThreads_1() const { return ____presumedNonForeignThreads_1; }
	inline Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18 ** get_address_of__presumedNonForeignThreads_1() { return &____presumedNonForeignThreads_1; }
	inline void set__presumedNonForeignThreads_1(Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18 * value)
	{
		____presumedNonForeignThreads_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____presumedNonForeignThreads_1), (void*)value);
	}

	inline static int32_t get_offset_of__threadCleanupRequested_2() { return static_cast<int32_t>(offsetof(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields, ____threadCleanupRequested_2)); }
	inline EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98 * get__threadCleanupRequested_2() const { return ____threadCleanupRequested_2; }
	inline EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98 ** get_address_of__threadCleanupRequested_2() { return &____threadCleanupRequested_2; }
	inline void set__threadCleanupRequested_2(EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98 * value)
	{
		____threadCleanupRequested_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____threadCleanupRequested_2), (void*)value);
	}

	inline static int32_t get_offset_of__threadCleanupCompleted_3() { return static_cast<int32_t>(offsetof(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields, ____threadCleanupCompleted_3)); }
	inline EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98 * get__threadCleanupCompleted_3() const { return ____threadCleanupCompleted_3; }
	inline EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98 ** get_address_of__threadCleanupCompleted_3() { return &____threadCleanupCompleted_3; }
	inline void set__threadCleanupCompleted_3(EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98 * value)
	{
		____threadCleanupCompleted_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____threadCleanupCompleted_3), (void*)value);
	}

	inline static int32_t get_offset_of__monoSupportHandle_4() { return static_cast<int32_t>(offsetof(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields, ____monoSupportHandle_4)); }
	inline intptr_t get__monoSupportHandle_4() const { return ____monoSupportHandle_4; }
	inline intptr_t* get_address_of__monoSupportHandle_4() { return &____monoSupportHandle_4; }
	inline void set__monoSupportHandle_4(intptr_t value)
	{
		____monoSupportHandle_4 = value;
	}

	inline static int32_t get_offset_of__cleanupRegister_5() { return static_cast<int32_t>(offsetof(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields, ____cleanupRegister_5)); }
	inline mono_thread_cleanup_register_t91E974F4BA3BB3C316698B53B7E3E91AFCF42EE7 * get__cleanupRegister_5() const { return ____cleanupRegister_5; }
	inline mono_thread_cleanup_register_t91E974F4BA3BB3C316698B53B7E3E91AFCF42EE7 ** get_address_of__cleanupRegister_5() { return &____cleanupRegister_5; }
	inline void set__cleanupRegister_5(mono_thread_cleanup_register_t91E974F4BA3BB3C316698B53B7E3E91AFCF42EE7 * value)
	{
		____cleanupRegister_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cleanupRegister_5), (void*)value);
	}
};


// WinRT.TrustLevel
struct  TrustLevel_t7143BBD94B790F512DCFD4DF09F3B6551D148542 
{
public:
	// System.Int32 WinRT.TrustLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrustLevel_t7143BBD94B790F512DCFD4DF09F3B6551D148542, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// WinRT.VftblPtr
struct  VftblPtr_tA9116818B912436626617A27A4C6EE304FEB0DB9 
{
public:
	// System.IntPtr WinRT.VftblPtr::Vftbl
	intptr_t ___Vftbl_0;

public:
	inline static int32_t get_offset_of_Vftbl_0() { return static_cast<int32_t>(offsetof(VftblPtr_tA9116818B912436626617A27A4C6EE304FEB0DB9, ___Vftbl_0)); }
	inline intptr_t get_Vftbl_0() const { return ___Vftbl_0; }
	inline intptr_t* get_address_of_Vftbl_0() { return &___Vftbl_0; }
	inline void set_Vftbl_0(intptr_t value)
	{
		___Vftbl_0 = value;
	}
};


// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct  SafeHandleZeroOrMinusOneIsInvalid_t779A965C82098677DF1ED10A134DBCDEC8AACB8E  : public SafeHandle_t1E326D75E23FD5BB6D40BA322298FDC6526CC383
{
public:

public:
};


// Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics_Vftbl
struct  Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics_Vftbl::IInspectableVftbl
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsObject Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics_Vftbl::GetDefault
	_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * ___GetDefault_1;
	// Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics_Vftbl__RequestAccessAsync Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics_Vftbl::RequestAccessAsync
	_RequestAccessAsync_tDBB08AC3923195BB0C653BF8E058D65837714F7C * ___RequestAccessAsync_2;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_GetDefault_1() { return static_cast<int32_t>(offsetof(Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114, ___GetDefault_1)); }
	inline _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * get_GetDefault_1() const { return ___GetDefault_1; }
	inline _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 ** get_address_of_GetDefault_1() { return &___GetDefault_1; }
	inline void set_GetDefault_1(_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * value)
	{
		___GetDefault_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetDefault_1), (void*)value);
	}

	inline static int32_t get_offset_of_RequestAccessAsync_2() { return static_cast<int32_t>(offsetof(Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114, ___RequestAccessAsync_2)); }
	inline _RequestAccessAsync_tDBB08AC3923195BB0C653BF8E058D65837714F7C * get_RequestAccessAsync_2() const { return ___RequestAccessAsync_2; }
	inline _RequestAccessAsync_tDBB08AC3923195BB0C653BF8E058D65837714F7C ** get_address_of_RequestAccessAsync_2() { return &___RequestAccessAsync_2; }
	inline void set_RequestAccessAsync_2(_RequestAccessAsync_tDBB08AC3923195BB0C653BF8E058D65837714F7C * value)
	{
		___RequestAccessAsync_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RequestAccessAsync_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics/Vftbl
struct Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114_marshaled_pinvoke
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___GetDefault_1;
	Il2CppMethodPointer ___RequestAccessAsync_2;
};
// Native definition for COM marshalling of Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics/Vftbl
struct Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114_marshaled_com
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___GetDefault_1;
	Il2CppMethodPointer ___RequestAccessAsync_2;
};

// Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem_Vftbl
struct  Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem_Vftbl::IInspectableVftbl
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  ___IInspectableVftbl_0;
	// Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem_Vftbl__TryGetTransformTo Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem_Vftbl::TryGetTransformTo
	_TryGetTransformTo_t2C72E101F6B0DFFFC29D72FD60EDDF21808FBCD9 * ___TryGetTransformTo_1;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_TryGetTransformTo_1() { return static_cast<int32_t>(offsetof(Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2, ___TryGetTransformTo_1)); }
	inline _TryGetTransformTo_t2C72E101F6B0DFFFC29D72FD60EDDF21808FBCD9 * get_TryGetTransformTo_1() const { return ___TryGetTransformTo_1; }
	inline _TryGetTransformTo_t2C72E101F6B0DFFFC29D72FD60EDDF21808FBCD9 ** get_address_of_TryGetTransformTo_1() { return &___TryGetTransformTo_1; }
	inline void set_TryGetTransformTo_1(_TryGetTransformTo_t2C72E101F6B0DFFFC29D72FD60EDDF21808FBCD9 * value)
	{
		___TryGetTransformTo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TryGetTransformTo_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem/Vftbl
struct Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2_marshaled_pinvoke
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___TryGetTransformTo_1;
};
// Native definition for COM marshalling of Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem/Vftbl
struct Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2_marshaled_com
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___TryGetTransformTo_1;
};

// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl
struct  Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl::IInspectableVftbl
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  ___IInspectableVftbl_0;
	// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl__CreateCoordinateSystemForNode Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl::CreateCoordinateSystemForNode
	_CreateCoordinateSystemForNode_t7F54D94DA8BC650182C6CAB5914643492CB82914 * ___CreateCoordinateSystemForNode_1;
	// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl__CreateCoordinateSystemForNodeWithPosition Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl::CreateCoordinateSystemForNodeWithPosition
	_CreateCoordinateSystemForNodeWithPosition_t1F5C2245F6FD546C93C26C838E22EF8B9E00AB11 * ___CreateCoordinateSystemForNodeWithPosition_2;
	// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl__CreateCoordinateSystemForNodeWithPositionAndOrientation Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl::CreateCoordinateSystemForNodeWithPositionAndOrientation
	_CreateCoordinateSystemForNodeWithPositionAndOrientation_t0FBAD401AAEF6FAAA886FA5C41A945FACC6CA633 * ___CreateCoordinateSystemForNodeWithPositionAndOrientation_3;
	// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl__CreateLocatorForNode Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl::CreateLocatorForNode
	_CreateLocatorForNode_tA6613267E6F4CCDD4347EAFAC82D482C417F9E0C * ___CreateLocatorForNode_4;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_CreateCoordinateSystemForNode_1() { return static_cast<int32_t>(offsetof(Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C, ___CreateCoordinateSystemForNode_1)); }
	inline _CreateCoordinateSystemForNode_t7F54D94DA8BC650182C6CAB5914643492CB82914 * get_CreateCoordinateSystemForNode_1() const { return ___CreateCoordinateSystemForNode_1; }
	inline _CreateCoordinateSystemForNode_t7F54D94DA8BC650182C6CAB5914643492CB82914 ** get_address_of_CreateCoordinateSystemForNode_1() { return &___CreateCoordinateSystemForNode_1; }
	inline void set_CreateCoordinateSystemForNode_1(_CreateCoordinateSystemForNode_t7F54D94DA8BC650182C6CAB5914643492CB82914 * value)
	{
		___CreateCoordinateSystemForNode_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CreateCoordinateSystemForNode_1), (void*)value);
	}

	inline static int32_t get_offset_of_CreateCoordinateSystemForNodeWithPosition_2() { return static_cast<int32_t>(offsetof(Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C, ___CreateCoordinateSystemForNodeWithPosition_2)); }
	inline _CreateCoordinateSystemForNodeWithPosition_t1F5C2245F6FD546C93C26C838E22EF8B9E00AB11 * get_CreateCoordinateSystemForNodeWithPosition_2() const { return ___CreateCoordinateSystemForNodeWithPosition_2; }
	inline _CreateCoordinateSystemForNodeWithPosition_t1F5C2245F6FD546C93C26C838E22EF8B9E00AB11 ** get_address_of_CreateCoordinateSystemForNodeWithPosition_2() { return &___CreateCoordinateSystemForNodeWithPosition_2; }
	inline void set_CreateCoordinateSystemForNodeWithPosition_2(_CreateCoordinateSystemForNodeWithPosition_t1F5C2245F6FD546C93C26C838E22EF8B9E00AB11 * value)
	{
		___CreateCoordinateSystemForNodeWithPosition_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CreateCoordinateSystemForNodeWithPosition_2), (void*)value);
	}

	inline static int32_t get_offset_of_CreateCoordinateSystemForNodeWithPositionAndOrientation_3() { return static_cast<int32_t>(offsetof(Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C, ___CreateCoordinateSystemForNodeWithPositionAndOrientation_3)); }
	inline _CreateCoordinateSystemForNodeWithPositionAndOrientation_t0FBAD401AAEF6FAAA886FA5C41A945FACC6CA633 * get_CreateCoordinateSystemForNodeWithPositionAndOrientation_3() const { return ___CreateCoordinateSystemForNodeWithPositionAndOrientation_3; }
	inline _CreateCoordinateSystemForNodeWithPositionAndOrientation_t0FBAD401AAEF6FAAA886FA5C41A945FACC6CA633 ** get_address_of_CreateCoordinateSystemForNodeWithPositionAndOrientation_3() { return &___CreateCoordinateSystemForNodeWithPositionAndOrientation_3; }
	inline void set_CreateCoordinateSystemForNodeWithPositionAndOrientation_3(_CreateCoordinateSystemForNodeWithPositionAndOrientation_t0FBAD401AAEF6FAAA886FA5C41A945FACC6CA633 * value)
	{
		___CreateCoordinateSystemForNodeWithPositionAndOrientation_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CreateCoordinateSystemForNodeWithPositionAndOrientation_3), (void*)value);
	}

	inline static int32_t get_offset_of_CreateLocatorForNode_4() { return static_cast<int32_t>(offsetof(Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C, ___CreateLocatorForNode_4)); }
	inline _CreateLocatorForNode_tA6613267E6F4CCDD4347EAFAC82D482C417F9E0C * get_CreateLocatorForNode_4() const { return ___CreateLocatorForNode_4; }
	inline _CreateLocatorForNode_tA6613267E6F4CCDD4347EAFAC82D482C417F9E0C ** get_address_of_CreateLocatorForNode_4() { return &___CreateLocatorForNode_4; }
	inline void set_CreateLocatorForNode_4(_CreateLocatorForNode_tA6613267E6F4CCDD4347EAFAC82D482C417F9E0C * value)
	{
		___CreateLocatorForNode_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CreateLocatorForNode_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics/Vftbl
struct Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C_marshaled_pinvoke
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___CreateCoordinateSystemForNode_1;
	Il2CppMethodPointer ___CreateCoordinateSystemForNodeWithPosition_2;
	Il2CppMethodPointer ___CreateCoordinateSystemForNodeWithPositionAndOrientation_3;
	Il2CppMethodPointer ___CreateLocatorForNode_4;
};
// Native definition for COM marshalling of Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics/Vftbl
struct Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C_marshaled_com
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___CreateCoordinateSystemForNode_1;
	Il2CppMethodPointer ___CreateCoordinateSystemForNodeWithPosition_2;
	Il2CppMethodPointer ___CreateCoordinateSystemForNodeWithPositionAndOrientation_3;
	Il2CppMethodPointer ___CreateLocatorForNode_4;
};

// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2_Vftbl
struct  Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IInspectableVftbl Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2_Vftbl::IInspectableVftbl
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  ___IInspectableVftbl_0;
	// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2_Vftbl__TryCreateFrameOfReference Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2_Vftbl::TryCreateFrameOfReference
	_TryCreateFrameOfReference_tA355B36593FB6D3A3ED83E565320893B667BB8F0 * ___TryCreateFrameOfReference_1;
	// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2_Vftbl__TryCreateFrameOfReferenceWithPosition Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2_Vftbl::TryCreateFrameOfReferenceWithPosition
	_TryCreateFrameOfReferenceWithPosition_t7FD522ED57738CD26FEDB47DB132D4870FCF1E64 * ___TryCreateFrameOfReferenceWithPosition_2;
	// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2_Vftbl__TryCreateFrameOfReferenceWithPositionAndOrientation Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2_Vftbl::TryCreateFrameOfReferenceWithPositionAndOrientation
	_TryCreateFrameOfReferenceWithPositionAndOrientation_t96DDB7C1358BE8BAAFB3B4E38001AEBE05AD25F9 * ___TryCreateFrameOfReferenceWithPositionAndOrientation_3;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_TryCreateFrameOfReference_1() { return static_cast<int32_t>(offsetof(Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042, ___TryCreateFrameOfReference_1)); }
	inline _TryCreateFrameOfReference_tA355B36593FB6D3A3ED83E565320893B667BB8F0 * get_TryCreateFrameOfReference_1() const { return ___TryCreateFrameOfReference_1; }
	inline _TryCreateFrameOfReference_tA355B36593FB6D3A3ED83E565320893B667BB8F0 ** get_address_of_TryCreateFrameOfReference_1() { return &___TryCreateFrameOfReference_1; }
	inline void set_TryCreateFrameOfReference_1(_TryCreateFrameOfReference_tA355B36593FB6D3A3ED83E565320893B667BB8F0 * value)
	{
		___TryCreateFrameOfReference_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TryCreateFrameOfReference_1), (void*)value);
	}

	inline static int32_t get_offset_of_TryCreateFrameOfReferenceWithPosition_2() { return static_cast<int32_t>(offsetof(Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042, ___TryCreateFrameOfReferenceWithPosition_2)); }
	inline _TryCreateFrameOfReferenceWithPosition_t7FD522ED57738CD26FEDB47DB132D4870FCF1E64 * get_TryCreateFrameOfReferenceWithPosition_2() const { return ___TryCreateFrameOfReferenceWithPosition_2; }
	inline _TryCreateFrameOfReferenceWithPosition_t7FD522ED57738CD26FEDB47DB132D4870FCF1E64 ** get_address_of_TryCreateFrameOfReferenceWithPosition_2() { return &___TryCreateFrameOfReferenceWithPosition_2; }
	inline void set_TryCreateFrameOfReferenceWithPosition_2(_TryCreateFrameOfReferenceWithPosition_t7FD522ED57738CD26FEDB47DB132D4870FCF1E64 * value)
	{
		___TryCreateFrameOfReferenceWithPosition_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TryCreateFrameOfReferenceWithPosition_2), (void*)value);
	}

	inline static int32_t get_offset_of_TryCreateFrameOfReferenceWithPositionAndOrientation_3() { return static_cast<int32_t>(offsetof(Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042, ___TryCreateFrameOfReferenceWithPositionAndOrientation_3)); }
	inline _TryCreateFrameOfReferenceWithPositionAndOrientation_t96DDB7C1358BE8BAAFB3B4E38001AEBE05AD25F9 * get_TryCreateFrameOfReferenceWithPositionAndOrientation_3() const { return ___TryCreateFrameOfReferenceWithPositionAndOrientation_3; }
	inline _TryCreateFrameOfReferenceWithPositionAndOrientation_t96DDB7C1358BE8BAAFB3B4E38001AEBE05AD25F9 ** get_address_of_TryCreateFrameOfReferenceWithPositionAndOrientation_3() { return &___TryCreateFrameOfReferenceWithPositionAndOrientation_3; }
	inline void set_TryCreateFrameOfReferenceWithPositionAndOrientation_3(_TryCreateFrameOfReferenceWithPositionAndOrientation_t96DDB7C1358BE8BAAFB3B4E38001AEBE05AD25F9 * value)
	{
		___TryCreateFrameOfReferenceWithPositionAndOrientation_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TryCreateFrameOfReferenceWithPositionAndOrientation_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2/Vftbl
struct Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042_marshaled_pinvoke
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___TryCreateFrameOfReference_1;
	Il2CppMethodPointer ___TryCreateFrameOfReferenceWithPosition_2;
	Il2CppMethodPointer ___TryCreateFrameOfReferenceWithPositionAndOrientation_3;
};
// Native definition for COM marshalling of Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2/Vftbl
struct Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042_marshaled_com
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___TryCreateFrameOfReference_1;
	Il2CppMethodPointer ___TryCreateFrameOfReferenceWithPosition_2;
	Il2CppMethodPointer ___TryCreateFrameOfReferenceWithPositionAndOrientation_3;
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


// System.Threading.EventWaitHandle
struct  EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98  : public WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6
{
public:

public:
};


// System.Threading.Tasks.Task`1<Microsoft.Windows.Perception.Spatial.SpatialPerceptionAccessStatus>
struct  Task_1_tDD14A3F6150B55B689AA83F9A3274F946A7D67BE  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tDD14A3F6150B55B689AA83F9A3274F946A7D67BE, ___m_result_40)); }
	inline int32_t get_m_result_40() const { return ___m_result_40; }
	inline int32_t* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(int32_t value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_tDD14A3F6150B55B689AA83F9A3274F946A7D67BE_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t46250FF928B2E37CA22ACA0E8610DA9BEECFC420 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t5DDCA9EFE372A941E980D706E5A81B522B97B055 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tDD14A3F6150B55B689AA83F9A3274F946A7D67BE_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t46250FF928B2E37CA22ACA0E8610DA9BEECFC420 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t46250FF928B2E37CA22ACA0E8610DA9BEECFC420 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t46250FF928B2E37CA22ACA0E8610DA9BEECFC420 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tDD14A3F6150B55B689AA83F9A3274F946A7D67BE_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t5DDCA9EFE372A941E980D706E5A81B522B97B055 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t5DDCA9EFE372A941E980D706E5A81B522B97B055 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t5DDCA9EFE372A941E980D706E5A81B522B97B055 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
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


// WinRT.Delegate
struct  Delegate_t01789152B02E68157FD11FCBC21F63795C42E476  : public RuntimeObject
{
public:
	// System.Int32 WinRT.Delegate::_refs
	int32_t ____refs_0;
	// System.IntPtr WinRT.Delegate::ThisPtr
	intptr_t ___ThisPtr_1;
	// System.Guid WinRT.Delegate::_iid
	Guid_t  ____iid_2;
	// WinRT.ModuleReference WinRT.Delegate::_module
	ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ____module_7;
	// System.Runtime.InteropServices.GCHandle WinRT.Delegate::_thisHandle
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ____thisHandle_8;
	// System.WeakReference WinRT.Delegate::_weakInvoker
	WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * ____weakInvoker_9;
	// WinRT.Delegate_UnmanagedObject WinRT.Delegate::_unmanagedObj
	UnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F  ____unmanagedObj_10;

public:
	inline static int32_t get_offset_of__refs_0() { return static_cast<int32_t>(offsetof(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476, ____refs_0)); }
	inline int32_t get__refs_0() const { return ____refs_0; }
	inline int32_t* get_address_of__refs_0() { return &____refs_0; }
	inline void set__refs_0(int32_t value)
	{
		____refs_0 = value;
	}

	inline static int32_t get_offset_of_ThisPtr_1() { return static_cast<int32_t>(offsetof(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476, ___ThisPtr_1)); }
	inline intptr_t get_ThisPtr_1() const { return ___ThisPtr_1; }
	inline intptr_t* get_address_of_ThisPtr_1() { return &___ThisPtr_1; }
	inline void set_ThisPtr_1(intptr_t value)
	{
		___ThisPtr_1 = value;
	}

	inline static int32_t get_offset_of__iid_2() { return static_cast<int32_t>(offsetof(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476, ____iid_2)); }
	inline Guid_t  get__iid_2() const { return ____iid_2; }
	inline Guid_t * get_address_of__iid_2() { return &____iid_2; }
	inline void set__iid_2(Guid_t  value)
	{
		____iid_2 = value;
	}

	inline static int32_t get_offset_of__module_7() { return static_cast<int32_t>(offsetof(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476, ____module_7)); }
	inline ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  get__module_7() const { return ____module_7; }
	inline ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 * get_address_of__module_7() { return &____module_7; }
	inline void set__module_7(ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  value)
	{
		____module_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____module_7))->____module_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__thisHandle_8() { return static_cast<int32_t>(offsetof(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476, ____thisHandle_8)); }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  get__thisHandle_8() const { return ____thisHandle_8; }
	inline GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * get_address_of__thisHandle_8() { return &____thisHandle_8; }
	inline void set__thisHandle_8(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  value)
	{
		____thisHandle_8 = value;
	}

	inline static int32_t get_offset_of__weakInvoker_9() { return static_cast<int32_t>(offsetof(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476, ____weakInvoker_9)); }
	inline WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * get__weakInvoker_9() const { return ____weakInvoker_9; }
	inline WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D ** get_address_of__weakInvoker_9() { return &____weakInvoker_9; }
	inline void set__weakInvoker_9(WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * value)
	{
		____weakInvoker_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____weakInvoker_9), (void*)value);
	}

	inline static int32_t get_offset_of__unmanagedObj_10() { return static_cast<int32_t>(offsetof(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476, ____unmanagedObj_10)); }
	inline UnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F  get__unmanagedObj_10() const { return ____unmanagedObj_10; }
	inline UnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F * get_address_of__unmanagedObj_10() { return &____unmanagedObj_10; }
	inline void set__unmanagedObj_10(UnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F  value)
	{
		____unmanagedObj_10 = value;
	}
};

struct Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_StaticFields
{
public:
	// WinRT.Interop.IUnknownVftbl__QueryInterface WinRT.Delegate::_QueryInterface
	_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 * ____QueryInterface_3;
	// WinRT.Interop.IUnknownVftbl__AddRef WinRT.Delegate::_AddRef
	_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA * ____AddRef_4;
	// WinRT.Interop.IUnknownVftbl__Release WinRT.Delegate::_Release
	_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 * ____Release_5;
	// WinRT.Interop.IDelegateVftbl WinRT.Delegate::_vftblTemplate
	IDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE  ____vftblTemplate_6;

public:
	inline static int32_t get_offset_of__QueryInterface_3() { return static_cast<int32_t>(offsetof(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_StaticFields, ____QueryInterface_3)); }
	inline _QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 * get__QueryInterface_3() const { return ____QueryInterface_3; }
	inline _QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 ** get_address_of__QueryInterface_3() { return &____QueryInterface_3; }
	inline void set__QueryInterface_3(_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 * value)
	{
		____QueryInterface_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____QueryInterface_3), (void*)value);
	}

	inline static int32_t get_offset_of__AddRef_4() { return static_cast<int32_t>(offsetof(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_StaticFields, ____AddRef_4)); }
	inline _AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA * get__AddRef_4() const { return ____AddRef_4; }
	inline _AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA ** get_address_of__AddRef_4() { return &____AddRef_4; }
	inline void set__AddRef_4(_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA * value)
	{
		____AddRef_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____AddRef_4), (void*)value);
	}

	inline static int32_t get_offset_of__Release_5() { return static_cast<int32_t>(offsetof(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_StaticFields, ____Release_5)); }
	inline _Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 * get__Release_5() const { return ____Release_5; }
	inline _Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 ** get_address_of__Release_5() { return &____Release_5; }
	inline void set__Release_5(_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 * value)
	{
		____Release_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Release_5), (void*)value);
	}

	inline static int32_t get_offset_of__vftblTemplate_6() { return static_cast<int32_t>(offsetof(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_StaticFields, ____vftblTemplate_6)); }
	inline IDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE  get__vftblTemplate_6() const { return ____vftblTemplate_6; }
	inline IDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE * get_address_of__vftblTemplate_6() { return &____vftblTemplate_6; }
	inline void set__vftblTemplate_6(IDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE  value)
	{
		____vftblTemplate_6 = value;
	}
};


// WinRT.DllModule
struct  DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70  : public RuntimeObject
{
public:
	// System.String WinRT.DllModule::_fileName
	String_t* ____fileName_0;
	// WinRT.ModuleReference WinRT.DllModule::_moduleHandle
	ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ____moduleHandle_1;
	// WinRT.DllModule_DllGetActivationFactory WinRT.DllModule::_GetActivationFactory
	DllGetActivationFactory_tDFDF607D5B79CFF73AE0359FEB1EB1C41EE6966B * ____GetActivationFactory_2;

public:
	inline static int32_t get_offset_of__fileName_0() { return static_cast<int32_t>(offsetof(DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70, ____fileName_0)); }
	inline String_t* get__fileName_0() const { return ____fileName_0; }
	inline String_t** get_address_of__fileName_0() { return &____fileName_0; }
	inline void set__fileName_0(String_t* value)
	{
		____fileName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fileName_0), (void*)value);
	}

	inline static int32_t get_offset_of__moduleHandle_1() { return static_cast<int32_t>(offsetof(DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70, ____moduleHandle_1)); }
	inline ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  get__moduleHandle_1() const { return ____moduleHandle_1; }
	inline ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 * get_address_of__moduleHandle_1() { return &____moduleHandle_1; }
	inline void set__moduleHandle_1(ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  value)
	{
		____moduleHandle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____moduleHandle_1))->____module_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__GetActivationFactory_2() { return static_cast<int32_t>(offsetof(DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70, ____GetActivationFactory_2)); }
	inline DllGetActivationFactory_tDFDF607D5B79CFF73AE0359FEB1EB1C41EE6966B * get__GetActivationFactory_2() const { return ____GetActivationFactory_2; }
	inline DllGetActivationFactory_tDFDF607D5B79CFF73AE0359FEB1EB1C41EE6966B ** get_address_of__GetActivationFactory_2() { return &____GetActivationFactory_2; }
	inline void set__GetActivationFactory_2(DllGetActivationFactory_tDFDF607D5B79CFF73AE0359FEB1EB1C41EE6966B * value)
	{
		____GetActivationFactory_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____GetActivationFactory_2), (void*)value);
	}
};

struct DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>> WinRT.DllModule::_cache
	Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE * ____cache_3;

public:
	inline static int32_t get_offset_of__cache_3() { return static_cast<int32_t>(offsetof(DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70_StaticFields, ____cache_3)); }
	inline Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE * get__cache_3() const { return ____cache_3; }
	inline Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE ** get_address_of__cache_3() { return &____cache_3; }
	inline void set__cache_3(Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE * value)
	{
		____cache_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cache_3), (void*)value);
	}
};


// WinRT.IObjectReference
struct  IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8  : public RuntimeObject
{
public:
	// System.IntPtr WinRT.IObjectReference::ThisPtr
	intptr_t ___ThisPtr_0;
	// WinRT.ModuleReference WinRT.IObjectReference::Module
	ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ___Module_1;
	// WinRT.Interop.IUnknownVftbl WinRT.IObjectReference::<VftblIUnknown>k__BackingField
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  ___U3CVftblIUnknownU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_ThisPtr_0() { return static_cast<int32_t>(offsetof(IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8, ___ThisPtr_0)); }
	inline intptr_t get_ThisPtr_0() const { return ___ThisPtr_0; }
	inline intptr_t* get_address_of_ThisPtr_0() { return &___ThisPtr_0; }
	inline void set_ThisPtr_0(intptr_t value)
	{
		___ThisPtr_0 = value;
	}

	inline static int32_t get_offset_of_Module_1() { return static_cast<int32_t>(offsetof(IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8, ___Module_1)); }
	inline ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  get_Module_1() const { return ___Module_1; }
	inline ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 * get_address_of_Module_1() { return &___Module_1; }
	inline void set_Module_1(ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  value)
	{
		___Module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Module_1))->____module_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_U3CVftblIUnknownU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8, ___U3CVftblIUnknownU3Ek__BackingField_2)); }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  get_U3CVftblIUnknownU3Ek__BackingField_2() const { return ___U3CVftblIUnknownU3Ek__BackingField_2; }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62 * get_address_of_U3CVftblIUnknownU3Ek__BackingField_2() { return &___U3CVftblIUnknownU3Ek__BackingField_2; }
	inline void set_U3CVftblIUnknownU3Ek__BackingField_2(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  value)
	{
		___U3CVftblIUnknownU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CVftblIUnknownU3Ek__BackingField_2))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CVftblIUnknownU3Ek__BackingField_2))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CVftblIUnknownU3Ek__BackingField_2))->___Release_2), (void*)NULL);
		#endif
	}
};


// WinRT.Interop.IActivationFactoryVftbl
struct  IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IActivationFactoryVftbl::IInspectableVftbl
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  ___IInspectableVftbl_0;
	// WinRT.Interop.IActivationFactoryVftbl__ActivateInstance WinRT.Interop.IActivationFactoryVftbl::ActivateInstance
	_ActivateInstance_t4FF6B61658BD043CF30F2AE21E590CFCEDDD086A * ___ActivateInstance_1;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_ActivateInstance_1() { return static_cast<int32_t>(offsetof(IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5, ___ActivateInstance_1)); }
	inline _ActivateInstance_t4FF6B61658BD043CF30F2AE21E590CFCEDDD086A * get_ActivateInstance_1() const { return ___ActivateInstance_1; }
	inline _ActivateInstance_t4FF6B61658BD043CF30F2AE21E590CFCEDDD086A ** get_address_of_ActivateInstance_1() { return &___ActivateInstance_1; }
	inline void set_ActivateInstance_1(_ActivateInstance_t4FF6B61658BD043CF30F2AE21E590CFCEDDD086A * value)
	{
		___ActivateInstance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActivateInstance_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of WinRT.Interop.IActivationFactoryVftbl
struct IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5_marshaled_pinvoke
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___ActivateInstance_1;
};
// Native definition for COM marshalling of WinRT.Interop.IActivationFactoryVftbl
struct IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5_marshaled_com
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___ActivateInstance_1;
};

// WinRT.Interop.IAsyncInfo_Vftbl
struct  Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IAsyncInfo_Vftbl::IInspectableVftbl
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsInt WinRT.Interop.IAsyncInfo_Vftbl::get_Id
	_get_PropertyAsInt_t8313A617DB0A557D1D90360CC3A2553A83E89A62 * ___get_Id_1;
	// WinRT.Interop._get_PropertyAsEnum WinRT.Interop.IAsyncInfo_Vftbl::get_Status
	_get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E * ___get_Status_2;
	// WinRT.Interop._get_PropertyAsInt WinRT.Interop.IAsyncInfo_Vftbl::get_ErrorCode
	_get_PropertyAsInt_t8313A617DB0A557D1D90360CC3A2553A83E89A62 * ___get_ErrorCode_3;
	// WinRT.Interop._method0 WinRT.Interop.IAsyncInfo_Vftbl::Cancel
	_method0_t68810954DB248B2CD317989111F586F15200690B * ___Cancel_4;
	// WinRT.Interop._method0 WinRT.Interop.IAsyncInfo_Vftbl::Close
	_method0_t68810954DB248B2CD317989111F586F15200690B * ___Close_5;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_get_Id_1() { return static_cast<int32_t>(offsetof(Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96, ___get_Id_1)); }
	inline _get_PropertyAsInt_t8313A617DB0A557D1D90360CC3A2553A83E89A62 * get_get_Id_1() const { return ___get_Id_1; }
	inline _get_PropertyAsInt_t8313A617DB0A557D1D90360CC3A2553A83E89A62 ** get_address_of_get_Id_1() { return &___get_Id_1; }
	inline void set_get_Id_1(_get_PropertyAsInt_t8313A617DB0A557D1D90360CC3A2553A83E89A62 * value)
	{
		___get_Id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_Id_1), (void*)value);
	}

	inline static int32_t get_offset_of_get_Status_2() { return static_cast<int32_t>(offsetof(Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96, ___get_Status_2)); }
	inline _get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E * get_get_Status_2() const { return ___get_Status_2; }
	inline _get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E ** get_address_of_get_Status_2() { return &___get_Status_2; }
	inline void set_get_Status_2(_get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E * value)
	{
		___get_Status_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_Status_2), (void*)value);
	}

	inline static int32_t get_offset_of_get_ErrorCode_3() { return static_cast<int32_t>(offsetof(Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96, ___get_ErrorCode_3)); }
	inline _get_PropertyAsInt_t8313A617DB0A557D1D90360CC3A2553A83E89A62 * get_get_ErrorCode_3() const { return ___get_ErrorCode_3; }
	inline _get_PropertyAsInt_t8313A617DB0A557D1D90360CC3A2553A83E89A62 ** get_address_of_get_ErrorCode_3() { return &___get_ErrorCode_3; }
	inline void set_get_ErrorCode_3(_get_PropertyAsInt_t8313A617DB0A557D1D90360CC3A2553A83E89A62 * value)
	{
		___get_ErrorCode_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_ErrorCode_3), (void*)value);
	}

	inline static int32_t get_offset_of_Cancel_4() { return static_cast<int32_t>(offsetof(Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96, ___Cancel_4)); }
	inline _method0_t68810954DB248B2CD317989111F586F15200690B * get_Cancel_4() const { return ___Cancel_4; }
	inline _method0_t68810954DB248B2CD317989111F586F15200690B ** get_address_of_Cancel_4() { return &___Cancel_4; }
	inline void set_Cancel_4(_method0_t68810954DB248B2CD317989111F586F15200690B * value)
	{
		___Cancel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Cancel_4), (void*)value);
	}

	inline static int32_t get_offset_of_Close_5() { return static_cast<int32_t>(offsetof(Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96, ___Close_5)); }
	inline _method0_t68810954DB248B2CD317989111F586F15200690B * get_Close_5() const { return ___Close_5; }
	inline _method0_t68810954DB248B2CD317989111F586F15200690B ** get_address_of_Close_5() { return &___Close_5; }
	inline void set_Close_5(_method0_t68810954DB248B2CD317989111F586F15200690B * value)
	{
		___Close_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Close_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of WinRT.Interop.IAsyncInfo/Vftbl
struct Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96_marshaled_pinvoke
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Id_1;
	Il2CppMethodPointer ___get_Status_2;
	Il2CppMethodPointer ___get_ErrorCode_3;
	Il2CppMethodPointer ___Cancel_4;
	Il2CppMethodPointer ___Close_5;
};
// Native definition for COM marshalling of WinRT.Interop.IAsyncInfo/Vftbl
struct Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96_marshaled_com
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Id_1;
	Il2CppMethodPointer ___get_Status_2;
	Il2CppMethodPointer ___get_ErrorCode_3;
	Il2CppMethodPointer ___Cancel_4;
	Il2CppMethodPointer ___Close_5;
};

// WinRT.Interop.IAsyncOperation_Vftbl
struct  Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB 
{
public:
	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IAsyncOperation_Vftbl::IInspectableVftbl
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  ___IInspectableVftbl_0;
	// WinRT.Interop._put_PropertyAsObject WinRT.Interop.IAsyncOperation_Vftbl::put_Completed
	_put_PropertyAsObject_t50B08BD6BB7FBD450046CD44CB2AC7A3310CBFDC * ___put_Completed_1;
	// WinRT.Interop._get_PropertyAsObject WinRT.Interop.IAsyncOperation_Vftbl::get_Completed
	_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * ___get_Completed_2;
	// System.IntPtr WinRT.Interop.IAsyncOperation_Vftbl::GetResults
	intptr_t ___GetResults_3;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_put_Completed_1() { return static_cast<int32_t>(offsetof(Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB, ___put_Completed_1)); }
	inline _put_PropertyAsObject_t50B08BD6BB7FBD450046CD44CB2AC7A3310CBFDC * get_put_Completed_1() const { return ___put_Completed_1; }
	inline _put_PropertyAsObject_t50B08BD6BB7FBD450046CD44CB2AC7A3310CBFDC ** get_address_of_put_Completed_1() { return &___put_Completed_1; }
	inline void set_put_Completed_1(_put_PropertyAsObject_t50B08BD6BB7FBD450046CD44CB2AC7A3310CBFDC * value)
	{
		___put_Completed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___put_Completed_1), (void*)value);
	}

	inline static int32_t get_offset_of_get_Completed_2() { return static_cast<int32_t>(offsetof(Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB, ___get_Completed_2)); }
	inline _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * get_get_Completed_2() const { return ___get_Completed_2; }
	inline _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 ** get_address_of_get_Completed_2() { return &___get_Completed_2; }
	inline void set_get_Completed_2(_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * value)
	{
		___get_Completed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_Completed_2), (void*)value);
	}

	inline static int32_t get_offset_of_GetResults_3() { return static_cast<int32_t>(offsetof(Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB, ___GetResults_3)); }
	inline intptr_t get_GetResults_3() const { return ___GetResults_3; }
	inline intptr_t* get_address_of_GetResults_3() { return &___GetResults_3; }
	inline void set_GetResults_3(intptr_t value)
	{
		___GetResults_3 = value;
	}
};

// Native definition for P/Invoke marshalling of WinRT.Interop.IAsyncOperation/Vftbl
struct Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB_marshaled_pinvoke
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___put_Completed_1;
	Il2CppMethodPointer ___get_Completed_2;
	intptr_t ___GetResults_3;
};
// Native definition for COM marshalling of WinRT.Interop.IAsyncOperation/Vftbl
struct Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB_marshaled_com
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___put_Completed_1;
	Il2CppMethodPointer ___get_Completed_2;
	intptr_t ___GetResults_3;
};

// WinRT.Interop.IAsyncOperation_Enum`2<Microsoft.Windows.Perception.Spatial.SpatialPerceptionAccessStatus,Microsoft.Windows.Perception.Spatial.IAsyncOperationCompletedHandler_SpatialPerceptionAccessStatus>
struct  IAsyncOperation_Enum_2_t19A0CBF95D678C4B1A6F0DFA63831B60FD7B63A9  : public IAsyncOperation_2_tAA4D0E5A2E8CB1879AEA030E2493F8548ACE60F7
{
public:
	// WinRT.Interop._get_PropertyAsEnum WinRT.Interop.IAsyncOperation_Enum`2::_GetResults
	_get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E * ____GetResults_3;
	// System.Func`2<System.Int32,T> WinRT.Interop.IAsyncOperation_Enum`2::_castResult
	Func_2_t1255F50D8FBA7BB723D85AB9EB862C75A432EEB2 * ____castResult_4;

public:
	inline static int32_t get_offset_of__GetResults_3() { return static_cast<int32_t>(offsetof(IAsyncOperation_Enum_2_t19A0CBF95D678C4B1A6F0DFA63831B60FD7B63A9, ____GetResults_3)); }
	inline _get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E * get__GetResults_3() const { return ____GetResults_3; }
	inline _get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E ** get_address_of__GetResults_3() { return &____GetResults_3; }
	inline void set__GetResults_3(_get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E * value)
	{
		____GetResults_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____GetResults_3), (void*)value);
	}

	inline static int32_t get_offset_of__castResult_4() { return static_cast<int32_t>(offsetof(IAsyncOperation_Enum_2_t19A0CBF95D678C4B1A6F0DFA63831B60FD7B63A9, ____castResult_4)); }
	inline Func_2_t1255F50D8FBA7BB723D85AB9EB862C75A432EEB2 * get__castResult_4() const { return ____castResult_4; }
	inline Func_2_t1255F50D8FBA7BB723D85AB9EB862C75A432EEB2 ** get_address_of__castResult_4() { return &____castResult_4; }
	inline void set__castResult_4(Func_2_t1255F50D8FBA7BB723D85AB9EB862C75A432EEB2 * value)
	{
		____castResult_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____castResult_4), (void*)value);
	}
};


// WinRT.Interop.IReference_Matrix4x4
struct  IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D 
{
public:
	static const Il2CppGuid CLSID;

public:
	// WinRT.Interop.IInspectableVftbl WinRT.Interop.IReference_Matrix4x4::IInspectableVftbl
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  ___IInspectableVftbl_0;
	// WinRT.Interop._get_PropertyAsMatrix4x4 WinRT.Interop.IReference_Matrix4x4::get_Value
	_get_PropertyAsMatrix4x4_t472E5893D3A5D8929770A973793E19BC6F35EFED * ___get_Value_1;

public:
	inline static int32_t get_offset_of_IInspectableVftbl_0() { return static_cast<int32_t>(offsetof(IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D, ___IInspectableVftbl_0)); }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  get_IInspectableVftbl_0() const { return ___IInspectableVftbl_0; }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32 * get_address_of_IInspectableVftbl_0() { return &___IInspectableVftbl_0; }
	inline void set_IInspectableVftbl_0(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  value)
	{
		___IInspectableVftbl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_get_Value_1() { return static_cast<int32_t>(offsetof(IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D, ___get_Value_1)); }
	inline _get_PropertyAsMatrix4x4_t472E5893D3A5D8929770A973793E19BC6F35EFED * get_get_Value_1() const { return ___get_Value_1; }
	inline _get_PropertyAsMatrix4x4_t472E5893D3A5D8929770A973793E19BC6F35EFED ** get_address_of_get_Value_1() { return &___get_Value_1; }
	inline void set_get_Value_1(_get_PropertyAsMatrix4x4_t472E5893D3A5D8929770A973793E19BC6F35EFED * value)
	{
		___get_Value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___get_Value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of WinRT.Interop.IReference_Matrix4x4
struct IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D_marshaled_pinvoke
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Value_1;
};
// Native definition for COM marshalling of WinRT.Interop.IReference_Matrix4x4
struct IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D_marshaled_com
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com ___IInspectableVftbl_0;
	Il2CppMethodPointer ___get_Value_1;
};

// WinRT.WinrtModule
struct  WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C  : public RuntimeObject
{
public:
	// WinRT.ModuleReference WinRT.WinrtModule::_module
	ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ____module_0;

public:
	inline static int32_t get_offset_of__module_0() { return static_cast<int32_t>(offsetof(WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C, ____module_0)); }
	inline ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  get__module_0() const { return ____module_0; }
	inline ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 * get_address_of__module_0() { return &____module_0; }
	inline void set__module_0(ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  value)
	{
		____module_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____module_0))->____module_0), (void*)NULL);
	}
};

struct WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C_StaticFields
{
public:
	// WinRT.WeakLazy`1<WinRT.WinrtModule> WinRT.WinrtModule::_instance
	WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153 * ____instance_1;

public:
	inline static int32_t get_offset_of__instance_1() { return static_cast<int32_t>(offsetof(WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C_StaticFields, ____instance_1)); }
	inline WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153 * get__instance_1() const { return ____instance_1; }
	inline WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153 ** get_address_of__instance_1() { return &____instance_1; }
	inline void set__instance_1(WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153 * value)
	{
		____instance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_1), (void*)value);
	}
};


// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct  SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2  : public SafeHandleZeroOrMinusOneIsInvalid_t779A965C82098677DF1ED10A134DBCDEC8AACB8E
{
public:

public:
};


// Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics_Vftbl__RequestAccessAsync
struct  _RequestAccessAsync_tDBB08AC3923195BB0C653BF8E058D65837714F7C  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem_Vftbl__TryGetTransformTo
struct  _TryGetTransformTo_t2C72E101F6B0DFFFC29D72FD60EDDF21808FBCD9  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl__CreateCoordinateSystemForNode
struct  _CreateCoordinateSystemForNode_t7F54D94DA8BC650182C6CAB5914643492CB82914  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl__CreateCoordinateSystemForNodeWithPosition
struct  _CreateCoordinateSystemForNodeWithPosition_t1F5C2245F6FD546C93C26C838E22EF8B9E00AB11  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl__CreateCoordinateSystemForNodeWithPositionAndOrientation
struct  _CreateCoordinateSystemForNodeWithPositionAndOrientation_t0FBAD401AAEF6FAAA886FA5C41A945FACC6CA633  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl__CreateLocatorForNode
struct  _CreateLocatorForNode_tA6613267E6F4CCDD4347EAFAC82D482C417F9E0C  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2_Vftbl__TryCreateFrameOfReference
struct  _TryCreateFrameOfReference_tA355B36593FB6D3A3ED83E565320893B667BB8F0  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2_Vftbl__TryCreateFrameOfReferenceWithPosition
struct  _TryCreateFrameOfReferenceWithPosition_t7FD522ED57738CD26FEDB47DB132D4870FCF1E64  : public MulticastDelegate_t
{
public:

public:
};


// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2_Vftbl__TryCreateFrameOfReferenceWithPositionAndOrientation
struct  _TryCreateFrameOfReferenceWithPositionAndOrientation_t96DDB7C1358BE8BAAFB3B4E38001AEBE05AD25F9  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<WinRT.Interop.IAsyncOperation_CompletedHandler>
struct  Action_1_tE089E527B3CD85164C9FB409BE928F4D29731157  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler
struct  EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2>
struct  Func_1_t43234D68F3ABC78C8E275517F6810A0E91D1AC97  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Boolean>
struct  Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32,Microsoft.Windows.Perception.Spatial.SpatialPerceptionAccessStatus>
struct  Func_2_t1255F50D8FBA7BB723D85AB9EB862C75A432EEB2  : public MulticastDelegate_t
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


// System.NotImplementedException
struct  NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Reflection.TypeInfo
struct  TypeInfo_t9D6F65801A41B97F36138B15FD270A1550DBB3FC  : public Type_t
{
public:

public:
};


// System.TypeLoadException
struct  TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_17;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_18;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_19;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_20;

public:
	inline static int32_t get_offset_of_ClassName_17() { return static_cast<int32_t>(offsetof(TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1, ___ClassName_17)); }
	inline String_t* get_ClassName_17() const { return ___ClassName_17; }
	inline String_t** get_address_of_ClassName_17() { return &___ClassName_17; }
	inline void set_ClassName_17(String_t* value)
	{
		___ClassName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassName_17), (void*)value);
	}

	inline static int32_t get_offset_of_AssemblyName_18() { return static_cast<int32_t>(offsetof(TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1, ___AssemblyName_18)); }
	inline String_t* get_AssemblyName_18() const { return ___AssemblyName_18; }
	inline String_t** get_address_of_AssemblyName_18() { return &___AssemblyName_18; }
	inline void set_AssemblyName_18(String_t* value)
	{
		___AssemblyName_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyName_18), (void*)value);
	}

	inline static int32_t get_offset_of_MessageArg_19() { return static_cast<int32_t>(offsetof(TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1, ___MessageArg_19)); }
	inline String_t* get_MessageArg_19() const { return ___MessageArg_19; }
	inline String_t** get_address_of_MessageArg_19() { return &___MessageArg_19; }
	inline void set_MessageArg_19(String_t* value)
	{
		___MessageArg_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MessageArg_19), (void*)value);
	}

	inline static int32_t get_offset_of_ResourceId_20() { return static_cast<int32_t>(offsetof(TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1, ___ResourceId_20)); }
	inline int32_t get_ResourceId_20() const { return ___ResourceId_20; }
	inline int32_t* get_address_of_ResourceId_20() { return &___ResourceId_20; }
	inline void set_ResourceId_20(int32_t value)
	{
		___ResourceId_20 = value;
	}
};


// WinRT.DllModule_DllGetActivationFactory
struct  DllGetActivationFactory_tDFDF607D5B79CFF73AE0359FEB1EB1C41EE6966B  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IActivationFactoryVftbl__ActivateInstance
struct  _ActivateInstance_t4FF6B61658BD043CF30F2AE21E590CFCEDDD086A  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IAsyncOperation_CompletedHandler
struct  CompletedHandler_t3E2FC9A9183C1D110D5835F69852DFD8A7B6964B  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IDelegate2_Obj_Enum
struct  IDelegate2_Obj_Enum_tDAE283FCD285A52E24B2CA3B344BF9784766348F  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IInspectableVftbl__GetIids
struct  _GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IInspectableVftbl__GetRuntimeClassName
struct  _GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IInspectableVftbl__GetTrustLevel
struct  _GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IUnknownVftbl__AddRef
struct  _AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IUnknownVftbl__QueryInterface
struct  _QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop.IUnknownVftbl__Release
struct  _Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop._get_PropertyAsEnum
struct  _get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop._get_PropertyAsInt
struct  _get_PropertyAsInt_t8313A617DB0A557D1D90360CC3A2553A83E89A62  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop._get_PropertyAsMatrix4x4
struct  _get_PropertyAsMatrix4x4_t472E5893D3A5D8929770A973793E19BC6F35EFED  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop._get_PropertyAsObject
struct  _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop._method0
struct  _method0_t68810954DB248B2CD317989111F586F15200690B  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Interop._put_PropertyAsObject
struct  _put_PropertyAsObject_t50B08BD6BB7FBD450046CD44CB2AC7A3310CBFDC  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Mono_mono_thread_cleanup_initialize
struct  mono_thread_cleanup_initialize_tE441F79B6973656DB9BD772C28288514CF2D0730  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.Mono_mono_thread_cleanup_register
struct  mono_thread_cleanup_register_t91E974F4BA3BB3C316698B53B7E3E91AFCF42EE7  : public MulticastDelegate_t
{
public:

public:
};


// WinRT.ObjectReference`1<Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics_Vftbl>
struct  ObjectReference_1_t530F1E336D8E2AE06C0F8AD45027396D9CCF945E  : public IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_t530F1E336D8E2AE06C0F8AD45027396D9CCF945E, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_t530F1E336D8E2AE06C0F8AD45027396D9CCF945E, ___Vftbl_4)); }
	inline Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114 * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___GetDefault_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___RequestAccessAsync_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_t530F1E336D8E2AE06C0F8AD45027396D9CCF945E, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_t530F1E336D8E2AE06C0F8AD45027396D9CCF945E, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// WinRT.ObjectReference`1<Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem_Vftbl>
struct  ObjectReference_1_tC6FFCE6D4A862A7EBF2A518A0AA80A0ED0D99A5A  : public IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_tC6FFCE6D4A862A7EBF2A518A0AA80A0ED0D99A5A, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_tC6FFCE6D4A862A7EBF2A518A0AA80A0ED0D99A5A, ___Vftbl_4)); }
	inline Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2 * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___TryGetTransformTo_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_tC6FFCE6D4A862A7EBF2A518A0AA80A0ED0D99A5A, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_tC6FFCE6D4A862A7EBF2A518A0AA80A0ED0D99A5A, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// WinRT.ObjectReference`1<Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl>
struct  ObjectReference_1_tD07D53CD6B0E358A8023F2234DAA8FBEE947EABB  : public IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_tD07D53CD6B0E358A8023F2234DAA8FBEE947EABB, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_tD07D53CD6B0E358A8023F2234DAA8FBEE947EABB, ___Vftbl_4)); }
	inline Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___CreateCoordinateSystemForNode_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___CreateCoordinateSystemForNodeWithPosition_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___CreateCoordinateSystemForNodeWithPositionAndOrientation_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___CreateLocatorForNode_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_tD07D53CD6B0E358A8023F2234DAA8FBEE947EABB, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_tD07D53CD6B0E358A8023F2234DAA8FBEE947EABB, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// WinRT.ObjectReference`1<Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2_Vftbl>
struct  ObjectReference_1_t7B9167D5590FAF87529386F35A3F649591B101B2  : public IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_t7B9167D5590FAF87529386F35A3F649591B101B2, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_t7B9167D5590FAF87529386F35A3F649591B101B2, ___Vftbl_4)); }
	inline Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042 * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___TryCreateFrameOfReference_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___TryCreateFrameOfReferenceWithPosition_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___TryCreateFrameOfReferenceWithPositionAndOrientation_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_t7B9167D5590FAF87529386F35A3F649591B101B2, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_t7B9167D5590FAF87529386F35A3F649591B101B2, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// WinRT.ObjectReference`1<WinRT.Interop.IActivationFactoryVftbl>
struct  ObjectReference_1_t0DC6E4D5526B1D82029F260034BF69B7B6407E9D  : public IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_t0DC6E4D5526B1D82029F260034BF69B7B6407E9D, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_t0DC6E4D5526B1D82029F260034BF69B7B6407E9D, ___Vftbl_4)); }
	inline IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5  get_Vftbl_4() const { return ___Vftbl_4; }
	inline IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5 * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___ActivateInstance_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_t0DC6E4D5526B1D82029F260034BF69B7B6407E9D, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_t0DC6E4D5526B1D82029F260034BF69B7B6407E9D, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// WinRT.ObjectReference`1<WinRT.Interop.IAsyncInfo_Vftbl>
struct  ObjectReference_1_t69270BB4E7A44A4CBD4E25BE22C8373461A12F78  : public IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_t69270BB4E7A44A4CBD4E25BE22C8373461A12F78, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_t69270BB4E7A44A4CBD4E25BE22C8373461A12F78, ___Vftbl_4)); }
	inline Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96 * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_Id_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_Status_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_ErrorCode_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___Cancel_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___Close_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_t69270BB4E7A44A4CBD4E25BE22C8373461A12F78, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_t69270BB4E7A44A4CBD4E25BE22C8373461A12F78, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation_Vftbl>
struct  ObjectReference_1_tA170C4C2A9CD8CC3F9693CA7DE47AEB8FE892974  : public IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_tA170C4C2A9CD8CC3F9693CA7DE47AEB8FE892974, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_tA170C4C2A9CD8CC3F9693CA7DE47AEB8FE892974, ___Vftbl_4)); }
	inline Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB  get_Vftbl_4() const { return ___Vftbl_4; }
	inline Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___put_Completed_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_Completed_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_tA170C4C2A9CD8CC3F9693CA7DE47AEB8FE892974, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_tA170C4C2A9CD8CC3F9693CA7DE47AEB8FE892974, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// WinRT.ObjectReference`1<WinRT.Interop.IInspectableVftbl>
struct  ObjectReference_1_t28DA373EE505C8F3F300D370F9766734030471DA  : public IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_t28DA373EE505C8F3F300D370F9766734030471DA, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_t28DA373EE505C8F3F300D370F9766734030471DA, ___Vftbl_4)); }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  get_Vftbl_4() const { return ___Vftbl_4; }
	inline IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32 * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___GetTrustLevel_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_t28DA373EE505C8F3F300D370F9766734030471DA, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_t28DA373EE505C8F3F300D370F9766734030471DA, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// WinRT.ObjectReference`1<WinRT.Interop.IReference_Matrix4x4>
struct  ObjectReference_1_tC3B2ABBE63AA0BF3E73DF6371E9B4F68510B1003  : public IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8
{
public:
	// WinRT.Interop.IUnknownVftbl WinRT.ObjectReference`1::_vftblIUnknown
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  ____vftblIUnknown_3;
	// T WinRT.ObjectReference`1::Vftbl
	IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D  ___Vftbl_4;
	// System.Boolean WinRT.ObjectReference`1::_owned
	bool ____owned_5;
	// System.Boolean WinRT.ObjectReference`1::_isLive
	bool ____isLive_6;

public:
	inline static int32_t get_offset_of__vftblIUnknown_3() { return static_cast<int32_t>(offsetof(ObjectReference_1_tC3B2ABBE63AA0BF3E73DF6371E9B4F68510B1003, ____vftblIUnknown_3)); }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  get__vftblIUnknown_3() const { return ____vftblIUnknown_3; }
	inline IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62 * get_address_of__vftblIUnknown_3() { return &____vftblIUnknown_3; }
	inline void set__vftblIUnknown_3(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  value)
	{
		____vftblIUnknown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&____vftblIUnknown_3))->___Release_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Vftbl_4() { return static_cast<int32_t>(offsetof(ObjectReference_1_tC3B2ABBE63AA0BF3E73DF6371E9B4F68510B1003, ___Vftbl_4)); }
	inline IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D  get_Vftbl_4() const { return ___Vftbl_4; }
	inline IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D * get_address_of_Vftbl_4() { return &___Vftbl_4; }
	inline void set_Vftbl_4(IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D  value)
	{
		___Vftbl_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___QueryInterface_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___AddRef_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___IUnknownVftbl_0))->___Release_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetIids_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetRuntimeClassName_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___Vftbl_4))->___IInspectableVftbl_0))->___GetTrustLevel_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Vftbl_4))->___get_Value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of__owned_5() { return static_cast<int32_t>(offsetof(ObjectReference_1_tC3B2ABBE63AA0BF3E73DF6371E9B4F68510B1003, ____owned_5)); }
	inline bool get__owned_5() const { return ____owned_5; }
	inline bool* get_address_of__owned_5() { return &____owned_5; }
	inline void set__owned_5(bool value)
	{
		____owned_5 = value;
	}

	inline static int32_t get_offset_of__isLive_6() { return static_cast<int32_t>(offsetof(ObjectReference_1_tC3B2ABBE63AA0BF3E73DF6371E9B4F68510B1003, ____isLive_6)); }
	inline bool get__isLive_6() const { return ____isLive_6; }
	inline bool* get_address_of__isLive_6() { return &____isLive_6; }
	inline void set__isLive_6(bool value)
	{
		____isLive_6 = value;
	}
};


// System.DllNotFoundException
struct  DllNotFoundException_tED90B6A78D4CF5AA565288E0BA88A990062A7F76  : public TypeLoadException_t510963B29CB27C6EA3ACDF5FB76E72E1BC372CD1
{
public:

public:
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
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
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

IL2CPP_EXTERN_C void IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke(const IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32& unmarshaled, IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_back(const IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke& marshaled, IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32& unmarshaled);
IL2CPP_EXTERN_C void IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_cleanup(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com(const IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32& unmarshaled, IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com& marshaled);
IL2CPP_EXTERN_C void IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_back(const IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com& marshaled, IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32& unmarshaled);
IL2CPP_EXTERN_C void IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_cleanup(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com& marshaled);
IL2CPP_EXTERN_C void IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_pinvoke(const IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62& unmarshaled, IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_pinvoke_back(const IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_pinvoke& marshaled, IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62& unmarshaled);
IL2CPP_EXTERN_C void IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_pinvoke_cleanup(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_com(const IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62& unmarshaled, IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_com& marshaled);
IL2CPP_EXTERN_C void IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_com_back(const IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_com& marshaled, IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62& unmarshaled);
IL2CPP_EXTERN_C void IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_com_cleanup(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_com& marshaled);

// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_tA170C4C2A9CD8CC3F9693CA7DE47AEB8FE892974 * ObjectReference_1_Attach_m115234CCEBF5F5198AB3D1BA7BBA7BFF4EC9EB69_gshared (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Int32,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mF02A45D44A5C944B4080E9AFC90ABF84BC822DF1_gshared (Func_2_t2CBC72121006E5126DE13FB60C631578D0BB4931 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void WinRT.Interop.IAsyncOperation_Enum`2<System.Int32Enum,Microsoft.Windows.Perception.Spatial.IAsyncOperationCompletedHandler_SpatialPerceptionAccessStatus>::.ctor(WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation/Vftbl>,System.Func`2<System.Int32,T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAsyncOperation_Enum_2__ctor_m6D4EC0E4CE9FCDC7C46C26C8862BA39D02F79BCB_gshared (IAsyncOperation_Enum_2_t2128E6CBB078738FCFF3BE7B91330A00D3C430B6 * __this, ObjectReference_1_tA170C4C2A9CD8CC3F9693CA7DE47AEB8FE892974 * ___obj0, Func_2_t2CBC72121006E5126DE13FB60C631578D0BB4931 * ___castResult1, const RuntimeMethod* method);
// TTask WinRT.Interop._IAsyncOperation`2<System.Object,System.Int32Enum>::AsTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _IAsyncOperation_2_AsTask_mACF11E389C7663D671FDE538FD05091D185A0A3B_gshared (_IAsyncOperation_2_t90EF43749283B68BCEC78982740E576D2509834E * __this, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IReference_Matrix4x4>::Attach(WinRT.ModuleReference,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_tC3B2ABBE63AA0BF3E73DF6371E9B4F68510B1003 * ObjectReference_1_Attach_m6C8B14FB255F90174B832AE9C975E14076D422B1_gshared (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Numerics.Matrix4x4>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m36E93ED21F3B7474DE9962FE9EBA51651B2D89EC_gshared (Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC * __this, Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  ___value0, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_tC6FFCE6D4A862A7EBF2A518A0AA80A0ED0D99A5A * ObjectReference_1_Attach_m0F8E9999482DEF775C007549487B061335BEAD3A_gshared (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2/Vftbl>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t7B9167D5590FAF87529386F35A3F649591B101B2 * IObjectReference_As_TisVftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042_m48F8449253BD48F0D36E61D2E0460C4559570CAD_gshared (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * __this, const RuntimeMethod* method);
// T WinRT.WeakLazy`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * WeakLazy_1_get_Value_mC99F3C12B7165F4DCA490D16455078A6CE96D9E6_gshared (WeakLazy_1_tEB0E03E71A2A8DED940AC31A731A9809B1C23083 * __this, const RuntimeMethod* method);
// System.Void WinRT.WeakLazy`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakLazy_1__ctor_mBC3D3B0ED997527E8E339C3C41DDF498224291E7_gshared (WeakLazy_1_tEB0E03E71A2A8DED940AC31A731A9809B1C23083 * __this, const RuntimeMethod* method);
// WinRT.ObjectReference`1<!!0> WinRT.ActivationFactory`1<System.Object>::As<Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics/Vftbl>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_tD07D53CD6B0E358A8023F2234DAA8FBEE947EABB * ActivationFactory_1_As_TisVftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C_m8171976906CA15C2FFA77F24BA2EE950DDCE57D1_gshared (const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared (Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Lazy`1<System.Object>::.ctor(System.Func`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1__ctor_mFD20B0196A065A92FE66CCA3DEA51AE60F27B93D_gshared (Lazy_1_t71F054A6BEAC691000784099D483C92D8C113AE7 * __this, Func_1_t59BE545225A69AFD7B2056D169D0083051F6D386 * ___valueFactory0, const RuntimeMethod* method);
// WinRT.ObjectReference`1<!!0> WinRT.ActivationFactory`1<System.Object>::As<Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics/Vftbl>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t530F1E336D8E2AE06C0F8AD45027396D9CCF945E * ActivationFactory_1_As_TisVftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114_mCCADE4E76507BD33A5D81B5CFB6FF98731DBECC8_gshared (const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IInspectableVftbl>::FromNativePtr(WinRT.ModuleReference,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t28DA373EE505C8F3F300D370F9766734030471DA * ObjectReference_1_FromNativePtr_m36F49CBCEA4FD201ED2364610053ED8318D7FB67_gshared (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ___module0, intptr_t ___thisPtr1, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem/Vftbl>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_tC6FFCE6D4A862A7EBF2A518A0AA80A0ED0D99A5A * IObjectReference_As_TisVftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2_mF97C951CC4D00E4433E7822BD1B0DBC3105EF970_gshared (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * __this, const RuntimeMethod* method);
// !!0 System.Runtime.InteropServices.Marshal::PtrToStructure<WinRT.Delegate/UnmanagedObject>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F  Marshal_PtrToStructure_TisUnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F_m731A84F7FEEDF32D55905BF37DF9DBE45D8F866F_gshared (intptr_t ___ptr0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m48759D7F3A90CB3B0B0E73773B1E40147247A61B_gshared (RuntimeObject * ___d0, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<WinRT.Interop.IDelegateVftbl>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_TisIDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE_m5EA1D0752BF7FCCC9098A92C5964E8AE0B2F619D_gshared (IDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE  ___structure0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<WinRT.Interop.IDelegateVftbl>(!!0,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToPtr_TisIDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE_m95AF195BDECCCA866C9E68BCFE011CDF637FA734_gshared (IDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE  ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<WinRT.Delegate/UnmanagedObject>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_SizeOf_TisUnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F_m7751951F47A6D68941008CAD6B1692621742E1CA_gshared (UnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F  ___structure0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<WinRT.Delegate/UnmanagedObject>(!!0,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_StructureToPtr_TisUnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F_mDAFE68DE2FF5B571CD00D012B08F901DD0F87906_gshared (UnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F  ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.WeakReference`1<System.Object>::TryGetTarget(!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WeakReference_1_TryGetTarget_m9D3E03EAD29D846A4E826902BE373E0426D094A5_gshared (WeakReference_1_tBC6A26E1BB0C3A272173A366499D2BBA015BC86C * __this, RuntimeObject ** ___target0, const RuntimeMethod* method);
// T WinRT.Platform::TryGetProcAddress<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Platform_TryGetProcAddress_TisRuntimeObject_mB439A501892BB2A2AAC32EFF7603A8E765FFAD56_gshared (intptr_t ___moduleHandle0, const RuntimeMethod* method);
// System.Void System.WeakReference`1<System.Object>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_mB56296566802842F6B5EEDF3F1C3835E27295F78_gshared (WeakReference_1_tBC6A26E1BB0C3A272173A366499D2BBA015BC86C * __this, RuntimeObject * ___target0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IActivationFactoryVftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t0DC6E4D5526B1D82029F260034BF69B7B6407E9D * ObjectReference_1_Attach_m222C34E726851CAF0922BA49E41E7AF509CFFC65_gshared (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<WinRT.Interop.IAsyncInfo/Vftbl>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t69270BB4E7A44A4CBD4E25BE22C8373461A12F78 * IObjectReference_As_TisVftbl_tA006332DC96A64591EEDDB7F1732C41894681B96_m61156E1718CE84A35B02CB75EEA5933FE98CA9F0_gshared (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * __this, const RuntimeMethod* method);
// System.Void WinRT.Interop.DelegateProperty`1<System.Object>::.ctor(System.Guid,WinRT.IObjectReference,WinRT.Interop._get_PropertyAsObject,WinRT.Interop._put_PropertyAsObject,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateProperty_1__ctor_m89B4A8BD3115F5441C74BFC091EF8DFED6ADBA56_gshared (DelegateProperty_1_t8A3EA199EDE0FD8582E17F2B4C85D086D8F1532C * __this, Guid_t  ___iid0, IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * ___obj1, _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * ___get_Delegate2, _put_PropertyAsObject_t50B08BD6BB7FBD450046CD44CB2AC7A3310CBFDC * ___put_Delegate3, intptr_t ___invokerPtr4, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 WinRT.Delegate::MarshalInvoke<System.Object>(System.IntPtr,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Delegate_MarshalInvoke_TisRuntimeObject_mACB5BC27886FB298C30F6E92C6F3F960C7072873_gshared (intptr_t ___thisPtr0, Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___invoke1, const RuntimeMethod* method);
// System.Void WinRT.Interop.DelegateProperty`1<System.Object>::set_Value(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelegateProperty_1_set_Value_m503C9CAAFA85395D27AD5D97C326187DFE657281_gshared (DelegateProperty_1_t8A3EA199EDE0FD8582E17F2B4C85D086D8F1532C * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mAECA381FC0AA61139100EF468EE819A98431DE5E_gshared (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Lazy`1<System.Boolean>::.ctor(System.Func`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1__ctor_mA6DE95A47EAD7BE89179EDDD6E334481CDBCF83B_gshared (Lazy_1_tD86FA2DBC6DDD534D2365617EE6B309478B2DCAE * __this, Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___valueFactory0, const RuntimeMethod* method);
// System.Void System.Lazy`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lazy_1__ctor_mBC643E8CCF912ECB8085859416C1BEB6A75A6D27_gshared (Lazy_1_t71F054A6BEAC691000784099D483C92D8C113AE7 * __this, const RuntimeMethod* method);
// !0 System.Lazy`1<System.Boolean>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lazy_1_get_Value_m72F242F54A5243549F688D7D976338368267CCD6_gshared (Lazy_1_tD86FA2DBC6DDD534D2365617EE6B309478B2DCAE * __this, const RuntimeMethod* method);
// T WinRT.Platform::GetProcAddress<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Platform_GetProcAddress_TisRuntimeObject_m081B633C43F87F8AB521E8AAED1E76DF4E48788E_gshared (intptr_t ___moduleHandle0, const RuntimeMethod* method);
// !0 System.Lazy`1<System.Object>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Lazy_1_get_Value_m0F1BF0071B879F33579BD0FD0AD8AC89635B1F5F_gshared (Lazy_1_t71F054A6BEAC691000784099D483C92D8C113AE7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.IntPtr>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m0396A90EB111C444993138A23C8BD61D2999CAA4_gshared (HashSet_1_t1B66B9848B6D563944C506FA6F90487B3DB7396D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.IntPtr>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mB409A367BF3EA85DF0977C23B8F36504BFDFDB5D_gshared (HashSet_1_t1B66B9848B6D563944C506FA6F90487B3DB7396D * __this, intptr_t ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.IntPtr>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mD1078C245664F32D05FE0B958860B9943FF366EA_gshared (HashSet_1_t1B66B9848B6D563944C506FA6F90487B3DB7396D * __this, intptr_t ___item0, const RuntimeMethod* method);

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0 (Attribute_tF048C13FB3C8CFCC53F82290E4A3F621089F9A74 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics/Vftbl/_RequestAccessAsync::Invoke(System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _RequestAccessAsync_Invoke_mB60E057D741000CC04E711AA72685E111AC30F1C (_RequestAccessAsync_tDBB08AC3923195BB0C653BF8E058D65837714F7C * __this, intptr_t ___thisPtr0, intptr_t* ___operationPtr1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::ThrowExceptionForHR(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_ThrowExceptionForHR_m4049F1FF511B6E0E557FC8426626DD9DFD87F102 (int32_t ___errorCode0, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_tA170C4C2A9CD8CC3F9693CA7DE47AEB8FE892974 * ObjectReference_1_Attach_m115234CCEBF5F5198AB3D1BA7BBA7BFF4EC9EB69 (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_tA170C4C2A9CD8CC3F9693CA7DE47AEB8FE892974 * (*) (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 , intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_m115234CCEBF5F5198AB3D1BA7BBA7BFF4EC9EB69_gshared)(___module0, ___thisPtr1, method);
}
// System.Void System.Func`2<System.Int32,Microsoft.Windows.Perception.Spatial.SpatialPerceptionAccessStatus>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m669CA673E04D739B1650A67730E208DB4A87B3B8 (Func_2_t1255F50D8FBA7BB723D85AB9EB862C75A432EEB2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1255F50D8FBA7BB723D85AB9EB862C75A432EEB2 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mF02A45D44A5C944B4080E9AFC90ABF84BC822DF1_gshared)(__this, ___object0, ___method1, method);
}
// System.Void WinRT.Interop.IAsyncOperation_Enum`2<Microsoft.Windows.Perception.Spatial.SpatialPerceptionAccessStatus,Microsoft.Windows.Perception.Spatial.IAsyncOperationCompletedHandler_SpatialPerceptionAccessStatus>::.ctor(WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation/Vftbl>,System.Func`2<System.Int32,T>)
inline void IAsyncOperation_Enum_2__ctor_m5B94F9594DB224E2B67A843AEDBDC7B6B3FBB983 (IAsyncOperation_Enum_2_t19A0CBF95D678C4B1A6F0DFA63831B60FD7B63A9 * __this, ObjectReference_1_tA170C4C2A9CD8CC3F9693CA7DE47AEB8FE892974 * ___obj0, Func_2_t1255F50D8FBA7BB723D85AB9EB862C75A432EEB2 * ___castResult1, const RuntimeMethod* method)
{
	((  void (*) (IAsyncOperation_Enum_2_t19A0CBF95D678C4B1A6F0DFA63831B60FD7B63A9 *, ObjectReference_1_tA170C4C2A9CD8CC3F9693CA7DE47AEB8FE892974 *, Func_2_t1255F50D8FBA7BB723D85AB9EB862C75A432EEB2 *, const RuntimeMethod*))IAsyncOperation_Enum_2__ctor_m6D4EC0E4CE9FCDC7C46C26C8862BA39D02F79BCB_gshared)(__this, ___obj0, ___castResult1, method);
}
// TTask WinRT.Interop._IAsyncOperation`2<System.Threading.Tasks.Task`1<Microsoft.Windows.Perception.Spatial.SpatialPerceptionAccessStatus>,Microsoft.Windows.Perception.Spatial.SpatialPerceptionAccessStatus>::AsTask()
inline Task_1_tDD14A3F6150B55B689AA83F9A3274F946A7D67BE * _IAsyncOperation_2_AsTask_m2FF345E71722CB3ACD983BCAF7E87BCADD3152DD (_IAsyncOperation_2_t617D18323221EC33FCB1FC4541F7BE9E31058D03 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_tDD14A3F6150B55B689AA83F9A3274F946A7D67BE * (*) (_IAsyncOperation_2_t617D18323221EC33FCB1FC4541F7BE9E31058D03 *, const RuntimeMethod*))_IAsyncOperation_2_AsTask_mACF11E389C7663D671FDE538FD05091D185A0A3B_gshared)(__this, method);
}
// System.Void Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m967E22ED9F8ECB09C844A200BF0712D717ACF940 (U3CU3Ec_t0AF46CD18687150C5FBDA8D1EB3A088B5E49659A * __this, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISpatialCoordinateSystem__ctor_m1C852B99599AC8F75D3CF66ADDF35C9D4231FE6A (ISpatialCoordinateSystem_t539C9440C0D44A165C8826A2A91B412F7AEA6A24 * __this, ObjectReference_1_tC6FFCE6D4A862A7EBF2A518A0AA80A0ED0D99A5A * ___obj0, const RuntimeMethod* method);
// System.Int32 Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem/Vftbl/_TryGetTransformTo::Invoke(System.IntPtr,System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _TryGetTransformTo_Invoke_mCC619E8AD1762B9C01F00D24147323D05344ED9A (_TryGetTransformTo_t2C72E101F6B0DFFFC29D72FD60EDDF21808FBCD9 * __this, intptr_t ___thisPtr0, intptr_t ___targetPtr1, intptr_t* ___value2, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IReference_Matrix4x4>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_tC3B2ABBE63AA0BF3E73DF6371E9B4F68510B1003 * ObjectReference_1_Attach_m6C8B14FB255F90174B832AE9C975E14076D422B1 (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_tC3B2ABBE63AA0BF3E73DF6371E9B4F68510B1003 * (*) (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 , intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_m6C8B14FB255F90174B832AE9C975E14076D422B1_gshared)(___module0, ___thisPtr1, method);
}
// System.Numerics.Matrix4x4 System.Numerics.Matrix4x4::get_Identity()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  Matrix4x4_get_Identity_m2AA00AFFC1AB287EB10E93B25E2B34E7F39CBD0D_inline (const RuntimeMethod* method);
// System.Int32 WinRT.Interop._get_PropertyAsMatrix4x4::Invoke(System.IntPtr,System.Numerics.Matrix4x4*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsMatrix4x4_Invoke_mC0FBB04B56AB119DF0118BFF234CA5A203925737 (_get_PropertyAsMatrix4x4_t472E5893D3A5D8929770A973793E19BC6F35EFED * __this, intptr_t ___thisPtr0, Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 * ___value1, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Numerics.Matrix4x4>::.ctor(!0)
inline void Nullable_1__ctor_m36E93ED21F3B7474DE9962FE9EBA51651B2D89EC (Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC * __this, Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC *, Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 , const RuntimeMethod*))Nullable_1__ctor_m36E93ED21F3B7474DE9962FE9EBA51651B2D89EC_gshared)(__this, ___value0, method);
}
// System.Int32 Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics/Vftbl/_CreateCoordinateSystemForNode::Invoke(System.IntPtr,System.Guid,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _CreateCoordinateSystemForNode_Invoke_m00B5E806EC5FB415B9281064A82EBDD024A0A9E3 (_CreateCoordinateSystemForNode_t7F54D94DA8BC650182C6CAB5914643492CB82914 * __this, intptr_t ___thisPtr0, Guid_t  ___nodeId1, intptr_t* ___result2, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem/Vftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_tC6FFCE6D4A862A7EBF2A518A0AA80A0ED0D99A5A * ObjectReference_1_Attach_m0F8E9999482DEF775C007549487B061335BEAD3A (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_tC6FFCE6D4A862A7EBF2A518A0AA80A0ED0D99A5A * (*) (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 , intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_m0F8E9999482DEF775C007549487B061335BEAD3A_gshared)(___module0, ___thisPtr1, method);
}
// Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ISpatialCoordinateSystem_t539C9440C0D44A165C8826A2A91B412F7AEA6A24 * ISpatialCoordinateSystem_op_Implicit_m8714EE75AE0CE3096281441DA14D673F33364536 (ObjectReference_1_tC6FFCE6D4A862A7EBF2A518A0AA80A0ED0D99A5A * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Perception.Spatial.SpatialCoordinateSystem::.ctor(Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialCoordinateSystem__ctor_mF9B165578C25CCCCC9B73DAFBECE36EBFDC6D388 (SpatialCoordinateSystem_t74AEBD257DE2AFEB649A5505161BE715E0BF46C8 * __this, ISpatialCoordinateSystem_t539C9440C0D44A165C8826A2A91B412F7AEA6A24 * ___interface0, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2/Vftbl>()
inline ObjectReference_1_t7B9167D5590FAF87529386F35A3F649591B101B2 * IObjectReference_As_TisVftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042_m48F8449253BD48F0D36E61D2E0460C4559570CAD (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * __this, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t7B9167D5590FAF87529386F35A3F649591B101B2 * (*) (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *, const RuntimeMethod*))IObjectReference_As_TisVftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042_m48F8449253BD48F0D36E61D2E0460C4559570CAD_gshared)(__this, method);
}
// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2 Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ISpatialGraphInteropPreviewStatics2_t9F8CFA5570E00335B319319183ED55A7BE64ED16 * ISpatialGraphInteropPreviewStatics2_op_Implicit_m2353780E3D0E344DA9972D21473FFB59F64D0800 (ObjectReference_1_t7B9167D5590FAF87529386F35A3F649591B101B2 * ___obj0, const RuntimeMethod* method);
// System.Void Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISpatialGraphInteropPreviewStatics2__ctor_mBC8DB73D459702145AC0C398132BDBE9B6F3F7A8 (ISpatialGraphInteropPreviewStatics2_t9F8CFA5570E00335B319319183ED55A7BE64ED16 * __this, ObjectReference_1_t7B9167D5590FAF87529386F35A3F649591B101B2 * ___obj0, const RuntimeMethod* method);
// T WinRT.WeakLazy`1<Microsoft.Windows.Perception.Spatial.Preview.SpatialGraphInteropPreview/Statics>::get_Value()
inline Statics_tDBC4F59A0CD2DE79CBDFFC7AF2A16F52654846A5 * WeakLazy_1_get_Value_mA1F822FE45CF4E2272183F6EE23F10016C354918 (WeakLazy_1_t4D8064E30345D896B6FAF9DCEC2247C38D0EC71F * __this, const RuntimeMethod* method)
{
	return ((  Statics_tDBC4F59A0CD2DE79CBDFFC7AF2A16F52654846A5 * (*) (WeakLazy_1_t4D8064E30345D896B6FAF9DCEC2247C38D0EC71F *, const RuntimeMethod*))WeakLazy_1_get_Value_mC99F3C12B7165F4DCA490D16455078A6CE96D9E6_gshared)(__this, method);
}
// Microsoft.Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics::CreateCoordinateSystemForNode(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialCoordinateSystem_t74AEBD257DE2AFEB649A5505161BE715E0BF46C8 * ISpatialGraphInteropPreviewStatics_CreateCoordinateSystemForNode_m00363BA49C3195F24BB8717F0D0BA29B48A17FEA (ISpatialGraphInteropPreviewStatics_tA6235090F28BD06BD7C7946FD10E0986B7DE0AF9 * __this, Guid_t  ___nodeId0, const RuntimeMethod* method);
// System.Void WinRT.WeakLazy`1<Microsoft.Windows.Perception.Spatial.Preview.SpatialGraphInteropPreview/Statics>::.ctor()
inline void WeakLazy_1__ctor_m65ED6EBC027570B38493560D542DF3CE7D0E45A0 (WeakLazy_1_t4D8064E30345D896B6FAF9DCEC2247C38D0EC71F * __this, const RuntimeMethod* method)
{
	((  void (*) (WeakLazy_1_t4D8064E30345D896B6FAF9DCEC2247C38D0EC71F *, const RuntimeMethod*))WeakLazy_1__ctor_mBC3D3B0ED997527E8E339C3C41DDF498224291E7_gshared)(__this, method);
}
// WinRT.ObjectReference`1<!!0> WinRT.ActivationFactory`1<Microsoft.Windows.Perception.Spatial.Preview.SpatialGraphInteropPreview>::As<Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics/Vftbl>()
inline ObjectReference_1_tD07D53CD6B0E358A8023F2234DAA8FBEE947EABB * ActivationFactory_1_As_TisVftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C_m9985B1ADEB4F4FC11CFF61CFE727050C2ED92DED (const RuntimeMethod* method)
{
	return ((  ObjectReference_1_tD07D53CD6B0E358A8023F2234DAA8FBEE947EABB * (*) (const RuntimeMethod*))ActivationFactory_1_As_TisVftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C_m8171976906CA15C2FFA77F24BA2EE950DDCE57D1_gshared)(method);
}
// System.Void Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISpatialGraphInteropPreviewStatics__ctor_m4B7284B1934A58B793814C0691D8C9428E2CD4C3 (ISpatialGraphInteropPreviewStatics_tA6235090F28BD06BD7C7946FD10E0986B7DE0AF9 * __this, ObjectReference_1_tD07D53CD6B0E358A8023F2234DAA8FBEE947EABB * ___obj0, const RuntimeMethod* method);
// System.Void System.Func`1<Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mF0DB33F273784EF928C0AB503E741B90AEF16BFF (Func_1_t43234D68F3ABC78C8E275517F6810A0E91D1AC97 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t43234D68F3ABC78C8E275517F6810A0E91D1AC97 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_mE02699FC76D830943069F8FC19D16C3B72A98A1F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Lazy`1<Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2>::.ctor(System.Func`1<!0>)
inline void Lazy_1__ctor_mEB219C44325F989211E530FDC445E82632698EFC (Lazy_1_tD26FF389F7897C8553D1536923CBABC0ABA593E0 * __this, Func_1_t43234D68F3ABC78C8E275517F6810A0E91D1AC97 * ___valueFactory0, const RuntimeMethod* method)
{
	((  void (*) (Lazy_1_tD26FF389F7897C8553D1536923CBABC0ABA593E0 *, Func_1_t43234D68F3ABC78C8E275517F6810A0E91D1AC97 *, const RuntimeMethod*))Lazy_1__ctor_mFD20B0196A065A92FE66CCA3DEA51AE60F27B93D_gshared)(__this, ___valueFactory0, method);
}
// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2 Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2::op_Implicit(WinRT.IObjectReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ISpatialGraphInteropPreviewStatics2_t9F8CFA5570E00335B319319183ED55A7BE64ED16 * ISpatialGraphInteropPreviewStatics2_op_Implicit_m4979FB726D7748AD125E55E3A0E2A34C5247E27E (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * ___obj0, const RuntimeMethod* method);
// T WinRT.WeakLazy`1<Microsoft.Windows.Perception.Spatial.SpatialAnchorExporter/Statics>::get_Value()
inline Statics_t7FE7A57817F231EE3258C2CCE00A163511066167 * WeakLazy_1_get_Value_m3B539A349FBDEA92492D918DFD6CE5EA21A68B3C (WeakLazy_1_t1B33F4864FBC2BF734A2EFC982148B4D00DD2228 * __this, const RuntimeMethod* method)
{
	return ((  Statics_t7FE7A57817F231EE3258C2CCE00A163511066167 * (*) (WeakLazy_1_t1B33F4864FBC2BF734A2EFC982148B4D00DD2228 *, const RuntimeMethod*))WeakLazy_1_get_Value_mC99F3C12B7165F4DCA490D16455078A6CE96D9E6_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<Microsoft.Windows.Perception.Spatial.SpatialPerceptionAccessStatus> Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics::RequestAccessAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDD14A3F6150B55B689AA83F9A3274F946A7D67BE * ISpatialAnchorExporterStatics_RequestAccessAsync_mF3B451FDCCAA42B7CADDAD4712FB0B07CB22E424 (ISpatialAnchorExporterStatics_t678004F7593EA7BABBE321CEDC2B19C7CCBB29A7 * __this, const RuntimeMethod* method);
// System.Void WinRT.WeakLazy`1<Microsoft.Windows.Perception.Spatial.SpatialAnchorExporter/Statics>::.ctor()
inline void WeakLazy_1__ctor_m4B1D290A17980D337D2FF4E5D8FCA8A2ABE10C4C (WeakLazy_1_t1B33F4864FBC2BF734A2EFC982148B4D00DD2228 * __this, const RuntimeMethod* method)
{
	((  void (*) (WeakLazy_1_t1B33F4864FBC2BF734A2EFC982148B4D00DD2228 *, const RuntimeMethod*))WeakLazy_1__ctor_mBC3D3B0ED997527E8E339C3C41DDF498224291E7_gshared)(__this, method);
}
// WinRT.ObjectReference`1<!!0> WinRT.ActivationFactory`1<Microsoft.Windows.Perception.Spatial.SpatialAnchorExporter>::As<Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics/Vftbl>()
inline ObjectReference_1_t530F1E336D8E2AE06C0F8AD45027396D9CCF945E * ActivationFactory_1_As_TisVftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114_m29D6B84C4BB3F1D58A3DCB7D4014429BF1CACBC2 (const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t530F1E336D8E2AE06C0F8AD45027396D9CCF945E * (*) (const RuntimeMethod*))ActivationFactory_1_As_TisVftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114_mCCADE4E76507BD33A5D81B5CFB6FF98731DBECC8_gshared)(method);
}
// System.Void Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISpatialAnchorExporterStatics__ctor_mA0CF33CD41FCD84E4A205F785E50BE482F98B3E2 (ISpatialAnchorExporterStatics_t678004F7593EA7BABBE321CEDC2B19C7CCBB29A7 * __this, ObjectReference_1_t530F1E336D8E2AE06C0F8AD45027396D9CCF945E * ___obj0, const RuntimeMethod* method);
// WinRT.ModuleReference WinRT.WinrtModule::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  WinrtModule_get_Instance_mF2B4119EC32D8795E6D42278FEEB65EBAA02E774 (const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IInspectableVftbl>::FromNativePtr(WinRT.ModuleReference,System.IntPtr)
inline ObjectReference_1_t28DA373EE505C8F3F300D370F9766734030471DA * ObjectReference_1_FromNativePtr_m36F49CBCEA4FD201ED2364610053ED8318D7FB67 (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ___module0, intptr_t ___thisPtr1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t28DA373EE505C8F3F300D370F9766734030471DA * (*) (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 , intptr_t, const RuntimeMethod*))ObjectReference_1_FromNativePtr_m36F49CBCEA4FD201ED2364610053ED8318D7FB67_gshared)(___module0, ___thisPtr1, method);
}
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem/Vftbl>()
inline ObjectReference_1_tC6FFCE6D4A862A7EBF2A518A0AA80A0ED0D99A5A * IObjectReference_As_TisVftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2_mF97C951CC4D00E4433E7822BD1B0DBC3105EF970 (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * __this, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_tC6FFCE6D4A862A7EBF2A518A0AA80A0ED0D99A5A * (*) (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *, const RuntimeMethod*))IObjectReference_As_TisVftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2_mF97C951CC4D00E4433E7822BD1B0DBC3105EF970_gshared)(__this, method);
}
// System.Nullable`1<System.Numerics.Matrix4x4> Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem::TryGetTransformTo(Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC  ISpatialCoordinateSystem_TryGetTransformTo_m1CBBE876C881B902B5BBAF51BE63447868989801 (ISpatialCoordinateSystem_t539C9440C0D44A165C8826A2A91B412F7AEA6A24 * __this, ISpatialCoordinateSystem_t539C9440C0D44A165C8826A2A91B412F7AEA6A24 * ___other0, const RuntimeMethod* method);
// System.Int32 WinRT.Delegate::QueryInterface(System.IntPtr,System.Guid*,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Delegate_QueryInterface_m73A63091D278F0BAF8148D0ADF6FF267467A3693 (intptr_t ___thisPtr0, Guid_t * ___iid1, intptr_t* ___obj2, const RuntimeMethod* method);
// System.UInt32 WinRT.Delegate::AddRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Delegate_AddRef_m6C0075DD613B61A79DC97B55451F67F11655E448 (intptr_t ___thisPtr0, const RuntimeMethod* method);
// System.UInt32 WinRT.Delegate::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Delegate_Release_m25972AE16A8813A800DB9987F2B9CDCA0FC019E1 (intptr_t ___thisPtr0, const RuntimeMethod* method);
// !!0 System.Runtime.InteropServices.Marshal::PtrToStructure<WinRT.Delegate/UnmanagedObject>(System.IntPtr)
inline UnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F  Marshal_PtrToStructure_TisUnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F_m731A84F7FEEDF32D55905BF37DF9DBE45D8F866F (intptr_t ___ptr0, const RuntimeMethod* method)
{
	return ((  UnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F  (*) (intptr_t, const RuntimeMethod*))Marshal_PtrToStructure_TisUnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F_m731A84F7FEEDF32D55905BF37DF9DBE45D8F866F_gshared)(___ptr0, method);
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  GCHandle_FromIntPtr_mB803C8ECA1D723F1C51A69F7A7E09E269488D36C (intptr_t ___value0, const RuntimeMethod* method);
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GCHandle_get_Target_mDBDEA6883245CF1EF963D9FA945569B2D59DCCF8 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// WinRT.Delegate WinRT.Delegate::FindObject(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t01789152B02E68157FD11FCBC21F63795C42E476 * Delegate_FindObject_m70F877EB3F42415197F2598A2A32F936158408A1 (intptr_t ___thisPtr0, const RuntimeMethod* method);
// System.Int32 WinRT.Delegate::QueryInterface(System.Guid*,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Delegate_QueryInterface_m67538820C6B882600AB356EB9A302F8835E4F75E (Delegate_t01789152B02E68157FD11FCBC21F63795C42E476 * __this, Guid_t * ___iid0, intptr_t* ___obj1, const RuntimeMethod* method);
// System.UInt32 WinRT.Delegate::AddRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Delegate_AddRef_m03B92703DA247DDEA591638FC91F153F39322E5A (Delegate_t01789152B02E68157FD11FCBC21F63795C42E476 * __this, const RuntimeMethod* method);
// System.UInt32 WinRT.Delegate::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Delegate_Release_m3540FAF46440C04BE3CB950F7489E378F654666F (Delegate_t01789152B02E68157FD11FCBC21F63795C42E476 * __this, const RuntimeMethod* method);
// System.Boolean System.Guid::op_Equality(System.Guid,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Guid_op_Equality_m3D98BA18CDAF0C6C329F86720B5CD61A170A3E52 (Guid_t  ___a0, Guid_t  ___b1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ___handle0, const RuntimeMethod* method);
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_t9D6F65801A41B97F36138B15FD270A1550DBB3FC * IntrospectionExtensions_GetTypeInfo_mB8CD288832A36F852B99899A8506689F9B0D8D09 (Type_t * ___type0, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_mB6D391197444B8BFD30BAE1EDCF1A255CD2F292F (int32_t* ___location0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Decrement(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Decrement_m5C38319E41D5F7C90DFEC9138D58E6E92DFAFCFE (int32_t* ___location0, const RuntimeMethod* method);
// System.Void WinRT.Delegate::_Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__Dispose_m8F9080418D95E37A2DAE8A9440F88E63C34E9520 (Delegate_t01789152B02E68157FD11FCBC21F63795C42E476 * __this, const RuntimeMethod* method);
// System.Void WinRT.Interop.IUnknownVftbl/_QueryInterface::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _QueryInterface__ctor_m91D991A7AFD446C56FF5B66449F389DD4FA96CEC (_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void WinRT.Interop.IUnknownVftbl/_AddRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AddRef__ctor_m24773D9DAF0E187EAD7924ABD10A17F72CE60BE7 (_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void WinRT.Interop.IUnknownVftbl/_Release::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Release__ctor_m8F91AB6BC24EB0FF169565C17C457C8AFFF0D4AE (_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<WinRT.Interop.IUnknownVftbl/_QueryInterface>(!!0)
inline intptr_t Marshal_GetFunctionPointerForDelegate_Tis_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12_m0A97EEEA0025A3947684D1107A83A541B50298F4 (_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 * ___d0, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 *, const RuntimeMethod*))Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m48759D7F3A90CB3B0B0E73773B1E40147247A61B_gshared)(___d0, method);
}
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<WinRT.Interop.IUnknownVftbl/_AddRef>(!!0)
inline intptr_t Marshal_GetFunctionPointerForDelegate_Tis_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA_m244F5486C9035E14360274F805ACCC678176AED1 (_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA * ___d0, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA *, const RuntimeMethod*))Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m48759D7F3A90CB3B0B0E73773B1E40147247A61B_gshared)(___d0, method);
}
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<WinRT.Interop.IUnknownVftbl/_Release>(!!0)
inline intptr_t Marshal_GetFunctionPointerForDelegate_Tis_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2_mB7C12F74C4A35E93DDE85A017BE78AB44B5448D7 (_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 * ___d0, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 *, const RuntimeMethod*))Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m48759D7F3A90CB3B0B0E73773B1E40147247A61B_gshared)(___d0, method);
}
// WinRT.ModuleReference WinRT.ModuleReference::AddRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ModuleReference_AddRef_m3E220263CCBE7E4914D3336378AA819E15706531 (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 * __this, const RuntimeMethod* method);
// System.Void System.WeakReference::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m12F7412E9F228AA2276BBB37441CFBCD21A0ABBB (WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * __this, RuntimeObject * ___target0, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<WinRT.Interop.IDelegateVftbl>(!!0)
inline int32_t Marshal_SizeOf_TisIDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE_m5EA1D0752BF7FCCC9098A92C5964E8AE0B2F619D (IDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE  ___structure0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (IDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE , const RuntimeMethod*))Marshal_SizeOf_TisIDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE_m5EA1D0752BF7FCCC9098A92C5964E8AE0B2F619D_gshared)(___structure0, method);
}
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocCoTaskMem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocCoTaskMem_mD834304A9F50F5440A526BD0E68B7D24976985D1 (int32_t ___cb0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<WinRT.Interop.IDelegateVftbl>(!!0,System.IntPtr,System.Boolean)
inline void Marshal_StructureToPtr_TisIDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE_m95AF195BDECCCA866C9E68BCFE011CDF637FA734 (IDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE  ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method)
{
	((  void (*) (IDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE , intptr_t, bool, const RuntimeMethod*))Marshal_StructureToPtr_TisIDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE_m95AF195BDECCCA866C9E68BCFE011CDF637FA734_gshared)(___structure0, ___ptr1, ___fDeleteOld2, method);
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  GCHandle_Alloc_m5BF9DC23B533B904BFEA61136B92916683B46B0F (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m8CF7D07846B0C741B04A2A4E5E9B5D505F4B3CCE (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ___value0, const RuntimeMethod* method);
// System.Int32 System.Runtime.InteropServices.Marshal::SizeOf<WinRT.Delegate/UnmanagedObject>(!!0)
inline int32_t Marshal_SizeOf_TisUnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F_m7751951F47A6D68941008CAD6B1692621742E1CA (UnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F  ___structure0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F , const RuntimeMethod*))Marshal_SizeOf_TisUnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F_m7751951F47A6D68941008CAD6B1692621742E1CA_gshared)(___structure0, method);
}
// System.Void System.Runtime.InteropServices.Marshal::StructureToPtr<WinRT.Delegate/UnmanagedObject>(!!0,System.IntPtr,System.Boolean)
inline void Marshal_StructureToPtr_TisUnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F_mDAFE68DE2FF5B571CD00D012B08F901DD0F87906 (UnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F  ___structure0, intptr_t ___ptr1, bool ___fDeleteOld2, const RuntimeMethod* method)
{
	((  void (*) (UnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F , intptr_t, bool, const RuntimeMethod*))Marshal_StructureToPtr_TisUnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F_mDAFE68DE2FF5B571CD00D012B08F901DD0F87906_gshared)(___structure0, ___ptr1, ___fDeleteOld2, method);
}
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::FreeCoTaskMem(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeCoTaskMem_m7C88C0999A166E61A38FF25527CD5E339F6AC590 (intptr_t ___ptr0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.Void WinRT.ModuleReference::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleReference_Release_mCBB02150B5DEE435F1C7E5DEEE91A862BD49E7BC (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 * __this, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void WinRT.Mono/ThreadContext::RegisterPossiblyNonForeignThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadContext_RegisterPossiblyNonForeignThread_mD8D18E7C5E6C3E8033C6EDA8E4154B42CC670E2A (const RuntimeMethod* method);
// System.Void WinRT.Delegate::.ctor(System.Guid,System.IntPtr,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__ctor_m9A6EDE351CCA09690116A0B8A668CD99AAA5A304 (Delegate_t01789152B02E68157FD11FCBC21F63795C42E476 * __this, Guid_t  ___iid0, intptr_t ___invokePtr1, RuntimeObject * ___invoker2, const RuntimeMethod* method);
// System.Void WinRT.Delegate/InitialReference::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitialReference_Dispose_mB97D265D7C67A55E1A5AC0E90C22025491C4272C (InitialReference_t18776180879E7D7B1F47934927C0DB540DB2EE4E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>>::.ctor()
inline void Dictionary_2__ctor_m8175F3BDEF88EFB19A4F969E4CDF7B8CE3271B6C (Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * AppDomain_get_CurrentDomain_m3D3D52C9382D6853E49551DA6182DBC5F1118BF0 (const RuntimeMethod* method);
// System.Object System.AppDomain::GetData(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * AppDomain_GetData_mD6C34853507A96159BB1A7773C65E8B21DBC7250 (AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* String_Split_m13262358217AD2C119FD1B9733C3C0289D608512 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___separator0, const RuntimeMethod* method);
// System.Int32 WinRT.Platform::AddDllDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Platform_AddDllDirectory_mDBF08428063CDC47D60B7E7115EA27EA12389AAE (String_t* ___pathName0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m8FC423999B63B01CF06D71955893DACD2EEA3999 (Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE * __this, String_t* ___key0, WeakReference_1_t582B68A827348E837D31F15DE589784EF4505E75 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE *, String_t*, WeakReference_1_t582B68A827348E837D31F15DE589784EF4505E75 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.WeakReference`1<WinRT.DllModule>::TryGetTarget(!0&)
inline bool WeakReference_1_TryGetTarget_m32C6E67C08B4DFE53E7E5262B7D534B0B61B0F72 (WeakReference_1_t582B68A827348E837D31F15DE589784EF4505E75 * __this, DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70 ** ___target0, const RuntimeMethod* method)
{
	return ((  bool (*) (WeakReference_1_t582B68A827348E837D31F15DE589784EF4505E75 *, DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70 **, const RuntimeMethod*))WeakReference_1_TryGetTarget_m9D3E03EAD29D846A4E826902BE373E0426D094A5_gshared)(__this, ___target0, method);
}
// System.IntPtr WinRT.Platform::TryLoadLibraryExW(System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Platform_TryLoadLibraryExW_m02C79A74A06C659CF7455920EEEDBCDAD23FEF9C (String_t* ___fileName0, intptr_t ___fileHandle1, uint32_t ___flags2, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// T WinRT.Platform::TryGetProcAddress<WinRT.DllModule/DllGetActivationFactory>(System.IntPtr)
inline DllGetActivationFactory_tDFDF607D5B79CFF73AE0359FEB1EB1C41EE6966B * Platform_TryGetProcAddress_TisDllGetActivationFactory_tDFDF607D5B79CFF73AE0359FEB1EB1C41EE6966B_mD54E89432FD96FCC347B0B9765FAC259780D7012 (intptr_t ___moduleHandle0, const RuntimeMethod* method)
{
	return ((  DllGetActivationFactory_tDFDF607D5B79CFF73AE0359FEB1EB1C41EE6966B * (*) (intptr_t, const RuntimeMethod*))Platform_TryGetProcAddress_TisRuntimeObject_mB439A501892BB2A2AAC32EFF7603A8E765FFAD56_gshared)(___moduleHandle0, method);
}
// System.Void WinRT.DllModule::.ctor(System.String,System.IntPtr&,WinRT.DllModule/DllGetActivationFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllModule__ctor_m5F11DC1FAE5C8AD72D068157D7CF8673F3FD0616 (DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70 * __this, String_t* ___fileName0, intptr_t* ___moduleHandle1, DllGetActivationFactory_tDFDF607D5B79CFF73AE0359FEB1EB1C41EE6966B * ___getActivationFactory2, const RuntimeMethod* method);
// System.Void System.WeakReference`1<WinRT.DllModule>::.ctor(!0)
inline void WeakReference_1__ctor_mEF3D62A2C3A5F07179A0BE4A00A3312FD1BFBC66 (WeakReference_1_t582B68A827348E837D31F15DE589784EF4505E75 * __this, DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70 * ___target0, const RuntimeMethod* method)
{
	((  void (*) (WeakReference_1_t582B68A827348E837D31F15DE589784EF4505E75 *, DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70 *, const RuntimeMethod*))WeakReference_1__ctor_mB56296566802842F6B5EEDF3F1C3835E27295F78_gshared)(__this, ___target0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.WeakReference`1<WinRT.DllModule>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mF678B2F289B0764AA3183D0C030EE2300D713B57 (Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE * __this, String_t* ___key0, WeakReference_1_t582B68A827348E837D31F15DE589784EF4505E75 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE *, String_t*, WeakReference_1_t582B68A827348E837D31F15DE589784EF4505E75 *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, ___key0, ___value1, method);
}
// System.Void WinRT.Platform::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_FreeLibrary_mA760C95B6712C55E42A1FDDF88373685B7069723 (intptr_t ___moduleHandle0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// WinRT.ModuleReference WinRT.ModuleReference::Allocate(System.Object,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ModuleReference_Allocate_m22CB010050F3ABA58AE721231CF961BEB4E7E2B6 (RuntimeObject * ___module0, intptr_t* ___nativeHandle1, const RuntimeMethod* method);
// System.Int32 WinRT.DllModule/DllGetActivationFactory::Invoke(System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DllGetActivationFactory_Invoke_mCE2E4FD5AFFE79CB3FBE08999E3BB101EDF337B2 (DllGetActivationFactory_tDFDF607D5B79CFF73AE0359FEB1EB1C41EE6966B * __this, intptr_t ___activatableClassId0, intptr_t* ___activationFactory1, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.ObjectReference`1<WinRT.Interop.IActivationFactoryVftbl>::Attach(WinRT.ModuleReference,System.IntPtr&)
inline ObjectReference_1_t0DC6E4D5526B1D82029F260034BF69B7B6407E9D * ObjectReference_1_Attach_m222C34E726851CAF0922BA49E41E7AF509CFFC65 (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ___module0, intptr_t* ___thisPtr1, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t0DC6E4D5526B1D82029F260034BF69B7B6407E9D * (*) (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 , intptr_t*, const RuntimeMethod*))ObjectReference_1_Attach_m222C34E726851CAF0922BA49E41E7AF509CFFC65_gshared)(___module0, ___thisPtr1, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.IntPtr WinRT.Platform::WindowsCreateString(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Platform_WindowsCreateString_m738195D3E2596563126446D7B671B674C2FC3EEE (String_t* ___sourceString0, int32_t ___length1, const RuntimeMethod* method);
// System.Char* WinRT.Platform::WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Platform_WindowsGetStringRawBuffer_m58557E46079156E084D25CF7B802D568BD92E283 (intptr_t ___hstring0, uint32_t* ___length1, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mC16F6AD7A921B1AD038C1EB215D7F055C5676590 (String_t* __this, Il2CppChar* ___value0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Void WinRT.Platform::WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_WindowsDeleteString_m6CEE353E8DF2F3A0845E0C515E9DC382742887C8 (intptr_t ___hstring0, const RuntimeMethod* method);
// WinRT.ObjectReference`1<T> WinRT.IObjectReference::As<WinRT.Interop.IAsyncInfo/Vftbl>()
inline ObjectReference_1_t69270BB4E7A44A4CBD4E25BE22C8373461A12F78 * IObjectReference_As_TisVftbl_tA006332DC96A64591EEDDB7F1732C41894681B96_m61156E1718CE84A35B02CB75EEA5933FE98CA9F0 (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * __this, const RuntimeMethod* method)
{
	return ((  ObjectReference_1_t69270BB4E7A44A4CBD4E25BE22C8373461A12F78 * (*) (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *, const RuntimeMethod*))IObjectReference_As_TisVftbl_tA006332DC96A64591EEDDB7F1732C41894681B96_m61156E1718CE84A35B02CB75EEA5933FE98CA9F0_gshared)(__this, method);
}
// WinRT.Interop.IAsyncInfo WinRT.Interop.IAsyncInfo::op_Implicit(WinRT.ObjectReference`1<WinRT.Interop.IAsyncInfo/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IAsyncInfo_tF1F6A3A139BB86EE62ADEC082EE510976CBD093A * IAsyncInfo_op_Implicit_m3A0A3D99DED163331E392F1C3EB200C78C9798D5 (ObjectReference_1_t69270BB4E7A44A4CBD4E25BE22C8373461A12F78 * ___obj0, const RuntimeMethod* method);
// System.Void WinRT.Interop.IAsyncInfo::.ctor(WinRT.ObjectReference`1<WinRT.Interop.IAsyncInfo/Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAsyncInfo__ctor_m85360DB303D19469135DF2B180D6E956558A1DFD (IAsyncInfo_tF1F6A3A139BB86EE62ADEC082EE510976CBD093A * __this, ObjectReference_1_t69270BB4E7A44A4CBD4E25BE22C8373461A12F78 * ___obj0, const RuntimeMethod* method);
// System.Int32 WinRT.Interop._get_PropertyAsInt::Invoke(System.IntPtr,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsInt_Invoke_m77322411F59C68B5B13EAEC857A1E23D03A0F896 (_get_PropertyAsInt_t8313A617DB0A557D1D90360CC3A2553A83E89A62 * __this, intptr_t ___thisPtr0, int32_t* ___value1, const RuntimeMethod* method);
// System.Exception System.Runtime.InteropServices.Marshal::GetExceptionForHR(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * Marshal_GetExceptionForHR_mDC2E260C6A8FD8F26F3F97B95191A9BC329A726B (int32_t ___errorCode0, const RuntimeMethod* method);
// System.Int32 WinRT.Interop._method0::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _method0_Invoke_m2B0253C3391591B4A54DC4701F229CDCDA8C3A90 (_method0_t68810954DB248B2CD317989111F586F15200690B * __this, intptr_t ___thisPtr0, const RuntimeMethod* method);
// System.Int32 WinRT.Interop.IAsyncOperation::_OnCompleted(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IAsyncOperation__OnCompleted_m17475ECDB1599EBD553EB977AE3B4A6DAA99C5C9 (intptr_t ___thisPtr0, intptr_t ___operationPtr1, int32_t ___status2, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate<WinRT.Interop.IDelegate2_Obj_Enum>(!!0)
inline intptr_t Marshal_GetFunctionPointerForDelegate_TisIDelegate2_Obj_Enum_tDAE283FCD285A52E24B2CA3B344BF9784766348F_m3EB30148EDE6F6FFE970093AD002C30FB7A68A99 (IDelegate2_Obj_Enum_tDAE283FCD285A52E24B2CA3B344BF9784766348F * ___d0, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (IDelegate2_Obj_Enum_tDAE283FCD285A52E24B2CA3B344BF9784766348F *, const RuntimeMethod*))Marshal_GetFunctionPointerForDelegate_TisRuntimeObject_m48759D7F3A90CB3B0B0E73773B1E40147247A61B_gshared)(___d0, method);
}
// System.Void WinRT.Interop.DelegateProperty`1<WinRT.Interop.IAsyncOperation/CompletedHandler>::.ctor(System.Guid,WinRT.IObjectReference,WinRT.Interop._get_PropertyAsObject,WinRT.Interop._put_PropertyAsObject,System.IntPtr)
inline void DelegateProperty_1__ctor_mD4D1361B69BEE97BE29BA827AC82BAAEE422BFCC (DelegateProperty_1_tD9ACB29E556508E67776F11D93DD43F625DC8EA3 * __this, Guid_t  ___iid0, IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * ___obj1, _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * ___get_Delegate2, _put_PropertyAsObject_t50B08BD6BB7FBD450046CD44CB2AC7A3310CBFDC * ___put_Delegate3, intptr_t ___invokerPtr4, const RuntimeMethod* method)
{
	((  void (*) (DelegateProperty_1_tD9ACB29E556508E67776F11D93DD43F625DC8EA3 *, Guid_t , IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *, _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 *, _put_PropertyAsObject_t50B08BD6BB7FBD450046CD44CB2AC7A3310CBFDC *, intptr_t, const RuntimeMethod*))DelegateProperty_1__ctor_m89B4A8BD3115F5441C74BFC091EF8DFED6ADBA56_gshared)(__this, ___iid0, ___obj1, ___get_Delegate2, ___put_Delegate3, ___invokerPtr4, method);
}
// System.Void WinRT.Interop.IAsyncOperation/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m3ECBE7715CD7FB49745C6C2E95F109E978CAB38A (U3CU3Ec__DisplayClass4_0_tDA51E37F0B56D3B6D051DDF66541DD421F25C95F * __this, const RuntimeMethod* method);
// System.Void System.Action`1<WinRT.Interop.IAsyncOperation/CompletedHandler>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m85339D493212D3CFADF2109035BC1670DE9E2943 (Action_1_tE089E527B3CD85164C9FB409BE928F4D29731157 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE089E527B3CD85164C9FB409BE928F4D29731157 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 WinRT.Delegate::MarshalInvoke<WinRT.Interop.IAsyncOperation/CompletedHandler>(System.IntPtr,System.Action`1<T>)
inline int32_t Delegate_MarshalInvoke_TisCompletedHandler_t3E2FC9A9183C1D110D5835F69852DFD8A7B6964B_m3544FF55800B65F73582A5CB621FCFB6E975FE38 (intptr_t ___thisPtr0, Action_1_tE089E527B3CD85164C9FB409BE928F4D29731157 * ___invoke1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (intptr_t, Action_1_tE089E527B3CD85164C9FB409BE928F4D29731157 *, const RuntimeMethod*))Delegate_MarshalInvoke_TisRuntimeObject_mACB5BC27886FB298C30F6E92C6F3F960C7072873_gshared)(___thisPtr0, ___invoke1, method);
}
// System.Void WinRT.Interop.DelegateProperty`1<WinRT.Interop.IAsyncOperation/CompletedHandler>::set_Value(T)
inline void DelegateProperty_1_set_Value_mF785FDD12D2B41563D212D6631576AE634D5D1A6 (DelegateProperty_1_tD9ACB29E556508E67776F11D93DD43F625DC8EA3 * __this, CompletedHandler_t3E2FC9A9183C1D110D5835F69852DFD8A7B6964B * ___value0, const RuntimeMethod* method)
{
	((  void (*) (DelegateProperty_1_tD9ACB29E556508E67776F11D93DD43F625DC8EA3 *, CompletedHandler_t3E2FC9A9183C1D110D5835F69852DFD8A7B6964B *, const RuntimeMethod*))DelegateProperty_1_set_Value_m503C9CAAFA85395D27AD5D97C326187DFE657281_gshared)(__this, ___value0, method);
}
// System.Void WinRT.Interop.IDelegate2_Obj_Enum::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IDelegate2_Obj_Enum__ctor_m987ABDD112693FC0D01D80A35994A18945B37B8D (IDelegate2_Obj_Enum_tDAE283FCD285A52E24B2CA3B344BF9784766348F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void WinRT.Interop.IAsyncOperation/CompletedHandler::Invoke(WinRT.AsyncStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompletedHandler_Invoke_mB3790412C715745DBD8A71ADE4BED16168602152 (CompletedHandler_t3E2FC9A9183C1D110D5835F69852DFD8A7B6964B * __this, int32_t ___status0, const RuntimeMethod* method);
// System.Void WinRT.Interop.MonoPInvokeCallbackAttribute::set_DelegateType(System.Type)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute_set_DelegateType_m78D63230F4D3845F2192C8E16AC7D82422AD34E4_inline (MonoPInvokeCallbackAttribute_t771461BB3C5D4472CF3924A52CECFACE0057F061 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027 (intptr_t ___value0, const RuntimeMethod* method);
// System.Int32* WinRT.ModuleReference::AllocateRefCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* ModuleReference_AllocateRefCount_mF29677460F7566406254BFDCD44E47BB5BFECA3B (const RuntimeMethod* method);
// System.Void WinRT.ModuleReference::.ctor(System.Object,System.Int32*,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleReference__ctor_mC6B4F5DE9B3170003C2F02F53F1F8CA92BA6CEC2 (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 * __this, RuntimeObject * ___module0, int32_t* ___refCountPtr1, intptr_t ___nativeHandle2, const RuntimeMethod* method);
// System.Void WinRT.Platform::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_CoDecrementMTAUsage_m66889F502E9C529EF25F1E87C756262177570F67 (intptr_t ___cookie0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mEBAED0FCA8B8CCE7E96492474350BA35D14CF59C (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_m7F0C4B884FFB05BD231154CBDAEBCF1917019C21 (void* ___value0, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mAECA381FC0AA61139100EF468EE819A98431DE5E (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_mAECA381FC0AA61139100EF468EE819A98431DE5E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Lazy`1<System.Boolean>::.ctor(System.Func`1<!0>)
inline void Lazy_1__ctor_mA6DE95A47EAD7BE89179EDDD6E334481CDBCF83B (Lazy_1_tD86FA2DBC6DDD534D2365617EE6B309478B2DCAE * __this, Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * ___valueFactory0, const RuntimeMethod* method)
{
	((  void (*) (Lazy_1_tD86FA2DBC6DDD534D2365617EE6B309478B2DCAE *, Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *, const RuntimeMethod*))Lazy_1__ctor_mA6DE95A47EAD7BE89179EDDD6E334481CDBCF83B_gshared)(__this, ___valueFactory0, method);
}
// System.Void WinRT.Mono/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA5EA0533751F280E31A4E1F0DC963144919BE2E9 (U3CU3Ec_tCF1205861994CBA3AD829D9F29102894425047CC * __this, const RuntimeMethod* method);
// System.Void System.Lazy`1<System.Collections.Generic.HashSet`1<System.IntPtr>>::.ctor()
inline void Lazy_1__ctor_m0E54033725AC5EF4E0928FFFF699906B06A51DC6 (Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18 * __this, const RuntimeMethod* method)
{
	((  void (*) (Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18 *, const RuntimeMethod*))Lazy_1__ctor_mBC643E8CCF912ECB8085859416C1BEB6A75A6D27_gshared)(__this, method);
}
// System.Void System.Threading.EventWaitHandle::.ctor(System.Boolean,System.Threading.EventResetMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventWaitHandle__ctor_m9EA7029408FF8BBCB1F527C940FAC6C1796DE3C1 (EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98 * __this, bool ___initialState0, int32_t ___mode1, const RuntimeMethod* method);
// !0 System.Lazy`1<System.Boolean>::get_Value()
inline bool Lazy_1_get_Value_m72F242F54A5243549F688D7D976338368267CCD6 (Lazy_1_tD86FA2DBC6DDD534D2365617EE6B309478B2DCAE * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Lazy_1_tD86FA2DBC6DDD534D2365617EE6B309478B2DCAE *, const RuntimeMethod*))Lazy_1_get_Value_m72F242F54A5243549F688D7D976338368267CCD6_gshared)(__this, method);
}
// System.Int32 System.Runtime.InteropServices.Marshal::GetHRForLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_GetHRForLastWin32Error_mF4E03B3508326CCA86A4C10957D80F9CC677660E (const RuntimeMethod* method);
// T WinRT.Platform::GetProcAddress<WinRT.Mono/mono_thread_cleanup_initialize>(System.IntPtr)
inline mono_thread_cleanup_initialize_tE441F79B6973656DB9BD772C28288514CF2D0730 * Platform_GetProcAddress_Tismono_thread_cleanup_initialize_tE441F79B6973656DB9BD772C28288514CF2D0730_mF8A02DDD1EF4728107316C7CA2F1C9BDD404F75E (intptr_t ___moduleHandle0, const RuntimeMethod* method)
{
	return ((  mono_thread_cleanup_initialize_tE441F79B6973656DB9BD772C28288514CF2D0730 * (*) (intptr_t, const RuntimeMethod*))Platform_GetProcAddress_TisRuntimeObject_m081B633C43F87F8AB521E8AAED1E76DF4E48788E_gshared)(___moduleHandle0, method);
}
// System.Void WinRT.Mono/mono_thread_cleanup_initialize::Invoke(System.IntPtr*,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mono_thread_cleanup_initialize_Invoke_m36868BE05D2776F1F1466B7C96E8167C4D280FB2 (mono_thread_cleanup_initialize_tE441F79B6973656DB9BD772C28288514CF2D0730 * __this, intptr_t* ___threadCleanupRequested0, intptr_t* ___threadCleanupCompleted1, const RuntimeMethod* method);
// System.Void Microsoft.Win32.SafeHandles.SafeWaitHandle::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeWaitHandle__ctor_m7A02720A5A03917CCA8DD68406A124C4AB76191A (SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * __this, intptr_t ___existingHandle0, bool ___ownsHandle1, const RuntimeMethod* method);
// System.Void System.Threading.WaitHandleExtensions::SetSafeWaitHandle(System.Threading.WaitHandle,Microsoft.Win32.SafeHandles.SafeWaitHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitHandleExtensions_SetSafeWaitHandle_m4B8EED29E0631684BCB6884005049A8B86221974 (WaitHandle_tFD46B5B45A6BB296EA3A104C91DF2A7C03C10AC6 * ___waitHandle0, SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * ___value1, const RuntimeMethod* method);
// T WinRT.Platform::GetProcAddress<WinRT.Mono/mono_thread_cleanup_register>(System.IntPtr)
inline mono_thread_cleanup_register_t91E974F4BA3BB3C316698B53B7E3E91AFCF42EE7 * Platform_GetProcAddress_Tismono_thread_cleanup_register_t91E974F4BA3BB3C316698B53B7E3E91AFCF42EE7_m5B289DB8590CF009F46BCD2D455688D0360E0F8D (intptr_t ___moduleHandle0, const RuntimeMethod* method)
{
	return ((  mono_thread_cleanup_register_t91E974F4BA3BB3C316698B53B7E3E91AFCF42EE7 * (*) (intptr_t, const RuntimeMethod*))Platform_GetProcAddress_TisRuntimeObject_m081B633C43F87F8AB521E8AAED1E76DF4E48788E_gshared)(___moduleHandle0, method);
}
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.AppDomain::add_DomainUnload(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppDomain_add_DomainUnload_mF24D35CA25C3C808EC78600D0C603B396EC8765F (AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * __this, EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * ___value0, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m7959A86A39735296FC949EC86FDA42A6CFAAB94C (EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98 * __this, const RuntimeMethod* method);
// !0 System.Lazy`1<System.Collections.Generic.HashSet`1<System.IntPtr>>::get_Value()
inline HashSet_1_t1B66B9848B6D563944C506FA6F90487B3DB7396D * Lazy_1_get_Value_m67D23433D36E7578679746143DC11784AF19CABC (Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18 * __this, const RuntimeMethod* method)
{
	return ((  HashSet_1_t1B66B9848B6D563944C506FA6F90487B3DB7396D * (*) (Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18 *, const RuntimeMethod*))Lazy_1_get_Value_m0F1BF0071B879F33579BD0FD0AD8AC89635B1F5F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.IntPtr>::Clear()
inline void HashSet_1_Clear_m0396A90EB111C444993138A23C8BD61D2999CAA4 (HashSet_1_t1B66B9848B6D563944C506FA6F90487B3DB7396D * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t1B66B9848B6D563944C506FA6F90487B3DB7396D *, const RuntimeMethod*))HashSet_1_Clear_m0396A90EB111C444993138A23C8BD61D2999CAA4_gshared)(__this, method);
}
// System.IntPtr WinRT.Mono::mono_thread_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Mono_mono_thread_current_m4E924D5C3B1041C483432750DFDCFD8B7E723723 (const RuntimeMethod* method);
// System.Boolean WinRT.Mono::mono_thread_is_foreign(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mono_mono_thread_is_foreign_m368E42A1482E021F89CB92C88374CF2391B33202 (intptr_t ___threadPtr0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.IntPtr>::Contains(!0)
inline bool HashSet_1_Contains_mB409A367BF3EA85DF0977C23B8F36504BFDFDB5D (HashSet_1_t1B66B9848B6D563944C506FA6F90487B3DB7396D * __this, intptr_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t1B66B9848B6D563944C506FA6F90487B3DB7396D *, intptr_t, const RuntimeMethod*))HashSet_1_Contains_mB409A367BF3EA85DF0977C23B8F36504BFDFDB5D_gshared)(__this, ___item0, method);
}
// System.Void WinRT.Mono/mono_thread_cleanup_register::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mono_thread_cleanup_register_Invoke_m9F36DA9B4A89DD3745E9FD2DC57EDBB39AA83951 (mono_thread_cleanup_register_t91E974F4BA3BB3C316698B53B7E3E91AFCF42EE7 * __this, intptr_t ___threadPtr0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.IntPtr>::Add(!0)
inline bool HashSet_1_Add_mD1078C245664F32D05FE0B958860B9943FF366EA (HashSet_1_t1B66B9848B6D563944C506FA6F90487B3DB7396D * __this, intptr_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t1B66B9848B6D563944C506FA6F90487B3DB7396D *, intptr_t, const RuntimeMethod*))HashSet_1_Add_mD1078C245664F32D05FE0B958860B9943FF366EA_gshared)(__this, ___item0, method);
}
// System.Void WinRT.Platform/DotNETLinkage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNETLinkage__ctor_mBDC897175A88BF796DC17532269398E3C05EAC32 (DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293 * __this, const RuntimeMethod* method);
// System.Void WinRT.Platform/IL2CPPLinkage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IL2CPPLinkage__ctor_mEFDA61A7824DE2F431EFB13E945426026D960953 (IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB * __this, const RuntimeMethod* method);
// System.Int32 WinRT.Platform::GetHRForLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Platform_GetHRForLastWin32Error_m8250038252C4DC6060D1F858823872804F9835AE (const RuntimeMethod* method);
// System.Int32 WinRT.Platform/DotNETLinkage::AddDllDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_AddDllDirectory_m44DDD631D5E17547D3E064E402B881E6A4C0B6A1 (String_t* ___pathName0, const RuntimeMethod* method);
// System.IntPtr WinRT.Platform/DotNETLinkage::LoadLibraryExW(System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DotNETLinkage_LoadLibraryExW_m9E3390DE5FA6120FB0809CCC704F9AB0120DD4FD (String_t* ___fileName0, intptr_t ___fileHandle1, uint32_t ___flags2, const RuntimeMethod* method);
// System.Boolean WinRT.Platform/DotNETLinkage::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNETLinkage_FreeLibrary_m932DF6A2D730DD76DA6F1735CB77B10726D8A1BE (intptr_t ___moduleHandle0, const RuntimeMethod* method);
// System.IntPtr WinRT.Platform/DotNETLinkage::GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DotNETLinkage_GetProcAddress_m461D378570E3DA17476025EF9A0790F5F0148D57 (intptr_t ___moduleHandle0, String_t* ___functionName1, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/DotNETLinkage::CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_CoIncrementMTAUsage_mC891640474B2383E9E6FA895AE1B4F0D865BB9FC (intptr_t* ___cookie0, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/DotNETLinkage::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_CoDecrementMTAUsage_mE1164FBD9935CCC90E7E530B968B4A091F89541D (intptr_t ___cookie0, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/DotNETLinkage::RoGetActivationFactory(System.IntPtr,System.Guid&,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_RoGetActivationFactory_m739DDA252FE78F2A19B2A522B26F20C80BB8A067 (intptr_t ___runtimeClassId0, Guid_t * ___iid1, intptr_t* ___factory2, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/DotNETLinkage::WindowsCreateString(System.String,System.Int32,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_WindowsCreateString_mC32742B45111CA0AAF073F8681A9B7094DBA4203 (String_t* ___sourceString0, int32_t ___length1, intptr_t* ___hstring2, const RuntimeMethod* method);
// System.Char* WinRT.Platform/DotNETLinkage::WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* DotNETLinkage_WindowsGetStringRawBuffer_mAF2EADE48D5BD9BE5AF9DFB5126F276081CF7CA3 (intptr_t ___hstring0, uint32_t* ___length1, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/DotNETLinkage::WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_WindowsDeleteString_m962DD9B2573DB680B475101B04F7A633AA6496AD (intptr_t ___hstring0, const RuntimeMethod* method);
// System.IntPtr WinRT.Platform/IL2CPPLinkage::LoadLibraryExW(System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IL2CPPLinkage_LoadLibraryExW_m33217394071DB67784E91D8514DD8FB885845939 (String_t* ___fileName0, intptr_t ___fileHandle1, uint32_t ___flags2, const RuntimeMethod* method);
// System.Boolean WinRT.Platform/IL2CPPLinkage::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IL2CPPLinkage_FreeLibrary_m82A84BC6B51FBB3C3F735BEADC9100C98FA47AA6 (intptr_t ___moduleHandle0, const RuntimeMethod* method);
// System.IntPtr WinRT.Platform/IL2CPPLinkage::GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IL2CPPLinkage_GetProcAddress_mF2DE99124AC9DBCF074DBA5715FA9DF7C9D70AA2 (intptr_t ___moduleHandle0, String_t* ___functionName1, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/IL2CPPLinkage::CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_CoIncrementMTAUsage_m76A810338B0C713F6FD3FDBA59B0EB7CF45B1CF3 (intptr_t* ___cookie0, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/IL2CPPLinkage::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_CoDecrementMTAUsage_mF380B5AC44BCC0ECED22E7539790298D1DE58731 (intptr_t ___cookie0, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/IL2CPPLinkage::RoGetActivationFactory(System.IntPtr,System.Guid&,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_RoGetActivationFactory_m81D4458686DC6445CCA6E2EA733F0AD9EDC7A658 (intptr_t ___runtimeClassId0, Guid_t * ___iid1, intptr_t* ___factory2, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/IL2CPPLinkage::WindowsCreateString(System.String,System.Int32,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_WindowsCreateString_mB2BDC64F6673F09B1CDA825DAA5AE85536031B72 (String_t* ___sourceString0, int32_t ___length1, intptr_t* ___hstring2, const RuntimeMethod* method);
// System.Char* WinRT.Platform/IL2CPPLinkage::WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* IL2CPPLinkage_WindowsGetStringRawBuffer_m1CFB9E217058F11F7A46C83E71EC24213E058214 (intptr_t ___hstring0, uint32_t* ___length1, const RuntimeMethod* method);
// System.Int32 WinRT.Platform/IL2CPPLinkage::WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_WindowsDeleteString_m4AC71F6D8E4492DFF8C1D65127B3E17C54CAECE7 (intptr_t ___hstring0, const RuntimeMethod* method);
// T WinRT.WeakLazy`1<WinRT.WinrtModule>::get_Value()
inline WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C * WeakLazy_1_get_Value_mAA6BB939910F3C6367B566A1DB03AF627AA4C098 (WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153 * __this, const RuntimeMethod* method)
{
	return ((  WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C * (*) (WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153 *, const RuntimeMethod*))WeakLazy_1_get_Value_mC99F3C12B7165F4DCA490D16455078A6CE96D9E6_gshared)(__this, method);
}
// System.IntPtr WinRT.Platform::CoIncrementMTAUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Platform_CoIncrementMTAUsage_m1B89CA44FA1D3C0CAC2A9CEC561B1275F4C677B9 (const RuntimeMethod* method);
// System.IntPtr WinRT.Platform::RoGetActivationFactory(System.IntPtr,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Platform_RoGetActivationFactory_m79C4AC3A75F1498F6494256E5A113D5E6802A01D (intptr_t ___runtimeClassId0, Guid_t * ___iid1, const RuntimeMethod* method);
// System.Void WinRT.WeakLazy`1<WinRT.WinrtModule>::.ctor()
inline void WeakLazy_1__ctor_m9503513860B79E3247877B381D1E5D650F851D97 (WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153 * __this, const RuntimeMethod* method)
{
	((  void (*) (WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153 *, const RuntimeMethod*))WeakLazy_1__ctor_mBC3D3B0ED997527E8E339C3C41DDF498224291E7_gshared)(__this, method);
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mB9B8E70924F77E363E1E15E09AA0BB63BD179D2E (EmbeddedAttribute_t9FDB1E11FC6370067E1F2B823E82C173448B19E6 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
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
// Microsoft.Windows.Perception.Spatial.IAsyncOperationCompletedHandler_SpatialPerceptionAccessStatus
const Il2CppGuid IAsyncOperationCompletedHandler_SpatialPerceptionAccessStatus_t9E00B6F83BE625FF0D5CB58B3963B2628E7757CA::CLSID = { 0x6ced54c8, 0x7689, 0x525a, 0x80, 0xe1, 0x95, 0x6a, 0x9d, 0x85, 0xcd, 0x83 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics_Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISpatialAnchorExporterStatics__ctor_mA0CF33CD41FCD84E4A205F785E50BE482F98B3E2 (ISpatialAnchorExporterStatics_t678004F7593EA7BABBE321CEDC2B19C7CCBB29A7 * __this, ObjectReference_1_t530F1E336D8E2AE06C0F8AD45027396D9CCF945E * ___obj0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ObjectReference_1_t530F1E336D8E2AE06C0F8AD45027396D9CCF945E * L_0 = ___obj0;
		__this->set__obj_0(L_0);
		return;
	}
}
// System.Threading.Tasks.Task`1<Microsoft.Windows.Perception.Spatial.SpatialPerceptionAccessStatus> Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics::RequestAccessAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDD14A3F6150B55B689AA83F9A3274F946A7D67BE * ISpatialAnchorExporterStatics_RequestAccessAsync_mF3B451FDCCAA42B7CADDAD4712FB0B07CB22E424 (ISpatialAnchorExporterStatics_t678004F7593EA7BABBE321CEDC2B19C7CCBB29A7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ISpatialAnchorExporterStatics_RequestAccessAsync_mF3B451FDCCAA42B7CADDAD4712FB0B07CB22E424_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	Func_2_t1255F50D8FBA7BB723D85AB9EB862C75A432EEB2 * G_B2_0 = NULL;
	ObjectReference_1_tA170C4C2A9CD8CC3F9693CA7DE47AEB8FE892974 * G_B2_1 = NULL;
	Func_2_t1255F50D8FBA7BB723D85AB9EB862C75A432EEB2 * G_B1_0 = NULL;
	ObjectReference_1_tA170C4C2A9CD8CC3F9693CA7DE47AEB8FE892974 * G_B1_1 = NULL;
	{
		ObjectReference_1_t530F1E336D8E2AE06C0F8AD45027396D9CCF945E * L_0 = __this->get__obj_0();
		NullCheck(L_0);
		Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114 * L_1 = L_0->get_address_of_Vftbl_4();
		_RequestAccessAsync_tDBB08AC3923195BB0C653BF8E058D65837714F7C * L_2 = L_1->get_RequestAccessAsync_2();
		ObjectReference_1_t530F1E336D8E2AE06C0F8AD45027396D9CCF945E * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *)L_3)->get_ThisPtr_0();
		NullCheck(L_2);
		int32_t L_5 = _RequestAccessAsync_Invoke_mB60E057D741000CC04E711AA72685E111AC30F1C(L_2, (intptr_t)L_4, (intptr_t*)(intptr_t*)(((uintptr_t)(&V_0))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m4049F1FF511B6E0E557FC8426626DD9DFD87F102(L_5, /*hidden argument*/NULL);
		ObjectReference_1_t530F1E336D8E2AE06C0F8AD45027396D9CCF945E * L_6 = __this->get__obj_0();
		NullCheck(L_6);
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_7 = ((IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *)L_6)->get_Module_1();
		ObjectReference_1_tA170C4C2A9CD8CC3F9693CA7DE47AEB8FE892974 * L_8 = ObjectReference_1_Attach_m115234CCEBF5F5198AB3D1BA7BBA7BFF4EC9EB69(L_7, (intptr_t*)(&V_0), /*hidden argument*/ObjectReference_1_Attach_m115234CCEBF5F5198AB3D1BA7BBA7BFF4EC9EB69_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t0AF46CD18687150C5FBDA8D1EB3A088B5E49659A_il2cpp_TypeInfo_var);
		Func_2_t1255F50D8FBA7BB723D85AB9EB862C75A432EEB2 * L_9 = ((U3CU3Ec_t0AF46CD18687150C5FBDA8D1EB3A088B5E49659A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0AF46CD18687150C5FBDA8D1EB3A088B5E49659A_il2cpp_TypeInfo_var))->get_U3CU3E9__5_0_1();
		Func_2_t1255F50D8FBA7BB723D85AB9EB862C75A432EEB2 * L_10 = L_9;
		G_B1_0 = L_10;
		G_B1_1 = L_8;
		if (L_10)
		{
			G_B2_0 = L_10;
			G_B2_1 = L_8;
			goto IL_0059;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t0AF46CD18687150C5FBDA8D1EB3A088B5E49659A_il2cpp_TypeInfo_var);
		U3CU3Ec_t0AF46CD18687150C5FBDA8D1EB3A088B5E49659A * L_11 = ((U3CU3Ec_t0AF46CD18687150C5FBDA8D1EB3A088B5E49659A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0AF46CD18687150C5FBDA8D1EB3A088B5E49659A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t1255F50D8FBA7BB723D85AB9EB862C75A432EEB2 * L_12 = (Func_2_t1255F50D8FBA7BB723D85AB9EB862C75A432EEB2 *)il2cpp_codegen_object_new(Func_2_t1255F50D8FBA7BB723D85AB9EB862C75A432EEB2_il2cpp_TypeInfo_var);
		Func_2__ctor_m669CA673E04D739B1650A67730E208DB4A87B3B8(L_12, L_11, (intptr_t)((intptr_t)U3CU3Ec_U3CRequestAccessAsyncU3Eb__5_0_m8555D12409A122546EF5D4A00D6B605B97E3C3FD_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m669CA673E04D739B1650A67730E208DB4A87B3B8_RuntimeMethod_var);
		Func_2_t1255F50D8FBA7BB723D85AB9EB862C75A432EEB2 * L_13 = L_12;
		((U3CU3Ec_t0AF46CD18687150C5FBDA8D1EB3A088B5E49659A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0AF46CD18687150C5FBDA8D1EB3A088B5E49659A_il2cpp_TypeInfo_var))->set_U3CU3E9__5_0_1(L_13);
		G_B2_0 = L_13;
		G_B2_1 = G_B1_1;
	}

IL_0059:
	{
		IAsyncOperation_Enum_2_t19A0CBF95D678C4B1A6F0DFA63831B60FD7B63A9 * L_14 = (IAsyncOperation_Enum_2_t19A0CBF95D678C4B1A6F0DFA63831B60FD7B63A9 *)il2cpp_codegen_object_new(IAsyncOperation_Enum_2_t19A0CBF95D678C4B1A6F0DFA63831B60FD7B63A9_il2cpp_TypeInfo_var);
		IAsyncOperation_Enum_2__ctor_m5B94F9594DB224E2B67A843AEDBDC7B6B3FBB983(L_14, G_B2_1, G_B2_0, /*hidden argument*/IAsyncOperation_Enum_2__ctor_m5B94F9594DB224E2B67A843AEDBDC7B6B3FBB983_RuntimeMethod_var);
		NullCheck(L_14);
		Task_1_tDD14A3F6150B55B689AA83F9A3274F946A7D67BE * L_15 = _IAsyncOperation_2_AsTask_m2FF345E71722CB3ACD983BCAF7E87BCADD3152DD(L_14, /*hidden argument*/_IAsyncOperation_2_AsTask_m2FF345E71722CB3ACD983BCAF7E87BCADD3152DD_RuntimeMethod_var);
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
// System.Void Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m96EA7386195DB520E0C32D4C43589CC1DA65AB89 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m96EA7386195DB520E0C32D4C43589CC1DA65AB89_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0AF46CD18687150C5FBDA8D1EB3A088B5E49659A * L_0 = (U3CU3Ec_t0AF46CD18687150C5FBDA8D1EB3A088B5E49659A *)il2cpp_codegen_object_new(U3CU3Ec_t0AF46CD18687150C5FBDA8D1EB3A088B5E49659A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m967E22ED9F8ECB09C844A200BF0712D717ACF940(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t0AF46CD18687150C5FBDA8D1EB3A088B5E49659A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0AF46CD18687150C5FBDA8D1EB3A088B5E49659A_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m967E22ED9F8ECB09C844A200BF0712D717ACF940 (U3CU3Ec_t0AF46CD18687150C5FBDA8D1EB3A088B5E49659A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// Microsoft.Windows.Perception.Spatial.SpatialPerceptionAccessStatus Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics_<>c::<RequestAccessAsync>b__5_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CRequestAccessAsyncU3Eb__5_0_m8555D12409A122546EF5D4A00D6B605B97E3C3FD (U3CU3Ec_t0AF46CD18687150C5FBDA8D1EB3A088B5E49659A * __this, int32_t ___x0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___x0;
		return (int32_t)(L_0);
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
// Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics_Vftbl
const Il2CppGuid Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114::CLSID = { 0xed2507b8, 0x2475, 0x439c, 0x85, 0xff, 0x7f, 0xed, 0x34, 0x1f, 0xdc, 0x88 };


// Conversion methods for marshalling of: Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics/Vftbl
IL2CPP_EXTERN_C void Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114_marshal_pinvoke(const Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114& unmarshaled, Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___GetDefault_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetDefault_1()));
	marshaled.___RequestAccessAsync_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RequestAccessAsync_2()));
}
IL2CPP_EXTERN_C void Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114_marshal_pinvoke_back(const Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114_marshaled_pinvoke& marshaled, Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_GetDefault_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5>(marshaled.___GetDefault_1, _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5_il2cpp_TypeInfo_var));
	unmarshaled.set_RequestAccessAsync_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_RequestAccessAsync_tDBB08AC3923195BB0C653BF8E058D65837714F7C>(marshaled.___RequestAccessAsync_2, _RequestAccessAsync_tDBB08AC3923195BB0C653BF8E058D65837714F7C_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics/Vftbl
IL2CPP_EXTERN_C void Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114_marshal_pinvoke_cleanup(Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics/Vftbl
IL2CPP_EXTERN_C void Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114_marshal_com(const Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114& unmarshaled, Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___GetDefault_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetDefault_1()));
	marshaled.___RequestAccessAsync_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RequestAccessAsync_2()));
}
IL2CPP_EXTERN_C void Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114_marshal_com_back(const Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114_marshaled_com& marshaled, Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_GetDefault_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5>(marshaled.___GetDefault_1, _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5_il2cpp_TypeInfo_var));
	unmarshaled.set_RequestAccessAsync_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_RequestAccessAsync_tDBB08AC3923195BB0C653BF8E058D65837714F7C>(marshaled.___RequestAccessAsync_2, _RequestAccessAsync_tDBB08AC3923195BB0C653BF8E058D65837714F7C_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics/Vftbl
IL2CPP_EXTERN_C void Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114_marshal_com_cleanup(Vftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__RequestAccessAsync_tDBB08AC3923195BB0C653BF8E058D65837714F7C (_RequestAccessAsync_tDBB08AC3923195BB0C653BF8E058D65837714F7C * __this, intptr_t ___thisPtr0, intptr_t* ___operationPtr1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___operationPtr1);

	return returnValue;
}
// System.Void Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics_Vftbl__RequestAccessAsync::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _RequestAccessAsync__ctor_mA2937BA78277D789C86758D696F06E9604F37F96 (_RequestAccessAsync_tDBB08AC3923195BB0C653BF8E058D65837714F7C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics_Vftbl__RequestAccessAsync::Invoke(System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _RequestAccessAsync_Invoke_mB60E057D741000CC04E711AA72685E111AC30F1C (_RequestAccessAsync_tDBB08AC3923195BB0C653BF8E058D65837714F7C * __this, intptr_t ___thisPtr0, intptr_t* ___operationPtr1, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 2)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___operationPtr1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___operationPtr1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___operationPtr1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___operationPtr1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___operationPtr1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___operationPtr1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___thisPtr0) - 1), ___operationPtr1, targetMethod);
				}
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___operationPtr1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics_Vftbl__RequestAccessAsync::BeginInvoke(System.IntPtr,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _RequestAccessAsync_BeginInvoke_mCCD80FAF022A388D57B30189847B9D8ACCDFCB36 (_RequestAccessAsync_tDBB08AC3923195BB0C653BF8E058D65837714F7C * __this, intptr_t ___thisPtr0, intptr_t* ___operationPtr1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_RequestAccessAsync_BeginInvoke_mCCD80FAF022A388D57B30189847B9D8ACCDFCB36_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = ___operationPtr1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 Microsoft.Windows.Perception.Spatial.ISpatialAnchorExporterStatics_Vftbl__RequestAccessAsync::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _RequestAccessAsync_EndInvoke_mA29173E5CCE68835A638D475928D83434FDE1C9B (_RequestAccessAsync_tDBB08AC3923195BB0C653BF8E058D65837714F7C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem_Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ISpatialCoordinateSystem_t539C9440C0D44A165C8826A2A91B412F7AEA6A24 * ISpatialCoordinateSystem_op_Implicit_m8714EE75AE0CE3096281441DA14D673F33364536 (ObjectReference_1_tC6FFCE6D4A862A7EBF2A518A0AA80A0ED0D99A5A * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ISpatialCoordinateSystem_op_Implicit_m8714EE75AE0CE3096281441DA14D673F33364536_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_tC6FFCE6D4A862A7EBF2A518A0AA80A0ED0D99A5A * L_0 = ___obj0;
		ISpatialCoordinateSystem_t539C9440C0D44A165C8826A2A91B412F7AEA6A24 * L_1 = (ISpatialCoordinateSystem_t539C9440C0D44A165C8826A2A91B412F7AEA6A24 *)il2cpp_codegen_object_new(ISpatialCoordinateSystem_t539C9440C0D44A165C8826A2A91B412F7AEA6A24_il2cpp_TypeInfo_var);
		ISpatialCoordinateSystem__ctor_m1C852B99599AC8F75D3CF66ADDF35C9D4231FE6A(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem_Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISpatialCoordinateSystem__ctor_m1C852B99599AC8F75D3CF66ADDF35C9D4231FE6A (ISpatialCoordinateSystem_t539C9440C0D44A165C8826A2A91B412F7AEA6A24 * __this, ObjectReference_1_tC6FFCE6D4A862A7EBF2A518A0AA80A0ED0D99A5A * ___obj0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ObjectReference_1_tC6FFCE6D4A862A7EBF2A518A0AA80A0ED0D99A5A * L_0 = ___obj0;
		__this->set__obj_0(L_0);
		return;
	}
}
// System.Nullable`1<System.Numerics.Matrix4x4> Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem::TryGetTransformTo(Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC  ISpatialCoordinateSystem_TryGetTransformTo_m1CBBE876C881B902B5BBAF51BE63447868989801 (ISpatialCoordinateSystem_t539C9440C0D44A165C8826A2A91B412F7AEA6A24 * __this, ISpatialCoordinateSystem_t539C9440C0D44A165C8826A2A91B412F7AEA6A24 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ISpatialCoordinateSystem_TryGetTransformTo_m1CBBE876C881B902B5BBAF51BE63447868989801_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	ObjectReference_1_tC3B2ABBE63AA0BF3E73DF6371E9B4F68510B1003 * V_1 = NULL;
	Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		V_0 = (intptr_t)(0);
		ObjectReference_1_tC6FFCE6D4A862A7EBF2A518A0AA80A0ED0D99A5A * L_0 = __this->get__obj_0();
		NullCheck(L_0);
		Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2 * L_1 = L_0->get_address_of_Vftbl_4();
		_TryGetTransformTo_t2C72E101F6B0DFFFC29D72FD60EDDF21808FBCD9 * L_2 = L_1->get_TryGetTransformTo_1();
		ObjectReference_1_tC6FFCE6D4A862A7EBF2A518A0AA80A0ED0D99A5A * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *)L_3)->get_ThisPtr_0();
		ISpatialCoordinateSystem_t539C9440C0D44A165C8826A2A91B412F7AEA6A24 * L_5 = ___other0;
		NullCheck(L_5);
		ObjectReference_1_tC6FFCE6D4A862A7EBF2A518A0AA80A0ED0D99A5A * L_6 = L_5->get__obj_0();
		NullCheck(L_6);
		intptr_t L_7 = ((IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *)L_6)->get_ThisPtr_0();
		NullCheck(L_2);
		int32_t L_8 = _TryGetTransformTo_Invoke_mCC619E8AD1762B9C01F00D24147323D05344ED9A(L_2, (intptr_t)L_4, (intptr_t)L_7, (intptr_t*)(intptr_t*)(((uintptr_t)(&V_0))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m4049F1FF511B6E0E557FC8426626DD9DFD87F102(L_8, /*hidden argument*/NULL);
		intptr_t L_9 = V_0;
		bool L_10 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_9, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0084;
		}
	}
	{
		ObjectReference_1_tC6FFCE6D4A862A7EBF2A518A0AA80A0ED0D99A5A * L_11 = __this->get__obj_0();
		NullCheck(L_11);
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_12 = ((IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *)L_11)->get_Module_1();
		ObjectReference_1_tC3B2ABBE63AA0BF3E73DF6371E9B4F68510B1003 * L_13 = ObjectReference_1_Attach_m6C8B14FB255F90174B832AE9C975E14076D422B1(L_12, (intptr_t*)(&V_0), /*hidden argument*/ObjectReference_1_Attach_m6C8B14FB255F90174B832AE9C975E14076D422B1_RuntimeMethod_var);
		V_1 = L_13;
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0_il2cpp_TypeInfo_var);
		Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  L_14 = Matrix4x4_get_Identity_m2AA00AFFC1AB287EB10E93B25E2B34E7F39CBD0D_inline(/*hidden argument*/NULL);
		V_2 = L_14;
		ObjectReference_1_tC3B2ABBE63AA0BF3E73DF6371E9B4F68510B1003 * L_15 = V_1;
		NullCheck(L_15);
		IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D * L_16 = L_15->get_address_of_Vftbl_4();
		_get_PropertyAsMatrix4x4_t472E5893D3A5D8929770A973793E19BC6F35EFED * L_17 = L_16->get_get_Value_1();
		ObjectReference_1_tC3B2ABBE63AA0BF3E73DF6371E9B4F68510B1003 * L_18 = V_1;
		NullCheck(L_18);
		intptr_t L_19 = ((IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *)L_18)->get_ThisPtr_0();
		NullCheck(L_17);
		int32_t L_20 = _get_PropertyAsMatrix4x4_Invoke_mC0FBB04B56AB119DF0118BFF234CA5A203925737(L_17, (intptr_t)L_19, (Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 *)(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 *)(((uintptr_t)(&V_2))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m4049F1FF511B6E0E557FC8426626DD9DFD87F102(L_20, /*hidden argument*/NULL);
		Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  L_21 = V_2;
		Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC  L_22;
		memset((&L_22), 0, sizeof(L_22));
		Nullable_1__ctor_m36E93ED21F3B7474DE9962FE9EBA51651B2D89EC((&L_22), L_21, /*hidden argument*/Nullable_1__ctor_m36E93ED21F3B7474DE9962FE9EBA51651B2D89EC_RuntimeMethod_var);
		return L_22;
	}

IL_0084:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC ));
		Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC  L_23 = V_3;
		return L_23;
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
// Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem_Vftbl
const Il2CppGuid Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2::CLSID = { 0x69ebca4b, 0x60a3, 0x3586, 0xa6, 0x53, 0x59, 0xa7, 0xbd, 0x67, 0x6d, 0x7 };


// Conversion methods for marshalling of: Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem/Vftbl
IL2CPP_EXTERN_C void Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2_marshal_pinvoke(const Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2& unmarshaled, Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___TryGetTransformTo_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_TryGetTransformTo_1()));
}
IL2CPP_EXTERN_C void Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2_marshal_pinvoke_back(const Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2_marshaled_pinvoke& marshaled, Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_TryGetTransformTo_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_TryGetTransformTo_t2C72E101F6B0DFFFC29D72FD60EDDF21808FBCD9>(marshaled.___TryGetTransformTo_1, _TryGetTransformTo_t2C72E101F6B0DFFFC29D72FD60EDDF21808FBCD9_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem/Vftbl
IL2CPP_EXTERN_C void Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2_marshal_pinvoke_cleanup(Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem/Vftbl
IL2CPP_EXTERN_C void Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2_marshal_com(const Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2& unmarshaled, Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___TryGetTransformTo_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_TryGetTransformTo_1()));
}
IL2CPP_EXTERN_C void Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2_marshal_com_back(const Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2_marshaled_com& marshaled, Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_TryGetTransformTo_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_TryGetTransformTo_t2C72E101F6B0DFFFC29D72FD60EDDF21808FBCD9>(marshaled.___TryGetTransformTo_1, _TryGetTransformTo_t2C72E101F6B0DFFFC29D72FD60EDDF21808FBCD9_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem/Vftbl
IL2CPP_EXTERN_C void Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2_marshal_com_cleanup(Vftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__TryGetTransformTo_t2C72E101F6B0DFFFC29D72FD60EDDF21808FBCD9 (_TryGetTransformTo_t2C72E101F6B0DFFFC29D72FD60EDDF21808FBCD9 * __this, intptr_t ___thisPtr0, intptr_t ___targetPtr1, intptr_t* ___value2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___targetPtr1, ___value2);

	return returnValue;
}
// System.Void Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem_Vftbl__TryGetTransformTo::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TryGetTransformTo__ctor_m2F65014603DF6A2BD4E6013B0B73E3B216F6369D (_TryGetTransformTo_t2C72E101F6B0DFFFC29D72FD60EDDF21808FBCD9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem_Vftbl__TryGetTransformTo::Invoke(System.IntPtr,System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _TryGetTransformTo_Invoke_mCC619E8AD1762B9C01F00D24147323D05344ED9A (_TryGetTransformTo_t2C72E101F6B0DFFFC29D72FD60EDDF21808FBCD9 * __this, intptr_t ___thisPtr0, intptr_t ___targetPtr1, intptr_t* ___value2, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___targetPtr1, ___value2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___targetPtr1, ___value2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___targetPtr1, ___value2);
					else
						result = GenericVirtFuncInvoker3< int32_t, intptr_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___targetPtr1, ___value2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, intptr_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___targetPtr1, ___value2);
					else
						result = VirtFuncInvoker3< int32_t, intptr_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___targetPtr1, ___value2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___thisPtr0) - 1), ___targetPtr1, ___value2, targetMethod);
				}
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___targetPtr1, ___value2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem_Vftbl__TryGetTransformTo::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _TryGetTransformTo_BeginInvoke_mB7096B37CD3A29E867389C8C2845CFFA492F57AC (_TryGetTransformTo_t2C72E101F6B0DFFFC29D72FD60EDDF21808FBCD9 * __this, intptr_t ___thisPtr0, intptr_t ___targetPtr1, intptr_t* ___value2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_TryGetTransformTo_BeginInvoke_mB7096B37CD3A29E867389C8C2845CFFA492F57AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___targetPtr1);
	__d_args[2] = ___value2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem_Vftbl__TryGetTransformTo::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _TryGetTransformTo_EndInvoke_mBFDEE49945A607F2B6601568A39E5251004A228A (_TryGetTransformTo_t2C72E101F6B0DFFFC29D72FD60EDDF21808FBCD9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISpatialGraphInteropPreviewStatics__ctor_m4B7284B1934A58B793814C0691D8C9428E2CD4C3 (ISpatialGraphInteropPreviewStatics_tA6235090F28BD06BD7C7946FD10E0986B7DE0AF9 * __this, ObjectReference_1_tD07D53CD6B0E358A8023F2234DAA8FBEE947EABB * ___obj0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ObjectReference_1_tD07D53CD6B0E358A8023F2234DAA8FBEE947EABB * L_0 = ___obj0;
		__this->set__obj_0(L_0);
		return;
	}
}
// Microsoft.Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics::CreateCoordinateSystemForNode(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialCoordinateSystem_t74AEBD257DE2AFEB649A5505161BE715E0BF46C8 * ISpatialGraphInteropPreviewStatics_CreateCoordinateSystemForNode_m00363BA49C3195F24BB8717F0D0BA29B48A17FEA (ISpatialGraphInteropPreviewStatics_tA6235090F28BD06BD7C7946FD10E0986B7DE0AF9 * __this, Guid_t  ___nodeId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ISpatialGraphInteropPreviewStatics_CreateCoordinateSystemForNode_m00363BA49C3195F24BB8717F0D0BA29B48A17FEA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		V_0 = (intptr_t)(0);
		ObjectReference_1_tD07D53CD6B0E358A8023F2234DAA8FBEE947EABB * L_0 = __this->get__obj_0();
		NullCheck(L_0);
		Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C * L_1 = L_0->get_address_of_Vftbl_4();
		_CreateCoordinateSystemForNode_t7F54D94DA8BC650182C6CAB5914643492CB82914 * L_2 = L_1->get_CreateCoordinateSystemForNode_1();
		ObjectReference_1_tD07D53CD6B0E358A8023F2234DAA8FBEE947EABB * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *)L_3)->get_ThisPtr_0();
		Guid_t  L_5 = ___nodeId0;
		NullCheck(L_2);
		int32_t L_6 = _CreateCoordinateSystemForNode_Invoke_m00B5E806EC5FB415B9281064A82EBDD024A0A9E3(L_2, (intptr_t)L_4, L_5, (intptr_t*)(intptr_t*)(((uintptr_t)(&V_0))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m4049F1FF511B6E0E557FC8426626DD9DFD87F102(L_6, /*hidden argument*/NULL);
		ObjectReference_1_tD07D53CD6B0E358A8023F2234DAA8FBEE947EABB * L_7 = __this->get__obj_0();
		NullCheck(L_7);
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_8 = ((IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *)L_7)->get_Module_1();
		ObjectReference_1_tC6FFCE6D4A862A7EBF2A518A0AA80A0ED0D99A5A * L_9 = ObjectReference_1_Attach_m0F8E9999482DEF775C007549487B061335BEAD3A(L_8, (intptr_t*)(&V_0), /*hidden argument*/ObjectReference_1_Attach_m0F8E9999482DEF775C007549487B061335BEAD3A_RuntimeMethod_var);
		ISpatialCoordinateSystem_t539C9440C0D44A165C8826A2A91B412F7AEA6A24 * L_10 = ISpatialCoordinateSystem_op_Implicit_m8714EE75AE0CE3096281441DA14D673F33364536(L_9, /*hidden argument*/NULL);
		SpatialCoordinateSystem_t74AEBD257DE2AFEB649A5505161BE715E0BF46C8 * L_11 = (SpatialCoordinateSystem_t74AEBD257DE2AFEB649A5505161BE715E0BF46C8 *)il2cpp_codegen_object_new(SpatialCoordinateSystem_t74AEBD257DE2AFEB649A5505161BE715E0BF46C8_il2cpp_TypeInfo_var);
		SpatialCoordinateSystem__ctor_mF9B165578C25CCCCC9B73DAFBECE36EBFDC6D388(L_11, L_10, /*hidden argument*/NULL);
		return L_11;
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
// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl
const Il2CppGuid Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C::CLSID = { 0xc042644c, 0x20d8, 0x4ed0, 0xae, 0xf7, 0x68, 0x5, 0xb8, 0xe5, 0x3f, 0x55 };


// Conversion methods for marshalling of: Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics/Vftbl
IL2CPP_EXTERN_C void Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C_marshal_pinvoke(const Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C& unmarshaled, Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___CreateCoordinateSystemForNode_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_CreateCoordinateSystemForNode_1()));
	marshaled.___CreateCoordinateSystemForNodeWithPosition_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_CreateCoordinateSystemForNodeWithPosition_2()));
	marshaled.___CreateCoordinateSystemForNodeWithPositionAndOrientation_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_CreateCoordinateSystemForNodeWithPositionAndOrientation_3()));
	marshaled.___CreateLocatorForNode_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_CreateLocatorForNode_4()));
}
IL2CPP_EXTERN_C void Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C_marshal_pinvoke_back(const Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C_marshaled_pinvoke& marshaled, Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_CreateCoordinateSystemForNode_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_CreateCoordinateSystemForNode_t7F54D94DA8BC650182C6CAB5914643492CB82914>(marshaled.___CreateCoordinateSystemForNode_1, _CreateCoordinateSystemForNode_t7F54D94DA8BC650182C6CAB5914643492CB82914_il2cpp_TypeInfo_var));
	unmarshaled.set_CreateCoordinateSystemForNodeWithPosition_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_CreateCoordinateSystemForNodeWithPosition_t1F5C2245F6FD546C93C26C838E22EF8B9E00AB11>(marshaled.___CreateCoordinateSystemForNodeWithPosition_2, _CreateCoordinateSystemForNodeWithPosition_t1F5C2245F6FD546C93C26C838E22EF8B9E00AB11_il2cpp_TypeInfo_var));
	unmarshaled.set_CreateCoordinateSystemForNodeWithPositionAndOrientation_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_CreateCoordinateSystemForNodeWithPositionAndOrientation_t0FBAD401AAEF6FAAA886FA5C41A945FACC6CA633>(marshaled.___CreateCoordinateSystemForNodeWithPositionAndOrientation_3, _CreateCoordinateSystemForNodeWithPositionAndOrientation_t0FBAD401AAEF6FAAA886FA5C41A945FACC6CA633_il2cpp_TypeInfo_var));
	unmarshaled.set_CreateLocatorForNode_4(il2cpp_codegen_marshal_function_ptr_to_delegate<_CreateLocatorForNode_tA6613267E6F4CCDD4347EAFAC82D482C417F9E0C>(marshaled.___CreateLocatorForNode_4, _CreateLocatorForNode_tA6613267E6F4CCDD4347EAFAC82D482C417F9E0C_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics/Vftbl
IL2CPP_EXTERN_C void Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C_marshal_pinvoke_cleanup(Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics/Vftbl
IL2CPP_EXTERN_C void Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C_marshal_com(const Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C& unmarshaled, Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___CreateCoordinateSystemForNode_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_CreateCoordinateSystemForNode_1()));
	marshaled.___CreateCoordinateSystemForNodeWithPosition_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_CreateCoordinateSystemForNodeWithPosition_2()));
	marshaled.___CreateCoordinateSystemForNodeWithPositionAndOrientation_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_CreateCoordinateSystemForNodeWithPositionAndOrientation_3()));
	marshaled.___CreateLocatorForNode_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_CreateLocatorForNode_4()));
}
IL2CPP_EXTERN_C void Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C_marshal_com_back(const Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C_marshaled_com& marshaled, Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_CreateCoordinateSystemForNode_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_CreateCoordinateSystemForNode_t7F54D94DA8BC650182C6CAB5914643492CB82914>(marshaled.___CreateCoordinateSystemForNode_1, _CreateCoordinateSystemForNode_t7F54D94DA8BC650182C6CAB5914643492CB82914_il2cpp_TypeInfo_var));
	unmarshaled.set_CreateCoordinateSystemForNodeWithPosition_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_CreateCoordinateSystemForNodeWithPosition_t1F5C2245F6FD546C93C26C838E22EF8B9E00AB11>(marshaled.___CreateCoordinateSystemForNodeWithPosition_2, _CreateCoordinateSystemForNodeWithPosition_t1F5C2245F6FD546C93C26C838E22EF8B9E00AB11_il2cpp_TypeInfo_var));
	unmarshaled.set_CreateCoordinateSystemForNodeWithPositionAndOrientation_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_CreateCoordinateSystemForNodeWithPositionAndOrientation_t0FBAD401AAEF6FAAA886FA5C41A945FACC6CA633>(marshaled.___CreateCoordinateSystemForNodeWithPositionAndOrientation_3, _CreateCoordinateSystemForNodeWithPositionAndOrientation_t0FBAD401AAEF6FAAA886FA5C41A945FACC6CA633_il2cpp_TypeInfo_var));
	unmarshaled.set_CreateLocatorForNode_4(il2cpp_codegen_marshal_function_ptr_to_delegate<_CreateLocatorForNode_tA6613267E6F4CCDD4347EAFAC82D482C417F9E0C>(marshaled.___CreateLocatorForNode_4, _CreateLocatorForNode_tA6613267E6F4CCDD4347EAFAC82D482C417F9E0C_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics/Vftbl
IL2CPP_EXTERN_C void Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C_marshal_com_cleanup(Vftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__CreateCoordinateSystemForNode_t7F54D94DA8BC650182C6CAB5914643492CB82914 (_CreateCoordinateSystemForNode_t7F54D94DA8BC650182C6CAB5914643492CB82914 * __this, intptr_t ___thisPtr0, Guid_t  ___nodeId1, intptr_t* ___result2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, Guid_t , intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___nodeId1, ___result2);

	return returnValue;
}
// System.Void Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl__CreateCoordinateSystemForNode::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _CreateCoordinateSystemForNode__ctor_m8D55F9A52942572AF2B4C058A38768485E191403 (_CreateCoordinateSystemForNode_t7F54D94DA8BC650182C6CAB5914643492CB82914 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl__CreateCoordinateSystemForNode::Invoke(System.IntPtr,System.Guid,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _CreateCoordinateSystemForNode_Invoke_m00B5E806EC5FB415B9281064A82EBDD024A0A9E3 (_CreateCoordinateSystemForNode_t7F54D94DA8BC650182C6CAB5914643492CB82914 * __this, intptr_t ___thisPtr0, Guid_t  ___nodeId1, intptr_t* ___result2, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (intptr_t, Guid_t , intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___nodeId1, ___result2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, Guid_t , intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___nodeId1, ___result2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, Guid_t , intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___nodeId1, ___result2);
					else
						result = GenericVirtFuncInvoker3< int32_t, intptr_t, Guid_t , intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___nodeId1, ___result2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, intptr_t, Guid_t , intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___nodeId1, ___result2);
					else
						result = VirtFuncInvoker3< int32_t, intptr_t, Guid_t , intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___nodeId1, ___result2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, Guid_t , intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___thisPtr0) - 1), ___nodeId1, ___result2, targetMethod);
				}
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, Guid_t , intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___nodeId1, ___result2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl__CreateCoordinateSystemForNode::BeginInvoke(System.IntPtr,System.Guid,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _CreateCoordinateSystemForNode_BeginInvoke_mE1330A5AEE209F198F482094E832B30AE818E580 (_CreateCoordinateSystemForNode_t7F54D94DA8BC650182C6CAB5914643492CB82914 * __this, intptr_t ___thisPtr0, Guid_t  ___nodeId1, intptr_t* ___result2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_CreateCoordinateSystemForNode_BeginInvoke_mE1330A5AEE209F198F482094E832B30AE818E580_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(Guid_t_il2cpp_TypeInfo_var, &___nodeId1);
	__d_args[2] = ___result2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl__CreateCoordinateSystemForNode::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _CreateCoordinateSystemForNode_EndInvoke_m3D031A48E08A36FC3138183F9534629F483AA847 (_CreateCoordinateSystemForNode_t7F54D94DA8BC650182C6CAB5914643492CB82914 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__CreateCoordinateSystemForNodeWithPosition_t1F5C2245F6FD546C93C26C838E22EF8B9E00AB11 (_CreateCoordinateSystemForNodeWithPosition_t1F5C2245F6FD546C93C26C838E22EF8B9E00AB11 * __this, intptr_t ___thisPtr0, Guid_t  ___nodeId1, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___position2, intptr_t* ___result3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, Guid_t , Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___nodeId1, ___position2, ___result3);

	return returnValue;
}
// System.Void Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl__CreateCoordinateSystemForNodeWithPosition::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _CreateCoordinateSystemForNodeWithPosition__ctor_mE4AE82B1B3C347E078AEF3654816826D70E261FF (_CreateCoordinateSystemForNodeWithPosition_t1F5C2245F6FD546C93C26C838E22EF8B9E00AB11 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl__CreateCoordinateSystemForNodeWithPosition::Invoke(System.IntPtr,System.Guid,System.Numerics.Vector3,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _CreateCoordinateSystemForNodeWithPosition_Invoke_m0617B67342CA0F9D079A15EAC245286BA70E6C31 (_CreateCoordinateSystemForNodeWithPosition_t1F5C2245F6FD546C93C26C838E22EF8B9E00AB11 * __this, intptr_t ___thisPtr0, Guid_t  ___nodeId1, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___position2, intptr_t* ___result3, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 4)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, Guid_t , Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___nodeId1, ___position2, ___result3, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, Guid_t , Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___nodeId1, ___position2, ___result3, targetMethod);
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
						result = GenericInterfaceFuncInvoker4< int32_t, intptr_t, Guid_t , Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___nodeId1, ___position2, ___result3);
					else
						result = GenericVirtFuncInvoker4< int32_t, intptr_t, Guid_t , Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___nodeId1, ___position2, ___result3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< int32_t, intptr_t, Guid_t , Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___nodeId1, ___position2, ___result3);
					else
						result = VirtFuncInvoker4< int32_t, intptr_t, Guid_t , Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___nodeId1, ___position2, ___result3);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, Guid_t , Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___thisPtr0) - 1), ___nodeId1, ___position2, ___result3, targetMethod);
				}
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, Guid_t , Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___nodeId1, ___position2, ___result3, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl__CreateCoordinateSystemForNodeWithPosition::BeginInvoke(System.IntPtr,System.Guid,System.Numerics.Vector3,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _CreateCoordinateSystemForNodeWithPosition_BeginInvoke_m37201E86FC4E5B2887253B00A9D0A1C86A946ABB (_CreateCoordinateSystemForNodeWithPosition_t1F5C2245F6FD546C93C26C838E22EF8B9E00AB11 * __this, intptr_t ___thisPtr0, Guid_t  ___nodeId1, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___position2, intptr_t* ___result3, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_CreateCoordinateSystemForNodeWithPosition_BeginInvoke_m37201E86FC4E5B2887253B00A9D0A1C86A946ABB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(Guid_t_il2cpp_TypeInfo_var, &___nodeId1);
	__d_args[2] = Box(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65_il2cpp_TypeInfo_var, &___position2);
	__d_args[3] = ___result3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Int32 Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl__CreateCoordinateSystemForNodeWithPosition::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _CreateCoordinateSystemForNodeWithPosition_EndInvoke_m4415CDC306E118EC02ECEAB6650A1C14EA32E788 (_CreateCoordinateSystemForNodeWithPosition_t1F5C2245F6FD546C93C26C838E22EF8B9E00AB11 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__CreateCoordinateSystemForNodeWithPositionAndOrientation_t0FBAD401AAEF6FAAA886FA5C41A945FACC6CA633 (_CreateCoordinateSystemForNodeWithPositionAndOrientation_t0FBAD401AAEF6FAAA886FA5C41A945FACC6CA633 * __this, intptr_t ___thisPtr0, Guid_t  ___nodeId1, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___position2, Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A  ___orientation3, intptr_t* ___result4, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, Guid_t , Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A , intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___nodeId1, ___position2, ___orientation3, ___result4);

	return returnValue;
}
// System.Void Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl__CreateCoordinateSystemForNodeWithPositionAndOrientation::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _CreateCoordinateSystemForNodeWithPositionAndOrientation__ctor_mBCDF4E4CA70ED6C689F491CFBDF9A2EBEFA27E3A (_CreateCoordinateSystemForNodeWithPositionAndOrientation_t0FBAD401AAEF6FAAA886FA5C41A945FACC6CA633 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl__CreateCoordinateSystemForNodeWithPositionAndOrientation::Invoke(System.IntPtr,System.Guid,System.Numerics.Vector3,System.Numerics.Quaternion,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _CreateCoordinateSystemForNodeWithPositionAndOrientation_Invoke_m5F690DAEEEC204735A04DCB21A2290D6D5DD5ADF (_CreateCoordinateSystemForNodeWithPositionAndOrientation_t0FBAD401AAEF6FAAA886FA5C41A945FACC6CA633 * __this, intptr_t ___thisPtr0, Guid_t  ___nodeId1, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___position2, Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A  ___orientation3, intptr_t* ___result4, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 5)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, Guid_t , Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A , intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___nodeId1, ___position2, ___orientation3, ___result4, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, Guid_t , Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A , intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___nodeId1, ___position2, ___orientation3, ___result4, targetMethod);
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
						result = GenericInterfaceFuncInvoker5< int32_t, intptr_t, Guid_t , Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A , intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___nodeId1, ___position2, ___orientation3, ___result4);
					else
						result = GenericVirtFuncInvoker5< int32_t, intptr_t, Guid_t , Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A , intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___nodeId1, ___position2, ___orientation3, ___result4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< int32_t, intptr_t, Guid_t , Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A , intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___nodeId1, ___position2, ___orientation3, ___result4);
					else
						result = VirtFuncInvoker5< int32_t, intptr_t, Guid_t , Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A , intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___nodeId1, ___position2, ___orientation3, ___result4);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, Guid_t , Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A , intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___thisPtr0) - 1), ___nodeId1, ___position2, ___orientation3, ___result4, targetMethod);
				}
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, Guid_t , Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A , intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___nodeId1, ___position2, ___orientation3, ___result4, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl__CreateCoordinateSystemForNodeWithPositionAndOrientation::BeginInvoke(System.IntPtr,System.Guid,System.Numerics.Vector3,System.Numerics.Quaternion,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _CreateCoordinateSystemForNodeWithPositionAndOrientation_BeginInvoke_m4CC48673FA263F631308B74969F5AA54A0D6FDB2 (_CreateCoordinateSystemForNodeWithPositionAndOrientation_t0FBAD401AAEF6FAAA886FA5C41A945FACC6CA633 * __this, intptr_t ___thisPtr0, Guid_t  ___nodeId1, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___position2, Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A  ___orientation3, intptr_t* ___result4, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_CreateCoordinateSystemForNodeWithPositionAndOrientation_BeginInvoke_m4CC48673FA263F631308B74969F5AA54A0D6FDB2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(Guid_t_il2cpp_TypeInfo_var, &___nodeId1);
	__d_args[2] = Box(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65_il2cpp_TypeInfo_var, &___position2);
	__d_args[3] = Box(Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A_il2cpp_TypeInfo_var, &___orientation3);
	__d_args[4] = ___result4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// System.Int32 Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl__CreateCoordinateSystemForNodeWithPositionAndOrientation::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _CreateCoordinateSystemForNodeWithPositionAndOrientation_EndInvoke_mC9ED1FB3B626E332E062FEE992CB02C026CB05FC (_CreateCoordinateSystemForNodeWithPositionAndOrientation_t0FBAD401AAEF6FAAA886FA5C41A945FACC6CA633 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__CreateLocatorForNode_tA6613267E6F4CCDD4347EAFAC82D482C417F9E0C (_CreateLocatorForNode_tA6613267E6F4CCDD4347EAFAC82D482C417F9E0C * __this, intptr_t ___thisPtr0, Guid_t  ___nodeId1, intptr_t* ___result2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, Guid_t , intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___nodeId1, ___result2);

	return returnValue;
}
// System.Void Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl__CreateLocatorForNode::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _CreateLocatorForNode__ctor_m85C1B6DB77FC722E828FC0155E6028935969F713 (_CreateLocatorForNode_tA6613267E6F4CCDD4347EAFAC82D482C417F9E0C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl__CreateLocatorForNode::Invoke(System.IntPtr,System.Guid,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _CreateLocatorForNode_Invoke_m940E9DAF9E7F5451778716CD59AE9F3A1E858EC8 (_CreateLocatorForNode_tA6613267E6F4CCDD4347EAFAC82D482C417F9E0C * __this, intptr_t ___thisPtr0, Guid_t  ___nodeId1, intptr_t* ___result2, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (intptr_t, Guid_t , intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___nodeId1, ___result2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, Guid_t , intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___nodeId1, ___result2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, Guid_t , intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___nodeId1, ___result2);
					else
						result = GenericVirtFuncInvoker3< int32_t, intptr_t, Guid_t , intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___nodeId1, ___result2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, intptr_t, Guid_t , intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___nodeId1, ___result2);
					else
						result = VirtFuncInvoker3< int32_t, intptr_t, Guid_t , intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___nodeId1, ___result2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, Guid_t , intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___thisPtr0) - 1), ___nodeId1, ___result2, targetMethod);
				}
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, Guid_t , intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___nodeId1, ___result2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl__CreateLocatorForNode::BeginInvoke(System.IntPtr,System.Guid,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _CreateLocatorForNode_BeginInvoke_m5B93633654EB88E67975081F0BDD814DB6F5780B (_CreateLocatorForNode_tA6613267E6F4CCDD4347EAFAC82D482C417F9E0C * __this, intptr_t ___thisPtr0, Guid_t  ___nodeId1, intptr_t* ___result2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_CreateLocatorForNode_BeginInvoke_m5B93633654EB88E67975081F0BDD814DB6F5780B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(Guid_t_il2cpp_TypeInfo_var, &___nodeId1);
	__d_args[2] = ___result2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics_Vftbl__CreateLocatorForNode::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _CreateLocatorForNode_EndInvoke_m2E6DA84CC01D1E0DE706F363F348E1A340C7AE0D (_CreateLocatorForNode_tA6613267E6F4CCDD4347EAFAC82D482C417F9E0C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2 Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2::op_Implicit(WinRT.IObjectReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ISpatialGraphInteropPreviewStatics2_t9F8CFA5570E00335B319319183ED55A7BE64ED16 * ISpatialGraphInteropPreviewStatics2_op_Implicit_m4979FB726D7748AD125E55E3A0E2A34C5247E27E (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ISpatialGraphInteropPreviewStatics2_op_Implicit_m4979FB726D7748AD125E55E3A0E2A34C5247E27E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * L_0 = ___obj0;
		NullCheck(L_0);
		ObjectReference_1_t7B9167D5590FAF87529386F35A3F649591B101B2 * L_1 = IObjectReference_As_TisVftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042_m48F8449253BD48F0D36E61D2E0460C4559570CAD(L_0, /*hidden argument*/IObjectReference_As_TisVftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042_m48F8449253BD48F0D36E61D2E0460C4559570CAD_RuntimeMethod_var);
		ISpatialGraphInteropPreviewStatics2_t9F8CFA5570E00335B319319183ED55A7BE64ED16 * L_2 = ISpatialGraphInteropPreviewStatics2_op_Implicit_m2353780E3D0E344DA9972D21473FFB59F64D0800(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2 Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2::op_Implicit(WinRT.ObjectReference`1<Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2_Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ISpatialGraphInteropPreviewStatics2_t9F8CFA5570E00335B319319183ED55A7BE64ED16 * ISpatialGraphInteropPreviewStatics2_op_Implicit_m2353780E3D0E344DA9972D21473FFB59F64D0800 (ObjectReference_1_t7B9167D5590FAF87529386F35A3F649591B101B2 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ISpatialGraphInteropPreviewStatics2_op_Implicit_m2353780E3D0E344DA9972D21473FFB59F64D0800_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_t7B9167D5590FAF87529386F35A3F649591B101B2 * L_0 = ___obj0;
		ISpatialGraphInteropPreviewStatics2_t9F8CFA5570E00335B319319183ED55A7BE64ED16 * L_1 = (ISpatialGraphInteropPreviewStatics2_t9F8CFA5570E00335B319319183ED55A7BE64ED16 *)il2cpp_codegen_object_new(ISpatialGraphInteropPreviewStatics2_t9F8CFA5570E00335B319319183ED55A7BE64ED16_il2cpp_TypeInfo_var);
		ISpatialGraphInteropPreviewStatics2__ctor_mBC8DB73D459702145AC0C398132BDBE9B6F3F7A8(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2::.ctor(WinRT.ObjectReference`1<Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2_Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISpatialGraphInteropPreviewStatics2__ctor_mBC8DB73D459702145AC0C398132BDBE9B6F3F7A8 (ISpatialGraphInteropPreviewStatics2_t9F8CFA5570E00335B319319183ED55A7BE64ED16 * __this, ObjectReference_1_t7B9167D5590FAF87529386F35A3F649591B101B2 * ___obj0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ObjectReference_1_t7B9167D5590FAF87529386F35A3F649591B101B2 * L_0 = ___obj0;
		__this->set__obj_0(L_0);
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
// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2_Vftbl
const Il2CppGuid Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042::CLSID = { 0x2490b15f, 0x6cbd, 0x4b1e, 0xb7, 0x65, 0x31, 0xe4, 0x62, 0xa3, 0x2d, 0xf2 };


// Conversion methods for marshalling of: Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2/Vftbl
IL2CPP_EXTERN_C void Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042_marshal_pinvoke(const Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042& unmarshaled, Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___TryCreateFrameOfReference_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_TryCreateFrameOfReference_1()));
	marshaled.___TryCreateFrameOfReferenceWithPosition_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_TryCreateFrameOfReferenceWithPosition_2()));
	marshaled.___TryCreateFrameOfReferenceWithPositionAndOrientation_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_TryCreateFrameOfReferenceWithPositionAndOrientation_3()));
}
IL2CPP_EXTERN_C void Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042_marshal_pinvoke_back(const Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042_marshaled_pinvoke& marshaled, Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_TryCreateFrameOfReference_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_TryCreateFrameOfReference_tA355B36593FB6D3A3ED83E565320893B667BB8F0>(marshaled.___TryCreateFrameOfReference_1, _TryCreateFrameOfReference_tA355B36593FB6D3A3ED83E565320893B667BB8F0_il2cpp_TypeInfo_var));
	unmarshaled.set_TryCreateFrameOfReferenceWithPosition_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_TryCreateFrameOfReferenceWithPosition_t7FD522ED57738CD26FEDB47DB132D4870FCF1E64>(marshaled.___TryCreateFrameOfReferenceWithPosition_2, _TryCreateFrameOfReferenceWithPosition_t7FD522ED57738CD26FEDB47DB132D4870FCF1E64_il2cpp_TypeInfo_var));
	unmarshaled.set_TryCreateFrameOfReferenceWithPositionAndOrientation_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_TryCreateFrameOfReferenceWithPositionAndOrientation_t96DDB7C1358BE8BAAFB3B4E38001AEBE05AD25F9>(marshaled.___TryCreateFrameOfReferenceWithPositionAndOrientation_3, _TryCreateFrameOfReferenceWithPositionAndOrientation_t96DDB7C1358BE8BAAFB3B4E38001AEBE05AD25F9_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2/Vftbl
IL2CPP_EXTERN_C void Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042_marshal_pinvoke_cleanup(Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2/Vftbl
IL2CPP_EXTERN_C void Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042_marshal_com(const Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042& unmarshaled, Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___TryCreateFrameOfReference_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_TryCreateFrameOfReference_1()));
	marshaled.___TryCreateFrameOfReferenceWithPosition_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_TryCreateFrameOfReferenceWithPosition_2()));
	marshaled.___TryCreateFrameOfReferenceWithPositionAndOrientation_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_TryCreateFrameOfReferenceWithPositionAndOrientation_3()));
}
IL2CPP_EXTERN_C void Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042_marshal_com_back(const Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042_marshaled_com& marshaled, Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_TryCreateFrameOfReference_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_TryCreateFrameOfReference_tA355B36593FB6D3A3ED83E565320893B667BB8F0>(marshaled.___TryCreateFrameOfReference_1, _TryCreateFrameOfReference_tA355B36593FB6D3A3ED83E565320893B667BB8F0_il2cpp_TypeInfo_var));
	unmarshaled.set_TryCreateFrameOfReferenceWithPosition_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_TryCreateFrameOfReferenceWithPosition_t7FD522ED57738CD26FEDB47DB132D4870FCF1E64>(marshaled.___TryCreateFrameOfReferenceWithPosition_2, _TryCreateFrameOfReferenceWithPosition_t7FD522ED57738CD26FEDB47DB132D4870FCF1E64_il2cpp_TypeInfo_var));
	unmarshaled.set_TryCreateFrameOfReferenceWithPositionAndOrientation_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_TryCreateFrameOfReferenceWithPositionAndOrientation_t96DDB7C1358BE8BAAFB3B4E38001AEBE05AD25F9>(marshaled.___TryCreateFrameOfReferenceWithPositionAndOrientation_3, _TryCreateFrameOfReferenceWithPositionAndOrientation_t96DDB7C1358BE8BAAFB3B4E38001AEBE05AD25F9_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2/Vftbl
IL2CPP_EXTERN_C void Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042_marshal_com_cleanup(Vftbl_tBCB7E9CFF58009D12DBA82E6988807CCFA663042_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__TryCreateFrameOfReference_tA355B36593FB6D3A3ED83E565320893B667BB8F0 (_TryCreateFrameOfReference_tA355B36593FB6D3A3ED83E565320893B667BB8F0 * __this, intptr_t ___thisPtr0, intptr_t ___coordinateSystemPtr1, intptr_t* ___result2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___coordinateSystemPtr1, ___result2);

	return returnValue;
}
// System.Void Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2_Vftbl__TryCreateFrameOfReference::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TryCreateFrameOfReference__ctor_m3759FC1514FF5E14F5A9761B8349798450BEFA70 (_TryCreateFrameOfReference_tA355B36593FB6D3A3ED83E565320893B667BB8F0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2_Vftbl__TryCreateFrameOfReference::Invoke(System.IntPtr,System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _TryCreateFrameOfReference_Invoke_mF7DDA3A053C36D0E04079B7F4D10444D88C71633 (_TryCreateFrameOfReference_tA355B36593FB6D3A3ED83E565320893B667BB8F0 * __this, intptr_t ___thisPtr0, intptr_t ___coordinateSystemPtr1, intptr_t* ___result2, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___coordinateSystemPtr1, ___result2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___coordinateSystemPtr1, ___result2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___coordinateSystemPtr1, ___result2);
					else
						result = GenericVirtFuncInvoker3< int32_t, intptr_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___coordinateSystemPtr1, ___result2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, intptr_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___coordinateSystemPtr1, ___result2);
					else
						result = VirtFuncInvoker3< int32_t, intptr_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___coordinateSystemPtr1, ___result2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___thisPtr0) - 1), ___coordinateSystemPtr1, ___result2, targetMethod);
				}
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___coordinateSystemPtr1, ___result2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2_Vftbl__TryCreateFrameOfReference::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _TryCreateFrameOfReference_BeginInvoke_m85ED6418AB7337A25012C5DA67E460FBF881545B (_TryCreateFrameOfReference_tA355B36593FB6D3A3ED83E565320893B667BB8F0 * __this, intptr_t ___thisPtr0, intptr_t ___coordinateSystemPtr1, intptr_t* ___result2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_TryCreateFrameOfReference_BeginInvoke_m85ED6418AB7337A25012C5DA67E460FBF881545B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___coordinateSystemPtr1);
	__d_args[2] = ___result2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2_Vftbl__TryCreateFrameOfReference::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _TryCreateFrameOfReference_EndInvoke_mFCA25DC57C41A21272ECCD1A530ECEE8AA8938DD (_TryCreateFrameOfReference_tA355B36593FB6D3A3ED83E565320893B667BB8F0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__TryCreateFrameOfReferenceWithPosition_t7FD522ED57738CD26FEDB47DB132D4870FCF1E64 (_TryCreateFrameOfReferenceWithPosition_t7FD522ED57738CD26FEDB47DB132D4870FCF1E64 * __this, intptr_t ___thisPtr0, intptr_t ___coordinateSystemPtr1, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___position2, intptr_t* ___result3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___coordinateSystemPtr1, ___position2, ___result3);

	return returnValue;
}
// System.Void Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2_Vftbl__TryCreateFrameOfReferenceWithPosition::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TryCreateFrameOfReferenceWithPosition__ctor_m0C51F6CC90EBEB8A67D13F951795446BC4E34957 (_TryCreateFrameOfReferenceWithPosition_t7FD522ED57738CD26FEDB47DB132D4870FCF1E64 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2_Vftbl__TryCreateFrameOfReferenceWithPosition::Invoke(System.IntPtr,System.IntPtr,System.Numerics.Vector3,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _TryCreateFrameOfReferenceWithPosition_Invoke_m8DCF9297EF085AE6C2D26CEDF8E9D7550F1ECB7D (_TryCreateFrameOfReferenceWithPosition_t7FD522ED57738CD26FEDB47DB132D4870FCF1E64 * __this, intptr_t ___thisPtr0, intptr_t ___coordinateSystemPtr1, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___position2, intptr_t* ___result3, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 4)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___coordinateSystemPtr1, ___position2, ___result3, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___coordinateSystemPtr1, ___position2, ___result3, targetMethod);
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
						result = GenericInterfaceFuncInvoker4< int32_t, intptr_t, intptr_t, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___coordinateSystemPtr1, ___position2, ___result3);
					else
						result = GenericVirtFuncInvoker4< int32_t, intptr_t, intptr_t, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___coordinateSystemPtr1, ___position2, ___result3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker4< int32_t, intptr_t, intptr_t, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___coordinateSystemPtr1, ___position2, ___result3);
					else
						result = VirtFuncInvoker4< int32_t, intptr_t, intptr_t, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___coordinateSystemPtr1, ___position2, ___result3);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___thisPtr0) - 1), ___coordinateSystemPtr1, ___position2, ___result3, targetMethod);
				}
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___coordinateSystemPtr1, ___position2, ___result3, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2_Vftbl__TryCreateFrameOfReferenceWithPosition::BeginInvoke(System.IntPtr,System.IntPtr,System.Numerics.Vector3,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _TryCreateFrameOfReferenceWithPosition_BeginInvoke_mCB481F6167AEBBA942C44BF7CCA24D87F756681A (_TryCreateFrameOfReferenceWithPosition_t7FD522ED57738CD26FEDB47DB132D4870FCF1E64 * __this, intptr_t ___thisPtr0, intptr_t ___coordinateSystemPtr1, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___position2, intptr_t* ___result3, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_TryCreateFrameOfReferenceWithPosition_BeginInvoke_mCB481F6167AEBBA942C44BF7CCA24D87F756681A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___coordinateSystemPtr1);
	__d_args[2] = Box(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65_il2cpp_TypeInfo_var, &___position2);
	__d_args[3] = ___result3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Int32 Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2_Vftbl__TryCreateFrameOfReferenceWithPosition::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _TryCreateFrameOfReferenceWithPosition_EndInvoke_m95E6379B866C13AB2F224C28CCB3258710BE9539 (_TryCreateFrameOfReferenceWithPosition_t7FD522ED57738CD26FEDB47DB132D4870FCF1E64 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__TryCreateFrameOfReferenceWithPositionAndOrientation_t96DDB7C1358BE8BAAFB3B4E38001AEBE05AD25F9 (_TryCreateFrameOfReferenceWithPositionAndOrientation_t96DDB7C1358BE8BAAFB3B4E38001AEBE05AD25F9 * __this, intptr_t ___thisPtr0, intptr_t ___coordinateSystemPtr1, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___position2, Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A  ___orientation3, intptr_t* ___result4, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A , intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___coordinateSystemPtr1, ___position2, ___orientation3, ___result4);

	return returnValue;
}
// System.Void Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2_Vftbl__TryCreateFrameOfReferenceWithPositionAndOrientation::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TryCreateFrameOfReferenceWithPositionAndOrientation__ctor_mAD72F126EE610AD682AF392AD2D2F7744C870684 (_TryCreateFrameOfReferenceWithPositionAndOrientation_t96DDB7C1358BE8BAAFB3B4E38001AEBE05AD25F9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2_Vftbl__TryCreateFrameOfReferenceWithPositionAndOrientation::Invoke(System.IntPtr,System.IntPtr,System.Numerics.Vector3,System.Numerics.Quaternion,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _TryCreateFrameOfReferenceWithPositionAndOrientation_Invoke_m20307FA6F9DF695F7F7B4259BCA5645F494D53DD (_TryCreateFrameOfReferenceWithPositionAndOrientation_t96DDB7C1358BE8BAAFB3B4E38001AEBE05AD25F9 * __this, intptr_t ___thisPtr0, intptr_t ___coordinateSystemPtr1, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___position2, Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A  ___orientation3, intptr_t* ___result4, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 5)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A , intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___coordinateSystemPtr1, ___position2, ___orientation3, ___result4, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A , intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___coordinateSystemPtr1, ___position2, ___orientation3, ___result4, targetMethod);
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
						result = GenericInterfaceFuncInvoker5< int32_t, intptr_t, intptr_t, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A , intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___coordinateSystemPtr1, ___position2, ___orientation3, ___result4);
					else
						result = GenericVirtFuncInvoker5< int32_t, intptr_t, intptr_t, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A , intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___coordinateSystemPtr1, ___position2, ___orientation3, ___result4);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker5< int32_t, intptr_t, intptr_t, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A , intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___coordinateSystemPtr1, ___position2, ___orientation3, ___result4);
					else
						result = VirtFuncInvoker5< int32_t, intptr_t, intptr_t, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A , intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___coordinateSystemPtr1, ___position2, ___orientation3, ___result4);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A , intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___thisPtr0) - 1), ___coordinateSystemPtr1, ___position2, ___orientation3, ___result4, targetMethod);
				}
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 , Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A , intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___coordinateSystemPtr1, ___position2, ___orientation3, ___result4, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2_Vftbl__TryCreateFrameOfReferenceWithPositionAndOrientation::BeginInvoke(System.IntPtr,System.IntPtr,System.Numerics.Vector3,System.Numerics.Quaternion,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _TryCreateFrameOfReferenceWithPositionAndOrientation_BeginInvoke_m3380823A4876640679E5EB802FC69C29AA100C7C (_TryCreateFrameOfReferenceWithPositionAndOrientation_t96DDB7C1358BE8BAAFB3B4E38001AEBE05AD25F9 * __this, intptr_t ___thisPtr0, intptr_t ___coordinateSystemPtr1, Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___position2, Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A  ___orientation3, intptr_t* ___result4, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback5, RuntimeObject * ___object6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_TryCreateFrameOfReferenceWithPositionAndOrientation_BeginInvoke_m3380823A4876640679E5EB802FC69C29AA100C7C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[6] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___coordinateSystemPtr1);
	__d_args[2] = Box(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65_il2cpp_TypeInfo_var, &___position2);
	__d_args[3] = Box(Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A_il2cpp_TypeInfo_var, &___orientation3);
	__d_args[4] = ___result4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// System.Int32 Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2_Vftbl__TryCreateFrameOfReferenceWithPositionAndOrientation::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _TryCreateFrameOfReferenceWithPositionAndOrientation_EndInvoke_m320602BBDD0501CE8585460CC3B4B83D58ADB817 (_TryCreateFrameOfReferenceWithPositionAndOrientation_t96DDB7C1358BE8BAAFB3B4E38001AEBE05AD25F9 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.Windows.Perception.Spatial.Preview.SpatialGraphInteropPreview::CreateCoordinateSystemForNode(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialCoordinateSystem_t74AEBD257DE2AFEB649A5505161BE715E0BF46C8 * SpatialGraphInteropPreview_CreateCoordinateSystemForNode_mEF97E93AF6C77422A9CCF61FA933137D6F54D982 (Guid_t  ___nodeId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialGraphInteropPreview_CreateCoordinateSystemForNode_mEF97E93AF6C77422A9CCF61FA933137D6F54D982_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpatialGraphInteropPreview_tFD36CA20A6E54953B35EC4B17927E4F63CE97C6A_il2cpp_TypeInfo_var);
		WeakLazy_1_t4D8064E30345D896B6FAF9DCEC2247C38D0EC71F * L_0 = ((SpatialGraphInteropPreview_tFD36CA20A6E54953B35EC4B17927E4F63CE97C6A_StaticFields*)il2cpp_codegen_static_fields_for(SpatialGraphInteropPreview_tFD36CA20A6E54953B35EC4B17927E4F63CE97C6A_il2cpp_TypeInfo_var))->get__statics_0();
		NullCheck(L_0);
		Statics_tDBC4F59A0CD2DE79CBDFFC7AF2A16F52654846A5 * L_1 = WeakLazy_1_get_Value_mA1F822FE45CF4E2272183F6EE23F10016C354918(L_0, /*hidden argument*/WeakLazy_1_get_Value_mA1F822FE45CF4E2272183F6EE23F10016C354918_RuntimeMethod_var);
		Guid_t  L_2 = ___nodeId0;
		NullCheck(L_1);
		SpatialCoordinateSystem_t74AEBD257DE2AFEB649A5505161BE715E0BF46C8 * L_3 = ISpatialGraphInteropPreviewStatics_CreateCoordinateSystemForNode_m00363BA49C3195F24BB8717F0D0BA29B48A17FEA(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Microsoft.Windows.Perception.Spatial.Preview.SpatialGraphInteropPreview::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialGraphInteropPreview__cctor_mAF4993A6BCDFEFA8AD89C64A58BC349AE78959E0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialGraphInteropPreview__cctor_mAF4993A6BCDFEFA8AD89C64A58BC349AE78959E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WeakLazy_1_t4D8064E30345D896B6FAF9DCEC2247C38D0EC71F * L_0 = (WeakLazy_1_t4D8064E30345D896B6FAF9DCEC2247C38D0EC71F *)il2cpp_codegen_object_new(WeakLazy_1_t4D8064E30345D896B6FAF9DCEC2247C38D0EC71F_il2cpp_TypeInfo_var);
		WeakLazy_1__ctor_m65ED6EBC027570B38493560D542DF3CE7D0E45A0(L_0, /*hidden argument*/WeakLazy_1__ctor_m65ED6EBC027570B38493560D542DF3CE7D0E45A0_RuntimeMethod_var);
		((SpatialGraphInteropPreview_tFD36CA20A6E54953B35EC4B17927E4F63CE97C6A_StaticFields*)il2cpp_codegen_static_fields_for(SpatialGraphInteropPreview_tFD36CA20A6E54953B35EC4B17927E4F63CE97C6A_il2cpp_TypeInfo_var))->set__statics_0(L_0);
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
// System.Void Microsoft.Windows.Perception.Spatial.Preview.SpatialGraphInteropPreview_Statics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Statics__ctor_m1A368A48A1D507CFE38ABE9F0D2ABB290616D283 (Statics_tDBC4F59A0CD2DE79CBDFFC7AF2A16F52654846A5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Statics__ctor_m1A368A48A1D507CFE38ABE9F0D2ABB290616D283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ActivationFactory_1_t0CDF5F28908A43BD81FA09B39A93ED3B5F017290_il2cpp_TypeInfo_var);
		ObjectReference_1_tD07D53CD6B0E358A8023F2234DAA8FBEE947EABB * L_0 = ActivationFactory_1_As_TisVftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C_m9985B1ADEB4F4FC11CFF61CFE727050C2ED92DED(/*hidden argument*/ActivationFactory_1_As_TisVftbl_t742D9D60512D5B5CF11203EC4FA00D5983A5F53C_m9985B1ADEB4F4FC11CFF61CFE727050C2ED92DED_RuntimeMethod_var);
		ISpatialGraphInteropPreviewStatics__ctor_m4B7284B1934A58B793814C0691D8C9428E2CD4C3(__this, L_0, /*hidden argument*/NULL);
		Func_1_t43234D68F3ABC78C8E275517F6810A0E91D1AC97 * L_1 = (Func_1_t43234D68F3ABC78C8E275517F6810A0E91D1AC97 *)il2cpp_codegen_object_new(Func_1_t43234D68F3ABC78C8E275517F6810A0E91D1AC97_il2cpp_TypeInfo_var);
		Func_1__ctor_mF0DB33F273784EF928C0AB503E741B90AEF16BFF(L_1, __this, (intptr_t)((intptr_t)Statics_U3C_ctorU3Eb__1_0_mF5E2F49E0BB6F16C9B5A610C5E3C7C061284521B_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_mF0DB33F273784EF928C0AB503E741B90AEF16BFF_RuntimeMethod_var);
		Lazy_1_tD26FF389F7897C8553D1536923CBABC0ABA593E0 * L_2 = (Lazy_1_tD26FF389F7897C8553D1536923CBABC0ABA593E0 *)il2cpp_codegen_object_new(Lazy_1_tD26FF389F7897C8553D1536923CBABC0ABA593E0_il2cpp_TypeInfo_var);
		Lazy_1__ctor_mEB219C44325F989211E530FDC445E82632698EFC(L_2, L_1, /*hidden argument*/Lazy_1__ctor_mEB219C44325F989211E530FDC445E82632698EFC_RuntimeMethod_var);
		__this->set__interface2_1(L_2);
		return;
	}
}
// Microsoft.Windows.Perception.Spatial.Preview.ISpatialGraphInteropPreviewStatics2 Microsoft.Windows.Perception.Spatial.Preview.SpatialGraphInteropPreview_Statics::<.ctor>b__1_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ISpatialGraphInteropPreviewStatics2_t9F8CFA5570E00335B319319183ED55A7BE64ED16 * Statics_U3C_ctorU3Eb__1_0_mF5E2F49E0BB6F16C9B5A610C5E3C7C061284521B (Statics_tDBC4F59A0CD2DE79CBDFFC7AF2A16F52654846A5 * __this, const RuntimeMethod* method)
{
	{
		ObjectReference_1_tD07D53CD6B0E358A8023F2234DAA8FBEE947EABB * L_0 = ((ISpatialGraphInteropPreviewStatics_tA6235090F28BD06BD7C7946FD10E0986B7DE0AF9 *)__this)->get__obj_0();
		ISpatialGraphInteropPreviewStatics2_t9F8CFA5570E00335B319319183ED55A7BE64ED16 * L_1 = ISpatialGraphInteropPreviewStatics2_op_Implicit_m4979FB726D7748AD125E55E3A0E2A34C5247E27E(L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Threading.Tasks.Task`1<Microsoft.Windows.Perception.Spatial.SpatialPerceptionAccessStatus> Microsoft.Windows.Perception.Spatial.SpatialAnchorExporter::RequestAccessAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDD14A3F6150B55B689AA83F9A3274F946A7D67BE * SpatialAnchorExporter_RequestAccessAsync_mCA6CADD8C805378CEF0CD5D97F30BCC4D330F766 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialAnchorExporter_RequestAccessAsync_mCA6CADD8C805378CEF0CD5D97F30BCC4D330F766_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SpatialAnchorExporter_tEF6597A7C5BBAABC751BDF2B097FA7C459862D1C_il2cpp_TypeInfo_var);
		WeakLazy_1_t1B33F4864FBC2BF734A2EFC982148B4D00DD2228 * L_0 = ((SpatialAnchorExporter_tEF6597A7C5BBAABC751BDF2B097FA7C459862D1C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorExporter_tEF6597A7C5BBAABC751BDF2B097FA7C459862D1C_il2cpp_TypeInfo_var))->get__statics_0();
		NullCheck(L_0);
		Statics_t7FE7A57817F231EE3258C2CCE00A163511066167 * L_1 = WeakLazy_1_get_Value_m3B539A349FBDEA92492D918DFD6CE5EA21A68B3C(L_0, /*hidden argument*/WeakLazy_1_get_Value_m3B539A349FBDEA92492D918DFD6CE5EA21A68B3C_RuntimeMethod_var);
		NullCheck(L_1);
		Task_1_tDD14A3F6150B55B689AA83F9A3274F946A7D67BE * L_2 = ISpatialAnchorExporterStatics_RequestAccessAsync_mF3B451FDCCAA42B7CADDAD4712FB0B07CB22E424(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Microsoft.Windows.Perception.Spatial.SpatialAnchorExporter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialAnchorExporter__cctor_m83A0ED689FCF8630E1474F103F0B338AF4420359 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialAnchorExporter__cctor_m83A0ED689FCF8630E1474F103F0B338AF4420359_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WeakLazy_1_t1B33F4864FBC2BF734A2EFC982148B4D00DD2228 * L_0 = (WeakLazy_1_t1B33F4864FBC2BF734A2EFC982148B4D00DD2228 *)il2cpp_codegen_object_new(WeakLazy_1_t1B33F4864FBC2BF734A2EFC982148B4D00DD2228_il2cpp_TypeInfo_var);
		WeakLazy_1__ctor_m4B1D290A17980D337D2FF4E5D8FCA8A2ABE10C4C(L_0, /*hidden argument*/WeakLazy_1__ctor_m4B1D290A17980D337D2FF4E5D8FCA8A2ABE10C4C_RuntimeMethod_var);
		((SpatialAnchorExporter_tEF6597A7C5BBAABC751BDF2B097FA7C459862D1C_StaticFields*)il2cpp_codegen_static_fields_for(SpatialAnchorExporter_tEF6597A7C5BBAABC751BDF2B097FA7C459862D1C_il2cpp_TypeInfo_var))->set__statics_0(L_0);
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
// System.Void Microsoft.Windows.Perception.Spatial.SpatialAnchorExporter_Statics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Statics__ctor_mA17BAA6A4E8B32BA162EBA2547A016B997858589 (Statics_t7FE7A57817F231EE3258C2CCE00A163511066167 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Statics__ctor_mA17BAA6A4E8B32BA162EBA2547A016B997858589_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ActivationFactory_1_t8C7B1AD277A35F31181903DD92944EE9EB31E7B8_il2cpp_TypeInfo_var);
		ObjectReference_1_t530F1E336D8E2AE06C0F8AD45027396D9CCF945E * L_0 = ActivationFactory_1_As_TisVftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114_m29D6B84C4BB3F1D58A3DCB7D4014429BF1CACBC2(/*hidden argument*/ActivationFactory_1_As_TisVftbl_t0966EBAECC3D0916A92C699A053D8EC0F8DEF114_m29D6B84C4BB3F1D58A3DCB7D4014429BF1CACBC2_RuntimeMethod_var);
		ISpatialAnchorExporterStatics__ctor_mA0CF33CD41FCD84E4A205F785E50BE482F98B3E2(__this, L_0, /*hidden argument*/NULL);
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
// System.Void Microsoft.Windows.Perception.Spatial.SpatialCoordinateSystem::.ctor(Microsoft.Windows.Perception.Spatial.ISpatialCoordinateSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpatialCoordinateSystem__ctor_mF9B165578C25CCCCC9B73DAFBECE36EBFDC6D388 (SpatialCoordinateSystem_t74AEBD257DE2AFEB649A5505161BE715E0BF46C8 * __this, ISpatialCoordinateSystem_t539C9440C0D44A165C8826A2A91B412F7AEA6A24 * ___interface0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ISpatialCoordinateSystem_t539C9440C0D44A165C8826A2A91B412F7AEA6A24 * L_0 = ___interface0;
		__this->set__interface_0(L_0);
		return;
	}
}
// Microsoft.Windows.Perception.Spatial.SpatialCoordinateSystem Microsoft.Windows.Perception.Spatial.SpatialCoordinateSystem::FromNativePtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialCoordinateSystem_t74AEBD257DE2AFEB649A5505161BE715E0BF46C8 * SpatialCoordinateSystem_FromNativePtr_m3FAFCB47022006950AF77BF2C07F784929D30DDF (intptr_t ___thisPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpatialCoordinateSystem_FromNativePtr_m3FAFCB47022006950AF77BF2C07F784929D30DDF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C_il2cpp_TypeInfo_var);
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_0 = WinrtModule_get_Instance_mF2B4119EC32D8795E6D42278FEEB65EBAA02E774(/*hidden argument*/NULL);
		intptr_t L_1 = ___thisPtr0;
		ObjectReference_1_t28DA373EE505C8F3F300D370F9766734030471DA * L_2 = ObjectReference_1_FromNativePtr_m36F49CBCEA4FD201ED2364610053ED8318D7FB67(L_0, (intptr_t)L_1, /*hidden argument*/ObjectReference_1_FromNativePtr_m36F49CBCEA4FD201ED2364610053ED8318D7FB67_RuntimeMethod_var);
		NullCheck(L_2);
		ObjectReference_1_tC6FFCE6D4A862A7EBF2A518A0AA80A0ED0D99A5A * L_3 = IObjectReference_As_TisVftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2_mF97C951CC4D00E4433E7822BD1B0DBC3105EF970(L_2, /*hidden argument*/IObjectReference_As_TisVftbl_tB166FDD9E3E4EEE25FB1D79359CBEF65D0DFECF2_mF97C951CC4D00E4433E7822BD1B0DBC3105EF970_RuntimeMethod_var);
		ISpatialCoordinateSystem_t539C9440C0D44A165C8826A2A91B412F7AEA6A24 * L_4 = ISpatialCoordinateSystem_op_Implicit_m8714EE75AE0CE3096281441DA14D673F33364536(L_3, /*hidden argument*/NULL);
		SpatialCoordinateSystem_t74AEBD257DE2AFEB649A5505161BE715E0BF46C8 * L_5 = (SpatialCoordinateSystem_t74AEBD257DE2AFEB649A5505161BE715E0BF46C8 *)il2cpp_codegen_object_new(SpatialCoordinateSystem_t74AEBD257DE2AFEB649A5505161BE715E0BF46C8_il2cpp_TypeInfo_var);
		SpatialCoordinateSystem__ctor_mF9B165578C25CCCCC9B73DAFBECE36EBFDC6D388(L_5, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Nullable`1<System.Numerics.Matrix4x4> Microsoft.Windows.Perception.Spatial.SpatialCoordinateSystem::TryGetTransformTo(Microsoft.Windows.Perception.Spatial.SpatialCoordinateSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC  SpatialCoordinateSystem_TryGetTransformTo_m867AB10748922C260284FEAB3EDAED681F2992EE (SpatialCoordinateSystem_t74AEBD257DE2AFEB649A5505161BE715E0BF46C8 * __this, SpatialCoordinateSystem_t74AEBD257DE2AFEB649A5505161BE715E0BF46C8 * ___other0, const RuntimeMethod* method)
{
	{
		ISpatialCoordinateSystem_t539C9440C0D44A165C8826A2A91B412F7AEA6A24 * L_0 = __this->get__interface_0();
		SpatialCoordinateSystem_t74AEBD257DE2AFEB649A5505161BE715E0BF46C8 * L_1 = ___other0;
		NullCheck(L_1);
		ISpatialCoordinateSystem_t539C9440C0D44A165C8826A2A91B412F7AEA6A24 * L_2 = L_1->get__interface_0();
		NullCheck(L_0);
		Nullable_1_tF2F30F0F16261389A8666E9E3F474CA572C751CC  L_3 = ISpatialCoordinateSystem_TryGetTransformTo_m1CBBE876C881B902B5BBAF51BE63447868989801(L_0, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void System.Runtime.CompilerServices.IsUnmanagedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsUnmanagedAttribute__ctor_mDAEA6F9F6345FAE643FB10C7555075654192F4E1 (IsUnmanagedAttribute_tCBC3CA101F4414B34C67D6464DC056EFFCDA68D9 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
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
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_Delegate_QueryInterface_m73A63091D278F0BAF8148D0ADF6FF267467A3693(intptr_t ___thisPtr0, Guid_t * ___iid1, intptr_t* ___obj2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue = Delegate_QueryInterface_m73A63091D278F0BAF8148D0ADF6FF267467A3693(___thisPtr0, ___iid1, ___obj2, NULL);

	return returnValue;
}
extern "C" uint32_t DEFAULT_CALL ReversePInvokeWrapper_Delegate_AddRef_m6C0075DD613B61A79DC97B55451F67F11655E448(intptr_t ___thisPtr0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue = Delegate_AddRef_m6C0075DD613B61A79DC97B55451F67F11655E448(___thisPtr0, NULL);

	return returnValue;
}
extern "C" uint32_t DEFAULT_CALL ReversePInvokeWrapper_Delegate_Release_m25972AE16A8813A800DB9987F2B9CDCA0FC019E1(intptr_t ___thisPtr0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue = Delegate_Release_m25972AE16A8813A800DB9987F2B9CDCA0FC019E1(___thisPtr0, NULL);

	return returnValue;
}
// WinRT.Delegate WinRT.Delegate::FindObject(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t01789152B02E68157FD11FCBC21F63795C42E476 * Delegate_FindObject_m70F877EB3F42415197F2598A2A32F936158408A1 (intptr_t ___thisPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Delegate_FindObject_m70F877EB3F42415197F2598A2A32F936158408A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___thisPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		UnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F  L_1 = Marshal_PtrToStructure_TisUnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F_m731A84F7FEEDF32D55905BF37DF9DBE45D8F866F((intptr_t)L_0, /*hidden argument*/Marshal_PtrToStructure_TisUnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F_m731A84F7FEEDF32D55905BF37DF9DBE45D8F866F_RuntimeMethod_var);
		intptr_t L_2 = L_1.get__gchandlePtr_1();
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_3 = GCHandle_FromIntPtr_mB803C8ECA1D723F1C51A69F7A7E09E269488D36C((intptr_t)L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		RuntimeObject * L_4 = GCHandle_get_Target_mDBDEA6883245CF1EF963D9FA945569B2D59DCCF8((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_0), /*hidden argument*/NULL);
		return ((Delegate_t01789152B02E68157FD11FCBC21F63795C42E476 *)CastclassClass((RuntimeObject*)L_4, Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_il2cpp_TypeInfo_var));
	}
}
// System.Int32 WinRT.Delegate::QueryInterface(System.IntPtr,System.Guid*,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Delegate_QueryInterface_m73A63091D278F0BAF8148D0ADF6FF267467A3693 (intptr_t ___thisPtr0, Guid_t * ___iid1, intptr_t* ___obj2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Delegate_QueryInterface_m73A63091D278F0BAF8148D0ADF6FF267467A3693_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___thisPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_il2cpp_TypeInfo_var);
		Delegate_t01789152B02E68157FD11FCBC21F63795C42E476 * L_1 = Delegate_FindObject_m70F877EB3F42415197F2598A2A32F936158408A1((intptr_t)L_0, /*hidden argument*/NULL);
		Guid_t * L_2 = ___iid1;
		intptr_t* L_3 = ___obj2;
		NullCheck(L_1);
		int32_t L_4 = Delegate_QueryInterface_m67538820C6B882600AB356EB9A302F8835E4F75E(L_1, (Guid_t *)(Guid_t *)L_2, (intptr_t*)(intptr_t*)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.UInt32 WinRT.Delegate::AddRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Delegate_AddRef_m6C0075DD613B61A79DC97B55451F67F11655E448 (intptr_t ___thisPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Delegate_AddRef_m6C0075DD613B61A79DC97B55451F67F11655E448_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___thisPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_il2cpp_TypeInfo_var);
		Delegate_t01789152B02E68157FD11FCBC21F63795C42E476 * L_1 = Delegate_FindObject_m70F877EB3F42415197F2598A2A32F936158408A1((intptr_t)L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		uint32_t L_2 = Delegate_AddRef_m03B92703DA247DDEA591638FC91F153F39322E5A(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.UInt32 WinRT.Delegate::Release(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Delegate_Release_m25972AE16A8813A800DB9987F2B9CDCA0FC019E1 (intptr_t ___thisPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Delegate_Release_m25972AE16A8813A800DB9987F2B9CDCA0FC019E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___thisPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_il2cpp_TypeInfo_var);
		Delegate_t01789152B02E68157FD11FCBC21F63795C42E476 * L_1 = Delegate_FindObject_m70F877EB3F42415197F2598A2A32F936158408A1((intptr_t)L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		uint32_t L_2 = Delegate_Release_m3540FAF46440C04BE3CB950F7489E378F654666F(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 WinRT.Delegate::QueryInterface(System.Guid*,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Delegate_QueryInterface_m67538820C6B882600AB356EB9A302F8835E4F75E (Delegate_t01789152B02E68157FD11FCBC21F63795C42E476 * __this, Guid_t * ___iid0, intptr_t* ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Delegate_QueryInterface_m67538820C6B882600AB356EB9A302F8835E4F75E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Guid_t * L_0 = ___iid0;
		Guid_t  L_1 = (*(Guid_t *)L_0);
		Guid_t  L_2 = __this->get__iid_2();
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		bool L_3 = Guid_op_Equality_m3D98BA18CDAF0C6C329F86720B5CD61A170A3E52(L_1, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		Guid_t * L_4 = ___iid0;
		Guid_t  L_5 = (*(Guid_t *)L_4);
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_6 = { reinterpret_cast<intptr_t> (IAgileObjectVftbl_t576F117596790657CE35723C6C436B5268073C12_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_6, /*hidden argument*/NULL);
		TypeInfo_t9D6F65801A41B97F36138B15FD270A1550DBB3FC * L_8 = IntrospectionExtensions_GetTypeInfo_mB8CD288832A36F852B99899A8506689F9B0D8D09(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Guid_t  L_9 = VirtFuncInvoker0< Guid_t  >::Invoke(23 /* System.Guid System.Type::get_GUID() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		bool L_10 = Guid_op_Equality_m3D98BA18CDAF0C6C329F86720B5CD61A170A3E52(L_5, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0045;
		}
	}

IL_0034:
	{
		Delegate_AddRef_m03B92703DA247DDEA591638FC91F153F39322E5A(__this, /*hidden argument*/NULL);
		intptr_t* L_11 = ___obj1;
		intptr_t L_12 = __this->get_ThisPtr_1();
		*((intptr_t*)L_11) = (intptr_t)L_12;
		return 0;
	}

IL_0045:
	{
		return ((int32_t)-2147467262);
	}
}
// System.UInt32 WinRT.Delegate::AddRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Delegate_AddRef_m03B92703DA247DDEA591638FC91F153F39322E5A (Delegate_t01789152B02E68157FD11FCBC21F63795C42E476 * __this, const RuntimeMethod* method)
{
	{
		int32_t* L_0 = __this->get_address_of__refs_0();
		Interlocked_Increment_mB6D391197444B8BFD30BAE1EDCF1A255CD2F292F((int32_t*)L_0, /*hidden argument*/NULL);
		int32_t L_1 = __this->get__refs_0();
		return L_1;
	}
}
// System.UInt32 WinRT.Delegate::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Delegate_Release_m3540FAF46440C04BE3CB950F7489E378F654666F (Delegate_t01789152B02E68157FD11FCBC21F63795C42E476 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Delegate_Release_m3540FAF46440C04BE3CB950F7489E378F654666F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__refs_0();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_1 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_1, _stringLiteralE8796301CDCC7DF1634054849AC46971582B6600, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Delegate_Release_m3540FAF46440C04BE3CB950F7489E378F654666F_RuntimeMethod_var);
	}

IL_0013:
	{
		int32_t* L_2 = __this->get_address_of__refs_0();
		Interlocked_Decrement_m5C38319E41D5F7C90DFEC9138D58E6E92DFAFCFE((int32_t*)L_2, /*hidden argument*/NULL);
		int32_t L_3 = __this->get__refs_0();
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		Delegate__Dispose_m8F9080418D95E37A2DAE8A9440F88E63C34E9520(__this, /*hidden argument*/NULL);
	}

IL_002d:
	{
		int32_t L_4 = __this->get__refs_0();
		return L_4;
	}
}
// System.Void WinRT.Delegate::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__cctor_m6E2128FFAC15F5B833F198C1951225DC861313AA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Delegate__cctor_m6E2128FFAC15F5B833F198C1951225DC861313AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 * L_0 = (_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 *)il2cpp_codegen_object_new(_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12_il2cpp_TypeInfo_var);
		_QueryInterface__ctor_m91D991A7AFD446C56FF5B66449F389DD4FA96CEC(L_0, NULL, (intptr_t)((intptr_t)Delegate_QueryInterface_m73A63091D278F0BAF8148D0ADF6FF267467A3693_RuntimeMethod_var), /*hidden argument*/NULL);
		((Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_il2cpp_TypeInfo_var))->set__QueryInterface_3(L_0);
		_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA * L_1 = (_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA *)il2cpp_codegen_object_new(_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA_il2cpp_TypeInfo_var);
		_AddRef__ctor_m24773D9DAF0E187EAD7924ABD10A17F72CE60BE7(L_1, NULL, (intptr_t)((intptr_t)Delegate_AddRef_m6C0075DD613B61A79DC97B55451F67F11655E448_RuntimeMethod_var), /*hidden argument*/NULL);
		((Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_il2cpp_TypeInfo_var))->set__AddRef_4(L_1);
		_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 * L_2 = (_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 *)il2cpp_codegen_object_new(_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2_il2cpp_TypeInfo_var);
		_Release__ctor_m8F91AB6BC24EB0FF169565C17C457C8AFFF0D4AE(L_2, NULL, (intptr_t)((intptr_t)Delegate_Release_m25972AE16A8813A800DB9987F2B9CDCA0FC019E1_RuntimeMethod_var), /*hidden argument*/NULL);
		((Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_il2cpp_TypeInfo_var))->set__Release_5(L_2);
		_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 * L_3 = ((Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_il2cpp_TypeInfo_var))->get__QueryInterface_3();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		intptr_t L_4 = Marshal_GetFunctionPointerForDelegate_Tis_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12_m0A97EEEA0025A3947684D1107A83A541B50298F4(L_3, /*hidden argument*/Marshal_GetFunctionPointerForDelegate_Tis_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12_m0A97EEEA0025A3947684D1107A83A541B50298F4_RuntimeMethod_var);
		(((Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_il2cpp_TypeInfo_var))->get_address_of__vftblTemplate_6())->set_QueryInterface_0((intptr_t)L_4);
		_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA * L_5 = ((Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_il2cpp_TypeInfo_var))->get__AddRef_4();
		intptr_t L_6 = Marshal_GetFunctionPointerForDelegate_Tis_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA_m244F5486C9035E14360274F805ACCC678176AED1(L_5, /*hidden argument*/Marshal_GetFunctionPointerForDelegate_Tis_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA_m244F5486C9035E14360274F805ACCC678176AED1_RuntimeMethod_var);
		(((Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_il2cpp_TypeInfo_var))->get_address_of__vftblTemplate_6())->set_AddRef_1((intptr_t)L_6);
		_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 * L_7 = ((Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_il2cpp_TypeInfo_var))->get__Release_5();
		intptr_t L_8 = Marshal_GetFunctionPointerForDelegate_Tis_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2_mB7C12F74C4A35E93DDE85A017BE78AB44B5448D7(L_7, /*hidden argument*/Marshal_GetFunctionPointerForDelegate_Tis_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2_mB7C12F74C4A35E93DDE85A017BE78AB44B5448D7_RuntimeMethod_var);
		(((Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_il2cpp_TypeInfo_var))->get_address_of__vftblTemplate_6())->set_Release_2((intptr_t)L_8);
		(((Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_il2cpp_TypeInfo_var))->get_address_of__vftblTemplate_6())->set_Invoke_3((intptr_t)(0));
		return;
	}
}
// System.Void WinRT.Delegate::.ctor(System.Guid,System.IntPtr,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__ctor_m9A6EDE351CCA09690116A0B8A668CD99AAA5A304 (Delegate_t01789152B02E68157FD11FCBC21F63795C42E476 * __this, Guid_t  ___iid0, intptr_t ___invokePtr1, RuntimeObject * ___invoker2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Delegate__ctor_m9A6EDE351CCA09690116A0B8A668CD99AAA5A304_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  V_0;
	memset((&V_0), 0, sizeof(V_0));
	IDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C_il2cpp_TypeInfo_var);
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_0 = WinrtModule_get_Instance_mF2B4119EC32D8795E6D42278FEEB65EBAA02E774(/*hidden argument*/NULL);
		V_0 = L_0;
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_1 = ModuleReference_AddRef_m3E220263CCBE7E4914D3336378AA819E15706531((ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 *)(&V_0), /*hidden argument*/NULL);
		__this->set__module_7(L_1);
		WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * L_2 = (WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D *)il2cpp_codegen_object_new(WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D_il2cpp_TypeInfo_var);
		WeakReference__ctor_m12F7412E9F228AA2276BBB37441CFBCD21A0ABBB(L_2, NULL, /*hidden argument*/NULL);
		__this->set__weakInvoker_9(L_2);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Guid_t  L_3 = ___iid0;
		__this->set__iid_2(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_il2cpp_TypeInfo_var);
		IDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE  L_4 = ((Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_il2cpp_TypeInfo_var))->get__vftblTemplate_6();
		V_1 = L_4;
		intptr_t L_5 = ___invokePtr1;
		(&V_1)->set_Invoke_3((intptr_t)L_5);
		UnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F * L_6 = __this->get_address_of__unmanagedObj_10();
		IDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE  L_7 = ((Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_StaticFields*)il2cpp_codegen_static_fields_for(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_il2cpp_TypeInfo_var))->get__vftblTemplate_6();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		int32_t L_8 = Marshal_SizeOf_TisIDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE_m5EA1D0752BF7FCCC9098A92C5964E8AE0B2F619D(L_7, /*hidden argument*/Marshal_SizeOf_TisIDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE_m5EA1D0752BF7FCCC9098A92C5964E8AE0B2F619D_RuntimeMethod_var);
		intptr_t L_9 = Marshal_AllocCoTaskMem_mD834304A9F50F5440A526BD0E68B7D24976985D1(L_8, /*hidden argument*/NULL);
		L_6->set__vftblPtr_0((intptr_t)L_9);
		IDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE  L_10 = V_1;
		UnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F * L_11 = __this->get_address_of__unmanagedObj_10();
		intptr_t L_12 = L_11->get__vftblPtr_0();
		Marshal_StructureToPtr_TisIDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE_m95AF195BDECCCA866C9E68BCFE011CDF637FA734(L_10, (intptr_t)L_12, (bool)0, /*hidden argument*/Marshal_StructureToPtr_TisIDelegateVftbl_t944B540EE930205A9936455C295772843CDE56CE_m95AF195BDECCCA866C9E68BCFE011CDF637FA734_RuntimeMethod_var);
		WeakReference_t0495CC81CD6403E662B7700B802443F6F730E39D * L_13 = __this->get__weakInvoker_9();
		RuntimeObject * L_14 = ___invoker2;
		NullCheck(L_13);
		VirtActionInvoker1< RuntimeObject * >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_13, L_14);
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_15 = GCHandle_Alloc_m5BF9DC23B533B904BFEA61136B92916683B46B0F(__this, /*hidden argument*/NULL);
		__this->set__thisHandle_8(L_15);
		UnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F * L_16 = __this->get_address_of__unmanagedObj_10();
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_17 = __this->get__thisHandle_8();
		intptr_t L_18 = GCHandle_ToIntPtr_m8CF7D07846B0C741B04A2A4E5E9B5D505F4B3CCE(L_17, /*hidden argument*/NULL);
		L_16->set__gchandlePtr_1((intptr_t)L_18);
		UnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F  L_19 = __this->get__unmanagedObj_10();
		int32_t L_20 = Marshal_SizeOf_TisUnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F_m7751951F47A6D68941008CAD6B1692621742E1CA(L_19, /*hidden argument*/Marshal_SizeOf_TisUnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F_m7751951F47A6D68941008CAD6B1692621742E1CA_RuntimeMethod_var);
		intptr_t L_21 = Marshal_AllocCoTaskMem_mD834304A9F50F5440A526BD0E68B7D24976985D1(L_20, /*hidden argument*/NULL);
		__this->set_ThisPtr_1((intptr_t)L_21);
		UnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F  L_22 = __this->get__unmanagedObj_10();
		intptr_t L_23 = __this->get_ThisPtr_1();
		Marshal_StructureToPtr_TisUnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F_mDAFE68DE2FF5B571CD00D012B08F901DD0F87906(L_22, (intptr_t)L_23, (bool)0, /*hidden argument*/Marshal_StructureToPtr_TisUnmanagedObject_tA6E73618D3DC5DE1D63E8E5102A710A4F970E66F_mDAFE68DE2FF5B571CD00D012B08F901DD0F87906_RuntimeMethod_var);
		return;
	}
}
// System.Void WinRT.Delegate::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate_Finalize_mFFEA8345625762210ECCB81EA7BA324728DF1999 (Delegate_t01789152B02E68157FD11FCBC21F63795C42E476 * __this, const RuntimeMethod* method)
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
		Delegate__Dispose_m8F9080418D95E37A2DAE8A9440F88E63C34E9520(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0xF, FINALLY_0008);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0008;
	}

FINALLY_0008:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(8)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(8)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF, IL_000f)
	}

IL_000f:
	{
		return;
	}
}
// System.Void WinRT.Delegate::_Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Delegate__Dispose_m8F9080418D95E37A2DAE8A9440F88E63C34E9520 (Delegate_t01789152B02E68157FD11FCBC21F63795C42E476 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Delegate__Dispose_m8F9080418D95E37A2DAE8A9440F88E63C34E9520_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = __this->get__refs_0();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_1 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_1, _stringLiteralA83D56B7278BFEFDDC6F5821225DC12E0BECE2E8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, Delegate__Dispose_m8F9080418D95E37A2DAE8A9440F88E63C34E9520_RuntimeMethod_var);
	}

IL_0013:
	{
		intptr_t L_2 = __this->get_ThisPtr_1();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_FreeCoTaskMem_m7C88C0999A166E61A38FF25527CD5E339F6AC590((intptr_t)L_2, /*hidden argument*/NULL);
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_3 = __this->get__thisHandle_8();
		V_0 = L_3;
		GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_0), /*hidden argument*/NULL);
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_4 = __this->get__module_7();
		V_1 = L_4;
		ModuleReference_Release_mCBB02150B5DEE435F1C7E5DEEE91A862BD49E7BC((ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
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
// System.IntPtr WinRT.Delegate_InitialReference::get_DelegatePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t InitialReference_get_DelegatePtr_m9954C6D966CCEB34ADA196515C6A3DC1C3972628 (InitialReference_t18776180879E7D7B1F47934927C0DB540DB2EE4E * __this, const RuntimeMethod* method)
{
	{
		Delegate_t01789152B02E68157FD11FCBC21F63795C42E476 * L_0 = __this->get__delegate_0();
		NullCheck(L_0);
		intptr_t L_1 = L_0->get_ThisPtr_1();
		return (intptr_t)L_1;
	}
}
// System.Void WinRT.Delegate_InitialReference::.ctor(System.Guid,System.IntPtr,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitialReference__ctor_m75FBD0FDB95E0F6A7C17BD2EB33D1A4CB2A2F3A3 (InitialReference_t18776180879E7D7B1F47934927C0DB540DB2EE4E * __this, Guid_t  ___iid0, intptr_t ___invoke1, RuntimeObject * ___invoker2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InitialReference__ctor_m75FBD0FDB95E0F6A7C17BD2EB33D1A4CB2A2F3A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var);
		ThreadContext_RegisterPossiblyNonForeignThread_mD8D18E7C5E6C3E8033C6EDA8E4154B42CC670E2A(/*hidden argument*/NULL);
		Guid_t  L_0 = ___iid0;
		intptr_t L_1 = ___invoke1;
		RuntimeObject * L_2 = ___invoker2;
		Delegate_t01789152B02E68157FD11FCBC21F63795C42E476 * L_3 = (Delegate_t01789152B02E68157FD11FCBC21F63795C42E476 *)il2cpp_codegen_object_new(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_il2cpp_TypeInfo_var);
		Delegate__ctor_m9A6EDE351CCA09690116A0B8A668CD99AAA5A304(L_3, L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		__this->set__delegate_0(L_3);
		Delegate_t01789152B02E68157FD11FCBC21F63795C42E476 * L_4 = __this->get__delegate_0();
		NullCheck(L_4);
		Delegate_AddRef_m03B92703DA247DDEA591638FC91F153F39322E5A(L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WinRT.Delegate_InitialReference::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitialReference_Finalize_mF30C8565FFF1519EDA8B024D391B137B160A71E7 (InitialReference_t18776180879E7D7B1F47934927C0DB540DB2EE4E * __this, const RuntimeMethod* method)
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
		InitialReference_Dispose_mB97D265D7C67A55E1A5AC0E90C22025491C4272C(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0xF, FINALLY_0008);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0008;
	}

FINALLY_0008:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(8)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(8)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xF, IL_000f)
	}

IL_000f:
	{
		return;
	}
}
// System.Void WinRT.Delegate_InitialReference::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitialReference_Dispose_mB97D265D7C67A55E1A5AC0E90C22025491C4272C (InitialReference_t18776180879E7D7B1F47934927C0DB540DB2EE4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InitialReference_Dispose_mB97D265D7C67A55E1A5AC0E90C22025491C4272C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Delegate_t01789152B02E68157FD11FCBC21F63795C42E476 * L_0 = __this->get__delegate_0();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		Delegate_t01789152B02E68157FD11FCBC21F63795C42E476 * L_1 = __this->get__delegate_0();
		NullCheck(L_1);
		Delegate_Release_m3540FAF46440C04BE3CB950F7489E378F654666F(L_1, /*hidden argument*/NULL);
		__this->set__delegate_0((Delegate_t01789152B02E68157FD11FCBC21F63795C42E476 *)NULL);
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
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
// System.Void WinRT.DllModule::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllModule__cctor_m1018503F194333B6361FA02D7C2CF3AD41EB603E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DllModule__cctor_m1018503F194333B6361FA02D7C2CF3AD41EB603E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE * L_0 = (Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE *)il2cpp_codegen_object_new(Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8175F3BDEF88EFB19A4F969E4CDF7B8CE3271B6C(L_0, /*hidden argument*/Dictionary_2__ctor_m8175F3BDEF88EFB19A4F969E4CDF7B8CE3271B6C_RuntimeMethod_var);
		((DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70_StaticFields*)il2cpp_codegen_static_fields_for(DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70_il2cpp_TypeInfo_var))->set__cache_3(L_0);
		AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * L_1 = AppDomain_get_CurrentDomain_m3D3D52C9382D6853E49551DA6182DBC5F1118BF0(/*hidden argument*/NULL);
		NullCheck(L_1);
		RuntimeObject * L_2 = AppDomain_GetData_mD6C34853507A96159BB1A7773C65E8B21DBC7250(L_1, _stringLiteralD7B307108DC78F139B624211F6A0A31A94506FFE, /*hidden argument*/NULL);
		V_0 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		String_t* L_3 = V_0;
		bool L_4 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0050;
		}
	}
	{
		String_t* L_5 = V_0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_6 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)59));
		NullCheck(L_5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = String_Split_m13262358217AD2C119FD1B9733C3C0289D608512(L_5, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		V_2 = 0;
		goto IL_004a;
	}

IL_003d:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		Platform_AddDllDirectory_mDBF08428063CDC47D60B7E7115EA27EA12389AAE(L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_004a:
	{
		int32_t L_14 = V_2;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_15 = V_1;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))))
		{
			goto IL_003d;
		}
	}

IL_0050:
	{
		return;
	}
}
// WinRT.DllModule WinRT.DllModule::TryLoad(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70 * DllModule_TryLoad_m6BD21F7087DB12111225A8972F7760B83D74DA65 (String_t* ___fileName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DllModule_TryLoad_m6BD21F7087DB12111225A8972F7760B83D74DA65_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE * V_0 = NULL;
	bool V_1 = false;
	WeakReference_1_t582B68A827348E837D31F15DE589784EF4505E75 * V_2 = NULL;
	DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70 * V_3 = NULL;
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	DllGetActivationFactory_tDFDF607D5B79CFF73AE0359FEB1EB1C41EE6966B * V_5 = NULL;
	DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70 * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70_il2cpp_TypeInfo_var);
		Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE * L_0 = ((DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70_StaticFields*)il2cpp_codegen_static_fields_for(DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70_il2cpp_TypeInfo_var))->get__cache_3();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE * L_1 = V_0;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70_il2cpp_TypeInfo_var);
			Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE * L_2 = ((DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70_StaticFields*)il2cpp_codegen_static_fields_for(DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70_il2cpp_TypeInfo_var))->get__cache_3();
			String_t* L_3 = ___fileName0;
			NullCheck(L_2);
			bool L_4 = Dictionary_2_TryGetValue_m8FC423999B63B01CF06D71955893DACD2EEA3999(L_2, L_3, (WeakReference_1_t582B68A827348E837D31F15DE589784EF4505E75 **)(&V_2), /*hidden argument*/Dictionary_2_TryGetValue_m8FC423999B63B01CF06D71955893DACD2EEA3999_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_002c;
			}
		}

IL_001f:
		{
			WeakReference_1_t582B68A827348E837D31F15DE589784EF4505E75 * L_5 = V_2;
			NullCheck(L_5);
			bool L_6 = WeakReference_1_TryGetTarget_m32C6E67C08B4DFE53E7E5262B7D534B0B61B0F72(L_5, (DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70 **)(&V_3), /*hidden argument*/WeakReference_1_TryGetTarget_m32C6E67C08B4DFE53E7E5262B7D534B0B61B0F72_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_00b4;
			}
		}

IL_002c:
		{
			String_t* L_7 = ___fileName0;
			IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
			intptr_t L_8 = Platform_TryLoadLibraryExW_m02C79A74A06C659CF7455920EEEDBCDAD23FEF9C(L_7, (intptr_t)(0), 0, /*hidden argument*/NULL);
			V_4 = (intptr_t)L_8;
			intptr_t L_9 = V_4;
			bool L_10 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_9, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_005a;
			}
		}

IL_0048:
		{
			String_t* L_11 = ___fileName0;
			IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
			intptr_t L_12 = Platform_TryLoadLibraryExW_m02C79A74A06C659CF7455920EEEDBCDAD23FEF9C(L_11, (intptr_t)(0), ((int32_t)4096), /*hidden argument*/NULL);
			V_4 = (intptr_t)L_12;
		}

IL_005a:
		{
		}

IL_005b:
		try
		{ // begin try (depth: 2)
			{
				intptr_t L_13 = V_4;
				bool L_14 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_13, (intptr_t)(0), /*hidden argument*/NULL);
				if (!L_14)
				{
					goto IL_006e;
				}
			}

IL_0069:
			{
				V_6 = (DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70 *)NULL;
				IL2CPP_LEAVE(0xC3, FINALLY_009e);
			}

IL_006e:
			{
				intptr_t L_15 = V_4;
				IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
				DllGetActivationFactory_tDFDF607D5B79CFF73AE0359FEB1EB1C41EE6966B * L_16 = Platform_TryGetProcAddress_TisDllGetActivationFactory_tDFDF607D5B79CFF73AE0359FEB1EB1C41EE6966B_mD54E89432FD96FCC347B0B9765FAC259780D7012((intptr_t)L_15, /*hidden argument*/Platform_TryGetProcAddress_TisDllGetActivationFactory_tDFDF607D5B79CFF73AE0359FEB1EB1C41EE6966B_mD54E89432FD96FCC347B0B9765FAC259780D7012_RuntimeMethod_var);
				V_5 = L_16;
				DllGetActivationFactory_tDFDF607D5B79CFF73AE0359FEB1EB1C41EE6966B * L_17 = V_5;
				if (L_17)
				{
					goto IL_0080;
				}
			}

IL_007b:
			{
				V_6 = (DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70 *)NULL;
				IL2CPP_LEAVE(0xC3, FINALLY_009e);
			}

IL_0080:
			{
				String_t* L_18 = ___fileName0;
				DllGetActivationFactory_tDFDF607D5B79CFF73AE0359FEB1EB1C41EE6966B * L_19 = V_5;
				DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70 * L_20 = (DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70 *)il2cpp_codegen_object_new(DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70_il2cpp_TypeInfo_var);
				DllModule__ctor_m5F11DC1FAE5C8AD72D068157D7CF8673F3FD0616(L_20, L_18, (intptr_t*)(&V_4), L_19, /*hidden argument*/NULL);
				V_3 = L_20;
				IL2CPP_RUNTIME_CLASS_INIT(DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70_il2cpp_TypeInfo_var);
				Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE * L_21 = ((DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70_StaticFields*)il2cpp_codegen_static_fields_for(DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70_il2cpp_TypeInfo_var))->get__cache_3();
				String_t* L_22 = ___fileName0;
				DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70 * L_23 = V_3;
				WeakReference_1_t582B68A827348E837D31F15DE589784EF4505E75 * L_24 = (WeakReference_1_t582B68A827348E837D31F15DE589784EF4505E75 *)il2cpp_codegen_object_new(WeakReference_1_t582B68A827348E837D31F15DE589784EF4505E75_il2cpp_TypeInfo_var);
				WeakReference_1__ctor_mEF3D62A2C3A5F07179A0BE4A00A3312FD1BFBC66(L_24, L_23, /*hidden argument*/WeakReference_1__ctor_mEF3D62A2C3A5F07179A0BE4A00A3312FD1BFBC66_RuntimeMethod_var);
				NullCheck(L_21);
				Dictionary_2_set_Item_mF678B2F289B0764AA3183D0C030EE2300D713B57(L_21, L_22, L_24, /*hidden argument*/Dictionary_2_set_Item_mF678B2F289B0764AA3183D0C030EE2300D713B57_RuntimeMethod_var);
				IL2CPP_LEAVE(0xB4, FINALLY_009e);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_009e;
		}

FINALLY_009e:
		{ // begin finally (depth: 2)
			{
				intptr_t L_25 = V_4;
				bool L_26 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_25, (intptr_t)(0), /*hidden argument*/NULL);
				if (!L_26)
				{
					goto IL_00b3;
				}
			}

IL_00ac:
			{
				intptr_t L_27 = V_4;
				IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
				Platform_FreeLibrary_mA760C95B6712C55E42A1FDDF88373685B7069723((intptr_t)L_27, /*hidden argument*/NULL);
			}

IL_00b3:
			{
				IL2CPP_END_FINALLY(158)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(158)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0xC3, FINALLY_00b9);
			IL2CPP_JUMP_TBL(0xB4, IL_00b4)
		}

IL_00b4:
		{
			DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70 * L_28 = V_3;
			V_6 = L_28;
			IL2CPP_LEAVE(0xC3, FINALLY_00b9);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b9;
	}

FINALLY_00b9:
	{ // begin finally (depth: 1)
		{
			bool L_29 = V_1;
			if (!L_29)
			{
				goto IL_00c2;
			}
		}

IL_00bc:
		{
			Dictionary_2_t08F88705F2521D76F71AEF902ACA86593C45A5AE * L_30 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_30, /*hidden argument*/NULL);
		}

IL_00c2:
		{
			IL2CPP_END_FINALLY(185)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(185)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC3, IL_00c3)
	}

IL_00c3:
	{
		DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70 * L_31 = V_6;
		return L_31;
	}
}
// System.Void WinRT.DllModule::.ctor(System.String,System.IntPtr&,WinRT.DllModule_DllGetActivationFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllModule__ctor_m5F11DC1FAE5C8AD72D068157D7CF8673F3FD0616 (DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70 * __this, String_t* ___fileName0, intptr_t* ___moduleHandle1, DllGetActivationFactory_tDFDF607D5B79CFF73AE0359FEB1EB1C41EE6966B * ___getActivationFactory2, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___fileName0;
		__this->set__fileName_0(L_0);
		intptr_t* L_1 = ___moduleHandle1;
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_2 = ModuleReference_Allocate_m22CB010050F3ABA58AE721231CF961BEB4E7E2B6(__this, (intptr_t*)L_1, /*hidden argument*/NULL);
		__this->set__moduleHandle_1(L_2);
		DllGetActivationFactory_tDFDF607D5B79CFF73AE0359FEB1EB1C41EE6966B * L_3 = ___getActivationFactory2;
		__this->set__GetActivationFactory_2(L_3);
		return;
	}
}
// WinRT.ObjectReference`1<WinRT.Interop.IActivationFactoryVftbl> WinRT.DllModule::GetActivationFactory(WinRT.HString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t0DC6E4D5526B1D82029F260034BF69B7B6407E9D * DllModule_GetActivationFactory_m414E61634C0E727E8CBC5AC96EDC460E680A15AB (DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70 * __this, HString_tE419B8347D4539E1392195AB582983128BBFF2E6 * ___runtimeClassId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DllModule_GetActivationFactory_m414E61634C0E727E8CBC5AC96EDC460E680A15AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DllGetActivationFactory_tDFDF607D5B79CFF73AE0359FEB1EB1C41EE6966B * L_0 = __this->get__GetActivationFactory_2();
		HString_tE419B8347D4539E1392195AB582983128BBFF2E6 * L_1 = ___runtimeClassId0;
		NullCheck(L_1);
		intptr_t L_2 = L_1->get_Handle_0();
		NullCheck(L_0);
		int32_t L_3 = DllGetActivationFactory_Invoke_mCE2E4FD5AFFE79CB3FBE08999E3BB101EDF337B2(L_0, (intptr_t)L_2, (intptr_t*)(intptr_t*)(((uintptr_t)(&V_0))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m4049F1FF511B6E0E557FC8426626DD9DFD87F102(L_3, /*hidden argument*/NULL);
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_4 = __this->get__moduleHandle_1();
		ObjectReference_1_t0DC6E4D5526B1D82029F260034BF69B7B6407E9D * L_5 = ObjectReference_1_Attach_m222C34E726851CAF0922BA49E41E7AF509CFFC65(L_4, (intptr_t*)(&V_0), /*hidden argument*/ObjectReference_1_Attach_m222C34E726851CAF0922BA49E41E7AF509CFFC65_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void WinRT.DllModule::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllModule_Finalize_m35F56D0DAED077709AB2BFEA02544F3C34F41A89 (DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70 * __this, const RuntimeMethod* method)
{
	ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_0 = __this->get__moduleHandle_1();
		V_0 = L_0;
		ModuleReference_Release_mCBB02150B5DEE435F1C7E5DEEE91A862BD49E7BC((ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x17, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x17, IL_0017)
	}

IL_0017:
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
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_DllGetActivationFactory_tDFDF607D5B79CFF73AE0359FEB1EB1C41EE6966B (DllGetActivationFactory_tDFDF607D5B79CFF73AE0359FEB1EB1C41EE6966B * __this, intptr_t ___activatableClassId0, intptr_t* ___activationFactory1, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc)(intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___activatableClassId0, ___activationFactory1);

	return returnValue;
}
// System.Void WinRT.DllModule_DllGetActivationFactory::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DllGetActivationFactory__ctor_mC68B04523862ED063AA0B25F1E17BD7F35A7DB1F (DllGetActivationFactory_tDFDF607D5B79CFF73AE0359FEB1EB1C41EE6966B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.DllModule_DllGetActivationFactory::Invoke(System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DllGetActivationFactory_Invoke_mCE2E4FD5AFFE79CB3FBE08999E3BB101EDF337B2 (DllGetActivationFactory_tDFDF607D5B79CFF73AE0359FEB1EB1C41EE6966B * __this, intptr_t ___activatableClassId0, intptr_t* ___activationFactory1, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 2)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___activatableClassId0, ___activationFactory1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___activatableClassId0, ___activationFactory1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___activatableClassId0, ___activationFactory1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___activatableClassId0, ___activationFactory1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___activatableClassId0, ___activationFactory1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___activatableClassId0, ___activationFactory1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___activatableClassId0) - 1), ___activationFactory1, targetMethod);
				}
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___activatableClassId0, ___activationFactory1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.DllModule_DllGetActivationFactory::BeginInvoke(System.IntPtr,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DllGetActivationFactory_BeginInvoke_mEAD2F1B77D402D82A65177F69FBDD24D860CD4D0 (DllGetActivationFactory_tDFDF607D5B79CFF73AE0359FEB1EB1C41EE6966B * __this, intptr_t ___activatableClassId0, intptr_t* ___activationFactory1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DllGetActivationFactory_BeginInvoke_mEAD2F1B77D402D82A65177F69FBDD24D860CD4D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___activatableClassId0);
	__d_args[1] = ___activationFactory1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 WinRT.DllModule_DllGetActivationFactory::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DllGetActivationFactory_EndInvoke_m764C399071BD19B8F9A28A525A3E617C841092D7 (DllGetActivationFactory_tDFDF607D5B79CFF73AE0359FEB1EB1C41EE6966B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WinRT.HString::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HString__ctor_m4709179D1DDC0A3B4381BA1DC47394F33330C53B (HString_tE419B8347D4539E1392195AB582983128BBFF2E6 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HString__ctor_m4709179D1DDC0A3B4381BA1DC47394F33330C53B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value0;
		String_t* L_1 = ___value0;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		intptr_t L_3 = Platform_WindowsCreateString_m738195D3E2596563126446D7B671B674C2FC3EEE(L_0, L_2, /*hidden argument*/NULL);
		__this->set_Handle_0((intptr_t)L_3);
		return;
	}
}
// System.String WinRT.HString::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HString_ToString_m45720BC19837F1401FA943D4E1DB02C6BFE7C60F (HString_tE419B8347D4539E1392195AB582983128BBFF2E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HString_ToString_m45720BC19837F1401FA943D4E1DB02C6BFE7C60F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		intptr_t L_0 = __this->get_Handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		Il2CppChar* L_1 = Platform_WindowsGetStringRawBuffer_m58557E46079156E084D25CF7B802D568BD92E283((intptr_t)L_0, (uint32_t*)(uint32_t*)(((uintptr_t)(&V_0))), /*hidden argument*/NULL);
		uint32_t L_2 = V_0;
		String_t* L_3 = String_CreateString_mC16F6AD7A921B1AD038C1EB215D7F055C5676590(NULL, (Il2CppChar*)(Il2CppChar*)L_1, 0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void WinRT.HString::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HString_Dispose_mFFCE063EF17A9FB22C80AE11227BAB6AD886929F (HString_tE419B8347D4539E1392195AB582983128BBFF2E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HString_Dispose_mFFCE063EF17A9FB22C80AE11227BAB6AD886929F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_Handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		Platform_WindowsDeleteString_m6CEE353E8DF2F3A0845E0C515E9DC382742887C8((intptr_t)L_0, /*hidden argument*/NULL);
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
// WinRT.Interop.IUnknownVftbl WinRT.IObjectReference::get_VftblIUnknown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  IObjectReference_get_VftblIUnknown_m14ADB939086C467C52181067FB6BBB59ACC03A79 (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * __this, const RuntimeMethod* method)
{
	{
		IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  L_0 = __this->get_U3CVftblIUnknownU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void WinRT.IObjectReference::.ctor(WinRT.ModuleReference,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IObjectReference__ctor_m69A7FA4F5796A411C996AD016C4CB3667C529294 (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * __this, ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ___module0, intptr_t ___thisPtr1, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_0 = ModuleReference_AddRef_m3E220263CCBE7E4914D3336378AA819E15706531((ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 *)(&___module0), /*hidden argument*/NULL);
		__this->set_Module_1(L_0);
		intptr_t L_1 = ___thisPtr1;
		__this->set_ThisPtr_0((intptr_t)L_1);
		return;
	}
}
// System.Void WinRT.IObjectReference::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IObjectReference_Finalize_mED2974E5BF8AE9A2E3498CBAEA0F47A2EEA3D302 (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * __this, const RuntimeMethod* method)
{
	ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_0 = __this->get_Module_1();
		V_0 = L_0;
		ModuleReference_Release_mCBB02150B5DEE435F1C7E5DEEE91A862BD49E7BC((ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x17, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x17, IL_0017)
	}

IL_0017:
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
// WinRT.Interop.IActivationFactoryVftbl
const Il2CppGuid IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5::CLSID = { 0x35, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };


// Conversion methods for marshalling of: WinRT.Interop.IActivationFactoryVftbl
IL2CPP_EXTERN_C void IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5_marshal_pinvoke(const IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5& unmarshaled, IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___ActivateInstance_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ActivateInstance_1()));
}
IL2CPP_EXTERN_C void IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5_marshal_pinvoke_back(const IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5_marshaled_pinvoke& marshaled, IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_ActivateInstance_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_ActivateInstance_t4FF6B61658BD043CF30F2AE21E590CFCEDDD086A>(marshaled.___ActivateInstance_1, _ActivateInstance_t4FF6B61658BD043CF30F2AE21E590CFCEDDD086A_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IActivationFactoryVftbl
IL2CPP_EXTERN_C void IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5_marshal_pinvoke_cleanup(IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IActivationFactoryVftbl
IL2CPP_EXTERN_C void IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5_marshal_com(const IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5& unmarshaled, IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___ActivateInstance_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ActivateInstance_1()));
}
IL2CPP_EXTERN_C void IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5_marshal_com_back(const IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5_marshaled_com& marshaled, IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_ActivateInstance_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_ActivateInstance_t4FF6B61658BD043CF30F2AE21E590CFCEDDD086A>(marshaled.___ActivateInstance_1, _ActivateInstance_t4FF6B61658BD043CF30F2AE21E590CFCEDDD086A_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IActivationFactoryVftbl
IL2CPP_EXTERN_C void IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5_marshal_com_cleanup(IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__ActivateInstance_t4FF6B61658BD043CF30F2AE21E590CFCEDDD086A (_ActivateInstance_t4FF6B61658BD043CF30F2AE21E590CFCEDDD086A * __this, intptr_t ___pThis0, intptr_t* ___instance1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pThis0, ___instance1);

	return returnValue;
}
// System.Void WinRT.Interop.IActivationFactoryVftbl__ActivateInstance::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ActivateInstance__ctor_m986F739124C4C26663E252974DAFCB77A09B1195 (_ActivateInstance_t4FF6B61658BD043CF30F2AE21E590CFCEDDD086A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IActivationFactoryVftbl__ActivateInstance::Invoke(System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _ActivateInstance_Invoke_mD96423346AF4C39F876209DB8143B314662EC7E3 (_ActivateInstance_t4FF6B61658BD043CF30F2AE21E590CFCEDDD086A * __this, intptr_t ___pThis0, intptr_t* ___instance1, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 2)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___instance1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___instance1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___instance1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___instance1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0, ___instance1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0, ___instance1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___pThis0) - 1), ___instance1, targetMethod);
				}
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___instance1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IActivationFactoryVftbl__ActivateInstance::BeginInvoke(System.IntPtr,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ActivateInstance_BeginInvoke_m8067D3AF4C84BC6B6DAB4007D7E07672AC736A83 (_ActivateInstance_t4FF6B61658BD043CF30F2AE21E590CFCEDDD086A * __this, intptr_t ___pThis0, intptr_t* ___instance1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_ActivateInstance_BeginInvoke_m8067D3AF4C84BC6B6DAB4007D7E07672AC736A83_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pThis0);
	__d_args[1] = ___instance1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 WinRT.Interop.IActivationFactoryVftbl__ActivateInstance::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _ActivateInstance_EndInvoke_m8B1C89CAC3AD25A9A9ADC3D7EA52477821B182AF (_ActivateInstance_t4FF6B61658BD043CF30F2AE21E590CFCEDDD086A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// WinRT.Interop.IAgileObjectVftbl
const Il2CppGuid IAgileObjectVftbl_t576F117596790657CE35723C6C436B5268073C12::CLSID = { 0x94ea2b94, 0xe9cc, 0x49e0, 0xc0, 0xff, 0xee, 0x64, 0xca, 0x8f, 0x5b, 0x90 };


// Conversion methods for marshalling of: WinRT.Interop.IAgileObjectVftbl
IL2CPP_EXTERN_C void IAgileObjectVftbl_t576F117596790657CE35723C6C436B5268073C12_marshal_pinvoke(const IAgileObjectVftbl_t576F117596790657CE35723C6C436B5268073C12& unmarshaled, IAgileObjectVftbl_t576F117596790657CE35723C6C436B5268073C12_marshaled_pinvoke& marshaled)
{
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_pinvoke(unmarshaled.get_IUnknownVftbl_0(), marshaled.___IUnknownVftbl_0);
}
IL2CPP_EXTERN_C void IAgileObjectVftbl_t576F117596790657CE35723C6C436B5268073C12_marshal_pinvoke_back(const IAgileObjectVftbl_t576F117596790657CE35723C6C436B5268073C12_marshaled_pinvoke& marshaled, IAgileObjectVftbl_t576F117596790657CE35723C6C436B5268073C12& unmarshaled)
{
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  unmarshaled_IUnknownVftbl_temp_0;
	memset((&unmarshaled_IUnknownVftbl_temp_0), 0, sizeof(unmarshaled_IUnknownVftbl_temp_0));
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_pinvoke_back(marshaled.___IUnknownVftbl_0, unmarshaled_IUnknownVftbl_temp_0);
	unmarshaled.set_IUnknownVftbl_0(unmarshaled_IUnknownVftbl_temp_0);
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IAgileObjectVftbl
IL2CPP_EXTERN_C void IAgileObjectVftbl_t576F117596790657CE35723C6C436B5268073C12_marshal_pinvoke_cleanup(IAgileObjectVftbl_t576F117596790657CE35723C6C436B5268073C12_marshaled_pinvoke& marshaled)
{
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_pinvoke_cleanup(marshaled.___IUnknownVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IAgileObjectVftbl
IL2CPP_EXTERN_C void IAgileObjectVftbl_t576F117596790657CE35723C6C436B5268073C12_marshal_com(const IAgileObjectVftbl_t576F117596790657CE35723C6C436B5268073C12& unmarshaled, IAgileObjectVftbl_t576F117596790657CE35723C6C436B5268073C12_marshaled_com& marshaled)
{
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_com(unmarshaled.get_IUnknownVftbl_0(), marshaled.___IUnknownVftbl_0);
}
IL2CPP_EXTERN_C void IAgileObjectVftbl_t576F117596790657CE35723C6C436B5268073C12_marshal_com_back(const IAgileObjectVftbl_t576F117596790657CE35723C6C436B5268073C12_marshaled_com& marshaled, IAgileObjectVftbl_t576F117596790657CE35723C6C436B5268073C12& unmarshaled)
{
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  unmarshaled_IUnknownVftbl_temp_0;
	memset((&unmarshaled_IUnknownVftbl_temp_0), 0, sizeof(unmarshaled_IUnknownVftbl_temp_0));
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_com_back(marshaled.___IUnknownVftbl_0, unmarshaled_IUnknownVftbl_temp_0);
	unmarshaled.set_IUnknownVftbl_0(unmarshaled_IUnknownVftbl_temp_0);
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IAgileObjectVftbl
IL2CPP_EXTERN_C void IAgileObjectVftbl_t576F117596790657CE35723C6C436B5268073C12_marshal_com_cleanup(IAgileObjectVftbl_t576F117596790657CE35723C6C436B5268073C12_marshaled_com& marshaled)
{
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_com_cleanup(marshaled.___IUnknownVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// WinRT.Interop.IAsyncInfo WinRT.Interop.IAsyncInfo::op_Implicit(WinRT.IObjectReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IAsyncInfo_tF1F6A3A139BB86EE62ADEC082EE510976CBD093A * IAsyncInfo_op_Implicit_m0EAC13AFF5C222E2342460242EB49D6326862EBC (IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncInfo_op_Implicit_m0EAC13AFF5C222E2342460242EB49D6326862EBC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 * L_0 = ___obj0;
		NullCheck(L_0);
		ObjectReference_1_t69270BB4E7A44A4CBD4E25BE22C8373461A12F78 * L_1 = IObjectReference_As_TisVftbl_tA006332DC96A64591EEDDB7F1732C41894681B96_m61156E1718CE84A35B02CB75EEA5933FE98CA9F0(L_0, /*hidden argument*/IObjectReference_As_TisVftbl_tA006332DC96A64591EEDDB7F1732C41894681B96_m61156E1718CE84A35B02CB75EEA5933FE98CA9F0_RuntimeMethod_var);
		IAsyncInfo_tF1F6A3A139BB86EE62ADEC082EE510976CBD093A * L_2 = IAsyncInfo_op_Implicit_m3A0A3D99DED163331E392F1C3EB200C78C9798D5(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// WinRT.Interop.IAsyncInfo WinRT.Interop.IAsyncInfo::op_Implicit(WinRT.ObjectReference`1<WinRT.Interop.IAsyncInfo_Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IAsyncInfo_tF1F6A3A139BB86EE62ADEC082EE510976CBD093A * IAsyncInfo_op_Implicit_m3A0A3D99DED163331E392F1C3EB200C78C9798D5 (ObjectReference_1_t69270BB4E7A44A4CBD4E25BE22C8373461A12F78 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncInfo_op_Implicit_m3A0A3D99DED163331E392F1C3EB200C78C9798D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_t69270BB4E7A44A4CBD4E25BE22C8373461A12F78 * L_0 = ___obj0;
		IAsyncInfo_tF1F6A3A139BB86EE62ADEC082EE510976CBD093A * L_1 = (IAsyncInfo_tF1F6A3A139BB86EE62ADEC082EE510976CBD093A *)il2cpp_codegen_object_new(IAsyncInfo_tF1F6A3A139BB86EE62ADEC082EE510976CBD093A_il2cpp_TypeInfo_var);
		IAsyncInfo__ctor_m85360DB303D19469135DF2B180D6E956558A1DFD(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void WinRT.Interop.IAsyncInfo::.ctor(WinRT.ObjectReference`1<WinRT.Interop.IAsyncInfo_Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAsyncInfo__ctor_m85360DB303D19469135DF2B180D6E956558A1DFD (IAsyncInfo_tF1F6A3A139BB86EE62ADEC082EE510976CBD093A * __this, ObjectReference_1_t69270BB4E7A44A4CBD4E25BE22C8373461A12F78 * ___obj0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ObjectReference_1_t69270BB4E7A44A4CBD4E25BE22C8373461A12F78 * L_0 = ___obj0;
		__this->set__obj_0(L_0);
		return;
	}
}
// System.Exception WinRT.Interop.IAsyncInfo::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * IAsyncInfo_get_ErrorCode_m1A81A0F297B267E6580F9E75F2CF7469027E221C (IAsyncInfo_tF1F6A3A139BB86EE62ADEC082EE510976CBD093A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncInfo_get_ErrorCode_m1A81A0F297B267E6580F9E75F2CF7469027E221C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ObjectReference_1_t69270BB4E7A44A4CBD4E25BE22C8373461A12F78 * L_0 = __this->get__obj_0();
		NullCheck(L_0);
		Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96 * L_1 = L_0->get_address_of_Vftbl_4();
		_get_PropertyAsInt_t8313A617DB0A557D1D90360CC3A2553A83E89A62 * L_2 = L_1->get_get_ErrorCode_3();
		ObjectReference_1_t69270BB4E7A44A4CBD4E25BE22C8373461A12F78 * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *)L_3)->get_ThisPtr_0();
		NullCheck(L_2);
		int32_t L_5 = _get_PropertyAsInt_Invoke_m77322411F59C68B5B13EAEC857A1E23D03A0F896(L_2, (intptr_t)L_4, (int32_t*)(int32_t*)(((uintptr_t)(&V_0))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m4049F1FF511B6E0E557FC8426626DD9DFD87F102(L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		Exception_t * L_7 = Marshal_GetExceptionForHR_mDC2E260C6A8FD8F26F3F97B95191A9BC329A726B(L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void WinRT.Interop.IAsyncInfo::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAsyncInfo_Cancel_m2995BEA6C614A720387B03419A746A90D4AA48AB (IAsyncInfo_tF1F6A3A139BB86EE62ADEC082EE510976CBD093A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncInfo_Cancel_m2995BEA6C614A720387B03419A746A90D4AA48AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectReference_1_t69270BB4E7A44A4CBD4E25BE22C8373461A12F78 * L_0 = __this->get__obj_0();
		NullCheck(L_0);
		Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96 * L_1 = L_0->get_address_of_Vftbl_4();
		_method0_t68810954DB248B2CD317989111F586F15200690B * L_2 = L_1->get_Cancel_4();
		ObjectReference_1_t69270BB4E7A44A4CBD4E25BE22C8373461A12F78 * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		intptr_t L_4 = ((IObjectReference_t9479EB1164210609F882D77E3E75FBEA676B0EE8 *)L_3)->get_ThisPtr_0();
		NullCheck(L_2);
		int32_t L_5 = _method0_Invoke_m2B0253C3391591B4A54DC4701F229CDCDA8C3A90(L_2, (intptr_t)L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m4049F1FF511B6E0E557FC8426626DD9DFD87F102(L_5, /*hidden argument*/NULL);
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
// WinRT.Interop.IAsyncInfo_Vftbl
const Il2CppGuid Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96::CLSID = { 0x36, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };


// Conversion methods for marshalling of: WinRT.Interop.IAsyncInfo/Vftbl
IL2CPP_EXTERN_C void Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96_marshal_pinvoke(const Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96& unmarshaled, Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_Id_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Id_1()));
	marshaled.___get_Status_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Status_2()));
	marshaled.___get_ErrorCode_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_ErrorCode_3()));
	marshaled.___Cancel_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Cancel_4()));
	marshaled.___Close_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Close_5()));
}
IL2CPP_EXTERN_C void Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96_marshal_pinvoke_back(const Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96_marshaled_pinvoke& marshaled, Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_Id_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsInt_t8313A617DB0A557D1D90360CC3A2553A83E89A62>(marshaled.___get_Id_1, _get_PropertyAsInt_t8313A617DB0A557D1D90360CC3A2553A83E89A62_il2cpp_TypeInfo_var));
	unmarshaled.set_get_Status_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E>(marshaled.___get_Status_2, _get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E_il2cpp_TypeInfo_var));
	unmarshaled.set_get_ErrorCode_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsInt_t8313A617DB0A557D1D90360CC3A2553A83E89A62>(marshaled.___get_ErrorCode_3, _get_PropertyAsInt_t8313A617DB0A557D1D90360CC3A2553A83E89A62_il2cpp_TypeInfo_var));
	unmarshaled.set_Cancel_4(il2cpp_codegen_marshal_function_ptr_to_delegate<_method0_t68810954DB248B2CD317989111F586F15200690B>(marshaled.___Cancel_4, _method0_t68810954DB248B2CD317989111F586F15200690B_il2cpp_TypeInfo_var));
	unmarshaled.set_Close_5(il2cpp_codegen_marshal_function_ptr_to_delegate<_method0_t68810954DB248B2CD317989111F586F15200690B>(marshaled.___Close_5, _method0_t68810954DB248B2CD317989111F586F15200690B_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IAsyncInfo/Vftbl
IL2CPP_EXTERN_C void Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96_marshal_pinvoke_cleanup(Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IAsyncInfo/Vftbl
IL2CPP_EXTERN_C void Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96_marshal_com(const Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96& unmarshaled, Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_Id_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Id_1()));
	marshaled.___get_Status_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Status_2()));
	marshaled.___get_ErrorCode_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_ErrorCode_3()));
	marshaled.___Cancel_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Cancel_4()));
	marshaled.___Close_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Close_5()));
}
IL2CPP_EXTERN_C void Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96_marshal_com_back(const Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96_marshaled_com& marshaled, Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_Id_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsInt_t8313A617DB0A557D1D90360CC3A2553A83E89A62>(marshaled.___get_Id_1, _get_PropertyAsInt_t8313A617DB0A557D1D90360CC3A2553A83E89A62_il2cpp_TypeInfo_var));
	unmarshaled.set_get_Status_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E>(marshaled.___get_Status_2, _get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E_il2cpp_TypeInfo_var));
	unmarshaled.set_get_ErrorCode_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsInt_t8313A617DB0A557D1D90360CC3A2553A83E89A62>(marshaled.___get_ErrorCode_3, _get_PropertyAsInt_t8313A617DB0A557D1D90360CC3A2553A83E89A62_il2cpp_TypeInfo_var));
	unmarshaled.set_Cancel_4(il2cpp_codegen_marshal_function_ptr_to_delegate<_method0_t68810954DB248B2CD317989111F586F15200690B>(marshaled.___Cancel_4, _method0_t68810954DB248B2CD317989111F586F15200690B_il2cpp_TypeInfo_var));
	unmarshaled.set_Close_5(il2cpp_codegen_marshal_function_ptr_to_delegate<_method0_t68810954DB248B2CD317989111F586F15200690B>(marshaled.___Close_5, _method0_t68810954DB248B2CD317989111F586F15200690B_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IAsyncInfo/Vftbl
IL2CPP_EXTERN_C void Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96_marshal_com_cleanup(Vftbl_tA006332DC96A64591EEDDB7F1732C41894681B96_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_IAsyncOperation__OnCompleted_m17475ECDB1599EBD553EB977AE3B4A6DAA99C5C9(intptr_t ___thisPtr0, intptr_t ___operationPtr1, int32_t ___status2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue = IAsyncOperation__OnCompleted_m17475ECDB1599EBD553EB977AE3B4A6DAA99C5C9(___thisPtr0, ___operationPtr1, ___status2, NULL);

	return returnValue;
}
// System.Void WinRT.Interop.IAsyncOperation::.ctor(System.Guid,WinRT.ObjectReference`1<WinRT.Interop.IAsyncOperation_Vftbl>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAsyncOperation__ctor_m2C70FB839D61EC75B179680D75A8516C7DDE9785 (IAsyncOperation_t7AE926151C1DBB80AD17463891F756F6C083BC07 * __this, Guid_t  ___iid0, ObjectReference_1_tA170C4C2A9CD8CC3F9693CA7DE47AEB8FE892974 * ___obj1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation__ctor_m2C70FB839D61EC75B179680D75A8516C7DDE9785_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		ObjectReference_1_tA170C4C2A9CD8CC3F9693CA7DE47AEB8FE892974 * L_0 = ___obj1;
		__this->set__obj_0(L_0);
		Guid_t  L_1 = ___iid0;
		ObjectReference_1_tA170C4C2A9CD8CC3F9693CA7DE47AEB8FE892974 * L_2 = __this->get__obj_0();
		ObjectReference_1_tA170C4C2A9CD8CC3F9693CA7DE47AEB8FE892974 * L_3 = __this->get__obj_0();
		NullCheck(L_3);
		Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB * L_4 = L_3->get_address_of_Vftbl_4();
		_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * L_5 = L_4->get_get_Completed_2();
		ObjectReference_1_tA170C4C2A9CD8CC3F9693CA7DE47AEB8FE892974 * L_6 = __this->get__obj_0();
		NullCheck(L_6);
		Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB * L_7 = L_6->get_address_of_Vftbl_4();
		_put_PropertyAsObject_t50B08BD6BB7FBD450046CD44CB2AC7A3310CBFDC * L_8 = L_7->get_put_Completed_1();
		IL2CPP_RUNTIME_CLASS_INIT(IAsyncOperation_t7AE926151C1DBB80AD17463891F756F6C083BC07_il2cpp_TypeInfo_var);
		IDelegate2_Obj_Enum_tDAE283FCD285A52E24B2CA3B344BF9784766348F * L_9 = ((IAsyncOperation_t7AE926151C1DBB80AD17463891F756F6C083BC07_StaticFields*)il2cpp_codegen_static_fields_for(IAsyncOperation_t7AE926151C1DBB80AD17463891F756F6C083BC07_il2cpp_TypeInfo_var))->get__OnCompletedDelegate_1();
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		intptr_t L_10 = Marshal_GetFunctionPointerForDelegate_TisIDelegate2_Obj_Enum_tDAE283FCD285A52E24B2CA3B344BF9784766348F_m3EB30148EDE6F6FFE970093AD002C30FB7A68A99(L_9, /*hidden argument*/Marshal_GetFunctionPointerForDelegate_TisIDelegate2_Obj_Enum_tDAE283FCD285A52E24B2CA3B344BF9784766348F_m3EB30148EDE6F6FFE970093AD002C30FB7A68A99_RuntimeMethod_var);
		DelegateProperty_1_tD9ACB29E556508E67776F11D93DD43F625DC8EA3 * L_11 = (DelegateProperty_1_tD9ACB29E556508E67776F11D93DD43F625DC8EA3 *)il2cpp_codegen_object_new(DelegateProperty_1_tD9ACB29E556508E67776F11D93DD43F625DC8EA3_il2cpp_TypeInfo_var);
		DelegateProperty_1__ctor_mD4D1361B69BEE97BE29BA827AC82BAAEE422BFCC(L_11, L_1, L_2, L_5, L_8, (intptr_t)L_10, /*hidden argument*/DelegateProperty_1__ctor_mD4D1361B69BEE97BE29BA827AC82BAAEE422BFCC_RuntimeMethod_var);
		__this->set__Completed_2(L_11);
		return;
	}
}
// System.Int32 WinRT.Interop.IAsyncOperation::_OnCompleted(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IAsyncOperation__OnCompleted_m17475ECDB1599EBD553EB977AE3B4A6DAA99C5C9 (intptr_t ___thisPtr0, intptr_t ___operationPtr1, int32_t ___status2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation__OnCompleted_m17475ECDB1599EBD553EB977AE3B4A6DAA99C5C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tDA51E37F0B56D3B6D051DDF66541DD421F25C95F * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_tDA51E37F0B56D3B6D051DDF66541DD421F25C95F * L_0 = (U3CU3Ec__DisplayClass4_0_tDA51E37F0B56D3B6D051DDF66541DD421F25C95F *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tDA51E37F0B56D3B6D051DDF66541DD421F25C95F_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_m3ECBE7715CD7FB49745C6C2E95F109E978CAB38A(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_tDA51E37F0B56D3B6D051DDF66541DD421F25C95F * L_1 = V_0;
		int32_t L_2 = ___status2;
		NullCheck(L_1);
		L_1->set_status_0(L_2);
		intptr_t L_3 = ___thisPtr0;
		U3CU3Ec__DisplayClass4_0_tDA51E37F0B56D3B6D051DDF66541DD421F25C95F * L_4 = V_0;
		Action_1_tE089E527B3CD85164C9FB409BE928F4D29731157 * L_5 = (Action_1_tE089E527B3CD85164C9FB409BE928F4D29731157 *)il2cpp_codegen_object_new(Action_1_tE089E527B3CD85164C9FB409BE928F4D29731157_il2cpp_TypeInfo_var);
		Action_1__ctor_m85339D493212D3CFADF2109035BC1670DE9E2943(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3C_OnCompletedU3Eb__0_m74B79726140D2655D1D31D933CBD5D849C648350_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m85339D493212D3CFADF2109035BC1670DE9E2943_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Delegate_t01789152B02E68157FD11FCBC21F63795C42E476_il2cpp_TypeInfo_var);
		int32_t L_6 = Delegate_MarshalInvoke_TisCompletedHandler_t3E2FC9A9183C1D110D5835F69852DFD8A7B6964B_m3544FF55800B65F73582A5CB621FCFB6E975FE38((intptr_t)L_3, L_5, /*hidden argument*/Delegate_MarshalInvoke_TisCompletedHandler_t3E2FC9A9183C1D110D5835F69852DFD8A7B6964B_m3544FF55800B65F73582A5CB621FCFB6E975FE38_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void WinRT.Interop.IAsyncOperation::set_Completed(WinRT.Interop.IAsyncOperation_CompletedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAsyncOperation_set_Completed_mFEE224F54E8C00CFF93CC0DA4F9C548E5A792429 (IAsyncOperation_t7AE926151C1DBB80AD17463891F756F6C083BC07 * __this, CompletedHandler_t3E2FC9A9183C1D110D5835F69852DFD8A7B6964B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_set_Completed_mFEE224F54E8C00CFF93CC0DA4F9C548E5A792429_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DelegateProperty_1_tD9ACB29E556508E67776F11D93DD43F625DC8EA3 * L_0 = __this->get__Completed_2();
		CompletedHandler_t3E2FC9A9183C1D110D5835F69852DFD8A7B6964B * L_1 = ___value0;
		NullCheck(L_0);
		DelegateProperty_1_set_Value_mF785FDD12D2B41563D212D6631576AE634D5D1A6(L_0, L_1, /*hidden argument*/DelegateProperty_1_set_Value_mF785FDD12D2B41563D212D6631576AE634D5D1A6_RuntimeMethod_var);
		return;
	}
}
// System.Void WinRT.Interop.IAsyncOperation::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAsyncOperation__cctor_mBD4C755B6823DF2FDCA87D71DA66FA0782542E4A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation__cctor_mBD4C755B6823DF2FDCA87D71DA66FA0782542E4A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IDelegate2_Obj_Enum_tDAE283FCD285A52E24B2CA3B344BF9784766348F * L_0 = (IDelegate2_Obj_Enum_tDAE283FCD285A52E24B2CA3B344BF9784766348F *)il2cpp_codegen_object_new(IDelegate2_Obj_Enum_tDAE283FCD285A52E24B2CA3B344BF9784766348F_il2cpp_TypeInfo_var);
		IDelegate2_Obj_Enum__ctor_m987ABDD112693FC0D01D80A35994A18945B37B8D(L_0, NULL, (intptr_t)((intptr_t)IAsyncOperation__OnCompleted_m17475ECDB1599EBD553EB977AE3B4A6DAA99C5C9_RuntimeMethod_var), /*hidden argument*/NULL);
		((IAsyncOperation_t7AE926151C1DBB80AD17463891F756F6C083BC07_StaticFields*)il2cpp_codegen_static_fields_for(IAsyncOperation_t7AE926151C1DBB80AD17463891F756F6C083BC07_il2cpp_TypeInfo_var))->set__OnCompletedDelegate_1(L_0);
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
// System.Void WinRT.Interop.IAsyncOperation_<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m3ECBE7715CD7FB49745C6C2E95F109E978CAB38A (U3CU3Ec__DisplayClass4_0_tDA51E37F0B56D3B6D051DDF66541DD421F25C95F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WinRT.Interop.IAsyncOperation_<>c__DisplayClass4_0::<_OnCompleted>b__0(WinRT.Interop.IAsyncOperation_CompletedHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3C_OnCompletedU3Eb__0_m74B79726140D2655D1D31D933CBD5D849C648350 (U3CU3Ec__DisplayClass4_0_tDA51E37F0B56D3B6D051DDF66541DD421F25C95F * __this, CompletedHandler_t3E2FC9A9183C1D110D5835F69852DFD8A7B6964B * ___handler0, const RuntimeMethod* method)
{
	{
		CompletedHandler_t3E2FC9A9183C1D110D5835F69852DFD8A7B6964B * L_0 = ___handler0;
		int32_t L_1 = __this->get_status_0();
		NullCheck(L_0);
		CompletedHandler_Invoke_mB3790412C715745DBD8A71ADE4BED16168602152(L_0, L_1, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_CompletedHandler_t3E2FC9A9183C1D110D5835F69852DFD8A7B6964B (CompletedHandler_t3E2FC9A9183C1D110D5835F69852DFD8A7B6964B * __this, int32_t ___status0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___status0);

}
// System.Void WinRT.Interop.IAsyncOperation_CompletedHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompletedHandler__ctor_m211886F269A2FD04FAD010FE8AE0FB2A9ABB7767 (CompletedHandler_t3E2FC9A9183C1D110D5835F69852DFD8A7B6964B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void WinRT.Interop.IAsyncOperation_CompletedHandler::Invoke(WinRT.AsyncStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompletedHandler_Invoke_mB3790412C715745DBD8A71ADE4BED16168602152 (CompletedHandler_t3E2FC9A9183C1D110D5835F69852DFD8A7B6964B * __this, int32_t ___status0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___status0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, targetMethod);
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
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___status0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___status0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___status0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___status0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___status0) - 1), targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((RuntimeObject*)(reinterpret_cast<RuntimeObject*>(&___status0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___status0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult WinRT.Interop.IAsyncOperation_CompletedHandler::BeginInvoke(WinRT.AsyncStatus,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CompletedHandler_BeginInvoke_mDB904331436CE4E30B86667DDC0B32B1908E3731 (CompletedHandler_t3E2FC9A9183C1D110D5835F69852DFD8A7B6964B * __this, int32_t ___status0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CompletedHandler_BeginInvoke_mDB904331436CE4E30B86667DDC0B32B1908E3731_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(AsyncStatus_t067E1F3C02D80A6C9A3C2CA1CAB65C2A9AB91218_il2cpp_TypeInfo_var, &___status0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void WinRT.Interop.IAsyncOperation_CompletedHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompletedHandler_EndInvoke_mCF73A217922F5597C0AFFE8C2126775A10845162 (CompletedHandler_t3E2FC9A9183C1D110D5835F69852DFD8A7B6964B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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


// Conversion methods for marshalling of: WinRT.Interop.IAsyncOperation/Vftbl
IL2CPP_EXTERN_C void Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB_marshal_pinvoke(const Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB& unmarshaled, Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___put_Completed_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_put_Completed_1()));
	marshaled.___get_Completed_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Completed_2()));
	marshaled.___GetResults_3 = unmarshaled.get_GetResults_3();
}
IL2CPP_EXTERN_C void Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB_marshal_pinvoke_back(const Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB_marshaled_pinvoke& marshaled, Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_put_Completed_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_put_PropertyAsObject_t50B08BD6BB7FBD450046CD44CB2AC7A3310CBFDC>(marshaled.___put_Completed_1, _put_PropertyAsObject_t50B08BD6BB7FBD450046CD44CB2AC7A3310CBFDC_il2cpp_TypeInfo_var));
	unmarshaled.set_get_Completed_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5>(marshaled.___get_Completed_2, _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5_il2cpp_TypeInfo_var));
	intptr_t unmarshaled_GetResults_temp_3;
	memset((&unmarshaled_GetResults_temp_3), 0, sizeof(unmarshaled_GetResults_temp_3));
	unmarshaled_GetResults_temp_3 = marshaled.___GetResults_3;
	unmarshaled.set_GetResults_3(unmarshaled_GetResults_temp_3);
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IAsyncOperation/Vftbl
IL2CPP_EXTERN_C void Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB_marshal_pinvoke_cleanup(Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IAsyncOperation/Vftbl
IL2CPP_EXTERN_C void Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB_marshal_com(const Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB& unmarshaled, Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___put_Completed_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_put_Completed_1()));
	marshaled.___get_Completed_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Completed_2()));
	marshaled.___GetResults_3 = unmarshaled.get_GetResults_3();
}
IL2CPP_EXTERN_C void Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB_marshal_com_back(const Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB_marshaled_com& marshaled, Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_put_Completed_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_put_PropertyAsObject_t50B08BD6BB7FBD450046CD44CB2AC7A3310CBFDC>(marshaled.___put_Completed_1, _put_PropertyAsObject_t50B08BD6BB7FBD450046CD44CB2AC7A3310CBFDC_il2cpp_TypeInfo_var));
	unmarshaled.set_get_Completed_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5>(marshaled.___get_Completed_2, _get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5_il2cpp_TypeInfo_var));
	intptr_t unmarshaled_GetResults_temp_3;
	memset((&unmarshaled_GetResults_temp_3), 0, sizeof(unmarshaled_GetResults_temp_3));
	unmarshaled_GetResults_temp_3 = marshaled.___GetResults_3;
	unmarshaled.set_GetResults_3(unmarshaled_GetResults_temp_3);
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IAsyncOperation/Vftbl
IL2CPP_EXTERN_C void Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB_marshal_com_cleanup(Vftbl_tE686A4A9C2C17F30A93D80CF9805E9CA0CF72FFB_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper_IDelegate2_Obj_Enum_tDAE283FCD285A52E24B2CA3B344BF9784766348F (IDelegate2_Obj_Enum_tDAE283FCD285A52E24B2CA3B344BF9784766348F * __this, intptr_t ___thisPtr0, intptr_t ___arg11, int32_t ___arg22, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___arg11, ___arg22);

	return returnValue;
}
// System.Void WinRT.Interop.IDelegate2_Obj_Enum::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IDelegate2_Obj_Enum__ctor_m987ABDD112693FC0D01D80A35994A18945B37B8D (IDelegate2_Obj_Enum_tDAE283FCD285A52E24B2CA3B344BF9784766348F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IDelegate2_Obj_Enum::Invoke(System.IntPtr,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IDelegate2_Obj_Enum_Invoke_m2EEE832C9302A8868CE7E18A8747F804C242D93B (IDelegate2_Obj_Enum_tDAE283FCD285A52E24B2CA3B344BF9784766348F * __this, intptr_t ___thisPtr0, intptr_t ___arg11, int32_t ___arg22, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___arg11, ___arg22, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___arg11, ___arg22, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___thisPtr0, ___arg11, ___arg22);
					else
						result = GenericVirtFuncInvoker3< int32_t, intptr_t, intptr_t, int32_t >::Invoke(targetMethod, targetThis, ___thisPtr0, ___arg11, ___arg22);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, intptr_t, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___arg11, ___arg22);
					else
						result = VirtFuncInvoker3< int32_t, intptr_t, intptr_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___arg11, ___arg22);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, int32_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___thisPtr0) - 1), ___arg11, ___arg22, targetMethod);
				}
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, int32_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___arg11, ___arg22, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IDelegate2_Obj_Enum::BeginInvoke(System.IntPtr,System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IDelegate2_Obj_Enum_BeginInvoke_m934693F02C2FC90B46804C538117411F38E39730 (IDelegate2_Obj_Enum_tDAE283FCD285A52E24B2CA3B344BF9784766348F * __this, intptr_t ___thisPtr0, intptr_t ___arg11, int32_t ___arg22, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IDelegate2_Obj_Enum_BeginInvoke_m934693F02C2FC90B46804C538117411F38E39730_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___arg11);
	__d_args[2] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___arg22);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 WinRT.Interop.IDelegate2_Obj_Enum::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IDelegate2_Obj_Enum_EndInvoke_mCDA0E1544258FCCE7F2CAFA9378D2CC2D9C12141 (IDelegate2_Obj_Enum_tDAE283FCD285A52E24B2CA3B344BF9784766348F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
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
// WinRT.Interop.IInspectableVftbl
const Il2CppGuid IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32::CLSID = { 0xaf86e2e0, 0xb12d, 0x4c6a, 0x9c, 0x5a, 0xd7, 0xaa, 0x65, 0x10, 0x1e, 0x90 };


// Conversion methods for marshalling of: WinRT.Interop.IInspectableVftbl
IL2CPP_EXTERN_C void IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke(const IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32& unmarshaled, IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke& marshaled)
{
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_pinvoke(unmarshaled.get_IUnknownVftbl_0(), marshaled.___IUnknownVftbl_0);
	marshaled.___GetIids_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetIids_1()));
	marshaled.___GetRuntimeClassName_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetRuntimeClassName_2()));
	marshaled.___GetTrustLevel_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetTrustLevel_3()));
}
IL2CPP_EXTERN_C void IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_back(const IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke& marshaled, IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  unmarshaled_IUnknownVftbl_temp_0;
	memset((&unmarshaled_IUnknownVftbl_temp_0), 0, sizeof(unmarshaled_IUnknownVftbl_temp_0));
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_pinvoke_back(marshaled.___IUnknownVftbl_0, unmarshaled_IUnknownVftbl_temp_0);
	unmarshaled.set_IUnknownVftbl_0(unmarshaled_IUnknownVftbl_temp_0);
	unmarshaled.set_GetIids_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125>(marshaled.___GetIids_1, _GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125_il2cpp_TypeInfo_var));
	unmarshaled.set_GetRuntimeClassName_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65>(marshaled.___GetRuntimeClassName_2, _GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65_il2cpp_TypeInfo_var));
	unmarshaled.set_GetTrustLevel_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823>(marshaled.___GetTrustLevel_3, _GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IInspectableVftbl
IL2CPP_EXTERN_C void IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_cleanup(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_pinvoke& marshaled)
{
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_pinvoke_cleanup(marshaled.___IUnknownVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IInspectableVftbl
IL2CPP_EXTERN_C void IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com(const IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32& unmarshaled, IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com& marshaled)
{
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_com(unmarshaled.get_IUnknownVftbl_0(), marshaled.___IUnknownVftbl_0);
	marshaled.___GetIids_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetIids_1()));
	marshaled.___GetRuntimeClassName_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetRuntimeClassName_2()));
	marshaled.___GetTrustLevel_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GetTrustLevel_3()));
}
IL2CPP_EXTERN_C void IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_back(const IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com& marshaled, IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62  unmarshaled_IUnknownVftbl_temp_0;
	memset((&unmarshaled_IUnknownVftbl_temp_0), 0, sizeof(unmarshaled_IUnknownVftbl_temp_0));
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_com_back(marshaled.___IUnknownVftbl_0, unmarshaled_IUnknownVftbl_temp_0);
	unmarshaled.set_IUnknownVftbl_0(unmarshaled_IUnknownVftbl_temp_0);
	unmarshaled.set_GetIids_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125>(marshaled.___GetIids_1, _GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125_il2cpp_TypeInfo_var));
	unmarshaled.set_GetRuntimeClassName_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65>(marshaled.___GetRuntimeClassName_2, _GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65_il2cpp_TypeInfo_var));
	unmarshaled.set_GetTrustLevel_3(il2cpp_codegen_marshal_function_ptr_to_delegate<_GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823>(marshaled.___GetTrustLevel_3, _GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IInspectableVftbl
IL2CPP_EXTERN_C void IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_cleanup(IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshaled_com& marshaled)
{
	IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_com_cleanup(marshaled.___IUnknownVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125 (_GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125 * __this, intptr_t ___pThis0, uint32_t* ___iidCount1, intptr_t* ___iids2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, uint32_t*, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pThis0, ___iidCount1, ___iids2);

	return returnValue;
}
// System.Void WinRT.Interop.IInspectableVftbl__GetIids::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetIids__ctor_m6BD80B0545DD03BDEA2BBEBA6098F0203A1F4AF4 (_GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IInspectableVftbl__GetIids::Invoke(System.IntPtr,System.UInt32*,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetIids_Invoke_m7F56BF384703F645A94CFA6F83FEBD2B7E432771 (_GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125 * __this, intptr_t ___pThis0, uint32_t* ___iidCount1, intptr_t* ___iids2, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (intptr_t, uint32_t*, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___iidCount1, ___iids2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t*, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___iidCount1, ___iids2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, uint32_t*, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___iidCount1, ___iids2);
					else
						result = GenericVirtFuncInvoker3< int32_t, intptr_t, uint32_t*, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___iidCount1, ___iids2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, intptr_t, uint32_t*, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0, ___iidCount1, ___iids2);
					else
						result = VirtFuncInvoker3< int32_t, intptr_t, uint32_t*, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0, ___iidCount1, ___iids2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, uint32_t*, intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___pThis0) - 1), ___iidCount1, ___iids2, targetMethod);
				}
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, uint32_t*, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___iidCount1, ___iids2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IInspectableVftbl__GetIids::BeginInvoke(System.IntPtr,System.UInt32*,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetIids_BeginInvoke_m05502023EB64136565DD8D3E424ED6F98855263F (_GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125 * __this, intptr_t ___pThis0, uint32_t* ___iidCount1, intptr_t* ___iids2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_GetIids_BeginInvoke_m05502023EB64136565DD8D3E424ED6F98855263F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pThis0);
	__d_args[1] = ___iidCount1;
	__d_args[2] = ___iids2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 WinRT.Interop.IInspectableVftbl__GetIids::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetIids_EndInvoke_m939F47AD4BE5ECA394700C4F0A3273C49B85A8ED (_GetIids_tC74FAB569F2A25A3D6320814BD57E8F68D180125 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65 (_GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65 * __this, intptr_t ___pThis0, intptr_t* ___className1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pThis0, ___className1);

	return returnValue;
}
// System.Void WinRT.Interop.IInspectableVftbl__GetRuntimeClassName::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetRuntimeClassName__ctor_mA9164C5899E7A9A841CE15A502E8E994F4EB438D (_GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IInspectableVftbl__GetRuntimeClassName::Invoke(System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetRuntimeClassName_Invoke_m47C305CC2B0E0CACF917AA9CC5DC3E285A57202E (_GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65 * __this, intptr_t ___pThis0, intptr_t* ___className1, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 2)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___className1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___className1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___className1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___className1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0, ___className1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0, ___className1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___pThis0) - 1), ___className1, targetMethod);
				}
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___className1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IInspectableVftbl__GetRuntimeClassName::BeginInvoke(System.IntPtr,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetRuntimeClassName_BeginInvoke_m675A7C7ADA75FD949D7511192FC38A8E326593B3 (_GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65 * __this, intptr_t ___pThis0, intptr_t* ___className1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_GetRuntimeClassName_BeginInvoke_m675A7C7ADA75FD949D7511192FC38A8E326593B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pThis0);
	__d_args[1] = ___className1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 WinRT.Interop.IInspectableVftbl__GetRuntimeClassName::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetRuntimeClassName_EndInvoke_m007A9FE473DFBFB26222F4A494FF5A0A7C7630DA (_GetRuntimeClassName_tD19064E37C971137DCC14E0E5CDBA18AB824EC65 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823 (_GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823 * __this, intptr_t ___pThis0, int32_t* ___trustLevel1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pThis0, ___trustLevel1);

	return returnValue;
}
// System.Void WinRT.Interop.IInspectableVftbl__GetTrustLevel::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _GetTrustLevel__ctor_mA233A0CDBAFF627C0BBA73A249C273D71708DD32 (_GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IInspectableVftbl__GetTrustLevel::Invoke(System.IntPtr,WinRT.TrustLevel*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetTrustLevel_Invoke_m79611BEB8B516B95578B8A6D8B4330B54AC98743 (_GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823 * __this, intptr_t ___pThis0, int32_t* ___trustLevel1, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 2)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___trustLevel1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___trustLevel1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___trustLevel1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___trustLevel1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0, ___trustLevel1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0, ___trustLevel1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___pThis0) - 1), ___trustLevel1, targetMethod);
				}
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___trustLevel1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IInspectableVftbl__GetTrustLevel::BeginInvoke(System.IntPtr,WinRT.TrustLevel*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _GetTrustLevel_BeginInvoke_mD24EAEB06BAEC666A8B5A64205DCA63B79306E0A (_GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823 * __this, intptr_t ___pThis0, int32_t* ___trustLevel1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_GetTrustLevel_BeginInvoke_mD24EAEB06BAEC666A8B5A64205DCA63B79306E0A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pThis0);
	__d_args[1] = ___trustLevel1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 WinRT.Interop.IInspectableVftbl__GetTrustLevel::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _GetTrustLevel_EndInvoke_mFF9773063221DD27149EA7C007DA6D2C9244167C (_GetTrustLevel_t16CD18172442138064EEB9DDD0BBCFCCB9774823 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// WinRT.Interop.IReference_Matrix4x4
const Il2CppGuid IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D::CLSID = { 0xdacbffdc, 0x68ef, 0x5fd0, 0xb6, 0x57, 0x78, 0x2d, 0xa, 0xc9, 0x80, 0x7e };


// Conversion methods for marshalling of: WinRT.Interop.IReference_Matrix4x4
IL2CPP_EXTERN_C void IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D_marshal_pinvoke(const IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D& unmarshaled, IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_Value_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Value_1()));
}
IL2CPP_EXTERN_C void IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D_marshal_pinvoke_back(const IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D_marshaled_pinvoke& marshaled, IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_Value_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsMatrix4x4_t472E5893D3A5D8929770A973793E19BC6F35EFED>(marshaled.___get_Value_1, _get_PropertyAsMatrix4x4_t472E5893D3A5D8929770A973793E19BC6F35EFED_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IReference_Matrix4x4
IL2CPP_EXTERN_C void IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D_marshal_pinvoke_cleanup(IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D_marshaled_pinvoke& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_pinvoke_cleanup(marshaled.___IInspectableVftbl_0);
}


// Conversion methods for marshalling of: WinRT.Interop.IReference_Matrix4x4
IL2CPP_EXTERN_C void IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D_marshal_com(const IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D& unmarshaled, IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com(unmarshaled.get_IInspectableVftbl_0(), marshaled.___IInspectableVftbl_0);
	marshaled.___get_Value_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_get_Value_1()));
}
IL2CPP_EXTERN_C void IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D_marshal_com_back(const IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D_marshaled_com& marshaled, IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32  unmarshaled_IInspectableVftbl_temp_0;
	memset((&unmarshaled_IInspectableVftbl_temp_0), 0, sizeof(unmarshaled_IInspectableVftbl_temp_0));
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_back(marshaled.___IInspectableVftbl_0, unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_IInspectableVftbl_0(unmarshaled_IInspectableVftbl_temp_0);
	unmarshaled.set_get_Value_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_get_PropertyAsMatrix4x4_t472E5893D3A5D8929770A973793E19BC6F35EFED>(marshaled.___get_Value_1, _get_PropertyAsMatrix4x4_t472E5893D3A5D8929770A973793E19BC6F35EFED_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IReference_Matrix4x4
IL2CPP_EXTERN_C void IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D_marshal_com_cleanup(IReference_Matrix4x4_t1DE8B31209A403AB44424E9A23EB80CF70B8F74D_marshaled_com& marshaled)
{
	IInspectableVftbl_tC802663F935125C7F12A6FAAFD35CB9CC0A70E32_marshal_com_cleanup(marshaled.___IInspectableVftbl_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// WinRT.Interop.IUnknownVftbl
const Il2CppGuid IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62::CLSID = { 0x0, 0x0, 0x0, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x46 };
// Conversion methods for marshalling of: WinRT.Interop.IUnknownVftbl
IL2CPP_EXTERN_C void IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_pinvoke(const IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62& unmarshaled, IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_pinvoke& marshaled)
{
	marshaled.___QueryInterface_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_QueryInterface_0()));
	marshaled.___AddRef_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_AddRef_1()));
	marshaled.___Release_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Release_2()));
}
IL2CPP_EXTERN_C void IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_pinvoke_back(const IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_pinvoke& marshaled, IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_QueryInterface_0(il2cpp_codegen_marshal_function_ptr_to_delegate<_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12>(marshaled.___QueryInterface_0, _QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12_il2cpp_TypeInfo_var));
	unmarshaled.set_AddRef_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA>(marshaled.___AddRef_1, _AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA_il2cpp_TypeInfo_var));
	unmarshaled.set_Release_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2>(marshaled.___Release_2, _Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IUnknownVftbl
IL2CPP_EXTERN_C void IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_pinvoke_cleanup(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: WinRT.Interop.IUnknownVftbl
IL2CPP_EXTERN_C void IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_com(const IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62& unmarshaled, IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_com& marshaled)
{
	marshaled.___QueryInterface_0 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_QueryInterface_0()));
	marshaled.___AddRef_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_AddRef_1()));
	marshaled.___Release_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Release_2()));
}
IL2CPP_EXTERN_C void IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_com_back(const IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_com& marshaled, IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_QueryInterface_0(il2cpp_codegen_marshal_function_ptr_to_delegate<_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12>(marshaled.___QueryInterface_0, _QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12_il2cpp_TypeInfo_var));
	unmarshaled.set_AddRef_1(il2cpp_codegen_marshal_function_ptr_to_delegate<_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA>(marshaled.___AddRef_1, _AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA_il2cpp_TypeInfo_var));
	unmarshaled.set_Release_2(il2cpp_codegen_marshal_function_ptr_to_delegate<_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2>(marshaled.___Release_2, _Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: WinRT.Interop.IUnknownVftbl
IL2CPP_EXTERN_C void IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshal_com_cleanup(IUnknownVftbl_t80A531FA633D70D0F13B752299780DA0B2C41E62_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper__AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA (_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA * __this, intptr_t ___pThis0, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___pThis0);

	return returnValue;
}
// System.Void WinRT.Interop.IUnknownVftbl__AddRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AddRef__ctor_m24773D9DAF0E187EAD7924ABD10A17F72CE60BE7 (_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.UInt32 WinRT.Interop.IUnknownVftbl__AddRef::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _AddRef_Invoke_m3E2E84C2DB607B4FBBE03BE68CBCC071824E8625 (_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA * __this, intptr_t ___pThis0, const RuntimeMethod* method)
{
	uint32_t result = 0;
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
				typedef uint32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pThis0, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< uint32_t, intptr_t >::Invoke(targetMethod, targetThis, ___pThis0);
					else
						result = GenericVirtFuncInvoker1< uint32_t, intptr_t >::Invoke(targetMethod, targetThis, ___pThis0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< uint32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0);
					else
						result = VirtFuncInvoker1< uint32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef uint32_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___pThis0) - 1), targetMethod);
				}
				typedef uint32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IUnknownVftbl__AddRef::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _AddRef_BeginInvoke_m5CA9015C7E4FACE6B54A28469F79967A0B8EB20D (_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA * __this, intptr_t ___pThis0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_AddRef_BeginInvoke_m5CA9015C7E4FACE6B54A28469F79967A0B8EB20D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pThis0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.UInt32 WinRT.Interop.IUnknownVftbl__AddRef::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _AddRef_EndInvoke_mAD01F6578D658558EBEB7F13E5CA8E334B33BD42 (_AddRef_t12F6E1B130DAB27D2A7D832242C834B8D186BCFA * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 (_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 * __this, intptr_t ___pThis0, Guid_t * ___iid1, intptr_t* ___vftbl2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, Guid_t *, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___pThis0, ___iid1, ___vftbl2);

	return returnValue;
}
// System.Void WinRT.Interop.IUnknownVftbl__QueryInterface::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _QueryInterface__ctor_m91D991A7AFD446C56FF5B66449F389DD4FA96CEC (_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop.IUnknownVftbl__QueryInterface::Invoke(System.IntPtr,System.Guid*,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _QueryInterface_Invoke_m34861A609E512B04F3CF96F8D9B7C78577B04FE1 (_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 * __this, intptr_t ___pThis0, Guid_t * ___iid1, intptr_t* ___vftbl2, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (intptr_t, Guid_t *, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pThis0, ___iid1, ___vftbl2, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, Guid_t *, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___iid1, ___vftbl2, targetMethod);
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
						result = GenericInterfaceFuncInvoker3< int32_t, intptr_t, Guid_t *, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___iid1, ___vftbl2);
					else
						result = GenericVirtFuncInvoker3< int32_t, intptr_t, Guid_t *, intptr_t* >::Invoke(targetMethod, targetThis, ___pThis0, ___iid1, ___vftbl2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< int32_t, intptr_t, Guid_t *, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0, ___iid1, ___vftbl2);
					else
						result = VirtFuncInvoker3< int32_t, intptr_t, Guid_t *, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0, ___iid1, ___vftbl2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, Guid_t *, intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___pThis0) - 1), ___iid1, ___vftbl2, targetMethod);
				}
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, Guid_t *, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, ___iid1, ___vftbl2, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IUnknownVftbl__QueryInterface::BeginInvoke(System.IntPtr,System.Guid*,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _QueryInterface_BeginInvoke_mB4BE34BCEE6436E6834DA9D35EA5D4C7CBFE1C70 (_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 * __this, intptr_t ___pThis0, Guid_t * ___iid1, intptr_t* ___vftbl2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_QueryInterface_BeginInvoke_mB4BE34BCEE6436E6834DA9D35EA5D4C7CBFE1C70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pThis0);
	__d_args[1] = ___iid1;
	__d_args[2] = ___vftbl2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Int32 WinRT.Interop.IUnknownVftbl__QueryInterface::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _QueryInterface_EndInvoke_m1FC00069FF3632BB63375343B01D13E2D1D9079F (_QueryInterface_tED28B3CCAFA113DDA206DDA9AE40EE84BC317F12 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  uint32_t DelegatePInvokeWrapper__Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 (_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 * __this, intptr_t ___pThis0, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	uint32_t returnValue = il2cppPInvokeFunc(___pThis0);

	return returnValue;
}
// System.Void WinRT.Interop.IUnknownVftbl__Release::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Release__ctor_m8F91AB6BC24EB0FF169565C17C457C8AFFF0D4AE (_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.UInt32 WinRT.Interop.IUnknownVftbl__Release::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _Release_Invoke_m2A6A949E5AFE55BDF5775925203A4AD0817E92B8 (_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 * __this, intptr_t ___pThis0, const RuntimeMethod* method)
{
	uint32_t result = 0;
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
				typedef uint32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___pThis0, targetMethod);
			}
			else
			{
				// closed
				typedef uint32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< uint32_t, intptr_t >::Invoke(targetMethod, targetThis, ___pThis0);
					else
						result = GenericVirtFuncInvoker1< uint32_t, intptr_t >::Invoke(targetMethod, targetThis, ___pThis0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< uint32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pThis0);
					else
						result = VirtFuncInvoker1< uint32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pThis0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef uint32_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___pThis0) - 1), targetMethod);
				}
				typedef uint32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___pThis0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop.IUnknownVftbl__Release::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _Release_BeginInvoke_m8A47B48EF4B351507577F321F34031D58E2EE69E (_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 * __this, intptr_t ___pThis0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_Release_BeginInvoke_m8A47B48EF4B351507577F321F34031D58E2EE69E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pThis0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.UInt32 WinRT.Interop.IUnknownVftbl__Release::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t _Release_EndInvoke_m136553DDF1174792CD0053BB29FF45F67A91DA6B (_Release_t354A63A9ABA5ADD19F5996950B1A7DE2BF4308B2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(uint32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WinRT.Interop.MonoPInvokeCallbackAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute__ctor_mB0CCE1CF3A51ECE2A419CEE3657F5C1C884BE0F7 (MonoPInvokeCallbackAttribute_t771461BB3C5D4472CF3924A52CECFACE0057F061 * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m45CAD4B01265CC84CC5A84F62EE2DBE85DE89EC0(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___t0;
		MonoPInvokeCallbackAttribute_set_DelegateType_m78D63230F4D3845F2192C8E16AC7D82422AD34E4_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WinRT.Interop.MonoPInvokeCallbackAttribute::set_DelegateType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute_set_DelegateType_m78D63230F4D3845F2192C8E16AC7D82422AD34E4 (MonoPInvokeCallbackAttribute_t771461BB3C5D4472CF3924A52CECFACE0057F061 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CDelegateTypeU3Ek__BackingField_0(L_0);
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
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E (_get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E * __this, intptr_t ___thisPtr0, int32_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsEnum::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsEnum__ctor_m0C8DA0C25E9004216B399C477B1AFFCDEC59257E (_get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._get_PropertyAsEnum::Invoke(System.IntPtr,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsEnum_Invoke_m92C8176F446ADD50239ACBC620FA076FDC819EDD (_get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E * __this, intptr_t ___thisPtr0, int32_t* ___value1, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 2)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___thisPtr0) - 1), ___value1, targetMethod);
				}
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._get_PropertyAsEnum::BeginInvoke(System.IntPtr,System.Int32*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _get_PropertyAsEnum_BeginInvoke_mFD3E8999EA31000765D67F70751FAC9618CEEF8D (_get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E * __this, intptr_t ___thisPtr0, int32_t* ___value1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_get_PropertyAsEnum_BeginInvoke_mFD3E8999EA31000765D67F70751FAC9618CEEF8D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 WinRT.Interop._get_PropertyAsEnum::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsEnum_EndInvoke_mE8EFD988400F25223204FDFC564E4F59E2480ED9 (_get_PropertyAsEnum_t0257BEDDE1C77D21D218D061D82E17FD70AC297E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsInt_t8313A617DB0A557D1D90360CC3A2553A83E89A62 (_get_PropertyAsInt_t8313A617DB0A557D1D90360CC3A2553A83E89A62 * __this, intptr_t ___thisPtr0, int32_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, int32_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsInt::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsInt__ctor_mCE55B8D7D4BDE0639D7CEFBF302B51229FF2E231 (_get_PropertyAsInt_t8313A617DB0A557D1D90360CC3A2553A83E89A62 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._get_PropertyAsInt::Invoke(System.IntPtr,System.Int32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsInt_Invoke_m77322411F59C68B5B13EAEC857A1E23D03A0F896 (_get_PropertyAsInt_t8313A617DB0A557D1D90360CC3A2553A83E89A62 * __this, intptr_t ___thisPtr0, int32_t* ___value1, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 2)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, int32_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___thisPtr0) - 1), ___value1, targetMethod);
				}
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, int32_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._get_PropertyAsInt::BeginInvoke(System.IntPtr,System.Int32*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _get_PropertyAsInt_BeginInvoke_mE47D5AA15C6161DFEB0EA568E9D578B5EF50CAAD (_get_PropertyAsInt_t8313A617DB0A557D1D90360CC3A2553A83E89A62 * __this, intptr_t ___thisPtr0, int32_t* ___value1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_get_PropertyAsInt_BeginInvoke_mE47D5AA15C6161DFEB0EA568E9D578B5EF50CAAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 WinRT.Interop._get_PropertyAsInt::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsInt_EndInvoke_m697FEC32ABED58A64811FC8CE010EC7D9DCD5E3C (_get_PropertyAsInt_t8313A617DB0A557D1D90360CC3A2553A83E89A62 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsMatrix4x4_t472E5893D3A5D8929770A973793E19BC6F35EFED (_get_PropertyAsMatrix4x4_t472E5893D3A5D8929770A973793E19BC6F35EFED * __this, intptr_t ___thisPtr0, Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 * ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 *);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsMatrix4x4::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsMatrix4x4__ctor_m70D4D8FA3779987F57F7005A613D2A6CA5AE4928 (_get_PropertyAsMatrix4x4_t472E5893D3A5D8929770A973793E19BC6F35EFED * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._get_PropertyAsMatrix4x4::Invoke(System.IntPtr,System.Numerics.Matrix4x4*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsMatrix4x4_Invoke_mC0FBB04B56AB119DF0118BFF234CA5A203925737 (_get_PropertyAsMatrix4x4_t472E5893D3A5D8929770A973793E19BC6F35EFED * __this, intptr_t ___thisPtr0, Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 * ___value1, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 2)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 * >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___thisPtr0) - 1), ___value1, targetMethod);
				}
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._get_PropertyAsMatrix4x4::BeginInvoke(System.IntPtr,System.Numerics.Matrix4x4*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _get_PropertyAsMatrix4x4_BeginInvoke_mD1E7503948A35521E8E1288AE88D9243BEF5073A (_get_PropertyAsMatrix4x4_t472E5893D3A5D8929770A973793E19BC6F35EFED * __this, intptr_t ___thisPtr0, Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0 * ___value1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_get_PropertyAsMatrix4x4_BeginInvoke_mD1E7503948A35521E8E1288AE88D9243BEF5073A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 WinRT.Interop._get_PropertyAsMatrix4x4::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsMatrix4x4_EndInvoke_mD87F859CA928CF9C414109296681BA5304E0B72C (_get_PropertyAsMatrix4x4_t472E5893D3A5D8929770A973793E19BC6F35EFED * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 (_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * __this, intptr_t ___thisPtr0, intptr_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._get_PropertyAsObject::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _get_PropertyAsObject__ctor_mE0D448EB7DE363B6F20DED8B9288954BD5054597 (_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._get_PropertyAsObject::Invoke(System.IntPtr,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsObject_Invoke_m987F96D706B2BBEC162F04BB4AD4D0BE3740C029 (_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * __this, intptr_t ___thisPtr0, intptr_t* ___value1, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 2)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___thisPtr0) - 1), ___value1, targetMethod);
				}
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._get_PropertyAsObject::BeginInvoke(System.IntPtr,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _get_PropertyAsObject_BeginInvoke_m388E4D3AB3CA188D15863C25513AB56EB52D5531 (_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * __this, intptr_t ___thisPtr0, intptr_t* ___value1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_get_PropertyAsObject_BeginInvoke_m388E4D3AB3CA188D15863C25513AB56EB52D5531_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 WinRT.Interop._get_PropertyAsObject::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _get_PropertyAsObject_EndInvoke_mB3BF31E31949C6EBCD75C279EA1B0F014FFE7FE1 (_get_PropertyAsObject_t9C6553F25D625D4A390DCFC6F23AE4636C2E9AC5 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__method0_t68810954DB248B2CD317989111F586F15200690B (_method0_t68810954DB248B2CD317989111F586F15200690B * __this, intptr_t ___thisPtr0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0);

	return returnValue;
}
// System.Void WinRT.Interop._method0::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _method0__ctor_m3BA63D3EB24071352D9ECD4C6CEE2398531A0A9B (_method0_t68810954DB248B2CD317989111F586F15200690B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._method0::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _method0_Invoke_m2B0253C3391591B4A54DC4701F229CDCDA8C3A90 (_method0_t68810954DB248B2CD317989111F586F15200690B * __this, intptr_t ___thisPtr0, const RuntimeMethod* method)
{
	int32_t result = 0;
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
				typedef int32_t (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___thisPtr0);
					else
						result = GenericVirtFuncInvoker1< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___thisPtr0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0);
					else
						result = VirtFuncInvoker1< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___thisPtr0) - 1), targetMethod);
				}
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._method0::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _method0_BeginInvoke_m42C34EEA417820949CCF7963E148B4B07A7B1669 (_method0_t68810954DB248B2CD317989111F586F15200690B * __this, intptr_t ___thisPtr0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_method0_BeginInvoke_m42C34EEA417820949CCF7963E148B4B07A7B1669_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Int32 WinRT.Interop._method0::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _method0_EndInvoke_m00DD21CFDB051DA220495888819E120C35E6A099 (_method0_t68810954DB248B2CD317989111F586F15200690B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  int32_t DelegatePInvokeWrapper__put_PropertyAsObject_t50B08BD6BB7FBD450046CD44CB2AC7A3310CBFDC (_put_PropertyAsObject_t50B08BD6BB7FBD450046CD44CB2AC7A3310CBFDC * __this, intptr_t ___thisPtr0, intptr_t ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___thisPtr0, ___value1);

	return returnValue;
}
// System.Void WinRT.Interop._put_PropertyAsObject::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _put_PropertyAsObject__ctor_m2ABB482DCB6F79051C1DDFE2282198BDF364EC3C (_put_PropertyAsObject_t50B08BD6BB7FBD450046CD44CB2AC7A3310CBFDC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Int32 WinRT.Interop._put_PropertyAsObject::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _put_PropertyAsObject_Invoke_mDDA89E8F2343AC46AF725B50D510F9C59136B697 (_put_PropertyAsObject_t50B08BD6BB7FBD450046CD44CB2AC7A3310CBFDC * __this, intptr_t ___thisPtr0, intptr_t ___value1, const RuntimeMethod* method)
{
	int32_t result = 0;
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
			if (___parameterCount == 2)
			{
				// open
				typedef int32_t (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___thisPtr0, ___value1, targetMethod);
			}
			else
			{
				// closed
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
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
						result = GenericInterfaceFuncInvoker2< int32_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
					else
						result = GenericVirtFuncInvoker2< int32_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___thisPtr0, ___value1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker2< int32_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___thisPtr0, ___value1);
					else
						result = VirtFuncInvoker2< int32_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___thisPtr0, ___value1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef int32_t (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___thisPtr0) - 1), ___value1, targetMethod);
				}
				typedef int32_t (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___thisPtr0, ___value1, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult WinRT.Interop._put_PropertyAsObject::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _put_PropertyAsObject_BeginInvoke_mA6ECFA7FB04C0BED64A8C2FF09F83E9ADAD22DA8 (_put_PropertyAsObject_t50B08BD6BB7FBD450046CD44CB2AC7A3310CBFDC * __this, intptr_t ___thisPtr0, intptr_t ___value1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (_put_PropertyAsObject_BeginInvoke_mA6ECFA7FB04C0BED64A8C2FF09F83E9ADAD22DA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___thisPtr0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___value1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Int32 WinRT.Interop._put_PropertyAsObject::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _put_PropertyAsObject_EndInvoke_m3CA10D91851A6039A52B6E29F48AEEBA49A0EDBB (_put_PropertyAsObject_t50B08BD6BB7FBD450046CD44CB2AC7A3310CBFDC * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(int32_t*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: WinRT.ModuleReference
IL2CPP_EXTERN_C void ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_marshal_pinvoke(const ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23& unmarshaled, ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get__module_0() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__module_0()))
		{
			marshaled.____module_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get__module_0()));
			(marshaled.____module_0)->AddRef();
		}
		else
		{
			marshaled.____module_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get__module_0());
		}
	}
	else
	{
		marshaled.____module_0 = NULL;
	}
	marshaled.____refCountPtr_1 = unmarshaled.get__refCountPtr_1();
	marshaled.____nativeHandle_2 = unmarshaled.get__nativeHandle_2();
}
IL2CPP_EXTERN_C void ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_marshal_pinvoke_back(const ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_marshaled_pinvoke& marshaled, ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____module_0 != NULL)
	{
		unmarshaled.set__module_0(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____module_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__module_0()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get__module_0()), Il2CppIUnknown::IID, marshaled.____module_0);
		}
	}
	else
	{
		unmarshaled.set__module_0(NULL);
	}
	unmarshaled.set__refCountPtr_1(marshaled.____refCountPtr_1);
	intptr_t unmarshaled__nativeHandle_temp_2;
	memset((&unmarshaled__nativeHandle_temp_2), 0, sizeof(unmarshaled__nativeHandle_temp_2));
	unmarshaled__nativeHandle_temp_2 = marshaled.____nativeHandle_2;
	unmarshaled.set__nativeHandle_2(unmarshaled__nativeHandle_temp_2);
}
// Conversion method for clean up from marshalling of: WinRT.ModuleReference
IL2CPP_EXTERN_C void ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_marshal_pinvoke_cleanup(ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_marshaled_pinvoke& marshaled)
{
	if (marshaled.____module_0 != NULL)
	{
		(marshaled.____module_0)->Release();
		marshaled.____module_0 = NULL;
	}
}
// Conversion methods for marshalling of: WinRT.ModuleReference
IL2CPP_EXTERN_C void ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_marshal_com(const ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23& unmarshaled, ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_marshaled_com& marshaled)
{
	if (unmarshaled.get__module_0() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__module_0()))
		{
			marshaled.____module_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get__module_0()));
			(marshaled.____module_0)->AddRef();
		}
		else
		{
			marshaled.____module_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get__module_0());
		}
	}
	else
	{
		marshaled.____module_0 = NULL;
	}
	marshaled.____refCountPtr_1 = unmarshaled.get__refCountPtr_1();
	marshaled.____nativeHandle_2 = unmarshaled.get__nativeHandle_2();
}
IL2CPP_EXTERN_C void ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_marshal_com_back(const ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_marshaled_com& marshaled, ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____module_0 != NULL)
	{
		unmarshaled.set__module_0(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.____module_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get__module_0()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get__module_0()), Il2CppIUnknown::IID, marshaled.____module_0);
		}
	}
	else
	{
		unmarshaled.set__module_0(NULL);
	}
	unmarshaled.set__refCountPtr_1(marshaled.____refCountPtr_1);
	intptr_t unmarshaled__nativeHandle_temp_2;
	memset((&unmarshaled__nativeHandle_temp_2), 0, sizeof(unmarshaled__nativeHandle_temp_2));
	unmarshaled__nativeHandle_temp_2 = marshaled.____nativeHandle_2;
	unmarshaled.set__nativeHandle_2(unmarshaled__nativeHandle_temp_2);
}
// Conversion method for clean up from marshalling of: WinRT.ModuleReference
IL2CPP_EXTERN_C void ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_marshal_com_cleanup(ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23_marshaled_com& marshaled)
{
	if (marshaled.____module_0 != NULL)
	{
		(marshaled.____module_0)->Release();
		marshaled.____module_0 = NULL;
	}
}
// System.Int32* WinRT.ModuleReference::AllocateRefCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* ModuleReference_AllocateRefCount_mF29677460F7566406254BFDCD44E47BB5BFECA3B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ModuleReference_AllocateRefCount_mF29677460F7566406254BFDCD44E47BB5BFECA3B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		intptr_t L_0 = Marshal_AllocCoTaskMem_mD834304A9F50F5440A526BD0E68B7D24976985D1(4, /*hidden argument*/NULL);
		void* L_1 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (int32_t*)L_1;
		int32_t* L_2 = V_0;
		*((int32_t*)L_2) = (int32_t)0;
		int32_t* L_3 = V_0;
		return (int32_t*)(L_3);
	}
}
// WinRT.ModuleReference WinRT.ModuleReference::Allocate(System.Object,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ModuleReference_Allocate_m22CB010050F3ABA58AE721231CF961BEB4E7E2B6 (RuntimeObject * ___module0, intptr_t* ___nativeHandle1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ModuleReference_Allocate_m22CB010050F3ABA58AE721231CF961BEB4E7E2B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___module0;
		int32_t* L_1 = ModuleReference_AllocateRefCount_mF29677460F7566406254BFDCD44E47BB5BFECA3B(/*hidden argument*/NULL);
		intptr_t* L_2 = ___nativeHandle1;
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ModuleReference__ctor_mC6B4F5DE9B3170003C2F02F53F1F8CA92BA6CEC2((&L_3), L_0, (int32_t*)(int32_t*)L_1, (intptr_t)((*(L_2))), /*hidden argument*/NULL);
		intptr_t* L_4 = ___nativeHandle1;
		*((intptr_t*)L_4) = (intptr_t)(0);
		return L_3;
	}
}
// System.Void WinRT.ModuleReference::.ctor(System.Object,System.Int32*,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleReference__ctor_mC6B4F5DE9B3170003C2F02F53F1F8CA92BA6CEC2 (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 * __this, RuntimeObject * ___module0, int32_t* ___refCountPtr1, intptr_t ___nativeHandle2, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___module0;
		__this->set__module_0(L_0);
		int32_t* L_1 = ___refCountPtr1;
		__this->set__refCountPtr_1((int32_t*)L_1);
		int32_t* L_2 = __this->get__refCountPtr_1();
		if ((((intptr_t)L_2) == ((intptr_t)(((uintptr_t)0)))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t* L_3 = __this->get__refCountPtr_1();
		Interlocked_Increment_mB6D391197444B8BFD30BAE1EDCF1A255CD2F292F((int32_t*)(int32_t*)L_3, /*hidden argument*/NULL);
	}

IL_0024:
	{
		intptr_t L_4 = ___nativeHandle2;
		__this->set__nativeHandle_2((intptr_t)L_4);
		return;
	}
}
IL2CPP_EXTERN_C  void ModuleReference__ctor_mC6B4F5DE9B3170003C2F02F53F1F8CA92BA6CEC2_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___module0, int32_t* ___refCountPtr1, intptr_t ___nativeHandle2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 * _thisAdjusted = reinterpret_cast<ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 *>(__this + _offset);
	ModuleReference__ctor_mC6B4F5DE9B3170003C2F02F53F1F8CA92BA6CEC2(_thisAdjusted, ___module0, ___refCountPtr1, ___nativeHandle2, method);
}
// WinRT.ModuleReference WinRT.ModuleReference::AddRef()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ModuleReference_AddRef_m3E220263CCBE7E4914D3336378AA819E15706531 (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__module_0();
		int32_t* L_1 = __this->get__refCountPtr_1();
		intptr_t L_2 = __this->get__nativeHandle_2();
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_3;
		memset((&L_3), 0, sizeof(L_3));
		ModuleReference__ctor_mC6B4F5DE9B3170003C2F02F53F1F8CA92BA6CEC2((&L_3), L_0, (int32_t*)(int32_t*)L_1, (intptr_t)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  ModuleReference_AddRef_m3E220263CCBE7E4914D3336378AA819E15706531_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 * _thisAdjusted = reinterpret_cast<ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 *>(__this + _offset);
	return ModuleReference_AddRef_m3E220263CCBE7E4914D3336378AA819E15706531(_thisAdjusted, method);
}
// System.Void WinRT.ModuleReference::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleReference_Release_mCBB02150B5DEE435F1C7E5DEEE91A862BD49E7BC (ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ModuleReference_Release_mCBB02150B5DEE435F1C7E5DEEE91A862BD49E7BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t* L_0 = __this->get__refCountPtr_1();
		if ((((intptr_t)L_0) == ((intptr_t)(((uintptr_t)0)))))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t* L_1 = __this->get__refCountPtr_1();
		int32_t L_2 = Interlocked_Decrement_m5C38319E41D5F7C90DFEC9138D58E6E92DFAFCFE((int32_t*)(int32_t*)L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_00d7;
		}
	}
	{
		RuntimeObject * L_3 = __this->get__module_0();
		if (!L_3)
		{
			goto IL_00b4;
		}
	}
	{
		intptr_t L_4 = __this->get__nativeHandle_2();
		bool L_5 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_00a0;
		}
	}
	{
		RuntimeObject * L_6 = __this->get__module_0();
		if (!((DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70 *)IsInstClass((RuntimeObject*)L_6, DllModule_t4A0AC137CCF8A15C3920EF2BB7D2691D7E709C70_il2cpp_TypeInfo_var)))
		{
			goto IL_0054;
		}
	}
	{
		intptr_t L_7 = __this->get__nativeHandle_2();
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		Platform_FreeLibrary_mA760C95B6712C55E42A1FDDF88373685B7069723((intptr_t)L_7, /*hidden argument*/NULL);
		goto IL_0093;
	}

IL_0054:
	{
		RuntimeObject * L_8 = __this->get__module_0();
		if (!((WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C *)IsInstClass((RuntimeObject*)L_8, WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C_il2cpp_TypeInfo_var)))
		{
			goto IL_006e;
		}
	}
	{
		intptr_t L_9 = __this->get__nativeHandle_2();
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		Platform_CoDecrementMTAUsage_m66889F502E9C529EF25F1E87C756262177570F67((intptr_t)L_9, /*hidden argument*/NULL);
		goto IL_0093;
	}

IL_006e:
	{
		RuntimeObject * L_10 = __this->get__module_0();
		NullCheck(L_10);
		Type_t * L_11 = Object_GetType_m2E0B62414ECCAA3094B703790CE88CBB2F83EA60(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_11);
		String_t* L_13 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral74D559369E1958056E4727338451177BE8962EE3, L_12, _stringLiteral926C699B76FD37CAEDEDABF4276A7BE84516E4DF, /*hidden argument*/NULL);
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_14 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_mEBAED0FCA8B8CCE7E96492474350BA35D14CF59C(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ModuleReference_Release_mCBB02150B5DEE435F1C7E5DEEE91A862BD49E7BC_RuntimeMethod_var);
	}

IL_0093:
	{
		__this->set__nativeHandle_2((intptr_t)(0));
		goto IL_00ab;
	}

IL_00a0:
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_15 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_15, _stringLiteral3F7D8861D4892EA34F92275C205E88C3DE52004C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ModuleReference_Release_mCBB02150B5DEE435F1C7E5DEEE91A862BD49E7BC_RuntimeMethod_var);
	}

IL_00ab:
	{
		__this->set__module_0(NULL);
		goto IL_00bf;
	}

IL_00b4:
	{
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_16 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_16, _stringLiteral3F7D8861D4892EA34F92275C205E88C3DE52004C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ModuleReference_Release_mCBB02150B5DEE435F1C7E5DEEE91A862BD49E7BC_RuntimeMethod_var);
	}

IL_00bf:
	{
		int32_t* L_17 = __this->get__refCountPtr_1();
		intptr_t L_18 = IntPtr_op_Explicit_m7F0C4B884FFB05BD231154CBDAEBCF1917019C21((void*)(void*)L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_FreeCoTaskMem_m7C88C0999A166E61A38FF25527CD5E339F6AC590((intptr_t)L_18, /*hidden argument*/NULL);
		__this->set__refCountPtr_1((int32_t*)(((uintptr_t)0)));
	}

IL_00d7:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void ModuleReference_Release_mCBB02150B5DEE435F1C7E5DEEE91A862BD49E7BC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 * _thisAdjusted = reinterpret_cast<ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 *>(__this + _offset);
	ModuleReference_Release_mCBB02150B5DEE435F1C7E5DEEE91A862BD49E7BC(_thisAdjusted, method);
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
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL mono_thread_current();
#endif
// System.IntPtr WinRT.Mono::mono_thread_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Mono_mono_thread_current_m4E924D5C3B1041C483432750DFDCFD8B7E723723 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mono-2.0-bdwgc.dll"), "mono_thread_current", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(mono_thread_current)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL mono_thread_is_foreign(intptr_t);
#endif
// System.Boolean WinRT.Mono::mono_thread_is_foreign(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mono_mono_thread_is_foreign_m368E42A1482E021F89CB92C88374CF2391B33202 (intptr_t ___threadPtr0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("mono-2.0-bdwgc.dll"), "mono_thread_is_foreign", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(mono_thread_is_foreign)(___threadPtr0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___threadPtr0);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void WinRT.Mono::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mono__cctor_m4DD9982514D5F8404D09437C9D481BE8D7D843B9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Mono__cctor_m4DD9982514D5F8404D09437C9D481BE8D7D843B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCF1205861994CBA3AD829D9F29102894425047CC_il2cpp_TypeInfo_var);
		U3CU3Ec_tCF1205861994CBA3AD829D9F29102894425047CC * L_0 = ((U3CU3Ec_tCF1205861994CBA3AD829D9F29102894425047CC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCF1205861994CBA3AD829D9F29102894425047CC_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 * L_1 = (Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1 *)il2cpp_codegen_object_new(Func_1_t4ABD6DAD480574F152452DD6B9C9A55F4F6655F1_il2cpp_TypeInfo_var);
		Func_1__ctor_mAECA381FC0AA61139100EF468EE819A98431DE5E(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__7_0_m589BB91DA9CCDFE131CEE4877F130BB8413B4D42_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_mAECA381FC0AA61139100EF468EE819A98431DE5E_RuntimeMethod_var);
		Lazy_1_tD86FA2DBC6DDD534D2365617EE6B309478B2DCAE * L_2 = (Lazy_1_tD86FA2DBC6DDD534D2365617EE6B309478B2DCAE *)il2cpp_codegen_object_new(Lazy_1_tD86FA2DBC6DDD534D2365617EE6B309478B2DCAE_il2cpp_TypeInfo_var);
		Lazy_1__ctor_mA6DE95A47EAD7BE89179EDDD6E334481CDBCF83B(L_2, L_1, /*hidden argument*/Lazy_1__ctor_mA6DE95A47EAD7BE89179EDDD6E334481CDBCF83B_RuntimeMethod_var);
		((Mono_t22DED35DF53F81A03339C93DB68629D193273A02_StaticFields*)il2cpp_codegen_static_fields_for(Mono_t22DED35DF53F81A03339C93DB68629D193273A02_il2cpp_TypeInfo_var))->set__usingMono_0(L_2);
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
// System.Void WinRT.Mono_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8868DC9A9BCF4091467F941D67348D683C3CDCEC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m8868DC9A9BCF4091467F941D67348D683C3CDCEC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCF1205861994CBA3AD829D9F29102894425047CC * L_0 = (U3CU3Ec_tCF1205861994CBA3AD829D9F29102894425047CC *)il2cpp_codegen_object_new(U3CU3Ec_tCF1205861994CBA3AD829D9F29102894425047CC_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mA5EA0533751F280E31A4E1F0DC963144919BE2E9(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCF1205861994CBA3AD829D9F29102894425047CC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCF1205861994CBA3AD829D9F29102894425047CC_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void WinRT.Mono_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA5EA0533751F280E31A4E1F0DC963144919BE2E9 (U3CU3Ec_tCF1205861994CBA3AD829D9F29102894425047CC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean WinRT.Mono_<>c::<.cctor>b__7_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3C_cctorU3Eb__7_0_m589BB91DA9CCDFE131CEE4877F130BB8413B4D42 (U3CU3Ec_tCF1205861994CBA3AD829D9F29102894425047CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__7_0_m589BB91DA9CCDFE131CEE4877F130BB8413B4D42_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		intptr_t L_0 = Platform_TryLoadLibraryExW_m02C79A74A06C659CF7455920EEEDBCDAD23FEF9C(_stringLiteral354E013B2891BB142566CA6E74E12AF1BF6CCD24, (intptr_t)(0), 0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		intptr_t L_1 = V_0;
		bool L_2 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		return (bool)0;
	}

IL_0020:
	{
		intptr_t L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		Platform_FreeLibrary_mA760C95B6712C55E42A1FDDF88373685B7069723((intptr_t)L_3, /*hidden argument*/NULL);
		return (bool)1;
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
// System.Void WinRT.Mono_ThreadContext::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadContext__cctor_mB902BCF113B652D96AD4786F8A461ED7FD6D5731 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThreadContext__cctor_mB902BCF113B652D96AD4786F8A461ED7FD6D5731_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18 * L_0 = (Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18 *)il2cpp_codegen_object_new(Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18_il2cpp_TypeInfo_var);
		Lazy_1__ctor_m0E54033725AC5EF4E0928FFFF699906B06A51DC6(L_0, /*hidden argument*/Lazy_1__ctor_m0E54033725AC5EF4E0928FFFF699906B06A51DC6_RuntimeMethod_var);
		((ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var))->set__foreignThreads_0(L_0);
		Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18 * L_1 = (Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18 *)il2cpp_codegen_object_new(Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18_il2cpp_TypeInfo_var);
		Lazy_1__ctor_m0E54033725AC5EF4E0928FFFF699906B06A51DC6(L_1, /*hidden argument*/Lazy_1__ctor_m0E54033725AC5EF4E0928FFFF699906B06A51DC6_RuntimeMethod_var);
		((ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var))->set__presumedNonForeignThreads_1(L_1);
		EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98 * L_2 = (EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98 *)il2cpp_codegen_object_new(EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98_il2cpp_TypeInfo_var);
		EventWaitHandle__ctor_m9EA7029408FF8BBCB1F527C940FAC6C1796DE3C1(L_2, (bool)0, 0, /*hidden argument*/NULL);
		((ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var))->set__threadCleanupRequested_2(L_2);
		EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98 * L_3 = (EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98 *)il2cpp_codegen_object_new(EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98_il2cpp_TypeInfo_var);
		EventWaitHandle__ctor_m9EA7029408FF8BBCB1F527C940FAC6C1796DE3C1(L_3, (bool)0, 0, /*hidden argument*/NULL);
		((ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var))->set__threadCleanupCompleted_3(L_3);
		((ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var))->set__monoSupportHandle_4((intptr_t)(0));
		((ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var))->set__cleanupRegister_5((mono_thread_cleanup_register_t91E974F4BA3BB3C316698B53B7E3E91AFCF42EE7 *)NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mono_t22DED35DF53F81A03339C93DB68629D193273A02_il2cpp_TypeInfo_var);
		Lazy_1_tD86FA2DBC6DDD534D2365617EE6B309478B2DCAE * L_4 = ((Mono_t22DED35DF53F81A03339C93DB68629D193273A02_StaticFields*)il2cpp_codegen_static_fields_for(Mono_t22DED35DF53F81A03339C93DB68629D193273A02_il2cpp_TypeInfo_var))->get__usingMono_0();
		NullCheck(L_4);
		bool L_5 = Lazy_1_get_Value_m72F242F54A5243549F688D7D976338368267CCD6(L_4, /*hidden argument*/Lazy_1_get_Value_m72F242F54A5243549F688D7D976338368267CCD6_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_00db;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		intptr_t L_6 = Platform_TryLoadLibraryExW_m02C79A74A06C659CF7455920EEEDBCDAD23FEF9C(_stringLiteralAD13FBB4A95C3FFD451E2EAA8506541C4178E2ED, (intptr_t)(0), ((int32_t)4096), /*hidden argument*/NULL);
		((ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var))->set__monoSupportHandle_4((intptr_t)L_6);
		intptr_t L_7 = ((ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var))->get__monoSupportHandle_4();
		bool L_8 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_7, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_007f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		int32_t L_9 = Marshal_GetHRForLastWin32Error_mF4E03B3508326CCA86A4C10957D80F9CC677660E(/*hidden argument*/NULL);
		Marshal_ThrowExceptionForHR_m4049F1FF511B6E0E557FC8426626DD9DFD87F102(L_9, /*hidden argument*/NULL);
	}

IL_007f:
	{
		intptr_t L_10 = ((ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var))->get__monoSupportHandle_4();
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		mono_thread_cleanup_initialize_tE441F79B6973656DB9BD772C28288514CF2D0730 * L_11 = Platform_GetProcAddress_Tismono_thread_cleanup_initialize_tE441F79B6973656DB9BD772C28288514CF2D0730_mF8A02DDD1EF4728107316C7CA2F1C9BDD404F75E((intptr_t)L_10, /*hidden argument*/Platform_GetProcAddress_Tismono_thread_cleanup_initialize_tE441F79B6973656DB9BD772C28288514CF2D0730_mF8A02DDD1EF4728107316C7CA2F1C9BDD404F75E_RuntimeMethod_var);
		NullCheck(L_11);
		mono_thread_cleanup_initialize_Invoke_m36868BE05D2776F1F1466B7C96E8167C4D280FB2(L_11, (intptr_t*)(intptr_t*)(((uintptr_t)(&V_0))), (intptr_t*)(intptr_t*)(((uintptr_t)(&V_1))), /*hidden argument*/NULL);
		EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98 * L_12 = ((ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var))->get__threadCleanupRequested_2();
		intptr_t L_13 = V_0;
		SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * L_14 = (SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 *)il2cpp_codegen_object_new(SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2_il2cpp_TypeInfo_var);
		SafeWaitHandle__ctor_m7A02720A5A03917CCA8DD68406A124C4AB76191A(L_14, (intptr_t)L_13, (bool)1, /*hidden argument*/NULL);
		WaitHandleExtensions_SetSafeWaitHandle_m4B8EED29E0631684BCB6884005049A8B86221974(L_12, L_14, /*hidden argument*/NULL);
		EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98 * L_15 = ((ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var))->get__threadCleanupCompleted_3();
		intptr_t L_16 = V_1;
		SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 * L_17 = (SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2 *)il2cpp_codegen_object_new(SafeWaitHandle_t51DB35FF382E636FF3B868D87816733894D46CF2_il2cpp_TypeInfo_var);
		SafeWaitHandle__ctor_m7A02720A5A03917CCA8DD68406A124C4AB76191A(L_17, (intptr_t)L_16, (bool)1, /*hidden argument*/NULL);
		WaitHandleExtensions_SetSafeWaitHandle_m4B8EED29E0631684BCB6884005049A8B86221974(L_15, L_17, /*hidden argument*/NULL);
		intptr_t L_18 = ((ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var))->get__monoSupportHandle_4();
		mono_thread_cleanup_register_t91E974F4BA3BB3C316698B53B7E3E91AFCF42EE7 * L_19 = Platform_GetProcAddress_Tismono_thread_cleanup_register_t91E974F4BA3BB3C316698B53B7E3E91AFCF42EE7_m5B289DB8590CF009F46BCD2D455688D0360E0F8D((intptr_t)L_18, /*hidden argument*/Platform_GetProcAddress_Tismono_thread_cleanup_register_t91E974F4BA3BB3C316698B53B7E3E91AFCF42EE7_m5B289DB8590CF009F46BCD2D455688D0360E0F8D_RuntimeMethod_var);
		((ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var))->set__cleanupRegister_5(L_19);
		AppDomain_t1B59572328F60585904DF52A59FE47CF5B5FFFF8 * L_20 = AppDomain_get_CurrentDomain_m3D3D52C9382D6853E49551DA6182DBC5F1118BF0(/*hidden argument*/NULL);
		EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C * L_21 = (EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C *)il2cpp_codegen_object_new(EventHandler_t2B84E745E28BA26C49C4E99A387FC3B534D1110C_il2cpp_TypeInfo_var);
		EventHandler__ctor_m497A2BCD46DB769EAFFDE919303FCAE226906B6F(L_21, NULL, (intptr_t)((intptr_t)ThreadContext_CurrentDomain_DomainUnload_mAD1E70CDB9A85C96DD821F454DB423A3488793E8_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_20);
		AppDomain_add_DomainUnload_mF24D35CA25C3C808EC78600D0C603B396EC8765F(L_20, L_21, /*hidden argument*/NULL);
	}

IL_00db:
	{
		return;
	}
}
// System.Void WinRT.Mono_ThreadContext::CurrentDomain_DomainUnload(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadContext_CurrentDomain_DomainUnload_mAD1E70CDB9A85C96DD821F454DB423A3488793E8 (RuntimeObject * ___sender0, EventArgs_t8E6CA180BE0E56674C6407011A94BAF7C757352E * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThreadContext_CurrentDomain_DomainUnload_mAD1E70CDB9A85C96DD821F454DB423A3488793E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var);
		EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98 * L_0 = ((ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var))->get__threadCleanupRequested_2();
		NullCheck(L_0);
		EventWaitHandle_Set_m7959A86A39735296FC949EC86FDA42A6CFAAB94C(L_0, /*hidden argument*/NULL);
		EventWaitHandle_t7603BF1D3D30FE42DD07A450C8D09E2684DC4D98 * L_1 = ((ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var))->get__threadCleanupCompleted_3();
		NullCheck(L_1);
		VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_1);
		Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18 * L_2 = ((ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var))->get__foreignThreads_0();
		NullCheck(L_2);
		HashSet_1_t1B66B9848B6D563944C506FA6F90487B3DB7396D * L_3 = Lazy_1_get_Value_m67D23433D36E7578679746143DC11784AF19CABC(L_2, /*hidden argument*/Lazy_1_get_Value_m67D23433D36E7578679746143DC11784AF19CABC_RuntimeMethod_var);
		NullCheck(L_3);
		HashSet_1_Clear_m0396A90EB111C444993138A23C8BD61D2999CAA4(L_3, /*hidden argument*/HashSet_1_Clear_m0396A90EB111C444993138A23C8BD61D2999CAA4_RuntimeMethod_var);
		Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18 * L_4 = ((ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var))->get__presumedNonForeignThreads_1();
		NullCheck(L_4);
		HashSet_1_t1B66B9848B6D563944C506FA6F90487B3DB7396D * L_5 = Lazy_1_get_Value_m67D23433D36E7578679746143DC11784AF19CABC(L_4, /*hidden argument*/Lazy_1_get_Value_m67D23433D36E7578679746143DC11784AF19CABC_RuntimeMethod_var);
		NullCheck(L_5);
		HashSet_1_Clear_m0396A90EB111C444993138A23C8BD61D2999CAA4(L_5, /*hidden argument*/HashSet_1_Clear_m0396A90EB111C444993138A23C8BD61D2999CAA4_RuntimeMethod_var);
		((ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var))->set__cleanupRegister_5((mono_thread_cleanup_register_t91E974F4BA3BB3C316698B53B7E3E91AFCF42EE7 *)NULL);
		intptr_t L_6 = ((ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var))->get__monoSupportHandle_4();
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		Platform_FreeLibrary_mA760C95B6712C55E42A1FDDF88373685B7069723((intptr_t)L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WinRT.Mono_ThreadContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadContext__ctor_m9856BC9B7CB57B4CFDDCF7BDCBCAA5B3759E0C9B (ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThreadContext__ctor_m9856BC9B7CB57B4CFDDCF7BDCBCAA5B3759E0C9B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mono_t22DED35DF53F81A03339C93DB68629D193273A02_il2cpp_TypeInfo_var);
		Lazy_1_tD86FA2DBC6DDD534D2365617EE6B309478B2DCAE * L_0 = ((Mono_t22DED35DF53F81A03339C93DB68629D193273A02_StaticFields*)il2cpp_codegen_static_fields_for(Mono_t22DED35DF53F81A03339C93DB68629D193273A02_il2cpp_TypeInfo_var))->get__usingMono_0();
		NullCheck(L_0);
		bool L_1 = Lazy_1_get_Value_m72F242F54A5243549F688D7D976338368267CCD6(L_0, /*hidden argument*/Lazy_1_get_Value_m72F242F54A5243549F688D7D976338368267CCD6_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Mono_t22DED35DF53F81A03339C93DB68629D193273A02_il2cpp_TypeInfo_var);
		intptr_t L_2 = Mono_mono_thread_current_m4E924D5C3B1041C483432750DFDCFD8B7E723723(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		intptr_t L_3 = V_0;
		bool L_4 = Mono_mono_thread_is_foreign_m368E42A1482E021F89CB92C88374CF2391B33202((intptr_t)L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var);
		Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18 * L_5 = ((ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var))->get__presumedNonForeignThreads_1();
		NullCheck(L_5);
		HashSet_1_t1B66B9848B6D563944C506FA6F90487B3DB7396D * L_6 = Lazy_1_get_Value_m67D23433D36E7578679746143DC11784AF19CABC(L_5, /*hidden argument*/Lazy_1_get_Value_m67D23433D36E7578679746143DC11784AF19CABC_RuntimeMethod_var);
		intptr_t L_7 = V_0;
		NullCheck(L_6);
		bool L_8 = HashSet_1_Contains_mB409A367BF3EA85DF0977C23B8F36504BFDFDB5D(L_6, (intptr_t)L_7, /*hidden argument*/HashSet_1_Contains_mB409A367BF3EA85DF0977C23B8F36504BFDFDB5D_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var);
		mono_thread_cleanup_register_t91E974F4BA3BB3C316698B53B7E3E91AFCF42EE7 * L_9 = ((ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var))->get__cleanupRegister_5();
		intptr_t L_10 = V_0;
		NullCheck(L_9);
		mono_thread_cleanup_register_Invoke_m9F36DA9B4A89DD3745E9FD2DC57EDBB39AA83951(L_9, (intptr_t)L_10, /*hidden argument*/NULL);
	}

IL_003d:
	{
		return;
	}
}
// System.Void WinRT.Mono_ThreadContext::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadContext_Dispose_m4B9196F0AAB69A44E322254253555D875E0248C5 (ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void WinRT.Mono_ThreadContext::RegisterPossiblyNonForeignThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadContext_RegisterPossiblyNonForeignThread_mD8D18E7C5E6C3E8033C6EDA8E4154B42CC670E2A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ThreadContext_RegisterPossiblyNonForeignThread_mD8D18E7C5E6C3E8033C6EDA8E4154B42CC670E2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Mono_t22DED35DF53F81A03339C93DB68629D193273A02_il2cpp_TypeInfo_var);
		Lazy_1_tD86FA2DBC6DDD534D2365617EE6B309478B2DCAE * L_0 = ((Mono_t22DED35DF53F81A03339C93DB68629D193273A02_StaticFields*)il2cpp_codegen_static_fields_for(Mono_t22DED35DF53F81A03339C93DB68629D193273A02_il2cpp_TypeInfo_var))->get__usingMono_0();
		NullCheck(L_0);
		bool L_1 = Lazy_1_get_Value_m72F242F54A5243549F688D7D976338368267CCD6(L_0, /*hidden argument*/Lazy_1_get_Value_m72F242F54A5243549F688D7D976338368267CCD6_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Mono_t22DED35DF53F81A03339C93DB68629D193273A02_il2cpp_TypeInfo_var);
		intptr_t L_2 = Mono_mono_thread_current_m4E924D5C3B1041C483432750DFDCFD8B7E723723(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_2;
		IL2CPP_RUNTIME_CLASS_INIT(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var);
		Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18 * L_3 = ((ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var))->get__foreignThreads_0();
		NullCheck(L_3);
		HashSet_1_t1B66B9848B6D563944C506FA6F90487B3DB7396D * L_4 = Lazy_1_get_Value_m67D23433D36E7578679746143DC11784AF19CABC(L_3, /*hidden argument*/Lazy_1_get_Value_m67D23433D36E7578679746143DC11784AF19CABC_RuntimeMethod_var);
		intptr_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6 = HashSet_1_Contains_mB409A367BF3EA85DF0977C23B8F36504BFDFDB5D(L_4, (intptr_t)L_5, /*hidden argument*/HashSet_1_Contains_mB409A367BF3EA85DF0977C23B8F36504BFDFDB5D_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var);
		Lazy_1_t11F0F0E05A0D65C04CB6F66AA9F1C83922B02B18 * L_7 = ((ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_StaticFields*)il2cpp_codegen_static_fields_for(ThreadContext_tB48869AABAE97D6C11D3DBB2D1F45E383F896A22_il2cpp_TypeInfo_var))->get__presumedNonForeignThreads_1();
		NullCheck(L_7);
		HashSet_1_t1B66B9848B6D563944C506FA6F90487B3DB7396D * L_8 = Lazy_1_get_Value_m67D23433D36E7578679746143DC11784AF19CABC(L_7, /*hidden argument*/Lazy_1_get_Value_m67D23433D36E7578679746143DC11784AF19CABC_RuntimeMethod_var);
		intptr_t L_9 = V_0;
		NullCheck(L_8);
		HashSet_1_Add_mD1078C245664F32D05FE0B958860B9943FF366EA(L_8, (intptr_t)L_9, /*hidden argument*/HashSet_1_Add_mD1078C245664F32D05FE0B958860B9943FF366EA_RuntimeMethod_var);
	}

IL_0035:
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_mono_thread_cleanup_initialize_tE441F79B6973656DB9BD772C28288514CF2D0730 (mono_thread_cleanup_initialize_tE441F79B6973656DB9BD772C28288514CF2D0730 * __this, intptr_t* ___threadCleanupRequested0, intptr_t* ___threadCleanupCompleted1, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(intptr_t*, intptr_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___threadCleanupRequested0, ___threadCleanupCompleted1);

}
// System.Void WinRT.Mono_mono_thread_cleanup_initialize::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mono_thread_cleanup_initialize__ctor_mA136853F6E241E5E185B9D1AFF27EF5B85F30938 (mono_thread_cleanup_initialize_tE441F79B6973656DB9BD772C28288514CF2D0730 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void WinRT.Mono_mono_thread_cleanup_initialize::Invoke(System.IntPtr*,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mono_thread_cleanup_initialize_Invoke_m36868BE05D2776F1F1466B7C96E8167C4D280FB2 (mono_thread_cleanup_initialize_tE441F79B6973656DB9BD772C28288514CF2D0730 * __this, intptr_t* ___threadCleanupRequested0, intptr_t* ___threadCleanupCompleted1, const RuntimeMethod* method)
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
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t*, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___threadCleanupRequested0, ___threadCleanupCompleted1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t*, intptr_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___threadCleanupRequested0, ___threadCleanupCompleted1, targetMethod);
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
						GenericInterfaceActionInvoker2< intptr_t*, intptr_t* >::Invoke(targetMethod, targetThis, ___threadCleanupRequested0, ___threadCleanupCompleted1);
					else
						GenericVirtActionInvoker2< intptr_t*, intptr_t* >::Invoke(targetMethod, targetThis, ___threadCleanupRequested0, ___threadCleanupCompleted1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t*, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___threadCleanupRequested0, ___threadCleanupCompleted1);
					else
						VirtActionInvoker2< intptr_t*, intptr_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___threadCleanupRequested0, ___threadCleanupCompleted1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___threadCleanupRequested0) - 1), ___threadCleanupCompleted1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t*, intptr_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___threadCleanupRequested0, ___threadCleanupCompleted1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t*, intptr_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___threadCleanupRequested0, ___threadCleanupCompleted1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult WinRT.Mono_mono_thread_cleanup_initialize::BeginInvoke(System.IntPtr*,System.IntPtr*,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* mono_thread_cleanup_initialize_BeginInvoke_m72462E0E03650FA78D33E2094BF9F89DBBD3E842 (mono_thread_cleanup_initialize_tE441F79B6973656DB9BD772C28288514CF2D0730 * __this, intptr_t* ___threadCleanupRequested0, intptr_t* ___threadCleanupCompleted1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___threadCleanupRequested0;
	__d_args[1] = ___threadCleanupCompleted1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void WinRT.Mono_mono_thread_cleanup_initialize::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mono_thread_cleanup_initialize_EndInvoke_m89E5FCF5413C5638B1D8C40AD18BBFDF5227D445 (mono_thread_cleanup_initialize_tE441F79B6973656DB9BD772C28288514CF2D0730 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_mono_thread_cleanup_register_t91E974F4BA3BB3C316698B53B7E3E91AFCF42EE7 (mono_thread_cleanup_register_t91E974F4BA3BB3C316698B53B7E3E91AFCF42EE7 * __this, intptr_t ___threadPtr0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___threadPtr0);

}
// System.Void WinRT.Mono_mono_thread_cleanup_register::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mono_thread_cleanup_register__ctor_mE5D934A5F42A99ADBC69085CD4B70CB958C2187F (mono_thread_cleanup_register_t91E974F4BA3BB3C316698B53B7E3E91AFCF42EE7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void WinRT.Mono_mono_thread_cleanup_register::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mono_thread_cleanup_register_Invoke_m9F36DA9B4A89DD3745E9FD2DC57EDBB39AA83951 (mono_thread_cleanup_register_t91E974F4BA3BB3C316698B53B7E3E91AFCF42EE7 * __this, intptr_t ___threadPtr0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___threadPtr0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___threadPtr0, targetMethod);
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
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___threadPtr0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___threadPtr0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___threadPtr0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___threadPtr0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___threadPtr0) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___threadPtr0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult WinRT.Mono_mono_thread_cleanup_register::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* mono_thread_cleanup_register_BeginInvoke_m80F8CF0E5B7363B797B45D17419A616A5FAD00CC (mono_thread_cleanup_register_t91E974F4BA3BB3C316698B53B7E3E91AFCF42EE7 * __this, intptr_t ___threadPtr0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (mono_thread_cleanup_register_BeginInvoke_m80F8CF0E5B7363B797B45D17419A616A5FAD00CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___threadPtr0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void WinRT.Mono_mono_thread_cleanup_register::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void mono_thread_cleanup_register_EndInvoke_m73DD5B7ACC9ABBEE4DC8012EC80CA32F7EB7832E (mono_thread_cleanup_register_t91E974F4BA3BB3C316698B53B7E3E91AFCF42EE7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void WinRT.Platform::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__cctor_mA454D12C759041A58BB7AEE225EF33E6D7A99941 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform__cctor_mA454D12C759041A58BB7AEE225EF33E6D7A99941_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293 * L_0 = (DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293 *)il2cpp_codegen_object_new(DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293_il2cpp_TypeInfo_var);
		DotNETLinkage__ctor_mBDC897175A88BF796DC17532269398E3C05EAC32(L_0, /*hidden argument*/NULL);
		((Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var))->set__platformLinkage_0(L_0);
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		RuntimeObject* L_1 = ((Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		NullCheck(L_1);
		InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(9 /* System.Int32 WinRT.Platform/IPlatformLinkage::_WindowsDeleteString(System.IntPtr) */, IPlatformLinkage_t8FCF461CF61EF6C60A6348C2043A1E41B2E673AA_il2cpp_TypeInfo_var, L_1, (intptr_t)(0));
		goto IL_0029;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (DllNotFoundException_tED90B6A78D4CF5AA565288E0BA88A990062A7F76_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_001c;
		throw e;
	}

CATCH_001c:
	{ // begin catch(System.DllNotFoundException)
		IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB * L_2 = (IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB *)il2cpp_codegen_object_new(IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB_il2cpp_TypeInfo_var);
		IL2CPPLinkage__ctor_mEFDA61A7824DE2F431EFB13E945426026D960953(L_2, /*hidden argument*/NULL);
		((Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var))->set__platformLinkage_0(L_2);
		goto IL_0029;
	} // end catch (depth: 1)

IL_0029:
	{
		return;
	}
}
// System.Int32 WinRT.Platform::AddDllDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Platform_AddDllDirectory_mDBF08428063CDC47D60B7E7115EA27EA12389AAE (String_t* ___pathName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_AddDllDirectory_mDBF08428063CDC47D60B7E7115EA27EA12389AAE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		String_t* L_1 = ___pathName0;
		NullCheck(L_0);
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, String_t* >::Invoke(0 /* System.Int32 WinRT.Platform/IPlatformLinkage::_AddDllDirectory(System.String) */, IPlatformLinkage_t8FCF461CF61EF6C60A6348C2043A1E41B2E673AA_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.IntPtr WinRT.Platform::TryLoadLibraryExW(System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Platform_TryLoadLibraryExW_m02C79A74A06C659CF7455920EEEDBCDAD23FEF9C (String_t* ___fileName0, intptr_t ___fileHandle1, uint32_t ___flags2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_TryLoadLibraryExW_m02C79A74A06C659CF7455920EEEDBCDAD23FEF9C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		String_t* L_1 = ___fileName0;
		intptr_t L_2 = ___fileHandle1;
		uint32_t L_3 = ___flags2;
		NullCheck(L_0);
		intptr_t L_4 = InterfaceFuncInvoker3< intptr_t, String_t*, intptr_t, uint32_t >::Invoke(1 /* System.IntPtr WinRT.Platform/IPlatformLinkage::_LoadLibraryExW(System.String,System.IntPtr,System.UInt32) */, IPlatformLinkage_t8FCF461CF61EF6C60A6348C2043A1E41B2E673AA_il2cpp_TypeInfo_var, L_0, L_1, (intptr_t)L_2, L_3);
		return (intptr_t)L_4;
	}
}
// System.Void WinRT.Platform::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_FreeLibrary_mA760C95B6712C55E42A1FDDF88373685B7069723 (intptr_t ___moduleHandle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_FreeLibrary_mA760C95B6712C55E42A1FDDF88373685B7069723_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		intptr_t L_1 = ___moduleHandle0;
		NullCheck(L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, intptr_t >::Invoke(2 /* System.Boolean WinRT.Platform/IPlatformLinkage::_FreeLibrary(System.IntPtr) */, IPlatformLinkage_t8FCF461CF61EF6C60A6348C2043A1E41B2E673AA_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		int32_t L_3 = Platform_GetHRForLastWin32Error_m8250038252C4DC6060D1F858823872804F9835AE(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m4049F1FF511B6E0E557FC8426626DD9DFD87F102(L_3, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.IntPtr WinRT.Platform::CoIncrementMTAUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Platform_CoIncrementMTAUsage_m1B89CA44FA1D3C0CAC2A9CEC561B1275F4C677B9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_CoIncrementMTAUsage_m1B89CA44FA1D3C0CAC2A9CEC561B1275F4C677B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker1< int32_t, intptr_t* >::Invoke(4 /* System.Int32 WinRT.Platform/IPlatformLinkage::_CoIncrementMTAUsage(System.IntPtr*) */, IPlatformLinkage_t8FCF461CF61EF6C60A6348C2043A1E41B2E673AA_il2cpp_TypeInfo_var, L_0, (intptr_t*)(intptr_t*)(((uintptr_t)(&V_0))));
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m4049F1FF511B6E0E557FC8426626DD9DFD87F102(L_1, /*hidden argument*/NULL);
		intptr_t L_2 = V_0;
		return (intptr_t)L_2;
	}
}
// System.Void WinRT.Platform::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_CoDecrementMTAUsage_m66889F502E9C529EF25F1E87C756262177570F67 (intptr_t ___cookie0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_CoDecrementMTAUsage_m66889F502E9C529EF25F1E87C756262177570F67_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		intptr_t L_1 = ___cookie0;
		NullCheck(L_0);
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(5 /* System.Int32 WinRT.Platform/IPlatformLinkage::_CoDecrementMTAUsage(System.IntPtr) */, IPlatformLinkage_t8FCF461CF61EF6C60A6348C2043A1E41B2E673AA_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m4049F1FF511B6E0E557FC8426626DD9DFD87F102(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr WinRT.Platform::RoGetActivationFactory(System.IntPtr,System.Guid&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Platform_RoGetActivationFactory_m79C4AC3A75F1498F6494256E5A113D5E6802A01D (intptr_t ___runtimeClassId0, Guid_t * ___iid1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_RoGetActivationFactory_m79C4AC3A75F1498F6494256E5A113D5E6802A01D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		intptr_t L_1 = ___runtimeClassId0;
		Guid_t * L_2 = ___iid1;
		NullCheck(L_0);
		int32_t L_3 = InterfaceFuncInvoker3< int32_t, intptr_t, Guid_t *, intptr_t* >::Invoke(6 /* System.Int32 WinRT.Platform/IPlatformLinkage::_RoGetActivationFactory(System.IntPtr,System.Guid&,System.IntPtr*) */, IPlatformLinkage_t8FCF461CF61EF6C60A6348C2043A1E41B2E673AA_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1, (Guid_t *)L_2, (intptr_t*)(intptr_t*)(((uintptr_t)(&V_0))));
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m4049F1FF511B6E0E557FC8426626DD9DFD87F102(L_3, /*hidden argument*/NULL);
		intptr_t L_4 = V_0;
		return (intptr_t)L_4;
	}
}
// System.IntPtr WinRT.Platform::WindowsCreateString(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Platform_WindowsCreateString_m738195D3E2596563126446D7B671B674C2FC3EEE (String_t* ___sourceString0, int32_t ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_WindowsCreateString_m738195D3E2596563126446D7B671B674C2FC3EEE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		String_t* L_1 = ___sourceString0;
		int32_t L_2 = ___length1;
		NullCheck(L_0);
		int32_t L_3 = InterfaceFuncInvoker3< int32_t, String_t*, int32_t, intptr_t* >::Invoke(7 /* System.Int32 WinRT.Platform/IPlatformLinkage::_WindowsCreateString(System.String,System.Int32,System.IntPtr*) */, IPlatformLinkage_t8FCF461CF61EF6C60A6348C2043A1E41B2E673AA_il2cpp_TypeInfo_var, L_0, L_1, L_2, (intptr_t*)(intptr_t*)(((uintptr_t)(&V_0))));
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m4049F1FF511B6E0E557FC8426626DD9DFD87F102(L_3, /*hidden argument*/NULL);
		intptr_t L_4 = V_0;
		return (intptr_t)L_4;
	}
}
// System.Char* WinRT.Platform::WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Platform_WindowsGetStringRawBuffer_m58557E46079156E084D25CF7B802D568BD92E283 (intptr_t ___hstring0, uint32_t* ___length1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_WindowsGetStringRawBuffer_m58557E46079156E084D25CF7B802D568BD92E283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		intptr_t L_1 = ___hstring0;
		uint32_t* L_2 = ___length1;
		NullCheck(L_0);
		Il2CppChar* L_3 = InterfaceFuncInvoker2< Il2CppChar*, intptr_t, uint32_t* >::Invoke(8 /* System.Char* WinRT.Platform/IPlatformLinkage::_WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*) */, IPlatformLinkage_t8FCF461CF61EF6C60A6348C2043A1E41B2E673AA_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1, (uint32_t*)(uint32_t*)L_2);
		return (Il2CppChar*)(L_3);
	}
}
// System.Void WinRT.Platform::WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_WindowsDeleteString_m6CEE353E8DF2F3A0845E0C515E9DC382742887C8 (intptr_t ___hstring0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_WindowsDeleteString_m6CEE353E8DF2F3A0845E0C515E9DC382742887C8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		intptr_t L_1 = ___hstring0;
		NullCheck(L_0);
		int32_t L_2 = InterfaceFuncInvoker1< int32_t, intptr_t >::Invoke(9 /* System.Int32 WinRT.Platform/IPlatformLinkage::_WindowsDeleteString(System.IntPtr) */, IPlatformLinkage_t8FCF461CF61EF6C60A6348C2043A1E41B2E673AA_il2cpp_TypeInfo_var, L_0, (intptr_t)L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_ThrowExceptionForHR_m4049F1FF511B6E0E557FC8426626DD9DFD87F102(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 WinRT.Platform::GetHRForLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Platform_GetHRForLastWin32Error_m8250038252C4DC6060D1F858823872804F9835AE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Platform_GetHRForLastWin32Error_m8250038252C4DC6060D1F858823872804F9835AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_StaticFields*)il2cpp_codegen_static_fields_for(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var))->get__platformLinkage_0();
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 WinRT.Platform/IPlatformLinkage::_GetHRForLastWin32Error() */, IPlatformLinkage_t8FCF461CF61EF6C60A6348C2043A1E41B2E673AA_il2cpp_TypeInfo_var, L_0);
		return L_1;
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
// System.Int32 WinRT.Platform_DotNETLinkage::_AddDllDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__AddDllDirectory_m2EE867DC6313790CC1DD7F806F03B6883FBAF1CA (DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293 * __this, String_t* ___pathName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___pathName0;
		int32_t L_1 = DotNETLinkage_AddDllDirectory_m44DDD631D5E17547D3E064E402B881E6A4C0B6A1(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.IntPtr WinRT.Platform_DotNETLinkage::_LoadLibraryExW(System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DotNETLinkage__LoadLibraryExW_m286CB55C0F68E238CFC2FABA270E1B303331F53B (DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293 * __this, String_t* ___fileName0, intptr_t ___fileHandle1, uint32_t ___flags2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___fileName0;
		intptr_t L_1 = ___fileHandle1;
		uint32_t L_2 = ___flags2;
		intptr_t L_3 = DotNETLinkage_LoadLibraryExW_m9E3390DE5FA6120FB0809CCC704F9AB0120DD4FD(L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		return (intptr_t)L_3;
	}
}
// System.Boolean WinRT.Platform_DotNETLinkage::_FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNETLinkage__FreeLibrary_mCFFE603A28164E27B4A6EE41579F66217E8E7388 (DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293 * __this, intptr_t ___moduleHandle0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___moduleHandle0;
		bool L_1 = DotNETLinkage_FreeLibrary_m932DF6A2D730DD76DA6F1735CB77B10726D8A1BE((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.IntPtr WinRT.Platform_DotNETLinkage::_GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DotNETLinkage__GetProcAddress_m0868C4D889AA45D811C8FF78313A67A6A54AFED5 (DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293 * __this, intptr_t ___moduleHandle0, String_t* ___functionName1, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___moduleHandle0;
		String_t* L_1 = ___functionName1;
		intptr_t L_2 = DotNETLinkage_GetProcAddress_m461D378570E3DA17476025EF9A0790F5F0148D57((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return (intptr_t)L_2;
	}
}
// System.Int32 WinRT.Platform_DotNETLinkage::_CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__CoIncrementMTAUsage_mD557A20691616505B62969CF695739B944EC6931 (DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293 * __this, intptr_t* ___cookie0, const RuntimeMethod* method)
{
	{
		intptr_t* L_0 = ___cookie0;
		int32_t L_1 = DotNETLinkage_CoIncrementMTAUsage_mC891640474B2383E9E6FA895AE1B4F0D865BB9FC((intptr_t*)(intptr_t*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform_DotNETLinkage::_CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__CoDecrementMTAUsage_mD585ED3A7FBFB8476F59C605EB9733A2366CEA99 (DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293 * __this, intptr_t ___cookie0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___cookie0;
		int32_t L_1 = DotNETLinkage_CoDecrementMTAUsage_mE1164FBD9935CCC90E7E530B968B4A091F89541D((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform_DotNETLinkage::_RoGetActivationFactory(System.IntPtr,System.Guid&,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__RoGetActivationFactory_m0FD7A6BD9DBEA785B15AAE30ABECEBF1BC21977D (DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293 * __this, intptr_t ___runtimeClassId0, Guid_t * ___iid1, intptr_t* ___factory2, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___runtimeClassId0;
		Guid_t * L_1 = ___iid1;
		intptr_t* L_2 = ___factory2;
		int32_t L_3 = DotNETLinkage_RoGetActivationFactory_m739DDA252FE78F2A19B2A522B26F20C80BB8A067((intptr_t)L_0, (Guid_t *)L_1, (intptr_t*)(intptr_t*)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 WinRT.Platform_DotNETLinkage::_WindowsCreateString(System.String,System.Int32,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__WindowsCreateString_mF22D439879241EC6256156B59BF287113F60F4FD (DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293 * __this, String_t* ___sourceString0, int32_t ___length1, intptr_t* ___hstring2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___sourceString0;
		int32_t L_1 = ___length1;
		intptr_t* L_2 = ___hstring2;
		int32_t L_3 = DotNETLinkage_WindowsCreateString_mC32742B45111CA0AAF073F8681A9B7094DBA4203(L_0, L_1, (intptr_t*)(intptr_t*)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Char* WinRT.Platform_DotNETLinkage::_WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* DotNETLinkage__WindowsGetStringRawBuffer_mD382C659CE1470832FA453581D65C8148F58F969 (DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293 * __this, intptr_t ___hstring0, uint32_t* ___length1, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___hstring0;
		uint32_t* L_1 = ___length1;
		Il2CppChar* L_2 = DotNETLinkage_WindowsGetStringRawBuffer_mAF2EADE48D5BD9BE5AF9DFB5126F276081CF7CA3((intptr_t)L_0, (uint32_t*)(uint32_t*)L_1, /*hidden argument*/NULL);
		return (Il2CppChar*)(L_2);
	}
}
// System.Int32 WinRT.Platform_DotNETLinkage::_WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__WindowsDeleteString_mA1F4BED983A043D2DFCBB71AF731E37DF7DCE2F2 (DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293 * __this, intptr_t ___hstring0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___hstring0;
		int32_t L_1 = DotNETLinkage_WindowsDeleteString_m962DD9B2573DB680B475101B04F7A633AA6496AD((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform_DotNETLinkage::_GetHRForLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage__GetHRForLastWin32Error_mFE15268CDFFCFA53FF69B5C1E4A0036D553261CD (DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DotNETLinkage__GetHRForLastWin32Error_mFE15268CDFFCFA53FF69B5C1E4A0036D553261CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		int32_t L_0 = Marshal_GetHRForLastWin32Error_mF4E03B3508326CCA86A4C10957D80F9CC677660E(/*hidden argument*/NULL);
		return L_0;
	}
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL AddDllDirectory(Il2CppChar*);
#endif
// System.Int32 WinRT.Platform_DotNETLinkage::AddDllDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_AddDllDirectory_m44DDD631D5E17547D3E064E402B881E6A4C0B6A1 (String_t* ___pathName0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (Il2CppChar*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "AddDllDirectory", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___pathName0' to native representation
	Il2CppChar* ____pathName0_marshaled = NULL;
	if (___pathName0 != NULL)
	{
		____pathName0_marshaled = ___pathName0->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(AddDllDirectory)(____pathName0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____pathName0_marshaled);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL LoadLibraryExW(Il2CppChar*, intptr_t, uint32_t);
#endif
// System.IntPtr WinRT.Platform_DotNETLinkage::LoadLibraryExW(System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DotNETLinkage_LoadLibraryExW_m9E3390DE5FA6120FB0809CCC704F9AB0120DD4FD (String_t* ___fileName0, intptr_t ___fileHandle1, uint32_t ___flags2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (Il2CppChar*, intptr_t, uint32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*) + sizeof(intptr_t) + sizeof(uint32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "LoadLibraryExW", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___fileName0' to native representation
	Il2CppChar* ____fileName0_marshaled = NULL;
	if (___fileName0 != NULL)
	{
		____fileName0_marshaled = ___fileName0->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(LoadLibraryExW)(____fileName0_marshaled, ___fileHandle1, ___flags2);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(____fileName0_marshaled, ___fileHandle1, ___flags2);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FreeLibrary(intptr_t);
#endif
// System.Boolean WinRT.Platform_DotNETLinkage::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DotNETLinkage_FreeLibrary_m932DF6A2D730DD76DA6F1735CB77B10726D8A1BE (intptr_t ___moduleHandle0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "FreeLibrary", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FreeLibrary)(___moduleHandle0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___moduleHandle0);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetProcAddress(intptr_t, char*);
#endif
// System.IntPtr WinRT.Platform_DotNETLinkage::GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t DotNETLinkage_GetProcAddress_m461D378570E3DA17476025EF9A0790F5F0148D57 (intptr_t ___moduleHandle0, String_t* ___functionName1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(char*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "GetProcAddress", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___functionName1' to native representation
	char* ____functionName1_marshaled = NULL;
	____functionName1_marshaled = il2cpp_codegen_marshal_string(___functionName1);

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetProcAddress)(___moduleHandle0, ____functionName1_marshaled);
	#else
	intptr_t returnValue = il2cppPInvokeFunc(___moduleHandle0, ____functionName1_marshaled);
	#endif
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling cleanup of parameter '___functionName1' native representation
	il2cpp_codegen_marshal_free(____functionName1_marshaled);
	____functionName1_marshaled = NULL;

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CoIncrementMTAUsage(intptr_t*);
#endif
// System.Int32 WinRT.Platform_DotNETLinkage::CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_CoIncrementMTAUsage_mC891640474B2383E9E6FA895AE1B4F0D865BB9FC (intptr_t* ___cookie0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-com-l1-1-0.dll"), "CoIncrementMTAUsage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CoIncrementMTAUsage)(___cookie0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cookie0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CoDecrementMTAUsage(intptr_t);
#endif
// System.Int32 WinRT.Platform_DotNETLinkage::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_CoDecrementMTAUsage_mE1164FBD9935CCC90E7E530B968B4A091F89541D (intptr_t ___cookie0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-com-l1-1-0.dll"), "CoDecrementMTAUsage", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CoDecrementMTAUsage)(___cookie0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___cookie0);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL RoGetActivationFactory(intptr_t, Guid_t *, intptr_t*);
#endif
// System.Int32 WinRT.Platform_DotNETLinkage::RoGetActivationFactory(System.IntPtr,System.Guid&,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_RoGetActivationFactory_m739DDA252FE78F2A19B2A522B26F20C80BB8A067 (intptr_t ___runtimeClassId0, Guid_t * ___iid1, intptr_t* ___factory2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, Guid_t *, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(Guid_t *) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-winrt-l1-1-0.dll"), "RoGetActivationFactory", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RoGetActivationFactory)(___runtimeClassId0, ___iid1, ___factory2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___runtimeClassId0, ___iid1, ___factory2);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t STDCALL WindowsCreateString(Il2CppChar*, int32_t, intptr_t*);
#endif
// System.Int32 WinRT.Platform_DotNETLinkage::WindowsCreateString(System.String,System.Int32,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_WindowsCreateString_mC32742B45111CA0AAF073F8681A9B7094DBA4203 (String_t* ___sourceString0, int32_t ___length1, intptr_t* ___hstring2, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc) (Il2CppChar*, int32_t, intptr_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(Il2CppChar*) + sizeof(int32_t) + sizeof(intptr_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-winrt-string-l1-1-0.dll"), "WindowsCreateString", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___sourceString0' to native representation
	Il2CppChar* ____sourceString0_marshaled = NULL;
	if (___sourceString0 != NULL)
	{
		____sourceString0_marshaled = ___sourceString0->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WindowsCreateString)(____sourceString0_marshaled, ___length1, ___hstring2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____sourceString0_marshaled, ___length1, ___hstring2);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C Il2CppChar* STDCALL WindowsGetStringRawBuffer(intptr_t, uint32_t*);
#endif
// System.Char* WinRT.Platform_DotNETLinkage::WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* DotNETLinkage_WindowsGetStringRawBuffer_mAF2EADE48D5BD9BE5AF9DFB5126F276081CF7CA3 (intptr_t ___hstring0, uint32_t* ___length1, const RuntimeMethod* method)
{
	typedef Il2CppChar* (STDCALL *PInvokeFunc) (intptr_t, uint32_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(uint32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-winrt-string-l1-1-0.dll"), "WindowsGetStringRawBuffer", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	Il2CppChar* returnValue = reinterpret_cast<PInvokeFunc>(WindowsGetStringRawBuffer)(___hstring0, ___length1);
	#else
	Il2CppChar* returnValue = il2cppPInvokeFunc(___hstring0, ___length1);
	#endif

	return returnValue;
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C int32_t STDCALL WindowsDeleteString(intptr_t);
#endif
// System.Int32 WinRT.Platform_DotNETLinkage::WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotNETLinkage_WindowsDeleteString_m962DD9B2573DB680B475101B04F7A633AA6496AD (intptr_t ___hstring0, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc) (intptr_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("api-ms-win-core-winrt-string-l1-1-0.dll"), "WindowsDeleteString", IL2CPP_CALL_STDCALL, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WindowsDeleteString)(___hstring0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___hstring0);
	#endif

	return returnValue;
}
// System.Void WinRT.Platform_DotNETLinkage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotNETLinkage__ctor_mBDC897175A88BF796DC17532269398E3C05EAC32 (DotNETLinkage_tE1B2C8004128D6A0F88DD176BFBE75C61676B293 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Int32 WinRT.Platform_IL2CPPLinkage::_AddDllDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__AddDllDirectory_mE8CA4F5FF2C0DD78D7A86953337ED2AE04F67660 (IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB * __this, String_t* ___pathName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IL2CPPLinkage__AddDllDirectory_mE8CA4F5FF2C0DD78D7A86953337ED2AE04F67660_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 * L_0 = (NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4 *)il2cpp_codegen_object_new(NotImplementedException_t8AD6EBE5FEDB0AEBECEE0961CF73C35B372EFFA4_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_mEBAED0FCA8B8CCE7E96492474350BA35D14CF59C(L_0, _stringLiteral6D0055D12CAAFCC74D1A53378B28C701AEED2AF5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, IL2CPPLinkage__AddDllDirectory_mE8CA4F5FF2C0DD78D7A86953337ED2AE04F67660_RuntimeMethod_var);
	}
}
// System.IntPtr WinRT.Platform_IL2CPPLinkage::_LoadLibraryExW(System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IL2CPPLinkage__LoadLibraryExW_m322BDB63D15A6559082B997FCECD13789C032155 (IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB * __this, String_t* ___fileName0, intptr_t ___fileHandle1, uint32_t ___flags2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___fileName0;
		intptr_t L_1 = ___fileHandle1;
		uint32_t L_2 = ___flags2;
		intptr_t L_3 = IL2CPPLinkage_LoadLibraryExW_m33217394071DB67784E91D8514DD8FB885845939(L_0, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		return (intptr_t)L_3;
	}
}
// System.Boolean WinRT.Platform_IL2CPPLinkage::_FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IL2CPPLinkage__FreeLibrary_m5C2FB8D01D5AAC1CAB8F4320EC2F78C9CA22568B (IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB * __this, intptr_t ___moduleHandle0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___moduleHandle0;
		bool L_1 = IL2CPPLinkage_FreeLibrary_m82A84BC6B51FBB3C3F735BEADC9100C98FA47AA6((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.IntPtr WinRT.Platform_IL2CPPLinkage::_GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IL2CPPLinkage__GetProcAddress_m60F4FC6D9186FE21D4EEF28CE5D0DE86BA2724E0 (IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB * __this, intptr_t ___moduleHandle0, String_t* ___functionName1, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___moduleHandle0;
		String_t* L_1 = ___functionName1;
		intptr_t L_2 = IL2CPPLinkage_GetProcAddress_mF2DE99124AC9DBCF074DBA5715FA9DF7C9D70AA2((intptr_t)L_0, L_1, /*hidden argument*/NULL);
		return (intptr_t)L_2;
	}
}
// System.Int32 WinRT.Platform_IL2CPPLinkage::_CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__CoIncrementMTAUsage_mFB92887ADBDE7C9F25517A9923EB547BE95CAED7 (IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB * __this, intptr_t* ___cookie0, const RuntimeMethod* method)
{
	{
		intptr_t* L_0 = ___cookie0;
		int32_t L_1 = IL2CPPLinkage_CoIncrementMTAUsage_m76A810338B0C713F6FD3FDBA59B0EB7CF45B1CF3((intptr_t*)(intptr_t*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform_IL2CPPLinkage::_CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__CoDecrementMTAUsage_m91710A5EA01A99BD7ABC491F62740B1F3F346295 (IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB * __this, intptr_t ___cookie0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___cookie0;
		int32_t L_1 = IL2CPPLinkage_CoDecrementMTAUsage_mF380B5AC44BCC0ECED22E7539790298D1DE58731((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform_IL2CPPLinkage::_RoGetActivationFactory(System.IntPtr,System.Guid&,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__RoGetActivationFactory_m3BC8EAF2A973F06C0BBC9CC074B7C437232B8E5B (IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB * __this, intptr_t ___runtimeClassId0, Guid_t * ___iid1, intptr_t* ___factory2, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___runtimeClassId0;
		Guid_t * L_1 = ___iid1;
		intptr_t* L_2 = ___factory2;
		int32_t L_3 = IL2CPPLinkage_RoGetActivationFactory_m81D4458686DC6445CCA6E2EA733F0AD9EDC7A658((intptr_t)L_0, (Guid_t *)L_1, (intptr_t*)(intptr_t*)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 WinRT.Platform_IL2CPPLinkage::_WindowsCreateString(System.String,System.Int32,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__WindowsCreateString_m20587F7EAB3CD522EE509F38442738AB98C421DB (IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB * __this, String_t* ___sourceString0, int32_t ___length1, intptr_t* ___hstring2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___sourceString0;
		int32_t L_1 = ___length1;
		intptr_t* L_2 = ___hstring2;
		int32_t L_3 = IL2CPPLinkage_WindowsCreateString_mB2BDC64F6673F09B1CDA825DAA5AE85536031B72(L_0, L_1, (intptr_t*)(intptr_t*)L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Char* WinRT.Platform_IL2CPPLinkage::_WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* IL2CPPLinkage__WindowsGetStringRawBuffer_mFD4F37D297EA9A615F41B9969E4709AFFEDD48E0 (IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB * __this, intptr_t ___hstring0, uint32_t* ___length1, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___hstring0;
		uint32_t* L_1 = ___length1;
		Il2CppChar* L_2 = IL2CPPLinkage_WindowsGetStringRawBuffer_m1CFB9E217058F11F7A46C83E71EC24213E058214((intptr_t)L_0, (uint32_t*)(uint32_t*)L_1, /*hidden argument*/NULL);
		return (Il2CppChar*)(L_2);
	}
}
// System.Int32 WinRT.Platform_IL2CPPLinkage::_WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__WindowsDeleteString_mD91B30BADB151ED7A00279655B9587C945E9F136 (IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB * __this, intptr_t ___hstring0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___hstring0;
		int32_t L_1 = IL2CPPLinkage_WindowsDeleteString_m4AC71F6D8E4492DFF8C1D65127B3E17C54CAECE7((intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 WinRT.Platform_IL2CPPLinkage::_GetHRForLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage__GetHRForLastWin32Error_m64849572153C62B37E3D1F134AF12E4FBE69EF2D (IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB * __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)-2147467259);
	}
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL LoadLibraryExW(Il2CppChar*, intptr_t, uint32_t);
// System.IntPtr WinRT.Platform_IL2CPPLinkage::LoadLibraryExW(System.String,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IL2CPPLinkage_LoadLibraryExW_m33217394071DB67784E91D8514DD8FB885845939 (String_t* ___fileName0, intptr_t ___fileHandle1, uint32_t ___flags2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (Il2CppChar*, intptr_t, uint32_t);

	// Marshaling of parameter '___fileName0' to native representation
	Il2CppChar* ____fileName0_marshaled = NULL;
	if (___fileName0 != NULL)
	{
		____fileName0_marshaled = ___fileName0->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(LoadLibraryExW)(____fileName0_marshaled, ___fileHandle1, ___flags2);
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL FreeLibrary(intptr_t);
// System.Boolean WinRT.Platform_IL2CPPLinkage::FreeLibrary(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IL2CPPLinkage_FreeLibrary_m82A84BC6B51FBB3C3F735BEADC9100C98FA47AA6 (intptr_t ___moduleHandle0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(FreeLibrary)(___moduleHandle0);
	il2cpp_codegen_marshal_store_last_error();

	return static_cast<bool>(returnValue);
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetProcAddress(intptr_t, char*);
// System.IntPtr WinRT.Platform_IL2CPPLinkage::GetProcAddress(System.IntPtr,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IL2CPPLinkage_GetProcAddress_mF2DE99124AC9DBCF074DBA5715FA9DF7C9D70AA2 (intptr_t ___moduleHandle0, String_t* ___functionName1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter '___functionName1' to native representation
	char* ____functionName1_marshaled = NULL;
	____functionName1_marshaled = il2cpp_codegen_marshal_string(___functionName1);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetProcAddress)(___moduleHandle0, ____functionName1_marshaled);
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling cleanup of parameter '___functionName1' native representation
	il2cpp_codegen_marshal_free(____functionName1_marshaled);
	____functionName1_marshaled = NULL;

	return returnValue;
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CoIncrementMTAUsage(intptr_t*);
// System.Int32 WinRT.Platform_IL2CPPLinkage::CoIncrementMTAUsage(System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_CoIncrementMTAUsage_m76A810338B0C713F6FD3FDBA59B0EB7CF45B1CF3 (intptr_t* ___cookie0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t*);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CoIncrementMTAUsage)(___cookie0);

	return returnValue;
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL CoDecrementMTAUsage(intptr_t);
// System.Int32 WinRT.Platform_IL2CPPLinkage::CoDecrementMTAUsage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_CoDecrementMTAUsage_mF380B5AC44BCC0ECED22E7539790298D1DE58731 (intptr_t ___cookie0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(CoDecrementMTAUsage)(___cookie0);

	return returnValue;
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL RoGetActivationFactory(intptr_t, Guid_t *, intptr_t*);
// System.Int32 WinRT.Platform_IL2CPPLinkage::RoGetActivationFactory(System.IntPtr,System.Guid&,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_RoGetActivationFactory_m81D4458686DC6445CCA6E2EA733F0AD9EDC7A658 (intptr_t ___runtimeClassId0, Guid_t * ___iid1, intptr_t* ___factory2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, Guid_t *, intptr_t*);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RoGetActivationFactory)(___runtimeClassId0, ___iid1, ___factory2);

	return returnValue;
}
IL2CPP_EXTERN_C int32_t STDCALL WindowsCreateString(Il2CppChar*, int32_t, intptr_t*);
// System.Int32 WinRT.Platform_IL2CPPLinkage::WindowsCreateString(System.String,System.Int32,System.IntPtr*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_WindowsCreateString_mB2BDC64F6673F09B1CDA825DAA5AE85536031B72 (String_t* ___sourceString0, int32_t ___length1, intptr_t* ___hstring2, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc) (Il2CppChar*, int32_t, intptr_t*);

	// Marshaling of parameter '___sourceString0' to native representation
	Il2CppChar* ____sourceString0_marshaled = NULL;
	if (___sourceString0 != NULL)
	{
		____sourceString0_marshaled = ___sourceString0->get_address_of_m_firstChar_1();
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WindowsCreateString)(____sourceString0_marshaled, ___length1, ___hstring2);

	return returnValue;
}
IL2CPP_EXTERN_C Il2CppChar* STDCALL WindowsGetStringRawBuffer(intptr_t, uint32_t*);
// System.Char* WinRT.Platform_IL2CPPLinkage::WindowsGetStringRawBuffer(System.IntPtr,System.UInt32*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* IL2CPPLinkage_WindowsGetStringRawBuffer_m1CFB9E217058F11F7A46C83E71EC24213E058214 (intptr_t ___hstring0, uint32_t* ___length1, const RuntimeMethod* method)
{
	typedef Il2CppChar* (STDCALL *PInvokeFunc) (intptr_t, uint32_t*);

	// Native function invocation
	Il2CppChar* returnValue = reinterpret_cast<PInvokeFunc>(WindowsGetStringRawBuffer)(___hstring0, ___length1);

	return returnValue;
}
IL2CPP_EXTERN_C int32_t STDCALL WindowsDeleteString(intptr_t);
// System.Int32 WinRT.Platform_IL2CPPLinkage::WindowsDeleteString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IL2CPPLinkage_WindowsDeleteString_m4AC71F6D8E4492DFF8C1D65127B3E17C54CAECE7 (intptr_t ___hstring0, const RuntimeMethod* method)
{
	typedef int32_t (STDCALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WindowsDeleteString)(___hstring0);

	return returnValue;
}
// System.Void WinRT.Platform_IL2CPPLinkage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IL2CPPLinkage__ctor_mEFDA61A7824DE2F431EFB13E945426026D960953 (IL2CPPLinkage_tF28FB16151A13D59EFEBB93A4163B5E9BCA771FB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// WinRT.ModuleReference WinRT.WinrtModule::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  WinrtModule_get_Instance_mF2B4119EC32D8795E6D42278FEEB65EBAA02E774 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinrtModule_get_Instance_mF2B4119EC32D8795E6D42278FEEB65EBAA02E774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C_il2cpp_TypeInfo_var);
		WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153 * L_0 = ((WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C_StaticFields*)il2cpp_codegen_static_fields_for(WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C_il2cpp_TypeInfo_var))->get__instance_1();
		NullCheck(L_0);
		WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C * L_1 = WeakLazy_1_get_Value_mAA6BB939910F3C6367B566A1DB03AF627AA4C098(L_0, /*hidden argument*/WeakLazy_1_get_Value_mAA6BB939910F3C6367B566A1DB03AF627AA4C098_RuntimeMethod_var);
		NullCheck(L_1);
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_2 = L_1->get__module_0();
		return L_2;
	}
}
// System.Void WinRT.WinrtModule::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinrtModule__ctor_m3C996E4E7220B563CA16A0010CF620E6C85F3403 (WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinrtModule__ctor_m3C996E4E7220B563CA16A0010CF620E6C85F3403_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		intptr_t L_0 = Platform_CoIncrementMTAUsage_m1B89CA44FA1D3C0CAC2A9CEC561B1275F4C677B9(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_1 = ModuleReference_Allocate_m22CB010050F3ABA58AE721231CF961BEB4E7E2B6(__this, (intptr_t*)(&V_0), /*hidden argument*/NULL);
		__this->set__module_0(L_1);
		return;
	}
}
// WinRT.ObjectReference`1<WinRT.Interop.IActivationFactoryVftbl> WinRT.WinrtModule::GetActivationFactory(WinRT.HString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectReference_1_t0DC6E4D5526B1D82029F260034BF69B7B6407E9D * WinrtModule_GetActivationFactory_mA194712F1A7D1C10FBC71B630AAC46AA55A2E9D0 (HString_tE419B8347D4539E1392195AB582983128BBFF2E6 * ___runtimeClassId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinrtModule_GetActivationFactory_mA194712F1A7D1C10FBC71B630AAC46AA55A2E9D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t  V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_0 = { reinterpret_cast<intptr_t> (IActivationFactoryVftbl_t996CB3CEBB3ED1FAF787EB3AD6CA689304A476C5_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_0, /*hidden argument*/NULL);
		TypeInfo_t9D6F65801A41B97F36138B15FD270A1550DBB3FC * L_2 = IntrospectionExtensions_GetTypeInfo_mB8CD288832A36F852B99899A8506689F9B0D8D09(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Guid_t  L_3 = VirtFuncInvoker0< Guid_t  >::Invoke(23 /* System.Guid System.Type::get_GUID() */, L_2);
		V_0 = L_3;
		HString_tE419B8347D4539E1392195AB582983128BBFF2E6 * L_4 = ___runtimeClassId0;
		NullCheck(L_4);
		intptr_t L_5 = L_4->get_Handle_0();
		IL2CPP_RUNTIME_CLASS_INIT(Platform_t6C5B1DC88A2D6D7D52D583BA9D1AD74F3756B91A_il2cpp_TypeInfo_var);
		intptr_t L_6 = Platform_RoGetActivationFactory_m79C4AC3A75F1498F6494256E5A113D5E6802A01D((intptr_t)L_5, (Guid_t *)(&V_0), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_6;
		IL2CPP_RUNTIME_CLASS_INIT(WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C_il2cpp_TypeInfo_var);
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_7 = WinrtModule_get_Instance_mF2B4119EC32D8795E6D42278FEEB65EBAA02E774(/*hidden argument*/NULL);
		ObjectReference_1_t0DC6E4D5526B1D82029F260034BF69B7B6407E9D * L_8 = ObjectReference_1_Attach_m222C34E726851CAF0922BA49E41E7AF509CFFC65(L_7, (intptr_t*)(&V_1), /*hidden argument*/ObjectReference_1_Attach_m222C34E726851CAF0922BA49E41E7AF509CFFC65_RuntimeMethod_var);
		return L_8;
	}
}
// System.Void WinRT.WinrtModule::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinrtModule_Finalize_m4615BAAB69227564923E68A057D777D93D571830 (WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C * __this, const RuntimeMethod* method)
{
	ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  V_0;
	memset((&V_0), 0, sizeof(V_0));
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
		ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23  L_0 = __this->get__module_0();
		V_0 = L_0;
		ModuleReference_Release_mCBB02150B5DEE435F1C7E5DEEE91A862BD49E7BC((ModuleReference_t8E5DF951623D4CDC451E0674355AD058498F0C23 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x17, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x17, IL_0017)
	}

IL_0017:
	{
		return;
	}
}
// System.Void WinRT.WinrtModule::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WinrtModule__cctor_mD72D09AFC48B0DF3DEBE16B735971B6F2CB00FB0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinrtModule__cctor_mD72D09AFC48B0DF3DEBE16B735971B6F2CB00FB0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153 * L_0 = (WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153 *)il2cpp_codegen_object_new(WeakLazy_1_tD66E13503775ED5595B5B0DFF01F01C17AFAB153_il2cpp_TypeInfo_var);
		WeakLazy_1__ctor_m9503513860B79E3247877B381D1E5D650F851D97(L_0, /*hidden argument*/WeakLazy_1__ctor_m9503513860B79E3247877B381D1E5D650F851D97_RuntimeMethod_var);
		((WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C_StaticFields*)il2cpp_codegen_static_fields_for(WinrtModule_t353DBD117932B51DCCF11E156A09340746F4D09C_il2cpp_TypeInfo_var))->set__instance_1(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  Matrix4x4_get_Identity_m2AA00AFFC1AB287EB10E93B25E2B34E7F39CBD0D_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Matrix4x4_get_Identity_m2AA00AFFC1AB287EB10E93B25E2B34E7F39CBD0DMicrosoft_Windows_MixedReality_DotNetWinRT_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0_il2cpp_TypeInfo_var);
		Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0  L_0 = ((Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_t962F654FB75C9A7E336E7DB54DBFCEC2B7B8B4B0_il2cpp_TypeInfo_var))->get__identity_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MonoPInvokeCallbackAttribute_set_DelegateType_m78D63230F4D3845F2192C8E16AC7D82422AD34E4_inline (MonoPInvokeCallbackAttribute_t771461BB3C5D4472CF3924A52CECFACE0057F061 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CDelegateTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
