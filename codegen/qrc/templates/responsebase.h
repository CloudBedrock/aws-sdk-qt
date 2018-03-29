{% include "license.txt" %}
#ifndef QTAWS_{{ClassName|upper}}_H
#define QTAWS_{{ClassName|upper}}_H

#include "core/awsabstractresponse.h"
//#include "@todo-error.h"

namespace QtAws {
namespace {{NameSpaceName}} {

class {{ClassName}}Private;

class QTAWS_EXPORT {{ClassName}} : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    {{ClassName}}(QObject * const parent = 0);

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE({{ClassName}})
    Q_DISABLE_COPY({{ClassName}})

};

} // namespace {{NameSpaceName}}
} // namespace QtAws

#endif
