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

#include "il2cpp-class-internals.h"
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

// BallController
struct BallController_t2992829471;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// BallManager
struct BallManager_t2004465268;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Collision
struct Collision_t4262080450;
// BlockController
struct BlockController_t3805442049;
// UnityEngine.Object
struct Object_t631007953;
// PlayerController
struct PlayerController_t2064355688;
// BarManager
struct BarManager_t4217880126;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// SoundController
struct SoundController_t2462365417;
// CameraManager
struct CameraManager_t3272490737;
// MainCameraManager
struct MainCameraManager_t346017319;
// GameManager
struct GameManager_t1536523654;
// SceneController
struct SceneController_t2849316448;
// InputManager
struct InputManager_t2926777569;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// StageManager
struct StageManager_t3296066545;
// StageTextManager
struct StageTextManager_t1380114822;
// GyroManager
struct GyroManager_t2156710008;
// UnityEngine.Gyroscope
struct Gyroscope_t3288342876;
// UnityEngine.Animation
struct Animation_t3648466861;
// ObjectCreator
struct ObjectCreator_t3827148781;
// PlayerCamera
struct PlayerCamera_t1622178205;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// TitleCameraController
struct TitleCameraController_t331798842;
// WallManager
struct WallManager_t2004477583;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// UnityEngine.Collider
struct Collider_t1773347010;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t872956888;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;

extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern const uint32_t AppUtil_GetTouch_m3882990969_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody_t3916780224_m279685075_RuntimeMethod_var;
extern const uint32_t BallController_Start_m2577057129_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const uint32_t BallController_Fire_m1626106067_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisBallController_t2992829471_m4265531620_RuntimeMethod_var;
extern String_t* _stringLiteral2261822918;
extern const uint32_t BallManager_Start_m4264522867_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponent_TisBlockController_t3805442049_m2172498105_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisPlayerController_t2064355688_m2241011631_RuntimeMethod_var;
extern String_t* _stringLiteral424788472;
extern const uint32_t BallManager_OnCollisionEnter_m3617531923_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisAudioSource_t3935305588_m625814604_RuntimeMethod_var;
extern const uint32_t BarManager_OnCollisionEnter_m392147009_MetadataUsageId;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponent_TisSoundController_t2462365417_m3930652079_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var;
extern const uint32_t BlockController_Break_m2204360455_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisMainCameraManager_t346017319_m3414863324_RuntimeMethod_var;
extern const uint32_t CameraManager_Start_m229022957_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var;
extern const uint32_t GameManager_Start_m2734446095_MetadataUsageId;
extern RuntimeClass* GameManager_t1536523654_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_GetComponent_TisBallManager_t2004465268_m4041910020_RuntimeMethod_var;
extern const uint32_t GameManager_Update_m1981238775_MetadataUsageId;
extern const uint32_t GameManager_ActionByScene_m107967549_MetadataUsageId;
extern const uint32_t GameManager__cctor_m4243923930_MetadataUsageId;
extern const uint32_t GyroManager_Start_m2330482887_MetadataUsageId;
extern const uint32_t GyroManager_GetGyro_m182045473_MetadataUsageId;
extern const uint32_t InputManager_CheckPushKeys_m3035302622_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisAnimation_t3648466861_m4214971628_RuntimeMethod_var;
extern const uint32_t MainCameraManager_Start_m3453783040_MetadataUsageId;
extern String_t* _stringLiteral3478956332;
extern const uint32_t MainCameraManager_PlayDownAnimation_m2028542735_MetadataUsageId;
extern String_t* _stringLiteral302003725;
extern const uint32_t MainCameraManager_PlayUpAnimation_m3771979649_MetadataUsageId;
extern const uint32_t PlayerController_Update_m848427540_MetadataUsageId;
extern const uint32_t PlayerController_Death_m560526479_MetadataUsageId;
extern RuntimeClass* SceneController_t2849316448_il2cpp_TypeInfo_var;
extern const uint32_t SceneController_NextScene_m2948675565_MetadataUsageId;
extern const uint32_t SceneController_GetStatus_m4010357723_MetadataUsageId;
extern const uint32_t SceneController_SetStatus_m3328661133_MetadataUsageId;
extern String_t* _stringLiteral3105844272;
extern const uint32_t SceneController_LoadGame_m2594758407_MetadataUsageId;
extern const uint32_t SceneController__cctor_m2985119817_MetadataUsageId;
extern RuntimeClass* StageManager_t3296066545_il2cpp_TypeInfo_var;
extern const uint32_t StageManager_NextStage_m2693353284_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3047682976;
extern String_t* _stringLiteral1201842172;
extern const uint32_t StageManager_CheckBlockNum_m2173459418_MetadataUsageId;
extern const uint32_t StageManager__cctor_m2616850515_MetadataUsageId;
extern const uint32_t WallManager_OnCollisionEnter_m2944439721_MetadataUsageId;
struct ContactPoint_t3758755253 ;

struct GameObjectU5BU5D_t3328599146;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef U3CMODULEU3E_T692745547_H
#define U3CMODULEU3E_T692745547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745547 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745547_H
#ifndef GYROSCOPE_T3288342876_H
#define GYROSCOPE_T3288342876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gyroscope
struct  Gyroscope_t3288342876  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Gyroscope::m_GyroIndex
	int32_t ___m_GyroIndex_0;

public:
	inline static int32_t get_offset_of_m_GyroIndex_0() { return static_cast<int32_t>(offsetof(Gyroscope_t3288342876, ___m_GyroIndex_0)); }
	inline int32_t get_m_GyroIndex_0() const { return ___m_GyroIndex_0; }
	inline int32_t* get_address_of_m_GyroIndex_0() { return &___m_GyroIndex_0; }
	inline void set_m_GyroIndex_0(int32_t value)
	{
		___m_GyroIndex_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GYROSCOPE_T3288342876_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef APPUTIL_T1293295959_H
#define APPUTIL_T1293295959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AppUtil
struct  AppUtil_t1293295959  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPUTIL_T1293295959_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef GAMESTATUS_T3367176871_H
#define GAMESTATUS_T3367176871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager/GameStatus
struct  GameStatus_t3367176871 
{
public:
	// System.Int32 GameManager/GameStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GameStatus_t3367176871, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMESTATUS_T3367176871_H
#ifndef GAMESTATUS_T3288486844_H
#define GAMESTATUS_T3288486844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneController/GameStatus
struct  GameStatus_t3288486844 
{
public:
	// System.Int32 SceneController/GameStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GameStatus_t3288486844, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMESTATUS_T3288486844_H
#ifndef CAMERASTATUS_T1114841525_H
#define CAMERASTATUS_T1114841525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraManager/CameraStatus
struct  CameraStatus_t1114841525 
{
public:
	// System.Int32 CameraManager/CameraStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraStatus_t1114841525, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERASTATUS_T1114841525_H
#ifndef INPUTKEY_T3531497963_H
#define INPUTKEY_T3531497963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InputManager/InputKey
struct  InputKey_t3531497963 
{
public:
	// System.Int32 InputManager/InputKey::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InputKey_t3531497963, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTKEY_T3531497963_H
#ifndef TOUCHPHASE_T72348083_H
#define TOUCHPHASE_T72348083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchPhase
struct  TouchPhase_t72348083 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchPhase_t72348083, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHPHASE_T72348083_H
#ifndef TOUCHTYPE_T2034578258_H
#define TOUCHTYPE_T2034578258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchType
struct  TouchType_t2034578258 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchType_t2034578258, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHTYPE_T2034578258_H
#ifndef TOUCHINFO_T3414740155_H
#define TOUCHINFO_T3414740155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AppUtil/TouchInfo
struct  TouchInfo_t3414740155 
{
public:
	// System.Int32 AppUtil/TouchInfo::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchInfo_t3414740155, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHINFO_T3414740155_H
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_T2599294277_H
#ifndef COLLISION_T4262080450_H
#define COLLISION_T4262080450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collision
struct  Collision_t4262080450  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t3722313464  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t3722313464  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t3916780224 * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1773347010 * ___m_Collider_3;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_Contacts
	ContactPointU5BU5D_t872956888* ___m_Contacts_4;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Impulse_0)); }
	inline Vector3_t3722313464  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t3722313464 * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t3722313464  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_RelativeVelocity_1)); }
	inline Vector3_t3722313464  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t3722313464 * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t3722313464  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Rigidbody_2)); }
	inline Rigidbody_t3916780224 * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t3916780224 ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t3916780224 * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rigidbody_2), value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Collider_3)); }
	inline Collider_t1773347010 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t1773347010 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t1773347010 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_3), value);
	}

	inline static int32_t get_offset_of_m_Contacts_4() { return static_cast<int32_t>(offsetof(Collision_t4262080450, ___m_Contacts_4)); }
	inline ContactPointU5BU5D_t872956888* get_m_Contacts_4() const { return ___m_Contacts_4; }
	inline ContactPointU5BU5D_t872956888** get_address_of_m_Contacts_4() { return &___m_Contacts_4; }
	inline void set_m_Contacts_4(ContactPointU5BU5D_t872956888* value)
	{
		___m_Contacts_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Contacts_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_t4262080450_marshaled_pinvoke
{
	Vector3_t3722313464  ___m_Impulse_0;
	Vector3_t3722313464  ___m_RelativeVelocity_1;
	Rigidbody_t3916780224 * ___m_Rigidbody_2;
	Collider_t1773347010 * ___m_Collider_3;
	ContactPoint_t3758755253 * ___m_Contacts_4;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_t4262080450_marshaled_com
{
	Vector3_t3722313464  ___m_Impulse_0;
	Vector3_t3722313464  ___m_RelativeVelocity_1;
	Rigidbody_t3916780224 * ___m_Rigidbody_2;
	Collider_t1773347010 * ___m_Collider_3;
	ContactPoint_t3758755253 * ___m_Contacts_4;
};
#endif // COLLISION_T4262080450_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef TOUCH_T1921856868_H
#define TOUCH_T1921856868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Touch
struct  Touch_t1921856868 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t2156229523  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t2156229523  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t2156229523  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Position_1)); }
	inline Vector2_t2156229523  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_t2156229523 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_t2156229523  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RawPosition_2)); }
	inline Vector2_t2156229523  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_t2156229523 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_t2156229523  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_PositionDelta_3)); }
	inline Vector2_t2156229523  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_t2156229523 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_t2156229523  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCH_T1921856868_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
