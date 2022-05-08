// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Trap_Aim_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_Trap_Aim.TBP_Trap_Aim_C.IsCharacterFriendlyWithDisciplineCaster
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         OtherCharacter                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Is_Friendly                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ATBP_Trap_Aim_C::IsCharacterFriendlyWithDisciplineCaster(class ATigerCharacter* OtherCharacter, bool* Is_Friendly)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Trap_Aim.TBP_Trap_Aim_C.IsCharacterFriendlyWithDisciplineCaster"));

	struct
	{
		class ATigerCharacter*         OtherCharacter;
		bool                           Is_Friendly;
	} params = {};

	params.OtherCharacter = OtherCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Is_Friendly != nullptr)
		*Is_Friendly = params.Is_Friendly;
}


// Function TBP_Trap_Aim.TBP_Trap_Aim_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ATBP_Trap_Aim_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Trap_Aim.TBP_Trap_Aim_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_Trap_Aim.TBP_Trap_Aim_C.ExecuteUbergraph_TBP_Trap_Aim
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ATBP_Trap_Aim_C::ExecuteUbergraph_TBP_Trap_Aim(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_Trap_Aim.TBP_Trap_Aim_C.ExecuteUbergraph_TBP_Trap_Aim"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
