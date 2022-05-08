#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_MatchMaker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_MatchMaker.TBP_MatchMaker_C
// 0x000C (0x011C - 0x0110)
class UTBP_MatchMaker_C : public UTigerInteractiveNpcComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0110(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	float                                              WelcomeSoundDelay;                                        // 0x0118(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_MatchMaker.TBP_MatchMaker_C"));
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void OnCountdownBegin();
	void OnTitleScreenClosed();
	void ExecuteUbergraph_TBP_MatchMaker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
