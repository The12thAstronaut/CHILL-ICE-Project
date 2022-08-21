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

// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct TypedEventHandler_2_t6C7A7811426A9D4F993A89876C162DF171CF14CA;
// Windows.UI.Xaml.Interop.TypeName
struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC;

struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC;;
struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime;
struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime;;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;

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


// Windows.Foundation.Numerics.Vector3
struct  Vector3_t7F46349C1A2C560D80B80153D1CED7B9453530BD 
{
public:
	// System.Single Windows.Foundation.Numerics.Vector3::X
	float ___X_0;
	// System.Single Windows.Foundation.Numerics.Vector3::Y
	float ___Y_1;
	// System.Single Windows.Foundation.Numerics.Vector3::Z
	float ___Z_2;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Vector3_t7F46349C1A2C560D80B80153D1CED7B9453530BD, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Vector3_t7F46349C1A2C560D80B80153D1CED7B9453530BD, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Z_2() { return static_cast<int32_t>(offsetof(Vector3_t7F46349C1A2C560D80B80153D1CED7B9453530BD, ___Z_2)); }
	inline float get_Z_2() const { return ___Z_2; }
	inline float* get_address_of_Z_2() { return &___Z_2; }
	inline void set_Z_2(float value)
	{
		___Z_2 = value;
	}
};


// Windows.Foundation.Point
struct  Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1 
{
public:
	// System.Single Windows.Foundation.Point::X
	float ___X_0;
	// System.Single Windows.Foundation.Point::Y
	float ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}
};


// Windows.Foundation.Point
struct  Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};


// Windows.Foundation.Rect
struct  Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};


// Windows.Foundation.Rect
struct  Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA 
{
public:
	// System.Single Windows.Foundation.Rect::X
	float ___X_0;
	// System.Single Windows.Foundation.Rect::Y
	float ___Y_1;
	// System.Single Windows.Foundation.Rect::Width
	float ___Width_2;
	// System.Single Windows.Foundation.Rect::Height
	float ___Height_3;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Width_2() { return static_cast<int32_t>(offsetof(Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA, ___Width_2)); }
	inline float get_Width_2() const { return ___Width_2; }
	inline float* get_address_of_Width_2() { return &___Width_2; }
	inline void set_Width_2(float value)
	{
		___Width_2 = value;
	}

	inline static int32_t get_offset_of_Height_3() { return static_cast<int32_t>(offsetof(Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA, ___Height_3)); }
	inline float get_Height_3() const { return ___Height_3; }
	inline float* get_address_of_Height_3() { return &___Height_3; }
	inline void set_Height_3(float value)
	{
		___Height_3 = value;
	}
};


// Windows.Foundation.Size
struct  Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};


// Windows.Foundation.Size
struct  Size_t4766FF009097CE547F699B69250246058DA664D9 
{
public:
	// System.Single Windows.Foundation.Size::Width
	float ___Width_0;
	// System.Single Windows.Foundation.Size::Height
	float ___Height_1;

public:
	inline static int32_t get_offset_of_Width_0() { return static_cast<int32_t>(offsetof(Size_t4766FF009097CE547F699B69250246058DA664D9, ___Width_0)); }
	inline float get_Width_0() const { return ___Width_0; }
	inline float* get_address_of_Width_0() { return &___Width_0; }
	inline void set_Width_0(float value)
	{
		___Width_0 = value;
	}

	inline static int32_t get_offset_of_Height_1() { return static_cast<int32_t>(offsetof(Size_t4766FF009097CE547F699B69250246058DA664D9, ___Height_1)); }
	inline float get_Height_1() const { return ___Height_1; }
	inline float* get_address_of_Height_1() { return &___Height_1; }
	inline void set_Height_1(float value)
	{
		___Height_1 = value;
	}
};


// Windows.Foundation.TimeSpan
struct  TimeSpan_tD18885B289077804D4E82931E68E84181C072755 
{
public:
	// System.Int64 Windows.Foundation.TimeSpan::Duration
	int64_t ___Duration_0;

public:
	inline static int32_t get_offset_of_Duration_0() { return static_cast<int32_t>(offsetof(TimeSpan_tD18885B289077804D4E82931E68E84181C072755, ___Duration_0)); }
	inline int64_t get_Duration_0() const { return ___Duration_0; }
	inline int64_t* get_address_of_Duration_0() { return &___Duration_0; }
	inline void set_Duration_0(int64_t value)
	{
		___Duration_0 = value;
	}
};


// Windows.Foundation.UniversalApiContract
struct  UniversalApiContract_t2909295C70CE09107C85CD360BE6888A4D1078D9 
{
public:

public:
};


