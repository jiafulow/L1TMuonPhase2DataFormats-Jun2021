#ifndef DataFormats_L1TMuonPhase2_Phase2L1EMTFHit_h
#define DataFormats_L1TMuonPhase2_Phase2L1EMTFHit_h

#include <cstdint>
#include <vector>

namespace l1t {

  class Phase2L1EMTFHit {
  public:
    Phase2L1EMTFHit() : valid_(true) {}
    ~Phase2L1EMTFHit() {}

  private:
    bool valid_;
  };

  typedef std::vector<Phase2L1EMTFHit> Phase2L1EMTFHitCollection;

}  // namespace l1t

#endif  // DataFormats_L1TMuonPhase2_Phase2L1EMTFHit_h not defined
