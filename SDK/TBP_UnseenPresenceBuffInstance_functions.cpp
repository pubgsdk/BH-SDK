// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_UnseenPresenceBuffInstance_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_UnseenPresenceBuffInstance.TBP_UnseenPresenceBuffInstance_C.UpdateInvisibilityMaterial
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerPlayer*            Player                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UMaterialInstanceDynamic* MaterialInstance               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UnseenPresenceBuffInstance_C::UpdateInvisibilityMaterial(float DeltaTime, class ATigerPlayer* Player, class UMaterialInstanceDynamic* MaterialInstance)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UnseenPresenceBuffInstance.TBP_UnseenPresenceBuffInstance_C.UpdateInvisibilityMaterial"));

	struct
	{
		float                          DeltaTime;
		class ATigerPlayer*            Player;
		class UMaterialInstanceDynamic* MaterialInstance;
	} params = {};

	params.DeltaTime = DeltaTime;
	params.Player = Player;
	params.MaterialInstance = MaterialInstance;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TBP_UnseenPresenceBuffInstance.TBP_UnseenPresenceBuffInstance_C.ExecuteUbergraph_TBP_UnseenPresenceBuffInstance
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_UnseenPresenceBuffInstance_C::ExecuteUbergraph_TBP_UnseenPresenceBuffInstance(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_UnseenPresenceBuffInstance.TBP_UnseenPresenceBuffInstance_C.ExecuteUbergraph_TBP_UnseenPresenceBuffInstance"));

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
