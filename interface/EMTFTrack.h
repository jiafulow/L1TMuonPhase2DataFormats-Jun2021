#ifndef DataFormats_L1TMuonPhase2_EMTFTrack_h
#define DataFormats_L1TMuonPhase2_EMTFTrack_h

#include <cstdint>
#include <vector>

namespace l1t {

  namespace phase2 {

    class EMTFTrack {
    public:
      EMTFTrack() : valid_(true) {}
      ~EMTFTrack() {}

    private:
      bool valid_;
    };

    typedef std::vector<EMTFTrack> EMTFTrackCollection;
  }  // namespace phase2

}  // namespace l1t

#endif  // DataFormats_L1TMuonPhase2_EMTFTrack_h not defined
