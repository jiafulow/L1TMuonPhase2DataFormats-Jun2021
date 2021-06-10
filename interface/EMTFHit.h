#ifndef DataFormats_L1TMuonPhase2_EMTFHit_h
#define DataFormats_L1TMuonPhase2_EMTFHit_h

#include <cstdint>
#include <vector>

namespace l1t {

  namespace phase2 {

    class EMTFHit {
    public:
      EMTFHit() : valid_(true) {}
      ~EMTFHit() {}

    private:
      bool valid_;
    };

    typedef std::vector<EMTFHit> EMTFHitCollection;
  }  // namespace phase2

}  // namespace l1t

#endif  // DataFormats_L1TMuonPhase2_EMTFHit_h not defined
