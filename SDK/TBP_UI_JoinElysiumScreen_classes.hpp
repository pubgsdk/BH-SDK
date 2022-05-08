#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_JoinElysiumScreen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_JoinElysiumScreen.TBP_UI_JoinElysiumScreen_C
// 0x01C0 (0x0458 - 0x0298)
class UTBP_UI_JoinElysiumScreen_C : public UTigerMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0298(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	class UTBP_UI_MenuButton_C*                        ExitButton;                                               // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UThrobber*                                   LoadingThrobber;                                          // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_BasicMenu_C*                         TBP_UI_BasicMenu;                                         // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_UI_MenuButton_C*                        TryAgainButton;                                           // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UTBP_TigerGameInstance_C*                    GameInstanceRef;                                          // 0x02C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	TArray<struct FBlueprintSessionResult>             FoundSessions;                                            // 0x02C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	ESlateVisibility                                   ThrobberVisibility;                                       // 0x02D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02D9(0x0007) MISSED OFFSET
	struct FText                                       TitleText;                                                // 0x02E0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	ESlateVisibility                                   ButtonVisibility;                                         // 0x02F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x7];                                       // 0x02F9(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnFailed;                                                 // 0x0300(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnSuccess;                                                // 0x0310(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FTigerBpFindSessionSelectedSession          SelectedSession;                                          // 0x0320(0x0110) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FTigerBpFindSessionResultList               FindSessionResult;                                        // 0x0430(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_JoinElysiumScreen.TBP_UI_JoinElysiumScreen_C"));
		return ptr;
	}


	void FindGameInstanceRef();
	void OnFailed_10BF259245486274DC90C3B7AE437352();
	void OnSuccess_10BF259245486274DC90C3B7AE437352();
	void SettingSynced_F95FAD0F48C795AF230049987EB22298();
	void OnFailed_B79352584D3062EBF33DB3966139E5BC();
	void OnSuccess_B79352584D3062EBF33DB3966139E5BC(const struct FTigerBpFindSessionResultList& Result);
	void Search();
	void BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_25_OnClicked__DelegateSignature();
	void BndEvt__TBP_UI_MenuButton_C_0_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature();
	void OnServerSelected(const struct FTigerBpFindSessionSelectedSession& Session);
	void OnCancel();
	void Construct();
	void SetupUiForSearch();
	void HandleFailure();
	void OnCreateGameSessionFailed();
	void ExecuteUbergraph_TBP_UI_JoinElysiumScreen(int EntryPoint);
	void OnSuccess__DelegateSignature();
	void OnFailed__DelegateSignature(const struct FString& ErrorString);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