#ifndef RIGIDBODY_T3916780224_H
#define RIGIDBODY_T3916780224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t3916780224  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T3916780224_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef ANIMATION_T3648466861_H
#define ANIMATION_T3648466861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animation
struct  Animation_t3648466861  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATION_T3648466861_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public Behaviour_t1437897464
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_2;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_3;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_2)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_3() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_3)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_3() const { return ___ambisonicExtension_3; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_3() { return &___ambisonicExtension_3; }
	inline void set_ambisonicExtension_3(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_3 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef BALLMANAGER_T2004465268_H
#define BALLMANAGER_T2004465268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BallManager
struct  BallManager_t2004465268  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject BallManager::player
	GameObject_t1113636619 * ___player_2;
	// BallController BallManager::bc
	BallController_t2992829471 * ___bc_3;
	// System.Boolean BallManager::isFire
	bool ___isFire_4;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(BallManager_t2004465268, ___player_2)); }
	inline GameObject_t1113636619 * get_player_2() const { return ___player_2; }
	inline GameObject_t1113636619 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1113636619 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier((&___player_2), value);
	}

	inline static int32_t get_offset_of_bc_3() { return static_cast<int32_t>(offsetof(BallManager_t2004465268, ___bc_3)); }
	inline BallController_t2992829471 * get_bc_3() const { return ___bc_3; }
	inline BallController_t2992829471 ** get_address_of_bc_3() { return &___bc_3; }
	inline void set_bc_3(BallController_t2992829471 * value)
	{
		___bc_3 = value;
		Il2CppCodeGenWriteBarrier((&___bc_3), value);
	}

	inline static int32_t get_offset_of_isFire_4() { return static_cast<int32_t>(offsetof(BallManager_t2004465268, ___isFire_4)); }
	inline bool get_isFire_4() const { return ___isFire_4; }
	inline bool* get_address_of_isFire_4() { return &___isFire_4; }
	inline void set_isFire_4(bool value)
	{
		___isFire_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BALLMANAGER_T2004465268_H
#ifndef TITLECAMERACONTROLLER_T331798842_H
#define TITLECAMERACONTROLLER_T331798842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TitleCameraController
struct  TitleCameraController_t331798842  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLECAMERACONTROLLER_T331798842_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef WALLMANAGER_T2004477583_H
#define WALLMANAGER_T2004477583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WallManager
struct  WallManager_t2004477583  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WALLMANAGER_T2004477583_H
#ifndef CAMERAMANAGER_T3272490737_H
#define CAMERAMANAGER_T3272490737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraManager
struct  CameraManager_t3272490737  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject CameraManager::mainCamera
	GameObject_t1113636619 * ___mainCamera_2;
	// UnityEngine.GameObject CameraManager::playerCamera
	GameObject_t1113636619 * ___playerCamera_3;
	// CameraManager/CameraStatus CameraManager::status
	int32_t ___status_4;
	// MainCameraManager CameraManager::mcm
	MainCameraManager_t346017319 * ___mcm_5;
	// System.Boolean CameraManager::isDown
	bool ___isDown_6;
	// System.Boolean CameraManager::isUp
	bool ___isUp_7;

public:
	inline static int32_t get_offset_of_mainCamera_2() { return static_cast<int32_t>(offsetof(CameraManager_t3272490737, ___mainCamera_2)); }
	inline GameObject_t1113636619 * get_mainCamera_2() const { return ___mainCamera_2; }
	inline GameObject_t1113636619 ** get_address_of_mainCamera_2() { return &___mainCamera_2; }
	inline void set_mainCamera_2(GameObject_t1113636619 * value)
	{
		___mainCamera_2 = value;
		Il2CppCodeGenWriteBarrier((&___mainCamera_2), value);
	}

	inline static int32_t get_offset_of_playerCamera_3() { return static_cast<int32_t>(offsetof(CameraManager_t3272490737, ___playerCamera_3)); }
	inline GameObject_t1113636619 * get_playerCamera_3() const { return ___playerCamera_3; }
	inline GameObject_t1113636619 ** get_address_of_playerCamera_3() { return &___playerCamera_3; }
	inline void set_playerCamera_3(GameObject_t1113636619 * value)
	{
		___playerCamera_3 = value;
		Il2CppCodeGenWriteBarrier((&___playerCamera_3), value);
	}

	inline static int32_t get_offset_of_status_4() { return static_cast<int32_t>(offsetof(CameraManager_t3272490737, ___status_4)); }
	inline int32_t get_status_4() const { return ___status_4; }
	inline int32_t* get_address_of_status_4() { return &___status_4; }
	inline void set_status_4(int32_t value)
	{
		___status_4 = value;
	}

	inline static int32_t get_offset_of_mcm_5() { return static_cast<int32_t>(offsetof(CameraManager_t3272490737, ___mcm_5)); }
	inline MainCameraManager_t346017319 * get_mcm_5() const { return ___mcm_5; }
	inline MainCameraManager_t346017319 ** get_address_of_mcm_5() { return &___mcm_5; }
	inline void set_mcm_5(MainCameraManager_t346017319 * value)
	{
		___mcm_5 = value;
		Il2CppCodeGenWriteBarrier((&___mcm_5), value);
	}

	inline static int32_t get_offset_of_isDown_6() { return static_cast<int32_t>(offsetof(CameraManager_t3272490737, ___isDown_6)); }
	inline bool get_isDown_6() const { return ___isDown_6; }
	inline bool* get_address_of_isDown_6() { return &___isDown_6; }
	inline void set_isDown_6(bool value)
	{
		___isDown_6 = value;
	}

	inline static int32_t get_offset_of_isUp_7() { return static_cast<int32_t>(offsetof(CameraManager_t3272490737, ___isUp_7)); }
	inline bool get_isUp_7() const { return ___isUp_7; }
	inline bool* get_address_of_isUp_7() { return &___isUp_7; }
	inline void set_isUp_7(bool value)
	{
		___isUp_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAMANAGER_T3272490737_H
#ifndef GAMEMANAGER_T1536523654_H
#define GAMEMANAGER_T1536523654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t1536523654  : public MonoBehaviour_t3962482529
{
public:
	// SceneController GameManager::sc
	SceneController_t2849316448 * ___sc_2;
	// InputManager GameManager::im
	InputManager_t2926777569 * ___im_3;
	// UnityEngine.GameObject GameManager::player
	GameObject_t1113636619 * ___player_4;
	// UnityEngine.GameObject GameManager::ball
	GameObject_t1113636619 * ___ball_5;
	// CameraManager GameManager::cm
	CameraManager_t3272490737 * ___cm_6;
	// StageManager GameManager::sm
	StageManager_t3296066545 * ___sm_7;
	// StageTextManager GameManager::stm
	StageTextManager_t1380114822 * ___stm_8;
	// UnityEngine.AudioClip GameManager::clearSound
	AudioClip_t3680889665 * ___clearSound_9;
	// UnityEngine.AudioClip GameManager::overSound
	AudioClip_t3680889665 * ___overSound_10;
	// UnityEngine.AudioClip GameManager::touchSound
	AudioClip_t3680889665 * ___touchSound_11;
	// UnityEngine.AudioSource GameManager::audioSource
	AudioSource_t3935305588 * ___audioSource_12;
	// PlayerController GameManager::pc
	PlayerController_t2064355688 * ___pc_13;
	// BallManager GameManager::bm
	BallManager_t2004465268 * ___bm_14;
	// GameManager/GameStatus GameManager::status
	int32_t ___status_16;

public:
	inline static int32_t get_offset_of_sc_2() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___sc_2)); }
	inline SceneController_t2849316448 * get_sc_2() const { return ___sc_2; }
	inline SceneController_t2849316448 ** get_address_of_sc_2() { return &___sc_2; }
	inline void set_sc_2(SceneController_t2849316448 * value)
	{
		___sc_2 = value;
		Il2CppCodeGenWriteBarrier((&___sc_2), value);
	}

	inline static int32_t get_offset_of_im_3() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___im_3)); }
	inline InputManager_t2926777569 * get_im_3() const { return ___im_3; }
	inline InputManager_t2926777569 ** get_address_of_im_3() { return &___im_3; }
	inline void set_im_3(InputManager_t2926777569 * value)
	{
		___im_3 = value;
		Il2CppCodeGenWriteBarrier((&___im_3), value);
	}

	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___player_4)); }
	inline GameObject_t1113636619 * get_player_4() const { return ___player_4; }
	inline GameObject_t1113636619 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(GameObject_t1113636619 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((&___player_4), value);
	}

	inline static int32_t get_offset_of_ball_5() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___ball_5)); }
	inline GameObject_t1113636619 * get_ball_5() const { return ___ball_5; }
	inline GameObject_t1113636619 ** get_address_of_ball_5() { return &___ball_5; }
	inline void set_ball_5(GameObject_t1113636619 * value)
	{
		___ball_5 = value;
		Il2CppCodeGenWriteBarrier((&___ball_5), value);
	}

	inline static int32_t get_offset_of_cm_6() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___cm_6)); }
	inline CameraManager_t3272490737 * get_cm_6() const { return ___cm_6; }
	inline CameraManager_t3272490737 ** get_address_of_cm_6() { return &___cm_6; }
	inline void set_cm_6(CameraManager_t3272490737 * value)
	{
		___cm_6 = value;
		Il2CppCodeGenWriteBarrier((&___cm_6), value);
	}

	inline static int32_t get_offset_of_sm_7() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___sm_7)); }
	inline StageManager_t3296066545 * get_sm_7() const { return ___sm_7; }
	inline StageManager_t3296066545 ** get_address_of_sm_7() { return &___sm_7; }
	inline void set_sm_7(StageManager_t3296066545 * value)
	{
		___sm_7 = value;
		Il2CppCodeGenWriteBarrier((&___sm_7), value);
	}

	inline static int32_t get_offset_of_stm_8() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___stm_8)); }
	inline StageTextManager_t1380114822 * get_stm_8() const { return ___stm_8; }
	inline StageTextManager_t1380114822 ** get_address_of_stm_8() { return &___stm_8; }
	inline void set_stm_8(StageTextManager_t1380114822 * value)
	{
		___stm_8 = value;
		Il2CppCodeGenWriteBarrier((&___stm_8), value);
	}

	inline static int32_t get_offset_of_clearSound_9() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___clearSound_9)); }
	inline AudioClip_t3680889665 * get_clearSound_9() const { return ___clearSound_9; }
	inline AudioClip_t3680889665 ** get_address_of_clearSound_9() { return &___clearSound_9; }
	inline void set_clearSound_9(AudioClip_t3680889665 * value)
	{
		___clearSound_9 = value;
		Il2CppCodeGenWriteBarrier((&___clearSound_9), value);
	}

	inline static int32_t get_offset_of_overSound_10() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___overSound_10)); }
	inline AudioClip_t3680889665 * get_overSound_10() const { return ___overSound_10; }
	inline AudioClip_t3680889665 ** get_address_of_overSound_10() { return &___overSound_10; }
	inline void set_overSound_10(AudioClip_t3680889665 * value)
	{
		___overSound_10 = value;
		Il2CppCodeGenWriteBarrier((&___overSound_10), value);
	}

	inline static int32_t get_offset_of_touchSound_11() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___touchSound_11)); }
	inline AudioClip_t3680889665 * get_touchSound_11() const { return ___touchSound_11; }
	inline AudioClip_t3680889665 ** get_address_of_touchSound_11() { return &___touchSound_11; }
	inline void set_touchSound_11(AudioClip_t3680889665 * value)
	{
		___touchSound_11 = value;
		Il2CppCodeGenWriteBarrier((&___touchSound_11), value);
	}

	inline static int32_t get_offset_of_audioSource_12() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___audioSource_12)); }
	inline AudioSource_t3935305588 * get_audioSource_12() const { return ___audioSource_12; }
	inline AudioSource_t3935305588 ** get_address_of_audioSource_12() { return &___audioSource_12; }
	inline void set_audioSource_12(AudioSource_t3935305588 * value)
	{
		___audioSource_12 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_12), value);
	}

	inline static int32_t get_offset_of_pc_13() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___pc_13)); }
	inline PlayerController_t2064355688 * get_pc_13() const { return ___pc_13; }
	inline PlayerController_t2064355688 ** get_address_of_pc_13() { return &___pc_13; }
	inline void set_pc_13(PlayerController_t2064355688 * value)
	{
		___pc_13 = value;
		Il2CppCodeGenWriteBarrier((&___pc_13), value);
	}

	inline static int32_t get_offset_of_bm_14() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___bm_14)); }
	inline BallManager_t2004465268 * get_bm_14() const { return ___bm_14; }
	inline BallManager_t2004465268 ** get_address_of_bm_14() { return &___bm_14; }
	inline void set_bm_14(BallManager_t2004465268 * value)
	{
		___bm_14 = value;
		Il2CppCodeGenWriteBarrier((&___bm_14), value);
	}

	inline static int32_t get_offset_of_status_16() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___status_16)); }
	inline int32_t get_status_16() const { return ___status_16; }
	inline int32_t* get_address_of_status_16() { return &___status_16; }
	inline void set_status_16(int32_t value)
	{
		___status_16 = value;
	}
};

struct GameManager_t1536523654_StaticFields
{
public:
	// System.Boolean GameManager::isGame
	bool ___isGame_15;

public:
	inline static int32_t get_offset_of_isGame_15() { return static_cast<int32_t>(offsetof(GameManager_t1536523654_StaticFields, ___isGame_15)); }
	inline bool get_isGame_15() const { return ___isGame_15; }
	inline bool* get_address_of_isGame_15() { return &___isGame_15; }
	inline void set_isGame_15(bool value)
	{
		___isGame_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEMANAGER_T1536523654_H
#ifndef BALLCONTROLLER_T2992829471_H
#define BALLCONTROLLER_T2992829471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BallController
struct  BallController_t2992829471  : public MonoBehaviour_t3962482529
{
public:
	// System.Single BallController::speed
	float ___speed_2;
	// UnityEngine.Rigidbody BallController::rb
	Rigidbody_t3916780224 * ___rb_3;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(BallController_t2992829471, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_rb_3() { return static_cast<int32_t>(offsetof(BallController_t2992829471, ___rb_3)); }
	inline Rigidbody_t3916780224 * get_rb_3() const { return ___rb_3; }
	inline Rigidbody_t3916780224 ** get_address_of_rb_3() { return &___rb_3; }
	inline void set_rb_3(Rigidbody_t3916780224 * value)
	{
		___rb_3 = value;
		Il2CppCodeGenWriteBarrier((&___rb_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BALLCONTROLLER_T2992829471_H
#ifndef MAINCAMERAMANAGER_T346017319_H
#define MAINCAMERAMANAGER_T346017319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainCameraManager
struct  MainCameraManager_t346017319  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Animation MainCameraManager::anim
	Animation_t3648466861 * ___anim_2;

public:
	inline static int32_t get_offset_of_anim_2() { return static_cast<int32_t>(offsetof(MainCameraManager_t346017319, ___anim_2)); }
	inline Animation_t3648466861 * get_anim_2() const { return ___anim_2; }
	inline Animation_t3648466861 ** get_address_of_anim_2() { return &___anim_2; }
	inline void set_anim_2(Animation_t3648466861 * value)
	{
		___anim_2 = value;
		Il2CppCodeGenWriteBarrier((&___anim_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAINCAMERAMANAGER_T346017319_H
#ifndef PLAYERCAMERA_T1622178205_H
#define PLAYERCAMERA_T1622178205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerCamera
struct  PlayerCamera_t1622178205  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject PlayerCamera::player
	GameObject_t1113636619 * ___player_2;
	// UnityEngine.Quaternion PlayerCamera::firstDirection
	Quaternion_t2301928331  ___firstDirection_3;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(PlayerCamera_t1622178205, ___player_2)); }
	inline GameObject_t1113636619 * get_player_2() const { return ___player_2; }
	inline GameObject_t1113636619 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1113636619 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier((&___player_2), value);
	}

	inline static int32_t get_offset_of_firstDirection_3() { return static_cast<int32_t>(offsetof(PlayerCamera_t1622178205, ___firstDirection_3)); }
	inline Quaternion_t2301928331  get_firstDirection_3() const { return ___firstDirection_3; }
	inline Quaternion_t2301928331 * get_address_of_firstDirection_3() { return &___firstDirection_3; }
	inline void set_firstDirection_3(Quaternion_t2301928331  value)
	{
		___firstDirection_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCAMERA_T1622178205_H
#ifndef BLOCKCONTROLLER_T3805442049_H
#define BLOCKCONTROLLER_T3805442049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BlockController
struct  BlockController_t3805442049  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject BlockController::breakEffect
	GameObject_t1113636619 * ___breakEffect_2;

public:
	inline static int32_t get_offset_of_breakEffect_2() { return static_cast<int32_t>(offsetof(BlockController_t3805442049, ___breakEffect_2)); }
	inline GameObject_t1113636619 * get_breakEffect_2() const { return ___breakEffect_2; }
	inline GameObject_t1113636619 ** get_address_of_breakEffect_2() { return &___breakEffect_2; }
	inline void set_breakEffect_2(GameObject_t1113636619 * value)
	{
		___breakEffect_2 = value;
		Il2CppCodeGenWriteBarrier((&___breakEffect_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLOCKCONTROLLER_T3805442049_H
#ifndef BARMANAGER_T4217880126_H
#define BARMANAGER_T4217880126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BarManager
struct  BarManager_t4217880126  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BARMANAGER_T4217880126_H
#ifndef SCENECONTROLLER_T2849316448_H
#define SCENECONTROLLER_T2849316448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SceneController
struct  SceneController_t2849316448  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct SceneController_t2849316448_StaticFields
{
public:
	// SceneController/GameStatus SceneController::currentStatus
	int32_t ___currentStatus_2;

public:
	inline static int32_t get_offset_of_currentStatus_2() { return static_cast<int32_t>(offsetof(SceneController_t2849316448_StaticFields, ___currentStatus_2)); }
	inline int32_t get_currentStatus_2() const { return ___currentStatus_2; }
	inline int32_t* get_address_of_currentStatus_2() { return &___currentStatus_2; }
	inline void set_currentStatus_2(int32_t value)
	{
		___currentStatus_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENECONTROLLER_T2849316448_H
#ifndef INPUTMANAGER_T2926777569_H
#define INPUTMANAGER_T2926777569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// InputManager
struct  InputManager_t2926777569  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTMANAGER_T2926777569_H
#ifndef STAGEMANAGER_T3296066545_H
#define STAGEMANAGER_T3296066545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StageManager
struct  StageManager_t3296066545  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text StageManager::scoreText
	Text_t1901882714 * ___scoreText_2;
	// UnityEngine.GameObject StageManager::clearText
	GameObject_t1113636619 * ___clearText_3;
	// UnityEngine.GameObject StageManager::overText
	GameObject_t1113636619 * ___overText_4;
	// CameraManager StageManager::cm
	CameraManager_t3272490737 * ___cm_5;
	// System.Int32 StageManager::blockNum
	int32_t ___blockNum_7;

public:
	inline static int32_t get_offset_of_scoreText_2() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___scoreText_2)); }
	inline Text_t1901882714 * get_scoreText_2() const { return ___scoreText_2; }
	inline Text_t1901882714 ** get_address_of_scoreText_2() { return &___scoreText_2; }
	inline void set_scoreText_2(Text_t1901882714 * value)
	{
		___scoreText_2 = value;
		Il2CppCodeGenWriteBarrier((&___scoreText_2), value);
	}

	inline static int32_t get_offset_of_clearText_3() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___clearText_3)); }
	inline GameObject_t1113636619 * get_clearText_3() const { return ___clearText_3; }
	inline GameObject_t1113636619 ** get_address_of_clearText_3() { return &___clearText_3; }
	inline void set_clearText_3(GameObject_t1113636619 * value)
	{
		___clearText_3 = value;
		Il2CppCodeGenWriteBarrier((&___clearText_3), value);
	}

	inline static int32_t get_offset_of_overText_4() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___overText_4)); }
	inline GameObject_t1113636619 * get_overText_4() const { return ___overText_4; }
	inline GameObject_t1113636619 ** get_address_of_overText_4() { return &___overText_4; }
	inline void set_overText_4(GameObject_t1113636619 * value)
	{
		___overText_4 = value;
		Il2CppCodeGenWriteBarrier((&___overText_4), value);
	}

	inline static int32_t get_offset_of_cm_5() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___cm_5)); }
	inline CameraManager_t3272490737 * get_cm_5() const { return ___cm_5; }
	inline CameraManager_t3272490737 ** get_address_of_cm_5() { return &___cm_5; }
	inline void set_cm_5(CameraManager_t3272490737 * value)
	{
		___cm_5 = value;
		Il2CppCodeGenWriteBarrier((&___cm_5), value);
	}

