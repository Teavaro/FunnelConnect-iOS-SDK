// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "FunnelConnectSDK",
    platforms: [
        .iOS(.v12)
    ],
    products: [
        .library(
            name: "FunnelConnectSDK",
            targets: ["FunnelConnectSDK"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "FunnelConnectSDK",
            url: "https://github.com/Teavaro/FunnelConnectSDK_iOS/FunnelConnectSDK.zip",
            checksum: "66c55eeadd07e0aeb316110a02f7e69f88b2b52f964ed148df63e05f51f656d8"
        ),
    ]
)
