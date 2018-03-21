{% include "license.txt" %}
#ifndef QTAWS_{{ClassName|upper}}_P_H
#define QTAWS_{{ClassName|upper}}_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace AWS {
namespace {{NameSpaceName}} {

class {{ClassName}};

class QTAWS_EXPORT {{ClassName}}Private : public AwsAbstractClientPrivate {

public:
    {{ClassName}}Private({{ClassName}} * const q);

private:
    Q_DECLARE_PUBLIC({{ClassName}})
    Q_DISABLE_COPY({{ClassName}}Private)

};

} // namespace {{NameSpaceName}}
} // namespace AWS

#endif
