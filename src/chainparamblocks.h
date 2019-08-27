// Copyright (c) 2019 The Gocoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef GOCOIN_CHAINPARAMBLOCKS_H
#define GOCOIN_CHAINPARAMBLOCKS_H

#include <string>
#include <vector>
#include <memory>

class GamecoinBlocks
{
public:
    static std::shared_ptr<std::vector<std::pair<int64_t, std::string> > > transactions(int blockNumber)
    {
        switch(blockNumber)
        {
        case 1: return transactions_block_one();
        case 2: return transactions_block_two();
        case 3: return transactions_block_three();
        case 4: return transactions_block_four();
        case 5: return transactions_block_five();
        case 6: return transactions_block_six();
        case 7: return transactions_block_seven();
        case 8: return transactions_block_eight();
        case 9: return transactions_block_nine();
        case 10: return transactions_block_ten();
        default: return nullptr;
        }
    }
private:
    static std::shared_ptr<std::vector<std::pair<int64_t, std::string> > > transactions_block_one();
    static std::shared_ptr<std::vector<std::pair<int64_t, std::string> > > transactions_block_two();
    static std::shared_ptr<std::vector<std::pair<int64_t, std::string> > > transactions_block_three();
    static std::shared_ptr<std::vector<std::pair<int64_t, std::string> > > transactions_block_four();
    static std::shared_ptr<std::vector<std::pair<int64_t, std::string> > > transactions_block_five();
    static std::shared_ptr<std::vector<std::pair<int64_t, std::string> > > transactions_block_six();
    static std::shared_ptr<std::vector<std::pair<int64_t, std::string> > > transactions_block_seven();
    static std::shared_ptr<std::vector<std::pair<int64_t, std::string> > > transactions_block_eight();
    static std::shared_ptr<std::vector<std::pair<int64_t, std::string> > > transactions_block_nine();
    static std::shared_ptr<std::vector<std::pair<int64_t, std::string> > > transactions_block_ten();
};

#endif // GOCOIN_CHAINPARAMBLOCKS_H
