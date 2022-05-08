// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_WEP_Ability_Dash_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_WEP_Ability_Dash.TBP_WEP_Ability_Dash_C.OnCharacterHit
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class ATigerCharacter*         AHitTigerCharacter             (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_WEP_Ability_Dash_C::OnCharacterHit(class ATigerCharacter* AHitTigerCharacter)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_WEP_Ability_Dash.TBP_WEP_Ability_Dash_C.OnCharacterHit"));

	struct
	{
		class ATigerCharacter*         AHitTigerCharacter;
	} params = {};

	params.AHitTigerCharacter = AHitTigerCharacter;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_WEP_Ability_Dash.TBP_WEP_Ability_Dash_C.OnTerrainHitResult
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  InTerrainActor                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UPrimitiveComponent*     InHitComponent                 (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FHitResult              InHitResult                    (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ContainsInstancedReference)

void UTBP_WEP_Ability_Dash_C::OnTerrainHitResult(class AActor* InTerrainActor, class UPrimitiveComponent* InHitComponent, const struct FHitResult& InHitResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_WEP_Ability_Dash.TBP_WEP_Ability_Dash_C.OnTerrainHitResult"));

	struct
	{
		class AActor*                  InTerrainActor;
		class UPrimitiveComponent*     InHitComponent;
		struct FHitResult              InHitResult;
	} params = {};

	params.InTerrainActor = InTerrainActor;
	params.InHitComponent = InHitComponent;
	params.InHitResult = InHitResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_WEP_Ability_Dash.TBP_WEP_Ability_Dash_C.ExecuteUbergraph_TBP_WEP_Ability_Dash
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_WEP_Ability_Dash_C::ExecuteUbergraph_TBP_WEP_Ability_Dash(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_WEP_Ability_Dash.TBP_WEP_Ability_Dash_C.ExecuteUbergraph_TBP_WEP_Ability_Dash"));

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