	inline static int32_t get_offset_of_blockNum_7() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___blockNum_7)); }
	inline int32_t get_blockNum_7() const { return ___blockNum_7; }
	inline int32_t* get_address_of_blockNum_7() { return &___blockNum_7; }
	inline void set_blockNum_7(int32_t value)
	{
		___blockNum_7 = value;
	}
};

struct StageManager_t3296066545_StaticFields
{
public:
	// System.Int32 StageManager::currentStage
	int32_t ___currentStage_6;

public:
	inline static int32_t get_offset_of_currentStage_6() { return static_cast<int32_t>(offsetof(StageManager_t3296066545_StaticFields, ___currentStage_6)); }
	inline int32_t get_currentStage_6() const { return ___currentStage_6; }
	inline int32_t* get_address_of_currentStage_6() { return &___currentStage_6; }
	inline void set_currentStage_6(int32_t value)
	{
		___currentStage_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STAGEMANAGER_T3296066545_H
#ifndef OBJECTCREATOR_T3827148781_H
#define OBJECTCREATOR_T3827148781_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectCreator
struct  ObjectCreator_t3827148781  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTCREATOR_T3827148781_H
#ifndef PLAYERCONTROLLER_T2064355688_H
#define PLAYERCONTROLLER_T2064355688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2064355688  : public MonoBehaviour_t3962482529
{
public:
	// GyroManager PlayerController::gm
	GyroManager_t2156710008 * ___gm_2;
	// CameraManager PlayerController::cm
	CameraManager_t3272490737 * ___cm_3;
	// System.Single PlayerController::turnSpeed
	float ___turnSpeed_4;
	// UnityEngine.Quaternion PlayerController::firstDirection
	Quaternion_t2301928331  ___firstDirection_5;
	// System.Boolean PlayerController::isDeath
	bool ___isDeath_6;

public:
	inline static int32_t get_offset_of_gm_2() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___gm_2)); }
	inline GyroManager_t2156710008 * get_gm_2() const { return ___gm_2; }
	inline GyroManager_t2156710008 ** get_address_of_gm_2() { return &___gm_2; }
	inline void set_gm_2(GyroManager_t2156710008 * value)
	{
		___gm_2 = value;
		Il2CppCodeGenWriteBarrier((&___gm_2), value);
	}

	inline static int32_t get_offset_of_cm_3() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___cm_3)); }
	inline CameraManager_t3272490737 * get_cm_3() const { return ___cm_3; }
	inline CameraManager_t3272490737 ** get_address_of_cm_3() { return &___cm_3; }
	inline void set_cm_3(CameraManager_t3272490737 * value)
	{
		___cm_3 = value;
		Il2CppCodeGenWriteBarrier((&___cm_3), value);
	}

	inline static int32_t get_offset_of_turnSpeed_4() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___turnSpeed_4)); }
	inline float get_turnSpeed_4() const { return ___turnSpeed_4; }
	inline float* get_address_of_turnSpeed_4() { return &___turnSpeed_4; }
	inline void set_turnSpeed_4(float value)
	{
		___turnSpeed_4 = value;
	}

	inline static int32_t get_offset_of_firstDirection_5() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___firstDirection_5)); }
	inline Quaternion_t2301928331  get_firstDirection_5() const { return ___firstDirection_5; }
	inline Quaternion_t2301928331 * get_address_of_firstDirection_5() { return &___firstDirection_5; }
	inline void set_firstDirection_5(Quaternion_t2301928331  value)
	{
		___firstDirection_5 = value;
	}

	inline static int32_t get_offset_of_isDeath_6() { return static_cast<int32_t>(offsetof(PlayerController_t2064355688, ___isDeath_6)); }
	inline bool get_isDeath_6() const { return ___isDeath_6; }
	inline bool* get_address_of_isDeath_6() { return &___isDeath_6; }
	inline void set_isDeath_6(bool value)
	{
		___isDeath_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONTROLLER_T2064355688_H
#ifndef GYROMANAGER_T2156710008_H
#define GYROMANAGER_T2156710008_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GyroManager
struct  GyroManager_t2156710008  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GYROMANAGER_T2156710008_H
#ifndef STAGETEXTMANAGER_T1380114822_H
#define STAGETEXTMANAGER_T1380114822_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StageTextManager
struct  StageTextManager_t1380114822  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject StageTextManager::stageText
	GameObject_t1113636619 * ___stageText_2;
	// UnityEngine.GameObject StageTextManager::clearText
	GameObject_t1113636619 * ___clearText_3;
	// UnityEngine.GameObject StageTextManager::overText
	GameObject_t1113636619 * ___overText_4;

public:
	inline static int32_t get_offset_of_stageText_2() { return static_cast<int32_t>(offsetof(StageTextManager_t1380114822, ___stageText_2)); }
	inline GameObject_t1113636619 * get_stageText_2() const { return ___stageText_2; }
	inline GameObject_t1113636619 ** get_address_of_stageText_2() { return &___stageText_2; }
	inline void set_stageText_2(GameObject_t1113636619 * value)
	{
		___stageText_2 = value;
		Il2CppCodeGenWriteBarrier((&___stageText_2), value);
	}

	inline static int32_t get_offset_of_clearText_3() { return static_cast<int32_t>(offsetof(StageTextManager_t1380114822, ___clearText_3)); }
	inline GameObject_t1113636619 * get_clearText_3() const { return ___clearText_3; }
	inline GameObject_t1113636619 ** get_address_of_clearText_3() { return &___clearText_3; }
	inline void set_clearText_3(GameObject_t1113636619 * value)
	{
		___clearText_3 = value;
		Il2CppCodeGenWriteBarrier((&___clearText_3), value);
	}

	inline static int32_t get_offset_of_overText_4() { return static_cast<int32_t>(offsetof(StageTextManager_t1380114822, ___overText_4)); }
	inline GameObject_t1113636619 * get_overText_4() const { return ___overText_4; }
	inline GameObject_t1113636619 ** get_address_of_overText_4() { return &___overText_4; }
	inline void set_overText_4(GameObject_t1113636619 * value)
	{
		___overText_4 = value;
		Il2CppCodeGenWriteBarrier((&___overText_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STAGETEXTMANAGER_T1380114822_H
#ifndef SOUNDCONTROLLER_T2462365417_H
#define SOUNDCONTROLLER_T2462365417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoundController
struct  SoundController_t2462365417  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AudioClip SoundController::sound
	AudioClip_t3680889665 * ___sound_2;
	// UnityEngine.AudioClip SoundController::soundSub1
	AudioClip_t3680889665 * ___soundSub1_3;

public:
	inline static int32_t get_offset_of_sound_2() { return static_cast<int32_t>(offsetof(SoundController_t2462365417, ___sound_2)); }
	inline AudioClip_t3680889665 * get_sound_2() const { return ___sound_2; }
	inline AudioClip_t3680889665 ** get_address_of_sound_2() { return &___sound_2; }
	inline void set_sound_2(AudioClip_t3680889665 * value)
	{
		___sound_2 = value;
		Il2CppCodeGenWriteBarrier((&___sound_2), value);
	}

	inline static int32_t get_offset_of_soundSub1_3() { return static_cast<int32_t>(offsetof(SoundController_t2462365417, ___soundSub1_3)); }
	inline AudioClip_t3680889665 * get_soundSub1_3() const { return ___soundSub1_3; }
	inline AudioClip_t3680889665 ** get_address_of_soundSub1_3() { return &___soundSub1_3; }
	inline void set_soundSub1_3(AudioClip_t3680889665 * value)
	{
		___soundSub1_3 = value;
		Il2CppCodeGenWriteBarrier((&___soundSub1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOUNDCONTROLLER_T2462365417_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1113636619 * m_Items[1];

public:
	inline GameObject_t1113636619 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1135049463_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method);

// System.Boolean UnityEngine.Application::get_isEditor()
extern "C"  bool Application_get_isEditor_m857789090 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C"  bool Input_GetMouseButtonDown_m2081676745 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C"  bool Input_GetMouseButton_m513753021 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern "C"  bool Input_GetMouseButtonUp_m2924350851 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Input::get_touchCount()
extern "C"  int32_t Input_get_touchCount_m3403849067 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern "C"  Touch_t1921856868  Input_GetTouch_m2192712756 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
extern "C"  int32_t Touch_get_phase_m214549210 (Touch_t1921856868 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t3916780224_m279685075(__this, method) ((  Rigidbody_t3916780224 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
extern "C"  void Rigidbody_set_velocity_m2899403247 (Rigidbody_t3916780224 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
extern "C"  GameObject_t1113636619 * GameObject_FindGameObjectWithTag_m2129039296 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<BallController>()
#define Component_GetComponent_TisBallController_t2992829471_m4265531620(__this, method) ((  BallController_t2992829471 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C"  Vector3_t3722313464  Transform_get_forward_m747522392 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 BallManager::GetPlayerDirection()
extern "C"  Vector3_t3722313464  BallManager_GetPlayerDirection_m368160284 (BallManager_t2004465268 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void BallController::Fire(UnityEngine.Vector3)
extern "C"  void BallController_Fire_m1626106067 (BallController_t2992829471 * __this, Vector3_t3722313464  ___direction0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C"  void Transform_set_parent_m786917804 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
extern "C"  GameObject_t1113636619 * Collision_get_gameObject_m3662658840 (Collision_t4262080450 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
extern "C"  bool GameObject_CompareTag_m3144439756 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<BlockController>()
#define GameObject_GetComponent_TisBlockController_t3805442049_m2172498105(__this, method) ((  BlockController_t3805442049 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void BlockController::Break()
extern "C"  void BlockController_Break_m2204360455 (BlockController_t3805442049 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<PlayerController>()
#define GameObject_GetComponent_TisPlayerController_t2064355688_m2241011631(__this, method) ((  PlayerController_t2064355688 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void PlayerController::Death()
extern "C"  void PlayerController_Death_m560526479 (PlayerController_t2064355688 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
#define GameObject_GetComponent_TisAudioSource_t3935305588_m625814604(__this, method) ((  AudioSource_t3935305588 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
extern "C"  void AudioSource_set_volume_m1273312851 (AudioSource_t3935305588 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m48294159 (AudioSource_t3935305588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<SoundController>()
#define GameObject_GetComponent_TisSoundController_t2462365417_m3930652079(__this, method) ((  SoundController_t2462365417 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void SoundController::PlaySound()
extern "C"  void SoundController_PlaySound_m4128028087 (SoundController_t2462365417 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1113636619_m3006960551(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Vector3_t3722313464 , Quaternion_t2301928331 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1135049463_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<MainCameraManager>()
#define GameObject_GetComponent_TisMainCameraManager_t346017319_m3414863324(__this, method) ((  MainCameraManager_t346017319 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Boolean MainCameraManager::isFinished()
extern "C"  bool MainCameraManager_isFinished_m3599236710 (MainCameraManager_t346017319 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MainCameraManager::PlayDownAnimation()
extern "C"  void MainCameraManager_PlayDownAnimation_m2028542735 (MainCameraManager_t346017319 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MainCameraManager::PlayUpAnimation()
extern "C"  void MainCameraManager_PlayUpAnimation_m3771979649 (MainCameraManager_t346017319 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, method) ((  AudioSource_t3935305588 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<BallManager>()
#define GameObject_GetComponent_TisBallManager_t2004465268_m4041910020(__this, method) ((  BallManager_t2004465268 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void GameManager::ActionByScene()
extern "C"  void GameManager_ActionByScene_m107967549 (GameManager_t1536523654 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// SceneController/GameStatus SceneController::GetStatus()
extern "C"  int32_t SceneController_GetStatus_m4010357723 (SceneController_t2849316448 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean InputManager::CheckTouch()
extern "C"  bool InputManager_CheckTouch_m1272290747 (InputManager_t2926777569 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SceneController::NextScene()
extern "C"  void SceneController_NextScene_m2948675565 (SceneController_t2849316448 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C"  void AudioSource_set_clip_m31653938 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// InputManager/InputKey InputManager::CheckPushKeys()
extern "C"  int32_t InputManager_CheckPushKeys_m3035302622 (InputManager_t2926777569 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::turnLeft()
extern "C"  void PlayerController_turnLeft_m513767988 (PlayerController_t2064355688 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::turnRight()
extern "C"  void PlayerController_turnRight_m2510886191 (PlayerController_t2064355688 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// CameraManager/CameraStatus CameraManager::GetStatus()
extern "C"  int32_t CameraManager_GetStatus_m3786155143 (CameraManager_t3272490737 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::DownCamera()
extern "C"  void CameraManager_DownCamera_m1029157112 (CameraManager_t3272490737 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void BallManager::Fire()
extern "C"  void BallManager_Fire_m3244531822 (BallManager_t2004465268 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean StageManager::isFinish()
extern "C"  bool StageManager_isFinish_m2487550001 (StageManager_t3296066545 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::SetStatus(CameraManager/CameraStatus)
extern "C"  void CameraManager_SetStatus_m2778707669 (CameraManager_t3272490737 * __this, int32_t ___setStatus0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerController::checkDeath()
extern "C"  bool PlayerController_checkDeath_m889537932 (PlayerController_t2064355688 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void CameraManager::UpCamera()
extern "C"  void CameraManager_UpCamera_m633613341 (CameraManager_t3272490737 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageTextManager::ShowClear()
extern "C"  void StageTextManager_ShowClear_m337854032 (StageTextManager_t1380114822 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageTextManager::ShowOver()
extern "C"  void StageTextManager_ShowOver_m1091829582 (StageTextManager_t1380114822 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::NextStage()
extern "C"  void StageManager_NextStage_m2693353284 (StageManager_t3296066545 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Gyroscope UnityEngine.Input::get_gyro()
extern "C"  Gyroscope_t3288342876 * Input_get_gyro_m1976156202 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gyroscope::set_enabled(System.Boolean)
extern "C"  void Gyroscope_set_enabled_m3781734411 (Gyroscope_t3288342876 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Gyroscope::get_attitude()
extern "C"  Quaternion_t2301928331  Gyroscope_get_attitude_m1331166065 (Gyroscope_t3288342876 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
extern "C"  Quaternion_t2301928331  Quaternion_Euler_m3049309462 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Quaternion__ctor_m435141806 (Quaternion_t2301928331 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  Quaternion_t2301928331  Quaternion_op_Multiply_m1294064023 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
extern "C"  bool Input_GetKey_m3736388334 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// AppUtil/TouchInfo AppUtil::GetTouch()
extern "C"  int32_t AppUtil_GetTouch_m3882990969 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animation>()
#define Component_GetComponent_TisAnimation_t3648466861_m4214971628(__this, method) ((  Animation_t3648466861 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Boolean UnityEngine.Animation::Play(System.String)
extern "C"  bool Animation_Play_m27531216 (Animation_t3648466861 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animation::get_isPlaying()
extern "C"  bool Animation_get_isPlaying_m1022540967 (Animation_t3648466861 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerCamera::SetDirection()
extern "C"  void PlayerCamera_SetDirection_m3073669278 (PlayerCamera_t1622178205 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion PlayerCamera::GetDirection()
extern "C"  Quaternion_t2301928331  PlayerCamera_GetDirection_m2596322655 (PlayerCamera_t1622178205 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Gyroscope::get_enabled()
extern "C"  bool Gyroscope_get_enabled_m2811632353 (Gyroscope_t3288342876 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::SetGyroDirection()
extern "C"  void PlayerController_SetGyroDirection_m4240618230 (PlayerController_t2064355688 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion GyroManager::GetGyro()
extern "C"  Quaternion_t2301928331  GyroManager_GetGyro_m182045473 (GyroManager_t2156710008 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
extern "C"  void Transform_Rotate_m720511863 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void SceneController::LoadGame()
extern "C"  void SceneController_LoadGame_m2594758407 (SceneController_t2849316448 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3)
extern "C"  void AudioSource_PlayClipAtPoint_m3293894611 (RuntimeObject * __this /* static, unused */, AudioClip_t3680889665 * p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::CheckBlockNum()
extern "C"  void StageManager_CheckBlockNum_m2173459418 (StageManager_t3296066545 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
extern "C"  GameObjectU5BU5D_t3328599146* GameObject_FindGameObjectsWithTag_m2585173894 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// AppUtil/TouchInfo AppUtil::GetTouch()
extern "C"  int32_t AppUtil_GetTouch_m3882990969 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppUtil_GetTouch_m3882990969_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Touch_t1921856868  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// if(Application.isEditor) {
		bool L_0 = Application_get_isEditor_m857789090(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		// if(Input.GetMouseButtonDown(0)) {
		// if(Input.GetMouseButtonDown(0)) {
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetMouseButtonDown_m2081676745(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// return TouchInfo.Began;
		V_0 = 0;
		goto IL_0075;
	}

IL_001f:
	{
		// if(Input.GetMouseButton(0)) {
		// if(Input.GetMouseButton(0)) {
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetMouseButton_m513753021(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// return TouchInfo.Moved;
		V_0 = 1;
		goto IL_0075;
	}

IL_0032:
	{
		// if(Input.GetMouseButtonUp(0)) {
		// if(Input.GetMouseButtonUp(0)) {
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetMouseButtonUp_m2924350851(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		// return TouchInfo.Ended;
		V_0 = 3;
		goto IL_0075;
	}

IL_0045:
	{
		goto IL_006d;
	}

IL_004b:
	{
		// if (Input.touchCount > 0) {
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		int32_t L_4 = Input_get_touchCount_m3403849067(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		// return (TouchInfo)((int)Input.GetTouch(0).phase);
		// return (TouchInfo)((int)Input.GetTouch(0).phase);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Touch_t1921856868  L_5 = Input_GetTouch_m2192712756(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_1 = L_5;
		// return (TouchInfo)((int)Input.GetTouch(0).phase);
		int32_t L_6 = Touch_get_phase_m214549210((&V_1), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0075;
	}

IL_006c:
	{
	}

IL_006d:
	{
		// return TouchInfo.None;
		V_0 = ((int32_t)99);
		goto IL_0075;
	}

IL_0075:
	{
		// }
		int32_t L_7 = V_0;
		return L_7;
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
// System.Void BallController::.ctor()
extern "C"  void BallController__ctor_m3532614227 (BallController_t2992829471 * __this, const RuntimeMethod* method)
{
	{
		// private float speed = 20.0f;
		__this->set_speed_2((20.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BallController::Start()
extern "C"  void BallController_Start_m2577057129 (BallController_t2992829471 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallController_Start_m2577057129_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = this.GetComponent<Rigidbody> ();
		// rb = this.GetComponent<Rigidbody> ();
		Rigidbody_t3916780224 * L_0 = Component_GetComponent_TisRigidbody_t3916780224_m279685075(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t3916780224_m279685075_RuntimeMethod_var);
		__this->set_rb_3(L_0);
		// }
		return;
	}
}
// System.Void BallController::Fire(UnityEngine.Vector3)
extern "C"  void BallController_Fire_m1626106067 (BallController_t2992829471 * __this, Vector3_t3722313464  ___direction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallController_Fire_m1626106067_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb.velocity = direction * speed;
		Rigidbody_t3916780224 * L_0 = __this->get_rb_3();
		Vector3_t3722313464  L_1 = ___direction0;
		float L_2 = __this->get_speed_2();
		// rb.velocity = direction * speed;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		// rb.velocity = direction * speed;
		NullCheck(L_0);
		Rigidbody_set_velocity_m2899403247(L_0, L_3, /*hidden argument*/NULL);
		// }
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
// System.Void BallManager::.ctor()
extern "C"  void BallManager__ctor_m2783964171 (BallManager_t2004465268 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BallManager::Start()
extern "C"  void BallManager_Start_m4264522867 (BallManager_t2004465268 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallManager_Start_m4264522867_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.FindGameObjectWithTag ("Player");
		// player = GameObject.FindGameObjectWithTag ("Player");
		GameObject_t1113636619 * L_0 = GameObject_FindGameObjectWithTag_m2129039296(NULL /*static, unused*/, _stringLiteral2261822918, /*hidden argument*/NULL);
		__this->set_player_2(L_0);
		// bc = GetComponent<BallController> ();
		// bc = GetComponent<BallController> ();
		BallController_t2992829471 * L_1 = Component_GetComponent_TisBallController_t2992829471_m4265531620(__this, /*hidden argument*/Component_GetComponent_TisBallController_t2992829471_m4265531620_RuntimeMethod_var);
		__this->set_bc_3(L_1);
		// isFire = false;
		__this->set_isFire_4((bool)0);
		// }
		return;
	}
}
// UnityEngine.Vector3 BallManager::GetPlayerDirection()
extern "C"  Vector3_t3722313464  BallManager_GetPlayerDirection_m368160284 (BallManager_t2004465268 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// return player.transform.forward;
		GameObject_t1113636619 * L_0 = __this->get_player_2();
		// return player.transform.forward;
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		// return player.transform.forward;
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_forward_m747522392(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		Vector3_t3722313464  L_3 = V_0;
		return L_3;
	}
}
// System.Void BallManager::Fire()
extern "C"  void BallManager_Fire_m3244531822 (BallManager_t2004465268 * __this, const RuntimeMethod* method)
{
	{
		// if(!isFire) {
		bool L_0 = __this->get_isFire_4();
		if (L_0)
		{
			goto IL_0032;
		}
	}
	{
		// bc.Fire(GetPlayerDirection());
		BallController_t2992829471 * L_1 = __this->get_bc_3();
		// bc.Fire(GetPlayerDirection());
		Vector3_t3722313464  L_2 = BallManager_GetPlayerDirection_m368160284(__this, /*hidden argument*/NULL);
		// bc.Fire(GetPlayerDirection());
		NullCheck(L_1);
		BallController_Fire_m1626106067(L_1, L_2, /*hidden argument*/NULL);
		// isFire = true;
		__this->set_isFire_4((bool)1);
		// this.transform.parent = null;
		// this.transform.parent = null;
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// this.transform.parent = null;
		NullCheck(L_3);
		Transform_set_parent_m786917804(L_3, (Transform_t3600365921 *)NULL, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void BallManager::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void BallManager_OnCollisionEnter_m3617531923 (BallManager_t2004465268 * __this, Collision_t4262080450 * ___coll0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallManager_OnCollisionEnter_m3617531923_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(coll.gameObject.CompareTag("Block")) {
		Collision_t4262080450 * L_0 = ___coll0;
		// if(coll.gameObject.CompareTag("Block")) {
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Collision_get_gameObject_m3662658840(L_0, /*hidden argument*/NULL);
		// if(coll.gameObject.CompareTag("Block")) {
		NullCheck(L_1);
		bool L_2 = GameObject_CompareTag_m3144439756(L_1, _stringLiteral424788472, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// coll.gameObject.GetComponent<BlockController> ().Break ();
		Collision_t4262080450 * L_3 = ___coll0;
		// coll.gameObject.GetComponent<BlockController> ().Break ();
		NullCheck(L_3);
		GameObject_t1113636619 * L_4 = Collision_get_gameObject_m3662658840(L_3, /*hidden argument*/NULL);
		// coll.gameObject.GetComponent<BlockController> ().Break ();
		NullCheck(L_4);
		BlockController_t3805442049 * L_5 = GameObject_GetComponent_TisBlockController_t3805442049_m2172498105(L_4, /*hidden argument*/GameObject_GetComponent_TisBlockController_t3805442049_m2172498105_RuntimeMethod_var);
		// coll.gameObject.GetComponent<BlockController> ().Break ();
		NullCheck(L_5);
		BlockController_Break_m2204360455(L_5, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// if(coll.gameObject.CompareTag("Player")) {
		Collision_t4262080450 * L_6 = ___coll0;
		// if(coll.gameObject.CompareTag("Player")) {
		NullCheck(L_6);
		GameObject_t1113636619 * L_7 = Collision_get_gameObject_m3662658840(L_6, /*hidden argument*/NULL);
		// if(coll.gameObject.CompareTag("Player")) {
		NullCheck(L_7);
		bool L_8 = GameObject_CompareTag_m3144439756(L_7, _stringLiteral2261822918, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005a;
		}
	}
	{
		// Destroy (this.gameObject);
		// Destroy (this.gameObject);
		GameObject_t1113636619 * L_9 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		// Destroy (this.gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		// coll.gameObject.GetComponent<PlayerController> ().Death ();
		Collision_t4262080450 * L_10 = ___coll0;
		// coll.gameObject.GetComponent<PlayerController> ().Death ();
		NullCheck(L_10);
		GameObject_t1113636619 * L_11 = Collision_get_gameObject_m3662658840(L_10, /*hidden argument*/NULL);
		// coll.gameObject.GetComponent<PlayerController> ().Death ();
		NullCheck(L_11);
		PlayerController_t2064355688 * L_12 = GameObject_GetComponent_TisPlayerController_t2064355688_m2241011631(L_11, /*hidden argument*/GameObject_GetComponent_TisPlayerController_t2064355688_m2241011631_RuntimeMethod_var);
		// coll.gameObject.GetComponent<PlayerController> ().Death ();
		NullCheck(L_12);
		PlayerController_Death_m560526479(L_12, /*hidden argument*/NULL);
	}

IL_005a:
	{
		// }
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
// System.Void BarManager::.ctor()
extern "C"  void BarManager__ctor_m3206262114 (BarManager_t4217880126 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BarManager::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void BarManager_OnCollisionEnter_m392147009 (BarManager_t4217880126 * __this, Collision_t4262080450 * ___coll0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BarManager_OnCollisionEnter_m392147009_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AudioSource_t3935305588 * V_0 = NULL;
	{
		// AudioSource source = this.gameObject.GetComponent<AudioSource> ();
		// AudioSource source = this.gameObject.GetComponent<AudioSource> ();
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		// AudioSource source = this.gameObject.GetComponent<AudioSource> ();
		NullCheck(L_0);
		AudioSource_t3935305588 * L_1 = GameObject_GetComponent_TisAudioSource_t3935305588_m625814604(L_0, /*hidden argument*/GameObject_GetComponent_TisAudioSource_t3935305588_m625814604_RuntimeMethod_var);
		V_0 = L_1;
		// source.volume = 0.5f;
		AudioSource_t3935305588 * L_2 = V_0;
		// source.volume = 0.5f;
		NullCheck(L_2);
		AudioSource_set_volume_m1273312851(L_2, (0.5f), /*hidden argument*/NULL);
		// source.Play ();
		AudioSource_t3935305588 * L_3 = V_0;
		// source.Play ();
		NullCheck(L_3);
		AudioSource_Play_m48294159(L_3, /*hidden argument*/NULL);
		// }
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
// System.Void BlockController::.ctor()
extern "C"  void BlockController__ctor_m1227052890 (BlockController_t3805442049 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BlockController::Break()
extern "C"  void BlockController_Break_m2204360455 (BlockController_t3805442049 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BlockController_Break_m2204360455_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy (this.gameObject);
		// Destroy (this.gameObject);
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		// Destroy (this.gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		// this.gameObject.GetComponent<SoundController> ().PlaySound ();
		// this.gameObject.GetComponent<SoundController> ().PlaySound ();
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		// this.gameObject.GetComponent<SoundController> ().PlaySound ();
		NullCheck(L_1);
		SoundController_t2462365417 * L_2 = GameObject_GetComponent_TisSoundController_t2462365417_m3930652079(L_1, /*hidden argument*/GameObject_GetComponent_TisSoundController_t2462365417_m3930652079_RuntimeMethod_var);
		// this.gameObject.GetComponent<SoundController> ().PlaySound ();
		NullCheck(L_2);
		SoundController_PlaySound_m4128028087(L_2, /*hidden argument*/NULL);
		// Instantiate (breakEffect, transform.position, Quaternion.identity);
		GameObject_t1113636619 * L_3 = __this->get_breakEffect_2();
		// Instantiate (breakEffect, transform.position, Quaternion.identity);
		Transform_t3600365921 * L_4 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// Instantiate (breakEffect, transform.position, Quaternion.identity);
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Transform_get_position_m36019626(L_4, /*hidden argument*/NULL);
		// Instantiate (breakEffect, transform.position, Quaternion.identity);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_6 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		// Instantiate (breakEffect, transform.position, Quaternion.identity);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_3, L_5, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		// }
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
// System.Void CameraManager::.ctor()
extern "C"  void CameraManager__ctor_m1868457377 (CameraManager_t3272490737 * __this, const RuntimeMethod* method)
{
	{
		// private CameraStatus status = CameraStatus.First;
		__this->set_status_4(0);
		// private bool isDown = false;
		__this->set_isDown_6((bool)0);
		// private bool isUp = false;
		__this->set_isUp_7((bool)0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraManager::Start()
extern "C"  void CameraManager_Start_m229022957 (CameraManager_t3272490737 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraManager_Start_m229022957_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mainCamera.SetActive (true);
		GameObject_t1113636619 * L_0 = __this->get_mainCamera_2();
		// mainCamera.SetActive (true);
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)1, /*hidden argument*/NULL);
		// playerCamera.SetActive (false);
		GameObject_t1113636619 * L_1 = __this->get_playerCamera_3();
		// playerCamera.SetActive (false);
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		// mcm = mainCamera.GetComponent<MainCameraManager> ();
		GameObject_t1113636619 * L_2 = __this->get_mainCamera_2();
		// mcm = mainCamera.GetComponent<MainCameraManager> ();
		NullCheck(L_2);
		MainCameraManager_t346017319 * L_3 = GameObject_GetComponent_TisMainCameraManager_t346017319_m3414863324(L_2, /*hidden argument*/GameObject_GetComponent_TisMainCameraManager_t346017319_m3414863324_RuntimeMethod_var);
		__this->set_mcm_5(L_3);
		// }
		return;
	}
}
// System.Void CameraManager::Update()
extern "C"  void CameraManager_Update_m3936851683 (CameraManager_t3272490737 * __this, const RuntimeMethod* method)
{
	{
		// if(status == CameraStatus.Moving & isDown & mcm.isFinished()) {
		int32_t L_0 = __this->get_status_4();
		bool L_1 = __this->get_isDown_6();
		MainCameraManager_t346017319 * L_2 = __this->get_mcm_5();
		// if(status == CameraStatus.Moving & isDown & mcm.isFinished()) {
		NullCheck(L_2);
		bool L_3 = MainCameraManager_isFinished_m3599236710(L_2, /*hidden argument*/NULL);
		if (!((int32_t)((int32_t)((int32_t)((int32_t)((((int32_t)L_0) == ((int32_t)1))? 1 : 0)&(int32_t)L_1))&(int32_t)L_3)))
		{
			goto IL_004a;
		}
	}
	{
		// status = CameraStatus.Playing;
		__this->set_status_4(2);
		// mainCamera.SetActive (false);
		GameObject_t1113636619 * L_4 = __this->get_mainCamera_2();
		// mainCamera.SetActive (false);
		NullCheck(L_4);
		GameObject_SetActive_m796801857(L_4, (bool)0, /*hidden argument*/NULL);
		// playerCamera.SetActive (true);
		GameObject_t1113636619 * L_5 = __this->get_playerCamera_3();
		// playerCamera.SetActive (true);
		NullCheck(L_5);
		GameObject_SetActive_m796801857(L_5, (bool)1, /*hidden argument*/NULL);
		// isDown = false;
		__this->set_isDown_6((bool)0);
	}

IL_004a:
	{
		// if(status == CameraStatus.Moving & isUp & mcm.isFinished()) {
		int32_t L_6 = __this->get_status_4();
		bool L_7 = __this->get_isUp_7();
		MainCameraManager_t346017319 * L_8 = __this->get_mcm_5();
		// if(status == CameraStatus.Moving & isUp & mcm.isFinished()) {
		NullCheck(L_8);
		bool L_9 = MainCameraManager_isFinished_m3599236710(L_8, /*hidden argument*/NULL);
		if (!((int32_t)((int32_t)((int32_t)((int32_t)((((int32_t)L_6) == ((int32_t)1))? 1 : 0)&(int32_t)L_7))&(int32_t)L_9)))
		{
			goto IL_007b;
		}
	}
	{
		// status = CameraStatus.End;
		__this->set_status_4(4);
		// isUp = false;
		__this->set_isUp_7((bool)0);
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void CameraManager::DownCamera()
extern "C"  void CameraManager_DownCamera_m1029157112 (CameraManager_t3272490737 * __this, const RuntimeMethod* method)
{
	{
		// status = CameraStatus.Moving;
		__this->set_status_4(1);
		// mcm.PlayDownAnimation ();
		MainCameraManager_t346017319 * L_0 = __this->get_mcm_5();
		// mcm.PlayDownAnimation ();
		NullCheck(L_0);
		MainCameraManager_PlayDownAnimation_m2028542735(L_0, /*hidden argument*/NULL);
		// isDown = true;
		__this->set_isDown_6((bool)1);
		// }
		return;
	}
}
// System.Void CameraManager::UpCamera()
extern "C"  void CameraManager_UpCamera_m633613341 (CameraManager_t3272490737 * __this, const RuntimeMethod* method)
{
	{
		// status = CameraStatus.Moving;
		__this->set_status_4(1);
		// mainCamera.transform.rotation = playerCamera.transform.rotation;
		GameObject_t1113636619 * L_0 = __this->get_mainCamera_2();
		// mainCamera.transform.rotation = playerCamera.transform.rotation;
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_playerCamera_3();
		// mainCamera.transform.rotation = playerCamera.transform.rotation;
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = GameObject_get_transform_m1369836730(L_2, /*hidden argument*/NULL);
		// mainCamera.transform.rotation = playerCamera.transform.rotation;
		NullCheck(L_3);
		Quaternion_t2301928331  L_4 = Transform_get_rotation_m3502953881(L_3, /*hidden argument*/NULL);
		// mainCamera.transform.rotation = playerCamera.transform.rotation;
		NullCheck(L_1);
		Transform_set_rotation_m3524318132(L_1, L_4, /*hidden argument*/NULL);
		// mainCamera.SetActive (true);
		GameObject_t1113636619 * L_5 = __this->get_mainCamera_2();
		// mainCamera.SetActive (true);
		NullCheck(L_5);
		GameObject_SetActive_m796801857(L_5, (bool)1, /*hidden argument*/NULL);
		// playerCamera.SetActive (false);
		GameObject_t1113636619 * L_6 = __this->get_playerCamera_3();
		// playerCamera.SetActive (false);
		NullCheck(L_6);
		GameObject_SetActive_m796801857(L_6, (bool)0, /*hidden argument*/NULL);
		// mcm.PlayUpAnimation ();
		MainCameraManager_t346017319 * L_7 = __this->get_mcm_5();
		// mcm.PlayUpAnimation ();
		NullCheck(L_7);
		MainCameraManager_PlayUpAnimation_m3771979649(L_7, /*hidden argument*/NULL);
		// isUp = true;
		__this->set_isUp_7((bool)1);
		// }
		return;
	}
}
// CameraManager/CameraStatus CameraManager::GetStatus()
extern "C"  int32_t CameraManager_GetStatus_m3786155143 (CameraManager_t3272490737 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return status;
		int32_t L_0 = __this->get_status_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void CameraManager::SetStatus(CameraManager/CameraStatus)
extern "C"  void CameraManager_SetStatus_m2778707669 (CameraManager_t3272490737 * __this, int32_t ___setStatus0, const RuntimeMethod* method)
{
	{
		// status = setStatus;
		int32_t L_0 = ___setStatus0;
		__this->set_status_4(L_0);
		// }
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
// System.Void GameManager::.ctor()
extern "C"  void GameManager__ctor_m180891015 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	{
		// private GameStatus status = GameStatus.None;
		__this->set_status_16(3);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::Start()
extern "C"  void GameManager_Start_m2734446095 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Start_m2734446095_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSource = GetComponent<AudioSource> ();
		// audioSource = GetComponent<AudioSource> ();
		AudioSource_t3935305588 * L_0 = Component_GetComponent_TisAudioSource_t3935305588_m1977431131(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t3935305588_m1977431131_RuntimeMethod_var);
		__this->set_audioSource_12(L_0);
		// }
		return;
	}
}
// System.Void GameManager::Update()
extern "C"  void GameManager_Update_m1981238775 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Update_m1981238775_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(isGame) {
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		bool L_0 = ((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->get_isGame_15();
		if (!L_0)
		{
			goto IL_0035;
		}
	}
	{
		// pc = player.GetComponent<PlayerController> ();
		GameObject_t1113636619 * L_1 = __this->get_player_4();
		// pc = player.GetComponent<PlayerController> ();
		NullCheck(L_1);
		PlayerController_t2064355688 * L_2 = GameObject_GetComponent_TisPlayerController_t2064355688_m2241011631(L_1, /*hidden argument*/GameObject_GetComponent_TisPlayerController_t2064355688_m2241011631_RuntimeMethod_var);
		__this->set_pc_13(L_2);
		// bm = ball.GetComponent<BallManager> ();
		GameObject_t1113636619 * L_3 = __this->get_ball_5();
		// bm = ball.GetComponent<BallManager> ();
		NullCheck(L_3);
		BallManager_t2004465268 * L_4 = GameObject_GetComponent_TisBallManager_t2004465268_m4041910020(L_3, /*hidden argument*/GameObject_GetComponent_TisBallManager_t2004465268_m4041910020_RuntimeMethod_var);
		__this->set_bm_14(L_4);
		// isGame = false;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->set_isGame_15((bool)0);
	}

IL_0035:
	{
		// ActionByScene ();
		// ActionByScene ();
		GameManager_ActionByScene_m107967549(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::ActionByScene()
extern "C"  void GameManager_ActionByScene_m107967549 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_ActionByScene_m107967549_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// switch(sc.GetStatus()) {
		SceneController_t2849316448 * L_0 = __this->get_sc_2();
		// switch(sc.GetStatus()) {
		NullCheck(L_0);
		int32_t L_1 = SceneController_GetStatus_m4010357723(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// switch(sc.GetStatus()) {
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_006a;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0265;
		}
	}
	{
		goto IL_026a;
	}

IL_0026:
	{
		// if (im.CheckTouch ()) {
		InputManager_t2926777569 * L_5 = __this->get_im_3();
		// if (im.CheckTouch ()) {
		NullCheck(L_5);
		bool L_6 = InputManager_CheckTouch_m1272290747(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0065;
		}
	}
	{
		// isGame = true;
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->set_isGame_15((bool)1);
		// sc.NextScene();
		SceneController_t2849316448 * L_7 = __this->get_sc_2();
		// sc.NextScene();
		NullCheck(L_7);
		SceneController_NextScene_m2948675565(L_7, /*hidden argument*/NULL);
		// audioSource.clip = touchSound;
		AudioSource_t3935305588 * L_8 = __this->get_audioSource_12();
		AudioClip_t3680889665 * L_9 = __this->get_touchSound_11();
		// audioSource.clip = touchSound;
		NullCheck(L_8);
		AudioSource_set_clip_m31653938(L_8, L_9, /*hidden argument*/NULL);
		// audioSource.Play ();
		AudioSource_t3935305588 * L_10 = __this->get_audioSource_12();
		// audioSource.Play ();
		NullCheck(L_10);
		AudioSource_Play_m48294159(L_10, /*hidden argument*/NULL);
	}

IL_0065:
	{
		// break;
		goto IL_026a;
	}

IL_006a:
	{
		// InputManager.InputKey key = im.CheckPushKeys ();
		InputManager_t2926777569 * L_11 = __this->get_im_3();
		// InputManager.InputKey key = im.CheckPushKeys ();
		NullCheck(L_11);
		int32_t L_12 = InputManager_CheckPushKeys_m3035302622(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		// if (key == InputManager.InputKey.A) {
		int32_t L_13 = V_1;
		if ((!(((uint32_t)L_13) == ((uint32_t)2))))
		{
			goto IL_008a;
		}
	}
	{
		// pc.turnLeft ();
		PlayerController_t2064355688 * L_14 = __this->get_pc_13();
		// pc.turnLeft ();
		NullCheck(L_14);
		PlayerController_turnLeft_m513767988(L_14, /*hidden argument*/NULL);
	}

IL_008a:
	{
		// if (key == InputManager.InputKey.D) {
		int32_t L_15 = V_1;
		if ((!(((uint32_t)L_15) == ((uint32_t)3))))
		{
			goto IL_009e;
		}
	}
	{
		// pc.turnRight ();
		PlayerController_t2064355688 * L_16 = __this->get_pc_13();
		// pc.turnRight ();
		NullCheck(L_16);
		PlayerController_turnRight_m2510886191(L_16, /*hidden argument*/NULL);
	}

IL_009e:
	{
		// switch (cm.GetStatus ()) {
		CameraManager_t3272490737 * L_17 = __this->get_cm_6();
		// switch (cm.GetStatus ()) {
		NullCheck(L_17);
		int32_t L_18 = CameraManager_GetStatus_m3786155143(L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		// switch (cm.GetStatus ()) {
		int32_t L_19 = V_2;
		switch (L_19)
		{
			case 0:
			{
				goto IL_00c9;
			}
			case 1:
			{
				goto IL_0260;
			}
			case 2:
			{
				goto IL_0107;
			}
			case 3:
			{
				goto IL_01ab;
			}
			case 4:
			{
				goto IL_01e9;
			}
		}
	}
	{
		goto IL_0260;
	}

IL_00c9:
	{
		// if (im.CheckTouch ()) {
		InputManager_t2926777569 * L_20 = __this->get_im_3();
		// if (im.CheckTouch ()) {
		NullCheck(L_20);
		bool L_21 = InputManager_CheckTouch_m1272290747(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0102;
		}
	}
	{
		// cm.DownCamera ();
		CameraManager_t3272490737 * L_22 = __this->get_cm_6();
		// cm.DownCamera ();
		NullCheck(L_22);
		CameraManager_DownCamera_m1029157112(L_22, /*hidden argument*/NULL);
		// audioSource.clip = touchSound;
		AudioSource_t3935305588 * L_23 = __this->get_audioSource_12();
		AudioClip_t3680889665 * L_24 = __this->get_touchSound_11();
		// audioSource.clip = touchSound;
		NullCheck(L_23);
		AudioSource_set_clip_m31653938(L_23, L_24, /*hidden argument*/NULL);
		// audioSource.Play ();
		AudioSource_t3935305588 * L_25 = __this->get_audioSource_12();
		// audioSource.Play ();
		NullCheck(L_25);
		AudioSource_Play_m48294159(L_25, /*hidden argument*/NULL);
	}

IL_0102:
	{
		// break;
		goto IL_0260;
	}

IL_0107:
	{
		// if (im.CheckTouch ()) {
		InputManager_t2926777569 * L_26 = __this->get_im_3();
		// if (im.CheckTouch ()) {
		NullCheck(L_26);
		bool L_27 = InputManager_CheckTouch_m1272290747(L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0124;
		}
	}
	{
		// bm.Fire ();
		BallManager_t2004465268 * L_28 = __this->get_bm_14();
		// bm.Fire ();
		NullCheck(L_28);
		BallManager_Fire_m3244531822(L_28, /*hidden argument*/NULL);
	}

IL_0124:
	{
		// if(sm.isFinish()) {
		StageManager_t3296066545 * L_29 = __this->get_sm_7();
		// if(sm.isFinish()) {
		NullCheck(L_29);
		bool L_30 = StageManager_isFinish_m2487550001(L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0165;
		}
	}
	{
		// cm.SetStatus (CameraManager.CameraStatus.Finish);
		CameraManager_t3272490737 * L_31 = __this->get_cm_6();
		// cm.SetStatus (CameraManager.CameraStatus.Finish);
		NullCheck(L_31);
		CameraManager_SetStatus_m2778707669(L_31, 3, /*hidden argument*/NULL);
		// status = GameStatus.Clear;
		__this->set_status_16(0);
		// audioSource.clip = clearSound;
		AudioSource_t3935305588 * L_32 = __this->get_audioSource_12();
		AudioClip_t3680889665 * L_33 = __this->get_clearSound_9();
		// audioSource.clip = clearSound;
		NullCheck(L_32);
		AudioSource_set_clip_m31653938(L_32, L_33, /*hidden argument*/NULL);
		// audioSource.Play ();
		AudioSource_t3935305588 * L_34 = __this->get_audioSource_12();
		// audioSource.Play ();
		NullCheck(L_34);
		AudioSource_Play_m48294159(L_34, /*hidden argument*/NULL);
	}

IL_0165:
	{
		// if(pc.checkDeath()) {
		PlayerController_t2064355688 * L_35 = __this->get_pc_13();
		// if(pc.checkDeath()) {
		NullCheck(L_35);
		bool L_36 = PlayerController_checkDeath_m889537932(L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_01a6;
		}
	}
	{
		// cm.SetStatus (CameraManager.CameraStatus.Finish);
		CameraManager_t3272490737 * L_37 = __this->get_cm_6();
		// cm.SetStatus (CameraManager.CameraStatus.Finish);
		NullCheck(L_37);
		CameraManager_SetStatus_m2778707669(L_37, 3, /*hidden argument*/NULL);
		// status = GameStatus.Over;
		__this->set_status_16(1);
		// audioSource.clip = overSound;
		AudioSource_t3935305588 * L_38 = __this->get_audioSource_12();
		AudioClip_t3680889665 * L_39 = __this->get_overSound_10();
		// audioSource.clip = overSound;
		NullCheck(L_38);
		AudioSource_set_clip_m31653938(L_38, L_39, /*hidden argument*/NULL);
		// audioSource.Play ();
		AudioSource_t3935305588 * L_40 = __this->get_audioSource_12();
		// audioSource.Play ();
		NullCheck(L_40);
		AudioSource_Play_m48294159(L_40, /*hidden argument*/NULL);
	}

IL_01a6:
	{
		// break;
		goto IL_0260;
	}

IL_01ab:
	{
		// if (im.CheckTouch ()) {
		InputManager_t2926777569 * L_41 = __this->get_im_3();
		// if (im.CheckTouch ()) {
		NullCheck(L_41);
		bool L_42 = InputManager_CheckTouch_m1272290747(L_41, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_01e4;
		}
	}
	{
		// cm.UpCamera ();
		CameraManager_t3272490737 * L_43 = __this->get_cm_6();
		// cm.UpCamera ();
		NullCheck(L_43);
		CameraManager_UpCamera_m633613341(L_43, /*hidden argument*/NULL);
		// audioSource.clip = touchSound;
		AudioSource_t3935305588 * L_44 = __this->get_audioSource_12();
		AudioClip_t3680889665 * L_45 = __this->get_touchSound_11();
		// audioSource.clip = touchSound;
		NullCheck(L_44);
		AudioSource_set_clip_m31653938(L_44, L_45, /*hidden argument*/NULL);
		// audioSource.Play ();
		AudioSource_t3935305588 * L_46 = __this->get_audioSource_12();
		// audioSource.Play ();
		NullCheck(L_46);
		AudioSource_Play_m48294159(L_46, /*hidden argument*/NULL);
	}

IL_01e4:
	{
		// break;
		goto IL_0260;
	}

IL_01e9:
	{
		// switch(status) {
		int32_t L_47 = __this->get_status_16();
		V_3 = L_47;
		// switch(status) {
		int32_t L_48 = V_3;
		if (!L_48)
		{
			goto IL_0202;
		}
	}
	{
		int32_t L_49 = V_3;
		if ((((int32_t)L_49) == ((int32_t)1)))
		{
			goto IL_0212;
		}
	}
	{
		goto IL_0222;
	}

IL_0202:
	{
		// stm.ShowClear ();
		StageTextManager_t1380114822 * L_50 = __this->get_stm_8();
		// stm.ShowClear ();
		NullCheck(L_50);
		StageTextManager_ShowClear_m337854032(L_50, /*hidden argument*/NULL);
		// break;
		goto IL_0222;
	}

IL_0212:
	{
		// stm.ShowOver ();
		StageTextManager_t1380114822 * L_51 = __this->get_stm_8();
		// stm.ShowOver ();
		NullCheck(L_51);
		StageTextManager_ShowOver_m1091829582(L_51, /*hidden argument*/NULL);
		// break;
		goto IL_0222;
	}

IL_0222:
	{
		// if (im.CheckTouch ()) {
		InputManager_t2926777569 * L_52 = __this->get_im_3();
		// if (im.CheckTouch ()) {
		NullCheck(L_52);
		bool L_53 = InputManager_CheckTouch_m1272290747(L_52, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_025b;
		}
	}
	{
		// audioSource.clip = touchSound;
		AudioSource_t3935305588 * L_54 = __this->get_audioSource_12();
		AudioClip_t3680889665 * L_55 = __this->get_touchSound_11();
		// audioSource.clip = touchSound;
		NullCheck(L_54);
		AudioSource_set_clip_m31653938(L_54, L_55, /*hidden argument*/NULL);
		// audioSource.Play ();
		AudioSource_t3935305588 * L_56 = __this->get_audioSource_12();
		// audioSource.Play ();
		NullCheck(L_56);
		AudioSource_Play_m48294159(L_56, /*hidden argument*/NULL);
		// sm.NextStage ();
		StageManager_t3296066545 * L_57 = __this->get_sm_7();
		// sm.NextStage ();
		NullCheck(L_57);
		StageManager_NextStage_m2693353284(L_57, /*hidden argument*/NULL);
	}

IL_025b:
	{
		// break;
		goto IL_0260;
	}

IL_0260:
	{
		// break;
		goto IL_026a;
	}

IL_0265:
	{
		// break;
		goto IL_026a;
	}

IL_026a:
	{
		// }
		return;
	}
}
// System.Void GameManager::.cctor()
extern "C"  void GameManager__cctor_m4243923930 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager__cctor_m4243923930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static bool isGame = false;
		((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->set_isGame_15((bool)0);
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
// System.Void GyroManager::.ctor()
extern "C"  void GyroManager__ctor_m3653683213 (GyroManager_t2156710008 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GyroManager::Start()
extern "C"  void GyroManager_Start_m2330482887 (GyroManager_t2156710008 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GyroManager_Start_m2330482887_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isEditor) {
		bool L_0 = Application_get_isEditor_m857789090(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		// Input.gyro.enabled = true;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Gyroscope_t3288342876 * L_1 = Input_get_gyro_m1976156202(NULL /*static, unused*/, /*hidden argument*/NULL);
		// Input.gyro.enabled = true;
		NullCheck(L_1);
		Gyroscope_set_enabled_m3781734411(L_1, (bool)1, /*hidden argument*/NULL);
		goto IL_002a;
	}

IL_001d:
	{
		// Input.gyro.enabled = false;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Gyroscope_t3288342876 * L_2 = Input_get_gyro_m1976156202(NULL /*static, unused*/, /*hidden argument*/NULL);
		// Input.gyro.enabled = false;
		NullCheck(L_2);
		Gyroscope_set_enabled_m3781734411(L_2, (bool)0, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// UnityEngine.Quaternion GyroManager::GetGyro()
extern "C"  Quaternion_t2301928331  GyroManager_GetGyro_m182045473 (GyroManager_t2156710008 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GyroManager_GetGyro_m182045473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t2301928331  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// Quaternion gyro = Input.gyro.attitude;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Gyroscope_t3288342876 * L_0 = Input_get_gyro_m1976156202(NULL /*static, unused*/, /*hidden argument*/NULL);
		// Quaternion gyro = Input.gyro.attitude;
		NullCheck(L_0);
		Quaternion_t2301928331  L_1 = Gyroscope_get_attitude_m1331166065(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// return (Quaternion.Euler(90, 0, 0) * (new Quaternion(-gyro.x, -gyro.y, gyro.z, gyro.w)));
		// return (Quaternion.Euler(90, 0, 0) * (new Quaternion(-gyro.x, -gyro.y, gyro.z, gyro.w)));
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_2 = Quaternion_Euler_m3049309462(NULL /*static, unused*/, (90.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		float L_3 = (&V_0)->get_x_0();
		float L_4 = (&V_0)->get_y_1();
		float L_5 = (&V_0)->get_z_2();
		float L_6 = (&V_0)->get_w_3();
		// return (Quaternion.Euler(90, 0, 0) * (new Quaternion(-gyro.x, -gyro.y, gyro.z, gyro.w)));
		Quaternion_t2301928331  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Quaternion__ctor_m435141806((&L_7), ((-L_3)), ((-L_4)), L_5, L_6, /*hidden argument*/NULL);
		// return (Quaternion.Euler(90, 0, 0) * (new Quaternion(-gyro.x, -gyro.y, gyro.z, gyro.w)));
		Quaternion_t2301928331  L_8 = Quaternion_op_Multiply_m1294064023(NULL /*static, unused*/, L_2, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_004e;
	}

IL_004e:
	{
		// }
		Quaternion_t2301928331  L_9 = V_1;
		return L_9;
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
// System.Void InputManager::.ctor()
extern "C"  void InputManager__ctor_m3116763274 (InputManager_t2926777569 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// InputManager/InputKey InputManager::CheckPushKeys()
extern "C"  int32_t InputManager_CheckPushKeys_m3035302622 (InputManager_t2926777569 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputManager_CheckPushKeys_m3035302622_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(Input.GetKey(KeyCode.A)) {
		// if(Input.GetKey(KeyCode.A)) {
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m3736388334(NULL /*static, unused*/, ((int32_t)97), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// return InputKey.A;
		V_0 = 2;
		goto IL_0030;
	}

IL_0015:
	{
		// if(Input.GetKey(KeyCode.D)) {
		// if(Input.GetKey(KeyCode.D)) {
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKey_m3736388334(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// return InputKey.D;
		V_0 = 3;
		goto IL_0030;
	}

IL_0029:
	{
		// return InputKey.None;
		V_0 = 0;
		goto IL_0030;
	}

IL_0030:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean InputManager::CheckTouch()
extern "C"  bool InputManager_CheckTouch_m1272290747 (InputManager_t2926777569 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if(AppUtil.GetTouch() == AppUtil.TouchInfo.Ended) {
		int32_t L_0 = AppUtil_GetTouch_m3882990969(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_0014;
		}
	}
	{
		// return true;
		V_0 = (bool)1;
		goto IL_001b;
	}

IL_0014:
	{
		// return false;
		V_0 = (bool)0;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		bool L_1 = V_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MainCameraManager::.ctor()
extern "C"  void MainCameraManager__ctor_m601788750 (MainCameraManager_t346017319 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainCameraManager::Start()
extern "C"  void MainCameraManager_Start_m3453783040 (MainCameraManager_t346017319 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainCameraManager_Start_m3453783040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animation> ();
		// anim = GetComponent<Animation> ();
		Animation_t3648466861 * L_0 = Component_GetComponent_TisAnimation_t3648466861_m4214971628(__this, /*hidden argument*/Component_GetComponent_TisAnimation_t3648466861_m4214971628_RuntimeMethod_var);
		__this->set_anim_2(L_0);
		// }
		return;
	}
}
// System.Void MainCameraManager::PlayDownAnimation()
extern "C"  void MainCameraManager_PlayDownAnimation_m2028542735 (MainCameraManager_t346017319 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainCameraManager_PlayDownAnimation_m2028542735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.Play ("DownCamera");
		Animation_t3648466861 * L_0 = __this->get_anim_2();
		// anim.Play ("DownCamera");
		NullCheck(L_0);
		Animation_Play_m27531216(L_0, _stringLiteral3478956332, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainCameraManager::PlayUpAnimation()
extern "C"  void MainCameraManager_PlayUpAnimation_m3771979649 (MainCameraManager_t346017319 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MainCameraManager_PlayUpAnimation_m3771979649_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.Play ("UpCamera");
		Animation_t3648466861 * L_0 = __this->get_anim_2();
		// anim.Play ("UpCamera");
		NullCheck(L_0);
		Animation_Play_m27531216(L_0, _stringLiteral302003725, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean MainCameraManager::isFinished()
extern "C"  bool MainCameraManager_isFinished_m3599236710 (MainCameraManager_t346017319 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return !anim.isPlaying;
		Animation_t3648466861 * L_0 = __this->get_anim_2();
		// return !anim.isPlaying;
		NullCheck(L_0);
		bool L_1 = Animation_get_isPlaying_m1022540967(L_0, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		// }
		bool L_2 = V_0;
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
// System.Void ObjectCreator::.ctor()
extern "C"  void ObjectCreator__ctor_m698451345 (ObjectCreator_t3827148781 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ObjectCreator::Start()
extern "C"  void ObjectCreator_Start_m3555774577 (ObjectCreator_t3827148781 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ObjectCreator::Update()
extern "C"  void ObjectCreator_Update_m443555294 (ObjectCreator_t3827148781 * __this, const RuntimeMethod* method)
{
	{
		// }
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
// System.Void PlayerCamera::.ctor()
extern "C"  void PlayerCamera__ctor_m2292697031 (PlayerCamera_t1622178205 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerCamera::Start()
extern "C"  void PlayerCamera_Start_m3648269509 (PlayerCamera_t1622178205 * __this, const RuntimeMethod* method)
{
	{
		// firstDirection = this.transform.rotation;
		// firstDirection = this.transform.rotation;
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// firstDirection = this.transform.rotation;
		NullCheck(L_0);
		Quaternion_t2301928331  L_1 = Transform_get_rotation_m3502953881(L_0, /*hidden argument*/NULL);
		__this->set_firstDirection_3(L_1);
		// }
		return;
	}
}
// System.Void PlayerCamera::Update()
extern "C"  void PlayerCamera_Update_m1529155267 (PlayerCamera_t1622178205 * __this, const RuntimeMethod* method)
{
	{
		// SetDirection ();
		// SetDirection ();
		PlayerCamera_SetDirection_m3073669278(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion PlayerCamera::GetDirection()
extern "C"  Quaternion_t2301928331  PlayerCamera_GetDirection_m2596322655 (PlayerCamera_t1622178205 * __this, const RuntimeMethod* method)
{
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t2301928331  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// Quaternion playerDirection = player.transform.rotation;
		GameObject_t1113636619 * L_0 = __this->get_player_2();
		// Quaternion playerDirection = player.transform.rotation;
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		// Quaternion playerDirection = player.transform.rotation;
		NullCheck(L_1);
		Quaternion_t2301928331  L_2 = Transform_get_rotation_m3502953881(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// return new Quaternion (firstDirection.x, playerDirection.y, playerDirection.z, playerDirection.w);
		Quaternion_t2301928331 * L_3 = __this->get_address_of_firstDirection_3();
		float L_4 = L_3->get_x_0();
		float L_5 = (&V_0)->get_y_1();
		float L_6 = (&V_0)->get_z_2();
		float L_7 = (&V_0)->get_w_3();
		// return new Quaternion (firstDirection.x, playerDirection.y, playerDirection.z, playerDirection.w);
		Quaternion_t2301928331  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Quaternion__ctor_m435141806((&L_8), L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		// }
		Quaternion_t2301928331  L_9 = V_1;
		return L_9;
	}
}
// System.Void PlayerCamera::SetDirection()
extern "C"  void PlayerCamera_SetDirection_m3073669278 (PlayerCamera_t1622178205 * __this, const RuntimeMethod* method)
{
	{
		// this.transform.rotation = GetDirection();
		// this.transform.rotation = GetDirection();
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// this.transform.rotation = GetDirection();
		Quaternion_t2301928331  L_1 = PlayerCamera_GetDirection_m2596322655(__this, /*hidden argument*/NULL);
		// this.transform.rotation = GetDirection();
		NullCheck(L_0);
		Transform_set_rotation_m3524318132(L_0, L_1, /*hidden argument*/NULL);
		// }
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
// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m1333951952 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	{
		// private float turnSpeed = 3.0f;
		__this->set_turnSpeed_4((3.0f));
		// private bool isDeath = false;
		__this->set_isDeath_6((bool)0);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Start()
extern "C"  void PlayerController_Start_m1746698410 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	{
		// firstDirection = transform.rotation;
		// firstDirection = transform.rotation;
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// firstDirection = transform.rotation;
		NullCheck(L_0);
		Quaternion_t2301928331  L_1 = Transform_get_rotation_m3502953881(L_0, /*hidden argument*/NULL);
		__this->set_firstDirection_5(L_1);
		// }
		return;
	}
}
// System.Void PlayerController::Update()
extern "C"  void PlayerController_Update_m848427540 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Update_m848427540_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.gyro.enabled) {
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Gyroscope_t3288342876 * L_0 = Input_get_gyro_m1976156202(NULL /*static, unused*/, /*hidden argument*/NULL);
		// if (Input.gyro.enabled) {
		NullCheck(L_0);
		bool L_1 = Gyroscope_get_enabled_m2811632353(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// SetGyroDirection ();
		// SetGyroDirection ();
		PlayerController_SetGyroDirection_m4240618230(__this, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// UnityEngine.Quaternion PlayerController::GetDirection()
extern "C"  Quaternion_t2301928331  PlayerController_GetDirection_m1863949902 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Quaternion_t2301928331  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		// Quaternion playerDirection = this.transform.rotation;
		// Quaternion playerDirection = this.transform.rotation;
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// Quaternion playerDirection = this.transform.rotation;
		NullCheck(L_0);
		Quaternion_t2301928331  L_1 = Transform_get_rotation_m3502953881(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// return new Quaternion (firstDirection.x, playerDirection.y, playerDirection.z, playerDirection.w);
		Quaternion_t2301928331 * L_2 = __this->get_address_of_firstDirection_5();
		float L_3 = L_2->get_x_0();
		float L_4 = (&V_0)->get_y_1();
		float L_5 = (&V_0)->get_z_2();
		float L_6 = (&V_0)->get_w_3();
		// return new Quaternion (firstDirection.x, playerDirection.y, playerDirection.z, playerDirection.w);
		Quaternion_t2301928331  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Quaternion__ctor_m435141806((&L_7), L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_0038;
	}

IL_0038:
	{
		// }
		Quaternion_t2301928331  L_8 = V_1;
		return L_8;
	}
}
// System.Void PlayerController::SetGyroDirection()
extern "C"  void PlayerController_SetGyroDirection_m4240618230 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	Quaternion_t2301928331  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// Quaternion gyroDirection = gm.GetGyro ();
		GyroManager_t2156710008 * L_0 = __this->get_gm_2();
		// Quaternion gyroDirection = gm.GetGyro ();
		NullCheck(L_0);
		Quaternion_t2301928331  L_1 = GyroManager_GetGyro_m182045473(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// this.transform.rotation = new Quaternion(firstDirection.x, gyroDirection.y, firstDirection.z, gyroDirection.w);
		// this.transform.rotation = new Quaternion(firstDirection.x, gyroDirection.y, firstDirection.z, gyroDirection.w);
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331 * L_3 = __this->get_address_of_firstDirection_5();
		float L_4 = L_3->get_x_0();
		float L_5 = (&V_0)->get_y_1();
		Quaternion_t2301928331 * L_6 = __this->get_address_of_firstDirection_5();
		float L_7 = L_6->get_z_2();
		float L_8 = (&V_0)->get_w_3();
		// this.transform.rotation = new Quaternion(firstDirection.x, gyroDirection.y, firstDirection.z, gyroDirection.w);
		Quaternion_t2301928331  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Quaternion__ctor_m435141806((&L_9), L_4, L_5, L_7, L_8, /*hidden argument*/NULL);
		// this.transform.rotation = new Quaternion(firstDirection.x, gyroDirection.y, firstDirection.z, gyroDirection.w);
		NullCheck(L_2);
		Transform_set_rotation_m3524318132(L_2, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerController::turnRight()
extern "C"  void PlayerController_turnRight_m2510886191 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	{
		// this.transform.Rotate (new Vector3(0, turnSpeed, 0));
		// this.transform.Rotate (new Vector3(0, turnSpeed, 0));
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_turnSpeed_4();
		// this.transform.Rotate (new Vector3(0, turnSpeed, 0));
		Vector3_t3722313464  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m3353183577((&L_2), (0.0f), L_1, (0.0f), /*hidden argument*/NULL);
		// this.transform.Rotate (new Vector3(0, turnSpeed, 0));
		NullCheck(L_0);
		Transform_Rotate_m720511863(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerController::turnLeft()
extern "C"  void PlayerController_turnLeft_m513767988 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	{
		// this.transform.Rotate (new Vector3(0, -turnSpeed, 0));
		// this.transform.Rotate (new Vector3(0, -turnSpeed, 0));
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_turnSpeed_4();
		// this.transform.Rotate (new Vector3(0, -turnSpeed, 0));
		Vector3_t3722313464  L_2;
		memset(&L_2, 0, sizeof(L_2));
		Vector3__ctor_m3353183577((&L_2), (0.0f), ((-L_1)), (0.0f), /*hidden argument*/NULL);
		// this.transform.Rotate (new Vector3(0, -turnSpeed, 0));
		NullCheck(L_0);
		Transform_Rotate_m720511863(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Death()
extern "C"  void PlayerController_Death_m560526479 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Death_m560526479_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isDeath = true;
		__this->set_isDeath_6((bool)1);
		// if(cm.GetStatus() == CameraManager.CameraStatus.Playing) {
		CameraManager_t3272490737 * L_0 = __this->get_cm_3();
		// if(cm.GetStatus() == CameraManager.CameraStatus.Playing) {
		NullCheck(L_0);
		int32_t L_1 = CameraManager_GetStatus_m3786155143(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_002b;
		}
	}
	{
		// this.gameObject.GetComponent<SoundController> ().PlaySound ();
		// this.gameObject.GetComponent<SoundController> ().PlaySound ();
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		// this.gameObject.GetComponent<SoundController> ().PlaySound ();
		NullCheck(L_2);
		SoundController_t2462365417 * L_3 = GameObject_GetComponent_TisSoundController_t2462365417_m3930652079(L_2, /*hidden argument*/GameObject_GetComponent_TisSoundController_t2462365417_m3930652079_RuntimeMethod_var);
		// this.gameObject.GetComponent<SoundController> ().PlaySound ();
		NullCheck(L_3);
		SoundController_PlaySound_m4128028087(L_3, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Boolean PlayerController::checkDeath()
extern "C"  bool PlayerController_checkDeath_m889537932 (PlayerController_t2064355688 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return isDeath;
		bool L_0 = __this->get_isDeath_6();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		bool L_1 = V_0;
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
// System.Void SceneController::.ctor()
extern "C"  void SceneController__ctor_m1529108788 (SceneController_t2849316448 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneController::NextScene()
extern "C"  void SceneController_NextScene_m2948675565 (SceneController_t2849316448 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneController_NextScene_m2948675565_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(currentStatus == GameStatus.Title) {
		IL2CPP_RUNTIME_CLASS_INIT(SceneController_t2849316448_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SceneController_t2849316448_StaticFields*)il2cpp_codegen_static_fields_for(SceneController_t2849316448_il2cpp_TypeInfo_var))->get_currentStatus_2();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// LoadGame ();
		// LoadGame ();
		SceneController_LoadGame_m2594758407(__this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// SceneController/GameStatus SceneController::GetStatus()
extern "C"  int32_t SceneController_GetStatus_m4010357723 (SceneController_t2849316448 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneController_GetStatus_m4010357723_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return currentStatus;
		IL2CPP_RUNTIME_CLASS_INIT(SceneController_t2849316448_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SceneController_t2849316448_StaticFields*)il2cpp_codegen_static_fields_for(SceneController_t2849316448_il2cpp_TypeInfo_var))->get_currentStatus_2();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void SceneController::SetStatus(SceneController/GameStatus)
extern "C"  void SceneController_SetStatus_m3328661133 (SceneController_t2849316448 * __this, int32_t ___status0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneController_SetStatus_m3328661133_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentStatus = status;
		int32_t L_0 = ___status0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneController_t2849316448_il2cpp_TypeInfo_var);
		((SceneController_t2849316448_StaticFields*)il2cpp_codegen_static_fields_for(SceneController_t2849316448_il2cpp_TypeInfo_var))->set_currentStatus_2(L_0);
		// }
		return;
	}
}
// System.Void SceneController::LoadGame()
extern "C"  void SceneController_LoadGame_m2594758407 (SceneController_t2849316448 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneController_LoadGame_m2594758407_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("GameScene");
		// SceneManager.LoadScene("GameScene");
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral3105844272, /*hidden argument*/NULL);
		// currentStatus = GameStatus.Game;
		IL2CPP_RUNTIME_CLASS_INIT(SceneController_t2849316448_il2cpp_TypeInfo_var);
		((SceneController_t2849316448_StaticFields*)il2cpp_codegen_static_fields_for(SceneController_t2849316448_il2cpp_TypeInfo_var))->set_currentStatus_2(1);
		// }
		return;
	}
}
// System.Void SceneController::.cctor()
extern "C"  void SceneController__cctor_m2985119817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SceneController__cctor_m2985119817_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static GameStatus currentStatus = GameStatus.Title;
		((SceneController_t2849316448_StaticFields*)il2cpp_codegen_static_fields_for(SceneController_t2849316448_il2cpp_TypeInfo_var))->set_currentStatus_2(0);
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
// System.Void SoundController::.ctor()
extern "C"  void SoundController__ctor_m919190390 (SoundController_t2462365417 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundController::PlaySound()
extern "C"  void SoundController_PlaySound_m4128028087 (SoundController_t2462365417 * __this, const RuntimeMethod* method)
{
	{
		// AudioSource.PlayClipAtPoint (sound, transform.position);
		AudioClip_t3680889665 * L_0 = __this->get_sound_2();
		// AudioSource.PlayClipAtPoint (sound, transform.position);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// AudioSource.PlayClipAtPoint (sound, transform.position);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		// AudioSource.PlayClipAtPoint (sound, transform.position);
		AudioSource_PlayClipAtPoint_m3293894611(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SoundController::PlaySound2()
extern "C"  void SoundController_PlaySound2_m1037078967 (SoundController_t2462365417 * __this, const RuntimeMethod* method)
{
	{
		// AudioSource.PlayClipAtPoint (soundSub1, transform.position);
		AudioClip_t3680889665 * L_0 = __this->get_soundSub1_3();
		// AudioSource.PlayClipAtPoint (soundSub1, transform.position);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		// AudioSource.PlayClipAtPoint (soundSub1, transform.position);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		// AudioSource.PlayClipAtPoint (soundSub1, transform.position);
		AudioSource_PlayClipAtPoint_m3293894611(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		// }
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
// System.Void StageManager::.ctor()
extern "C"  void StageManager__ctor_m3331623394 (StageManager_t3296066545 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StageManager::Start()
extern "C"  void StageManager_Start_m2166152772 (StageManager_t3296066545 * __this, const RuntimeMethod* method)
{
	{
		// clearText.SetActive (false);
		GameObject_t1113636619 * L_0 = __this->get_clearText_3();
		// clearText.SetActive (false);
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		// overText.SetActive (false);
		GameObject_t1113636619 * L_1 = __this->get_overText_4();
		// overText.SetActive (false);
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StageManager::Update()
extern "C"  void StageManager_Update_m448967036 (StageManager_t3296066545 * __this, const RuntimeMethod* method)
{
	{
		// CheckBlockNum ();
		// CheckBlockNum ();
		StageManager_CheckBlockNum_m2173459418(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StageManager::NextStage()
extern "C"  void StageManager_NextStage_m2693353284 (StageManager_t3296066545 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageManager_NextStage_m2693353284_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentStage++;
		IL2CPP_RUNTIME_CLASS_INIT(StageManager_t3296066545_il2cpp_TypeInfo_var);
		int32_t L_0 = ((StageManager_t3296066545_StaticFields*)il2cpp_codegen_static_fields_for(StageManager_t3296066545_il2cpp_TypeInfo_var))->get_currentStage_6();
		((StageManager_t3296066545_StaticFields*)il2cpp_codegen_static_fields_for(StageManager_t3296066545_il2cpp_TypeInfo_var))->set_currentStage_6(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// }
		return;
	}
}
// System.Void StageManager::CheckBlockNum()
extern "C"  void StageManager_CheckBlockNum_m2173459418 (StageManager_t3296066545 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageManager_CheckBlockNum_m2173459418_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// blockNum = GameObject.FindGameObjectsWithTag ("Block").Length;
		// blockNum = GameObject.FindGameObjectsWithTag ("Block").Length;
		GameObjectU5BU5D_t3328599146* L_0 = GameObject_FindGameObjectsWithTag_m2585173894(NULL /*static, unused*/, _stringLiteral424788472, /*hidden argument*/NULL);
		NullCheck(L_0);
		__this->set_blockNum_7((((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))));
		// scoreText.text = "Left:" + blockNum;
		Text_t1901882714 * L_1 = __this->get_scoreText_2();
		int32_t L_2 = __this->get_blockNum_7();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral3047682976, L_4, /*hidden argument*/NULL);
		// scoreText.text = "Left:" + blockNum;
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_5);
		// if(blockNum == 0) {
		int32_t L_6 = __this->get_blockNum_7();
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		// clearText.SetActive (true);
		GameObject_t1113636619 * L_7 = __this->get_clearText_3();
		// clearText.SetActive (true);
		NullCheck(L_7);
		GameObject_SetActive_m796801857(L_7, (bool)1, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// if (cm.GetStatus() == CameraManager.CameraStatus.Playing & GameObject.FindGameObjectsWithTag ("Ball").Length == 0) {
		CameraManager_t3272490737 * L_8 = __this->get_cm_5();
		// if (cm.GetStatus() == CameraManager.CameraStatus.Playing & GameObject.FindGameObjectsWithTag ("Ball").Length == 0) {
		NullCheck(L_8);
		int32_t L_9 = CameraManager_GetStatus_m3786155143(L_8, /*hidden argument*/NULL);
		// if (cm.GetStatus() == CameraManager.CameraStatus.Playing & GameObject.FindGameObjectsWithTag ("Ball").Length == 0) {
		GameObjectU5BU5D_t3328599146* L_10 = GameObject_FindGameObjectsWithTag_m2585173894(NULL /*static, unused*/, _stringLiteral1201842172, /*hidden argument*/NULL);
		NullCheck(L_10);
		if (!((int32_t)((int32_t)((((int32_t)L_9) == ((int32_t)2))? 1 : 0)&(int32_t)((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length))))) == ((int32_t)0))? 1 : 0))))
		{
			goto IL_007d;
		}
	}
	{
		// overText.SetActive (true);
		GameObject_t1113636619 * L_11 = __this->get_overText_4();
		// overText.SetActive (true);
		NullCheck(L_11);
		GameObject_SetActive_m796801857(L_11, (bool)1, /*hidden argument*/NULL);
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Boolean StageManager::isFinish()
extern "C"  bool StageManager_isFinish_m2487550001 (StageManager_t3296066545 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return blockNum == 0;
		int32_t L_0 = __this->get_blockNum_7();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void StageManager::.cctor()
extern "C"  void StageManager__cctor_m2616850515 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageManager__cctor_m2616850515_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static int currentStage = 1;
		((StageManager_t3296066545_StaticFields*)il2cpp_codegen_static_fields_for(StageManager_t3296066545_il2cpp_TypeInfo_var))->set_currentStage_6(1);
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
// System.Void StageTextManager::.ctor()
extern "C"  void StageTextManager__ctor_m1688130668 (StageTextManager_t1380114822 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StageTextManager::Start()
extern "C"  void StageTextManager_Start_m107767780 (StageTextManager_t1380114822 * __this, const RuntimeMethod* method)
{
	{
		// stageText.SetActive (true);
		GameObject_t1113636619 * L_0 = __this->get_stageText_2();
		// stageText.SetActive (true);
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)1, /*hidden argument*/NULL);
		// clearText.SetActive (false);
		GameObject_t1113636619 * L_1 = __this->get_clearText_3();
		// clearText.SetActive (false);
		NullCheck(L_1);
		GameObject_SetActive_m796801857(L_1, (bool)0, /*hidden argument*/NULL);
		// overText.SetActive (false);
		GameObject_t1113636619 * L_2 = __this->get_overText_4();
		// overText.SetActive (false);
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StageTextManager::ShowClear()
extern "C"  void StageTextManager_ShowClear_m337854032 (StageTextManager_t1380114822 * __this, const RuntimeMethod* method)
{
	{
		// clearText.SetActive (true);
		GameObject_t1113636619 * L_0 = __this->get_clearText_3();
		// clearText.SetActive (true);
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StageTextManager::ShowOver()
extern "C"  void StageTextManager_ShowOver_m1091829582 (StageTextManager_t1380114822 * __this, const RuntimeMethod* method)
{
	{
		// overText.SetActive (true);
		GameObject_t1113636619 * L_0 = __this->get_overText_4();
		// overText.SetActive (true);
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, (bool)1, /*hidden argument*/NULL);
		// }
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
// System.Void TitleCameraController::.ctor()
extern "C"  void TitleCameraController__ctor_m4267375646 (TitleCameraController_t331798842 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TitleCameraController::Start()
extern "C"  void TitleCameraController_Start_m473949826 (TitleCameraController_t331798842 * __this, const RuntimeMethod* method)
{
	{
		// }
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
// System.Void WallManager::.ctor()
extern "C"  void WallManager__ctor_m2705997716 (WallManager_t2004477583 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WallManager::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void WallManager_OnCollisionEnter_m2944439721 (WallManager_t2004477583 * __this, Collision_t4262080450 * ___coll0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WallManager_OnCollisionEnter_m2944439721_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.gameObject.GetComponent<SoundController> ().PlaySound ();
		// this.gameObject.GetComponent<SoundController> ().PlaySound ();
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		// this.gameObject.GetComponent<SoundController> ().PlaySound ();
		NullCheck(L_0);
		SoundController_t2462365417 * L_1 = GameObject_GetComponent_TisSoundController_t2462365417_m3930652079(L_0, /*hidden argument*/GameObject_GetComponent_TisSoundController_t2462365417_m3930652079_RuntimeMethod_var);
		// this.gameObject.GetComponent<SoundController> ().PlaySound ();
		NullCheck(L_1);
		SoundController_PlaySound_m4128028087(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
