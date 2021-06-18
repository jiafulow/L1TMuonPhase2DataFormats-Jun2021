#ifndef DataFormats_L1TMuonPhase2_Phase2L1EMTFTrack_h
#define DataFormats_L1TMuonPhase2_Phase2L1EMTFTrack_h

#include <cstdint>
#include <vector>

namespace l1t {

  class Phase2L1EMTFTrack {
  public:
    Phase2L1EMTFTrack() : valid_(true) {}
    ~Phase2L1EMTFTrack() {}

  private:
    bool valid_;
  };

  typedef std::vector<Phase2L1EMTFTrack> Phase2L1EMTFTrackCollection;

}  // namespace l1t

#endif  // DataFormats_L1TMuonPhase2_Phase2L1EMTFTrack_h not defined
