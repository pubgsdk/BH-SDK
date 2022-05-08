#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_InputBinding_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_InputBinding.TBP_UI_InputBinding_C
// 0x0078 (0x02F8 - 0x0280)
class UTBP_UI_InputBinding_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UTigerStyledRichTextBlock*                   ActionName_Text;                                          // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   CurrentBind_Text;                                         // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Highlight;                                                // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UInputKeySelector*                           InputKey;                                                 // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	int                                                ActionMappingIndex;                                       // 0x02A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02AC(0x0004) MISSED OFFSET
	class UTBP_UI_InputBindingCollection_C*            ParentCollection;                                         // 0x02B0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               bIsSelected;                                              // 0x02B8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02B9(0x0003) MISSED OFFSET
	float                                              SelectedTextOpacity;                                      // 0x02BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              NotSelectedTextOpacity;                                   // 0x02C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       CurrentActionName;                                        // 0x02C4(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02CC(0x0004) MISSED OFFSET
	struct FKey                                        CurrentKey;                                               // 0x02D0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	float                                              AxisScale;                                                // 0x02E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               CurrentIsAxis;                                            // 0x02EC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bAllowKeyboardKeys;                                       // 0x02ED(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               bAllowGamepadKeys;                                        // 0x02EE(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x1];                                       // 0x02EF(0x0001) MISSED OFFSET
	class UTBP_UI_SystemMenuKeybindings_C*             ParentMenuWidget;                                         // 0x02F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_InputBinding.TBP_UI_InputBinding_C"));
		return ptr;
	}


	void SetAxisMapping(int ActionMappingIndex, const struct FInputAxisKeyMapping& UserAxisMapping);
	void SetActionMapping(int ActionMappingIndex, const struct FInputActionKeyMapping& UserActionMapping);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__InputKey_K2Node_ComponentBoundEvent_126_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
	void Construct();
	void BndEvt__InputKey_K2Node_ComponentBoundEvent_46_OnIsSelectingKeyChanged__DelegateSignature();
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_TBP_UI_InputBinding(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
