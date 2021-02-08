#pragma once

#include "Minecraft/World/Blocks/Block.h"

class BedrockBlock : public Block
{
public:
	BedrockBlock();

	virtual void addMesh(Chunk& chunk, BasicModel& model, RenderPass renderPass, const glm::ivec3& blockPos, BlockState* blockState) const override;
};
