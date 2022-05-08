#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_DrainPipe_01_Data_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_DrainPipe_01_Data.TBP_DrainPipe_01_Data_C
// 0x00D8 (0x0100 - 0x0028)
class UTBP_DrainPipe_01_Data_C : public UTBP_DrainPipe_01_DataInterface_C
{
public:
	TArray<TSoftObjectPtr<class UStaticMesh>>          MetalTopMeshes;                                           // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<TSoftObjectPtr<class UStaticMesh>>          PaintedTopMeshes;                                         // 0x0038(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<TSoftObjectPtr<class UStaticMesh>>          MetalBottomMeshes;                                        // 0x0048(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<TSoftObjectPtr<class UStaticMesh>>          PaintedBottomMeshes;                                      // 0x0058(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<TSoftObjectPtr<class UStaticMesh>>          MetalMiddleMeshes;                                        // 0x0068(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TArray<TSoftObjectPtr<class UStaticMesh>>          PaintedMiddleMeshes;                                      // 0x0078(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	TSoftObjectPtr<class UStaticMesh>                  MetalLongMesh;                                            // 0x0088(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>                  PaintedLongMesh;                                          // 0x00B0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class UStaticMesh>                  Stickers;                                                 // 0x00D8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_DrainPipe_01_Data.TBP_DrainPipe_01_Data_C"));
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
