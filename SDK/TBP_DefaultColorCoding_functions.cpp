// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_DefaultColorCoding_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TBP_DefaultColorCoding.TBP_DefaultColorCoding_C.ExecutePostSpawnStrategy
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_Const)
// Parameters:
// class UParticleSystemComponent* InParticleToExecuteOn          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class ATigerCharacter*         InParticleInstigator           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UTBP_DefaultColorCoding_C::ExecutePostSpawnStrategy(class UParticleSystemComponent* InParticleToExecuteOn, class ATigerCharacter* InParticleInstigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TBP_DefaultColorCoding.TBP_DefaultColorCoding_C.ExecutePostSpawnStrategy"));

	struct
	{
		class UParticleSystemComponent* InParticleToExecuteOn;
		class ATigerCharacter*         InParticleInstigator;
	} params = {};

	params.InParticleToExecuteOn = InParticleToExecuteOn;
	params.InParticleInstigator = InParticleInstigator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
