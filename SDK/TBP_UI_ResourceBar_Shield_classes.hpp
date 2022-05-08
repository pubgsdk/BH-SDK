#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UI_ResourceBar_Shield_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C
// 0x000C (0x03E0 - 0x03D4)
class UTBP_UI_ResourceBar_Shield_C : public UTBP_UI_ResourceBar_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient, CPF_UObjectWrapper)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C"));
		return ptr;
	}


	void OnInitialized();
	void OnShieldChanged(float InNewHealth, float InNewHealthPercentage);
	void ExecuteUbergraph_TBP_UI_ResourceBar_Shield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
