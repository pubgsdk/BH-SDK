#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_PingIcon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_PingIcon.TBP_UI_PingIcon_C
// 0x0044 (0x0318 - 0x02D4)
class UTBP_UI_PingIcon_C : public UTBP_UI_PingInstance_Inner_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UWidgetAnimation*                            OnPingAnim;                                               // 0x02E0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UImage*                                      BG_Dot_Border;                                            // 0x02E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      BG_Dot_Dark;                                              // 0x02F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UOverlay*                                    Icon_Overlay;                                             // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      IconWidget;                                               // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      IconWidget_Animated;                                      // 0x0308(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FVector2D                                   ImageSizeMultiplier;                                      // 0x0310(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_PingIcon.TBP_UI_PingIcon_C"));
		return ptr;
	}


	void SetPingIcons(class UTexture2D* BG_Texture, class UTexture2D* Border_Texture, const struct FVector2D& Ping_Size, const struct FVector2D& Icon_Offset, const struct FVector2D& ImageSizeMultiplier);
	void GetHorizontalIconOffset(float* OutIconOffset);
	void GetVerticalIconOffset(float* OutIconOffset);
	void OnPingDataUpdated(class UTigerPingClientData* InPingData);
	void ExecuteUbergraph_TBP_UI_PingIcon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
