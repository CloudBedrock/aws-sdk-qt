/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DELETESQLINJECTIONMATCHSETREQUEST_P_H
#define QTAWS_DELETESQLINJECTIONMATCHSETREQUEST_P_H

#include "waf_p.h"
#include "deletesqlinjectionmatchsetrequest.h"

namespace AWS {

namespace WAF {

class DeleteSqlInjectionMatchSetRequest;

class QTAWS_EXPORT DeleteSqlInjectionMatchSetRequestPrivate : public WAFPrivate {

public:
    DeleteSqlInjectionMatchSetRequestPrivate(const WAF::Action action,
                                   DeleteSqlInjectionMatchSetRequest * const q);
    DeleteSqlInjectionMatchSetRequestPrivate(const DeleteSqlInjectionMatchSetRequestPrivate &other,
                                   DeleteSqlInjectionMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSqlInjectionMatchSetRequest)

};

} // namespace WAF
} // namespace AWS

#endif
