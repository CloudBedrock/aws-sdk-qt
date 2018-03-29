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

#ifndef QTAWS_DELETERULEGROUPREQUEST_P_H
#define QTAWS_DELETERULEGROUPREQUEST_P_H

#include "wafregional_p.h"
#include "deleterulegrouprequest.h"

namespace QtAws {
namespace WAFRegional {

class DeleteRuleGroupRequest;

class QTAWS_EXPORT DeleteRuleGroupRequestPrivate : public WAFRegionalPrivate {

public:
    DeleteRuleGroupRequestPrivate(const WAFRegional::Action action,
                                   DeleteRuleGroupRequest * const q);
    DeleteRuleGroupRequestPrivate(const DeleteRuleGroupRequestPrivate &other,
                                   DeleteRuleGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRuleGroupRequest)

};

} // namespace WAFRegional
} // namespace QtAws

#endif