// System.Collections.Specialized.NotifyCollectionChangedAction
struct  NotifyCollectionChangedAction_t0E2223A3626C6A1293B0BC3BEC92D59645EEFC96 
{
public:
	// System.Int32 System.Collections.Specialized.NotifyCollectionChangedAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedAction_t0E2223A3626C6A1293B0BC3BEC92D59645EEFC96, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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
// Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Vector3>
struct NOVTABLE IReference_1_t02F02891CF2473BD3395C94005BD0A1BE2757EA8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m5A5957990F5156FC2709CA1F6E406C6A0C4AD6A3(Vector3_t7F46349C1A2C560D80B80153D1CED7B9453530BD * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Point>
struct NOVTABLE IReference_1_t7773DF4951EE2956BB52F40107CA99EB3AC18121 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m12AEB76C9C84E98E8BEE7E909CE268F95A05E899(Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Point>
struct NOVTABLE IReference_1_t97388A71057076E3CF1C2138D18F067CB7AFF696 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m515BB78374A2BA73105E5E3DAED8030350AE1FA9(Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Rect>
struct NOVTABLE IReference_1_t0383D46BD689BDB48118BCC40E516D48E99AC9C9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mD70DC394007AE06DD463C810C4A6C833AE4F83CB(Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Rect>
struct NOVTABLE IReference_1_t817291E0E32BE3C83987C618344F4830BA9C3A34 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m799E5FBDBDF133003671C206C7190A221D6BC40C(Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Size>
struct NOVTABLE IReference_1_t2A8F8DFC7C3805C64001D19FB34B045D5B9C5D60 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m354841434B2661412713D5B4951615197C260B13(Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Size>
struct NOVTABLE IReference_1_t1C3EFAED54D294F78A828A79443DD579F84600A5 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mEEA056935DABABBA8E17B0CBDA7AF3596AF5E825(Size_t4766FF009097CE547F699B69250246058DA664D9 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.TimeSpan>
struct NOVTABLE IReference_1_t3C2FDD60AAF84C14D98EE687F95A2FE316F1D921 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mC6234E02A201EAFB66846D1AA800201A51B2CDF7(TimeSpan_tD18885B289077804D4E82931E68E84181C072755 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.UniversalApiContract>
struct NOVTABLE IReference_1_tC752D5284F00B4397E95E715F07700B7C452DA32 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2269DCAE519508A042AD9A68C026B7AA70901042(UniversalApiContract_t2909295C70CE09107C85CD360BE6888A4D1078D9 * comReturnValue) = 0;
};

// Windows.Foundation.PropertyType
struct  PropertyType_tBEECA3F046BD9A1A358890A42B7DA9A031FFC1BD 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_tBEECA3F046BD9A1A358890A42B7DA9A031FFC1BD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Graphics.Holographic.HolographicViewConfigurationKind
struct  HolographicViewConfigurationKind_t5A173BC5CD4FD620674AE736BB7D9784A19EBAEC 
{
public:
	// System.Int32 Windows.Graphics.Holographic.HolographicViewConfigurationKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HolographicViewConfigurationKind_t5A173BC5CD4FD620674AE736BB7D9784A19EBAEC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Media.Capture.MediaStreamType
struct  MediaStreamType_tD4751746F330AA407E23074AC9593D905B9C8EE4 
{
public:
	// System.Int32 Windows.Media.Capture.MediaStreamType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MediaStreamType_tD4751746F330AA407E23074AC9593D905B9C8EE4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Media.Capture.StreamingCaptureMode
struct  StreamingCaptureMode_t5F2A0CF998471CEAA350493441DF797E36304DB5 
{
public:
	// System.Int32 Windows.Media.Capture.StreamingCaptureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingCaptureMode_t5F2A0CF998471CEAA350493441DF797E36304DB5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Perception.People.HandJointKind
struct  HandJointKind_t459313DB8FB9919DA3565D3A693449187E5CF7CA 
{
public:
	// System.Int32 Windows.Perception.People.HandJointKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandJointKind_t459313DB8FB9919DA3565D3A693449187E5CF7CA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Perception.People.HandMeshVertex
struct  HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3 
{
public:
	// System.Numerics.Vector3 Windows.Perception.People.HandMeshVertex::Position
	Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___Position_0;
	// System.Numerics.Vector3 Windows.Perception.People.HandMeshVertex::Normal
	Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___Normal_1;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3, ___Position_0)); }
	inline Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  get_Position_0() const { return ___Position_0; }
	inline Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Normal_1() { return static_cast<int32_t>(offsetof(HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3, ___Normal_1)); }
	inline Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  get_Normal_1() const { return ___Normal_1; }
	inline Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 * get_address_of_Normal_1() { return &___Normal_1; }
	inline void set_Normal_1(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  value)
	{
		___Normal_1 = value;
	}
};


// Windows.Perception.People.JointPoseAccuracy
struct  JointPoseAccuracy_tAE24E9827E028CD4CD542843A442BBEF384E3D9C 
{
public:
	// System.Int32 Windows.Perception.People.JointPoseAccuracy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JointPoseAccuracy_tAE24E9827E028CD4CD542843A442BBEF384E3D9C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.Perception.Spatial.SpatialRay
struct  SpatialRay_t3D16C2F3DEA64DE3AD8ECA0587068A965A552C2B 
{
public:
	// System.Numerics.Vector3 Windows.Perception.Spatial.SpatialRay::Origin
	Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___Origin_0;
	// System.Numerics.Vector3 Windows.Perception.Spatial.SpatialRay::Direction
	Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___Direction_1;

public:
	inline static int32_t get_offset_of_Origin_0() { return static_cast<int32_t>(offsetof(SpatialRay_t3D16C2F3DEA64DE3AD8ECA0587068A965A552C2B, ___Origin_0)); }
	inline Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  get_Origin_0() const { return ___Origin_0; }
	inline Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 * get_address_of_Origin_0() { return &___Origin_0; }
	inline void set_Origin_0(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  value)
	{
		___Origin_0 = value;
	}

	inline static int32_t get_offset_of_Direction_1() { return static_cast<int32_t>(offsetof(SpatialRay_t3D16C2F3DEA64DE3AD8ECA0587068A965A552C2B, ___Direction_1)); }
	inline Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  get_Direction_1() const { return ___Direction_1; }
	inline Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 * get_address_of_Direction_1() { return &___Direction_1; }
	inline void set_Direction_1(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  value)
	{
		___Direction_1 = value;
	}
};


// Windows.Storage.CreationCollisionOption
struct  CreationCollisionOption_t446166DBF156CCE4C7C7E16D78B3E9A2877E5538 
{
public:
	// System.Int32 Windows.Storage.CreationCollisionOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CreationCollisionOption_t446166DBF156CCE4C7C7E16D78B3E9A2877E5538, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.UI.Input.GazeInputAccessStatus
struct  GazeInputAccessStatus_tE56B1134F343E06D19FF224683D91598329BA7A0 
{
public:
	// System.Int32 Windows.UI.Input.GazeInputAccessStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GazeInputAccessStatus_tE56B1134F343E06D19FF224683D91598329BA7A0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.UI.Input.Spatial.SpatialInteractionSourceHandedness
struct  SpatialInteractionSourceHandedness_t62FE24DC5534C9D864CAB062044D8298009266B2 
{
public:
	// System.Int32 Windows.UI.Input.Spatial.SpatialInteractionSourceHandedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialInteractionSourceHandedness_t62FE24DC5534C9D864CAB062044D8298009266B2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.UI.Input.Spatial.SpatialInteractionSourceKind
struct  SpatialInteractionSourceKind_t121787D88938AD2A5EB266A9C10FAD348762817B 
{
public:
	// System.Int32 Windows.UI.Input.Spatial.SpatialInteractionSourceKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SpatialInteractionSourceKind_t121787D88938AD2A5EB266A9C10FAD348762817B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.UI.Xaml.Interop.TypeKind
struct  TypeKind_tFC0FD272ED78E70CA1173A99B89D31193D93239C 
{
public:
	// System.Int32 Windows.UI.Xaml.Interop.TypeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeKind_tFC0FD272ED78E70CA1173A99B89D31193D93239C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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
// Windows.Foundation.IReference`1<Windows.Foundation.PropertyType>
struct NOVTABLE IReference_1_t13454E63971AE5A60B6BCF6FF56A963D17B7DFB1 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m03DA6CDF5117537DE41F422D686269BF50DA50C6(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Graphics.Holographic.HolographicViewConfigurationKind>
struct NOVTABLE IReference_1_t4A64C896CF2288B6686C7D1BC6291F0D4235DFB4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB500DD4EC51CF23CA8B4D79F9CBF5E4C254AB0E1(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Media.Capture.MediaStreamType>
struct NOVTABLE IReference_1_tDF345447C0E2FF2E2B0D7EA5BD9B5F92E793AD10 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mC8972903AC24E6CFE2D0ABAFEA6FCA815E2828C7(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Media.Capture.StreamingCaptureMode>
struct NOVTABLE IReference_1_t64B3328BF6F77DE2CE9A0EE8B97A59A0B5291AC4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mACE7B80857116354E05C8B3F24CF4D555A337DC1(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Perception.People.HandJointKind>
struct NOVTABLE IReference_1_t780BBB80E92AF8378F3A92CFF2EF960067492AFA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mAE5A8F99060F1DC39B04303111B9B0936CF2EE59(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Perception.People.HandMeshVertex>
struct NOVTABLE IReference_1_t0D003B77C43341B97E803664305892C337680D66 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mE6C0B7EE13DDE444F05495C7D1FB93F46BD4B1A9(HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Perception.People.JointPoseAccuracy>
struct NOVTABLE IReference_1_t3507A4A6F8BCB1E6CC3304154FC8E98C281B9E89 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1CF326D0DC7E3C56CE53356E28D6DB71110F7928(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Perception.Spatial.SpatialRay>
struct NOVTABLE IReference_1_tB9ADAAA2B9FAD3D76AEC1E290AE9DEA134A15099 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mB45907A0F269EA7A626EF7D881399186893863D9(SpatialRay_t3D16C2F3DEA64DE3AD8ECA0587068A965A552C2B * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Storage.CreationCollisionOption>
struct NOVTABLE IReference_1_tF7295EBC968A80454550BB2DFEBDE7FDA5F935F6 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mD022CF12AFA037E3A391C619D1DF5926221967A4(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.UI.Input.GazeInputAccessStatus>
struct NOVTABLE IReference_1_tBBC4EF47CF4A6A0E2BD1866D2AE894B995663CE0 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m9952B601AF3C6D205C72E5DA9AEDDB03A369E4EF(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.UI.Input.Spatial.SpatialInteractionSourceHandedness>
struct NOVTABLE IReference_1_t7CFC6D198EECFD1E57E4DA86E9CC74F3C3FEFF1A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mF07E9CA6EB648C14F614907C0DCDE6EB539C3FBF(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.UI.Input.Spatial.SpatialInteractionSourceKind>
struct NOVTABLE IReference_1_tD7D4DF1EB42B5D52DD9D400814D7D3093F09B8DA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mF64790DEC6FF93C719750283EA8C9CFB1EA82AE0(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.TypeKind>
struct NOVTABLE IReference_1_tC5997DB9C48F0D04F8FD9B6E0E05E0D1AD700882 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m36783109B74EB29CB28AF73DD7E207957146F018(int32_t* comReturnValue) = 0;
};

// Windows.Perception.People.JointPose
struct  JointPose_tFD55E748576AC22B47EB160A821FCEAD75C509CE 
{
public:
	// System.Numerics.Quaternion Windows.Perception.People.JointPose::Orientation
	Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A  ___Orientation_0;
	// System.Numerics.Vector3 Windows.Perception.People.JointPose::Position
	Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  ___Position_1;
	// System.Single Windows.Perception.People.JointPose::Radius
	float ___Radius_2;
	// Windows.Perception.People.JointPoseAccuracy Windows.Perception.People.JointPose::Accuracy
	int32_t ___Accuracy_3;

public:
	inline static int32_t get_offset_of_Orientation_0() { return static_cast<int32_t>(offsetof(JointPose_tFD55E748576AC22B47EB160A821FCEAD75C509CE, ___Orientation_0)); }
	inline Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A  get_Orientation_0() const { return ___Orientation_0; }
	inline Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A * get_address_of_Orientation_0() { return &___Orientation_0; }
	inline void set_Orientation_0(Quaternion_t67580554B28ABC8A5384F3B4FF4E679FC6D38D4A  value)
	{
		___Orientation_0 = value;
	}

	inline static int32_t get_offset_of_Position_1() { return static_cast<int32_t>(offsetof(JointPose_tFD55E748576AC22B47EB160A821FCEAD75C509CE, ___Position_1)); }
	inline Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  get_Position_1() const { return ___Position_1; }
	inline Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65 * get_address_of_Position_1() { return &___Position_1; }
	inline void set_Position_1(Vector3_tA1B8517EED04F753987922C4361B51A4F3AE8C65  value)
	{
		___Position_1 = value;
	}

	inline static int32_t get_offset_of_Radius_2() { return static_cast<int32_t>(offsetof(JointPose_tFD55E748576AC22B47EB160A821FCEAD75C509CE, ___Radius_2)); }
	inline float get_Radius_2() const { return ___Radius_2; }
	inline float* get_address_of_Radius_2() { return &___Radius_2; }
	inline void set_Radius_2(float value)
	{
		___Radius_2 = value;
	}

	inline static int32_t get_offset_of_Accuracy_3() { return static_cast<int32_t>(offsetof(JointPose_tFD55E748576AC22B47EB160A821FCEAD75C509CE, ___Accuracy_3)); }
	inline int32_t get_Accuracy_3() const { return ___Accuracy_3; }
	inline int32_t* get_address_of_Accuracy_3() { return &___Accuracy_3; }
	inline void set_Accuracy_3(int32_t value)
	{
		___Accuracy_3 = value;
	}
};


// Windows.UI.Xaml.Interop.NotifyCollectionChangedAction
struct  NotifyCollectionChangedAction_tB8FF1E0F6D9D1D23485E6B09988C291E3458BBC8 
{
public:
	// System.Int32 Windows.UI.Xaml.Interop.NotifyCollectionChangedAction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotifyCollectionChangedAction_tB8FF1E0F6D9D1D23485E6B09988C291E3458BBC8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Windows.UI.Xaml.Interop.TypeName
struct  TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC 
{
public:
	// System.String Windows.UI.Xaml.Interop.TypeName::Name
	String_t* ___Name_0;
	// Windows.UI.Xaml.Interop.TypeKind Windows.UI.Xaml.Interop.TypeName::Kind
	int32_t ___Kind_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Kind_1() { return static_cast<int32_t>(offsetof(TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC, ___Kind_1)); }
	inline int32_t get_Kind_1() const { return ___Kind_1; }
	inline int32_t* get_address_of_Kind_1() { return &___Kind_1; }
	inline void set_Kind_1(int32_t value)
	{
		___Kind_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___Kind_1;
};
// Native definition for COM marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___Kind_1;
};
// Native definition for Windows Runtime marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime
{
	Il2CppHString ___Name_0;
	int32_t ___Kind_1;
};
// Windows.Foundation.IReference`1<Windows.Perception.People.JointPose>
struct NOVTABLE IReference_1_t20F75434E9A39E107D795462E73230FC877DB3FC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m5C473856F84B9723FF4AFFA39ACD3BC9FB2FE6EF(JointPose_tFD55E748576AC22B47EB160A821FCEAD75C509CE * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.NotifyCollectionChangedAction>
struct NOVTABLE IReference_1_tAA1B3E47098CC9B4C78CD90173CB5A066702EB6E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m6D3C2F5C181F41C7DCBECB612D569254FF735264(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.TypeName>
struct NOVTABLE IReference_1_t05125DEBFACCF631533E1BB325E91CC8E587D7AD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_mAD21B0BAD0AA9FB92F7A686B1DEE50AB61A0B5A3(TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime* comReturnValue) = 0;
};

// Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct  TypedEventHandler_2_t6C7A7811426A9D4F993A89876C162DF171CF14CA  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct ITypedEventHandler_2_t6C7A7811426A9D4F993A89876C162DF171CF14CA_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, Il2CppIInspectable* ___args1) = 0;
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

IL2CPP_EXTERN_C void TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshal_windows_runtime(const TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC& unmarshaled, TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime& marshaled);
IL2CPP_EXTERN_C void TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshal_windows_runtime_back(const TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime& marshaled, TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC& unmarshaled);
IL2CPP_EXTERN_C void TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshal_windows_runtime_cleanup(TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime& marshaled);


#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Numerics.Vector3>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t7F46349C1A2C560D80B80153D1CED7B9453530BD  IReference_1_get_Value_m5A5957990F5156FC2709CA1F6E406C6A0C4AD6A3 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t02F02891CF2473BD3395C94005BD0A1BE2757EA8* ____ireference_1_t02F02891CF2473BD3395C94005BD0A1BE2757EA8 = il2cpp_codegen_com_query_interface<IReference_1_t02F02891CF2473BD3395C94005BD0A1BE2757EA8>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	Vector3_t7F46349C1A2C560D80B80153D1CED7B9453530BD  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t02F02891CF2473BD3395C94005BD0A1BE2757EA8->IReference_1_get_Value_m5A5957990F5156FC2709CA1F6E406C6A0C4AD6A3(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
// T Windows.Foundation.IReference`1<Windows.Foundation.Point>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1  IReference_1_get_Value_m12AEB76C9C84E98E8BEE7E909CE268F95A05E899 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t7773DF4951EE2956BB52F40107CA99EB3AC18121* ____ireference_1_t7773DF4951EE2956BB52F40107CA99EB3AC18121 = il2cpp_codegen_com_query_interface<IReference_1_t7773DF4951EE2956BB52F40107CA99EB3AC18121>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	Point_tEC1815EC53B414E5281C817051DA4F985DB9C8C1  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t7773DF4951EE2956BB52F40107CA99EB3AC18121->IReference_1_get_Value_m12AEB76C9C84E98E8BEE7E909CE268F95A05E899(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
// T Windows.Foundation.IReference`1<Windows.Foundation.Point>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC  IReference_1_get_Value_m515BB78374A2BA73105E5E3DAED8030350AE1FA9 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t97388A71057076E3CF1C2138D18F067CB7AFF696* ____ireference_1_t97388A71057076E3CF1C2138D18F067CB7AFF696 = il2cpp_codegen_com_query_interface<IReference_1_t97388A71057076E3CF1C2138D18F067CB7AFF696>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	Point_t7C3010F37F6E9DB2B792BBDAFF58C3232A3356AC  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t97388A71057076E3CF1C2138D18F067CB7AFF696->IReference_1_get_Value_m515BB78374A2BA73105E5E3DAED8030350AE1FA9(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
// T Windows.Foundation.IReference`1<Windows.Foundation.PropertyType>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m03DA6CDF5117537DE41F422D686269BF50DA50C6 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t13454E63971AE5A60B6BCF6FF56A963D17B7DFB1* ____ireference_1_t13454E63971AE5A60B6BCF6FF56A963D17B7DFB1 = il2cpp_codegen_com_query_interface<IReference_1_t13454E63971AE5A60B6BCF6FF56A963D17B7DFB1>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_t13454E63971AE5A60B6BCF6FF56A963D17B7DFB1->IReference_1_get_Value_m03DA6CDF5117537DE41F422D686269BF50DA50C6(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
// T Windows.Foundation.IReference`1<Windows.Foundation.Rect>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA  IReference_1_get_Value_mD70DC394007AE06DD463C810C4A6C833AE4F83CB (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t0383D46BD689BDB48118BCC40E516D48E99AC9C9* ____ireference_1_t0383D46BD689BDB48118BCC40E516D48E99AC9C9 = il2cpp_codegen_com_query_interface<IReference_1_t0383D46BD689BDB48118BCC40E516D48E99AC9C9>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	Rect_tC430FB498F3B42BBCD93E88C03BA3CBB77B60ACA  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t0383D46BD689BDB48118BCC40E516D48E99AC9C9->IReference_1_get_Value_mD70DC394007AE06DD463C810C4A6C833AE4F83CB(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
// T Windows.Foundation.IReference`1<Windows.Foundation.Rect>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0  IReference_1_get_Value_m799E5FBDBDF133003671C206C7190A221D6BC40C (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t817291E0E32BE3C83987C618344F4830BA9C3A34* ____ireference_1_t817291E0E32BE3C83987C618344F4830BA9C3A34 = il2cpp_codegen_com_query_interface<IReference_1_t817291E0E32BE3C83987C618344F4830BA9C3A34>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	Rect_tD277A11EF3F3CC633796B8FF0BC4822826E72BB0  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t817291E0E32BE3C83987C618344F4830BA9C3A34->IReference_1_get_Value_m799E5FBDBDF133003671C206C7190A221D6BC40C(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
// T Windows.Foundation.IReference`1<Windows.Foundation.Size>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Size_t4766FF009097CE547F699B69250246058DA664D9  IReference_1_get_Value_mEEA056935DABABBA8E17B0CBDA7AF3596AF5E825 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1C3EFAED54D294F78A828A79443DD579F84600A5* ____ireference_1_t1C3EFAED54D294F78A828A79443DD579F84600A5 = il2cpp_codegen_com_query_interface<IReference_1_t1C3EFAED54D294F78A828A79443DD579F84600A5>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	Size_t4766FF009097CE547F699B69250246058DA664D9  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t1C3EFAED54D294F78A828A79443DD579F84600A5->IReference_1_get_Value_mEEA056935DABABBA8E17B0CBDA7AF3596AF5E825(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
// T Windows.Foundation.IReference`1<Windows.Foundation.Size>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2  IReference_1_get_Value_m354841434B2661412713D5B4951615197C260B13 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2A8F8DFC7C3805C64001D19FB34B045D5B9C5D60* ____ireference_1_t2A8F8DFC7C3805C64001D19FB34B045D5B9C5D60 = il2cpp_codegen_com_query_interface<IReference_1_t2A8F8DFC7C3805C64001D19FB34B045D5B9C5D60>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	Size_tBE9F75FCA10276DC3998237A8906733B64FB75A2  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t2A8F8DFC7C3805C64001D19FB34B045D5B9C5D60->IReference_1_get_Value_m354841434B2661412713D5B4951615197C260B13(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
// T Windows.Foundation.IReference`1<Windows.Foundation.TimeSpan>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tD18885B289077804D4E82931E68E84181C072755  IReference_1_get_Value_mC6234E02A201EAFB66846D1AA800201A51B2CDF7 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t3C2FDD60AAF84C14D98EE687F95A2FE316F1D921* ____ireference_1_t3C2FDD60AAF84C14D98EE687F95A2FE316F1D921 = il2cpp_codegen_com_query_interface<IReference_1_t3C2FDD60AAF84C14D98EE687F95A2FE316F1D921>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	TimeSpan_tD18885B289077804D4E82931E68E84181C072755  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t3C2FDD60AAF84C14D98EE687F95A2FE316F1D921->IReference_1_get_Value_mC6234E02A201EAFB66846D1AA800201A51B2CDF7(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
// T Windows.Foundation.IReference`1<Windows.Foundation.UniversalApiContract>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniversalApiContract_t2909295C70CE09107C85CD360BE6888A4D1078D9  IReference_1_get_Value_m2269DCAE519508A042AD9A68C026B7AA70901042 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tC752D5284F00B4397E95E715F07700B7C452DA32* ____ireference_1_tC752D5284F00B4397E95E715F07700B7C452DA32 = il2cpp_codegen_com_query_interface<IReference_1_tC752D5284F00B4397E95E715F07700B7C452DA32>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	UniversalApiContract_t2909295C70CE09107C85CD360BE6888A4D1078D9  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_tC752D5284F00B4397E95E715F07700B7C452DA32->IReference_1_get_Value_m2269DCAE519508A042AD9A68C026B7AA70901042(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
// T Windows.Foundation.IReference`1<Windows.Graphics.Holographic.HolographicViewConfigurationKind>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_mB500DD4EC51CF23CA8B4D79F9CBF5E4C254AB0E1 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t4A64C896CF2288B6686C7D1BC6291F0D4235DFB4* ____ireference_1_t4A64C896CF2288B6686C7D1BC6291F0D4235DFB4 = il2cpp_codegen_com_query_interface<IReference_1_t4A64C896CF2288B6686C7D1BC6291F0D4235DFB4>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_t4A64C896CF2288B6686C7D1BC6291F0D4235DFB4->IReference_1_get_Value_mB500DD4EC51CF23CA8B4D79F9CBF5E4C254AB0E1(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
// T Windows.Foundation.IReference`1<Windows.Media.Capture.MediaStreamType>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_mC8972903AC24E6CFE2D0ABAFEA6FCA815E2828C7 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tDF345447C0E2FF2E2B0D7EA5BD9B5F92E793AD10* ____ireference_1_tDF345447C0E2FF2E2B0D7EA5BD9B5F92E793AD10 = il2cpp_codegen_com_query_interface<IReference_1_tDF345447C0E2FF2E2B0D7EA5BD9B5F92E793AD10>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_tDF345447C0E2FF2E2B0D7EA5BD9B5F92E793AD10->IReference_1_get_Value_mC8972903AC24E6CFE2D0ABAFEA6FCA815E2828C7(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
// T Windows.Foundation.IReference`1<Windows.Media.Capture.StreamingCaptureMode>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_mACE7B80857116354E05C8B3F24CF4D555A337DC1 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t64B3328BF6F77DE2CE9A0EE8B97A59A0B5291AC4* ____ireference_1_t64B3328BF6F77DE2CE9A0EE8B97A59A0B5291AC4 = il2cpp_codegen_com_query_interface<IReference_1_t64B3328BF6F77DE2CE9A0EE8B97A59A0B5291AC4>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_t64B3328BF6F77DE2CE9A0EE8B97A59A0B5291AC4->IReference_1_get_Value_mACE7B80857116354E05C8B3F24CF4D555A337DC1(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
// T Windows.Foundation.IReference`1<Windows.Perception.People.HandJointKind>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_mAE5A8F99060F1DC39B04303111B9B0936CF2EE59 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t780BBB80E92AF8378F3A92CFF2EF960067492AFA* ____ireference_1_t780BBB80E92AF8378F3A92CFF2EF960067492AFA = il2cpp_codegen_com_query_interface<IReference_1_t780BBB80E92AF8378F3A92CFF2EF960067492AFA>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_t780BBB80E92AF8378F3A92CFF2EF960067492AFA->IReference_1_get_Value_mAE5A8F99060F1DC39B04303111B9B0936CF2EE59(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
// T Windows.Foundation.IReference`1<Windows.Perception.People.HandMeshVertex>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3  IReference_1_get_Value_mE6C0B7EE13DDE444F05495C7D1FB93F46BD4B1A9 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t0D003B77C43341B97E803664305892C337680D66* ____ireference_1_t0D003B77C43341B97E803664305892C337680D66 = il2cpp_codegen_com_query_interface<IReference_1_t0D003B77C43341B97E803664305892C337680D66>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	HandMeshVertex_t97CBC783B105CAF080C98A2E7D750023040B41C3  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t0D003B77C43341B97E803664305892C337680D66->IReference_1_get_Value_mE6C0B7EE13DDE444F05495C7D1FB93F46BD4B1A9(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
// T Windows.Foundation.IReference`1<Windows.Perception.People.JointPose>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JointPose_tFD55E748576AC22B47EB160A821FCEAD75C509CE  IReference_1_get_Value_m5C473856F84B9723FF4AFFA39ACD3BC9FB2FE6EF (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t20F75434E9A39E107D795462E73230FC877DB3FC* ____ireference_1_t20F75434E9A39E107D795462E73230FC877DB3FC = il2cpp_codegen_com_query_interface<IReference_1_t20F75434E9A39E107D795462E73230FC877DB3FC>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	JointPose_tFD55E748576AC22B47EB160A821FCEAD75C509CE  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t20F75434E9A39E107D795462E73230FC877DB3FC->IReference_1_get_Value_m5C473856F84B9723FF4AFFA39ACD3BC9FB2FE6EF(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
// T Windows.Foundation.IReference`1<Windows.Perception.People.JointPoseAccuracy>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m1CF326D0DC7E3C56CE53356E28D6DB71110F7928 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t3507A4A6F8BCB1E6CC3304154FC8E98C281B9E89* ____ireference_1_t3507A4A6F8BCB1E6CC3304154FC8E98C281B9E89 = il2cpp_codegen_com_query_interface<IReference_1_t3507A4A6F8BCB1E6CC3304154FC8E98C281B9E89>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_t3507A4A6F8BCB1E6CC3304154FC8E98C281B9E89->IReference_1_get_Value_m1CF326D0DC7E3C56CE53356E28D6DB71110F7928(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
// T Windows.Foundation.IReference`1<Windows.Perception.Spatial.SpatialRay>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpatialRay_t3D16C2F3DEA64DE3AD8ECA0587068A965A552C2B  IReference_1_get_Value_mB45907A0F269EA7A626EF7D881399186893863D9 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tB9ADAAA2B9FAD3D76AEC1E290AE9DEA134A15099* ____ireference_1_tB9ADAAA2B9FAD3D76AEC1E290AE9DEA134A15099 = il2cpp_codegen_com_query_interface<IReference_1_tB9ADAAA2B9FAD3D76AEC1E290AE9DEA134A15099>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	SpatialRay_t3D16C2F3DEA64DE3AD8ECA0587068A965A552C2B  returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_tB9ADAAA2B9FAD3D76AEC1E290AE9DEA134A15099->IReference_1_get_Value_mB45907A0F269EA7A626EF7D881399186893863D9(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
// T Windows.Foundation.IReference`1<Windows.Storage.CreationCollisionOption>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_mD022CF12AFA037E3A391C619D1DF5926221967A4 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tF7295EBC968A80454550BB2DFEBDE7FDA5F935F6* ____ireference_1_tF7295EBC968A80454550BB2DFEBDE7FDA5F935F6 = il2cpp_codegen_com_query_interface<IReference_1_tF7295EBC968A80454550BB2DFEBDE7FDA5F935F6>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_tF7295EBC968A80454550BB2DFEBDE7FDA5F935F6->IReference_1_get_Value_mD022CF12AFA037E3A391C619D1DF5926221967A4(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
// T Windows.Foundation.IReference`1<Windows.UI.Input.GazeInputAccessStatus>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m9952B601AF3C6D205C72E5DA9AEDDB03A369E4EF (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tBBC4EF47CF4A6A0E2BD1866D2AE894B995663CE0* ____ireference_1_tBBC4EF47CF4A6A0E2BD1866D2AE894B995663CE0 = il2cpp_codegen_com_query_interface<IReference_1_tBBC4EF47CF4A6A0E2BD1866D2AE894B995663CE0>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_tBBC4EF47CF4A6A0E2BD1866D2AE894B995663CE0->IReference_1_get_Value_m9952B601AF3C6D205C72E5DA9AEDDB03A369E4EF(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
// T Windows.Foundation.IReference`1<Windows.UI.Input.Spatial.SpatialInteractionSourceHandedness>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_mF07E9CA6EB648C14F614907C0DCDE6EB539C3FBF (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t7CFC6D198EECFD1E57E4DA86E9CC74F3C3FEFF1A* ____ireference_1_t7CFC6D198EECFD1E57E4DA86E9CC74F3C3FEFF1A = il2cpp_codegen_com_query_interface<IReference_1_t7CFC6D198EECFD1E57E4DA86E9CC74F3C3FEFF1A>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_t7CFC6D198EECFD1E57E4DA86E9CC74F3C3FEFF1A->IReference_1_get_Value_mF07E9CA6EB648C14F614907C0DCDE6EB539C3FBF(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
// T Windows.Foundation.IReference`1<Windows.UI.Input.Spatial.SpatialInteractionSourceKind>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_mF64790DEC6FF93C719750283EA8C9CFB1EA82AE0 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tD7D4DF1EB42B5D52DD9D400814D7D3093F09B8DA* ____ireference_1_tD7D4DF1EB42B5D52DD9D400814D7D3093F09B8DA = il2cpp_codegen_com_query_interface<IReference_1_tD7D4DF1EB42B5D52DD9D400814D7D3093F09B8DA>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_tD7D4DF1EB42B5D52DD9D400814D7D3093F09B8DA->IReference_1_get_Value_mF64790DEC6FF93C719750283EA8C9CFB1EA82AE0(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
// T Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.NotifyCollectionChangedAction>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m6D3C2F5C181F41C7DCBECB612D569254FF735264 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tAA1B3E47098CC9B4C78CD90173CB5A066702EB6E* ____ireference_1_tAA1B3E47098CC9B4C78CD90173CB5A066702EB6E = il2cpp_codegen_com_query_interface<IReference_1_tAA1B3E47098CC9B4C78CD90173CB5A066702EB6E>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_tAA1B3E47098CC9B4C78CD90173CB5A066702EB6E->IReference_1_get_Value_m6D3C2F5C181F41C7DCBECB612D569254FF735264(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
// T Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.TypeKind>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IReference_1_get_Value_m36783109B74EB29CB28AF73DD7E207957146F018 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_tC5997DB9C48F0D04F8FD9B6E0E05E0D1AD700882* ____ireference_1_tC5997DB9C48F0D04F8FD9B6E0E05E0D1AD700882 = il2cpp_codegen_com_query_interface<IReference_1_tC5997DB9C48F0D04F8FD9B6E0E05E0D1AD700882>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	int32_t returnValue = 0;
	const il2cpp_hresult_t hr = ____ireference_1_tC5997DB9C48F0D04F8FD9B6E0E05E0D1AD700882->IReference_1_get_Value_m36783109B74EB29CB28AF73DD7E207957146F018(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

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
// T Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.TypeName>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC  IReference_1_get_Value_mAD21B0BAD0AA9FB92F7A686B1DEE50AB61A0B5A3 (RuntimeObject* __this, const RuntimeMethod* method)
{


	IReference_1_t05125DEBFACCF631533E1BB325E91CC8E587D7AD* ____ireference_1_t05125DEBFACCF631533E1BB325E91CC8E587D7AD = il2cpp_codegen_com_query_interface<IReference_1_t05125DEBFACCF631533E1BB325E91CC8E587D7AD>(static_cast<Il2CppComObject*>(__this));

	// Native function invocation
	TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshaled_windows_runtime returnValue = {};
	const il2cpp_hresult_t hr = ____ireference_1_t05125DEBFACCF631533E1BB325E91CC8E587D7AD->IReference_1_get_Value_mAD21B0BAD0AA9FB92F7A686B1DEE50AB61A0B5A3(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC  _returnValue_unmarshaled;
	memset((&_returnValue_unmarshaled), 0, sizeof(_returnValue_unmarshaled));
	TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshal_windows_runtime_back(returnValue, _returnValue_unmarshaled);

	// Marshaling cleanup of return value native representation
	TypeName_t17AF60463A5503D900B87745B0BF9C96F0F82EEC_marshal_windows_runtime_cleanup(returnValue);

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedEventHandler_2__ctor_m85032F233E9CD404100BF0E1F486F562DF83EF10_gshared (TypedEventHandler_2_t6C7A7811426A9D4F993A89876C162DF171CF14CA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>::Invoke(TSender,TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedEventHandler_2_Invoke_m6C97DE5DB76454B1184C5D0191F7A4EC125172F1_gshared (TypedEventHandler_2_t6C7A7811426A9D4F993A89876C162DF171CF14CA * __this, RuntimeObject * ___sender0, RuntimeObject * ___args1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
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
						GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___args1);
					else
						VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___args1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___sender0) - 1), ___args1, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
				}
			}
		}
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
