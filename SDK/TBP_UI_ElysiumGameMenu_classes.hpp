#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ElysiumGameMenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_ElysiumGameMenu.TBP_UI_ElysiumGameMenu_C
// 0x0016 (0x03A0 - 0x038A)
class UTBP_UI_ElysiumGameMenu_C : public UTBP_UI_MenuContainer_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x038A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0390(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)
	struct FTimerHandle                                SystemMenuTimerHandle;                                    // 0x0398(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_ElysiumGameMenu.TBP_UI_ElysiumGameMenu_C"));
		return ptr;
	}


	void UnbindForceClose();
	void BindForceClose();
	void MessageElysiumMenuChangeInterface();
	void OnCurrencyButtonReleased();
	void ToggleSocialMenu();
	void CreatePlayerInfoWidget();
	void InitializePlayerInfomation(class ATigerPlayerController* PlayerController);
	void PreConstruct(bool IsDesignTime);
	void OnBackgroundShown();
	void Construct();
	void OnMenuSelected();
	void OnOpen();
	void CloseMenu();
	void OnClose();
	void PrepareOpenSettings();
	void OpenSettings();
	void ExecuteUbergraph_TBP_UI_ElysiumGameMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
