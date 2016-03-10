Pod::Spec.new do |s|
  s.name             = "InfluxAPM"
  s.version          = "1.0.1"
  s.summary          = "InfluxAPM SDK gives instant, mobile performance monitoring."
  s.homepage         = "https://www.influxapm.com"
  s.license          = {"type" => "Commercial", "text" => "See https://www.influxapm.com"}
  s.author           = {"Vu Tran" => "vu0tran@gmail.com" , "Marcin Butanowicz" => "m.butan@gmail.com"}

  s.documentation_url = "https://www.influxapm.com/docs/getting_started"

  s.platform         = :ios, '8.0'
  s.requires_arc     = true
  s.source           = {:git => "https://github.com/slidemail/InfluxAPM.git", :tag => "1.0.1"}

  s.frameworks = 'Foundation', 'UIKit', 'CoreData', 'CoreTelephony', 'SystemConfiguration'

  s.preserve_paths      = "InfluxAPMSDK/InfluxAPM.framework", "scripts/*"
  s.public_header_files = "InfluxAPMSDK/InfluxAPM.framework/**/*.h"
  s.vendored_frameworks = "InfluxAPMSDK/InfluxAPM.framework"
  s.module_map = 'InfluxAPMSDK/InfluxAPM.framework/Modules/module.modulemap'
end
