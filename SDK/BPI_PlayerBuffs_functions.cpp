// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BPI_PlayerBuffs_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_PlayerBuffs.BPI_PlayerBuffs_C.IncrementFeedingBloodIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UBPI_PlayerBuffs_C::IncrementFeedingBloodIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BPI_PlayerBuffs.BPI_PlayerBuffs_C.IncrementFeedingBloodIndex"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
