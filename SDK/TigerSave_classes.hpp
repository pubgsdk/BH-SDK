#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TigerSave_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TigerSave.TigerSaveSubSystem
// 0x0008 (0x0038 - 0x0030)
class UTigerSaveSubSystem : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TigerSave.TigerSaveSubSystem"));
		return ptr;
	}


	void OnSavingStarted();
	void OnSavingComplete(bool InResult);
	void OnLoadingStarted();
	void OnLoadingComplete(bool InResult);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
