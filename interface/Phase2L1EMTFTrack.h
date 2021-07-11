#ifndef DataFormats_L1TMuonPhase2_Phase2L1EMTFTrack_h
#define DataFormats_L1TMuonPhase2_Phase2L1EMTFTrack_h

#include <array>
#include <cstdint>
#include <vector>

namespace l1t {

  class Phase2L1EMTFTrack {
  public:
    static const int num_segments = 12;
    typedef std::array<int16_t, num_segments> seg_ref_array_t;
    typedef std::array<bool, num_segments> seg_valid_array_t;

    Phase2L1EMTFTrack()
        : seg_ref_array_{},    // zero initialization
          seg_valid_array_{},  // zero initialization
          hw_pt_(0),
          hw_eta_(0),
          hw_phi_(0),
          hw_d0_(0),
          hw_z0_(0),
          hw_beta_(0),
          hw_charge_(0),
          hw_qual_(0),
          model_invpt_(0),
          model_phi_(0),
          model_eta_(0),
          model_d0_(0),
          model_z0_(0),
          model_beta_(0),
          model_qual_(0),
          emtf_pt_(0),
          emtf_mode_v1_(0),
          emtf_mode_v2_(0),
          endcap_(0),
          sector_(0),
          bx_(0),
          unconstrained_(false),
          valid_(false) {}

    ~Phase2L1EMTFTrack() {}

    // Setters
    void setSegRefArray(const seg_ref_array_t& aSegRefArray) { seg_ref_array_ = aSegRefArray; }
    void setSegValidArray(const seg_valid_array_t& aSegValidArray) { seg_valid_array_ = aSegValidArray; }
    void setHwPt(int32_t aHwPt) { hw_pt_ = aHwPt; }
    void setHwEta(int32_t aHwEta) { hw_eta_ = aHwEta; }
    void setHwPhi(int32_t aHwPhi) { hw_phi_ = aHwPhi; }
    void setHwD0(int16_t aHwD0) { hw_d0_ = aHwD0; }
    void setHwZ0(int16_t aHwZ0) { hw_z0_ = aHwZ0; }
    void setHwBeta(int16_t aHwBeta) { hw_beta_ = aHwBeta; }
    void setHwCharge(int16_t aHwCharge) { hw_charge_ = aHwCharge; }
    void setHwQual(int16_t aHwQual) { hw_qual_ = aHwQual; }
    void setModelInvpt(int32_t aModelInvpt) { model_invpt_ = aModelInvpt; }
    void setModelPhi(int32_t aModelPhi) { model_phi_ = aModelPhi; }
    void setModelEta(int32_t aModelEta) { model_eta_ = aModelEta; }
    void setModelD0(int16_t aModelD0) { model_d0_ = aModelD0; }
    void setModelZ0(int16_t aModelZ0) { model_z0_ = aModelZ0; }
    void setModelBeta(int16_t aModelBeta) { model_beta_ = aModelBeta; }
    void setModelQual(int16_t aModelQual) { model_qual_ = aModelQual; }
    void setEmtfPt(int32_t aEmtfPt) { emtf_pt_ = aEmtfPt; }
    void setEmtfModeV1(int16_t aEmtfModeV1) { emtf_mode_v1_ = aEmtfModeV1; }
    void setEmtfModeV2(int16_t aEmtfModeV2) { emtf_mode_v2_ = aEmtfModeV2; }
    void setEndcap(int16_t aEndcap) { endcap_ = aEndcap; }
    void setSector(int16_t aSector) { sector_ = aSector; }
    void setBx(int16_t aBx) { bx_ = aBx; }
    void setUnconstrained(bool aUnconstrained) { unconstrained_ = aUnconstrained; }
    void setValid(bool aValid) { valid_ = aValid; }

    // Getters
    const seg_ref_array_t& segRefArray() const { return seg_ref_array_; }
    const seg_valid_array_t& segValidArray() const { return seg_valid_array_; }
    int32_t hwPt() const { return hw_pt_; }
    int32_t hwEta() const { return hw_eta_; }
    int32_t hwPhi() const { return hw_phi_; }
    int16_t hwD0() const { return hw_d0_; }
    int16_t hwZ0() const { return hw_z0_; }
    int16_t hwBeta() const { return hw_beta_; }
    int16_t hwCharge() const { return hw_charge_; }
    int16_t hwQual() const { return hw_qual_; }
    int32_t modelInvpt() const { return model_invpt_; }
    int32_t modelPhi() const { return model_phi_; }
    int32_t modelEta() const { return model_eta_; }
    int16_t modelD0() const { return model_d0_; }
    int16_t modelZ0() const { return model_z0_; }
    int16_t modelBeta() const { return model_beta_; }
    int16_t modelQual() const { return model_qual_; }
    int32_t emtfPt() const { return emtf_pt_; }
    int16_t emtfModeV1() const { return emtf_mode_v1_; }
    int16_t emtfModeV2() const { return emtf_mode_v2_; }
    int16_t endcap() const { return endcap_; }
    int16_t sector() const { return sector_; }
    int16_t bx() const { return bx_; }
    bool unconstrained() const { return unconstrained_; }
    bool valid() const { return valid_; }

  private:
    seg_ref_array_t seg_ref_array_;
    seg_valid_array_t seg_valid_array_;
    int32_t hw_pt_;
    int32_t hw_eta_;
    int32_t hw_phi_;
    int16_t hw_d0_;
    int16_t hw_z0_;
    int16_t hw_beta_;
    int16_t hw_charge_;
    int16_t hw_qual_;
    int32_t model_invpt_;
    int32_t model_phi_;
    int32_t model_eta_;
    int16_t model_d0_;
    int16_t model_z0_;
    int16_t model_beta_;
    int16_t model_qual_;
    int32_t emtf_pt_;
    int16_t emtf_mode_v1_;
    int16_t emtf_mode_v2_;
    int16_t endcap_;
    int16_t sector_;
    int16_t bx_;
    bool unconstrained_;
    bool valid_;
  };

  typedef std::vector<Phase2L1EMTFTrack> Phase2L1EMTFTrackCollection;

}  // namespace l1t

#endif  // DataFormats_L1TMuonPhase2_Phase2L1EMTFTrack_h not defined
