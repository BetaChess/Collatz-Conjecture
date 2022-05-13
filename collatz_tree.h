#ifndef PHM_COLLATZ_TREE_H
#define PHM_COLLATZ_TREE_H

#include "phm_model.h"


class CollatzTree
{
public:
	CollatzTree();


private:
	std::vector<phm::PhmModel::Vertex> vertices_{};
	std::vector<uint32_t> indices_{};

};


#endif /* PHM_COLLATZ_TREE_H */
