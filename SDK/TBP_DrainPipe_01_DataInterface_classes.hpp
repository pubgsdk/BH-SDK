#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_DrainPipe_01_DataInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_DrainPipe_01_DataInterface.TBP_DrainPipe_01_DataInterface_C
// 0x0000 (0x0028 - 0x0028)
class UTBP_DrainPipe_01_DataInterface_C : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_DrainPipe_01_DataInterface.TBP_DrainPipe_01_DataInterface_C"));
		return ptr;
	}


	void GetStickers(class UStaticMesh** OutMesh);
	void GetLongMesh(TEnumAsByte<E_DrainPipes_01> InType, class UStaticMesh** OutMesh);
	void GetBottomMesh(int InIndex, TEnumAsByte<E_DrainPipes_01> InType, class UStaticMesh** OutMesh);
	void GetMiddleMesh(int InIndex, TEnumAsByte<E_DrainPipes_01> InType, class UStaticMesh** OutMesh);
	void GetTopMesh(int InIndex, TEnumAsByte<E_DrainPipes_01> InType, bool InEnableTopPiece, class UStaticMesh** OutMesh);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
