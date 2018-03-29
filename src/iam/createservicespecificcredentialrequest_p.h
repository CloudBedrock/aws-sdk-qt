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

#ifndef QTAWS_CREATESERVICESPECIFICCREDENTIALREQUEST_P_H
#define QTAWS_CREATESERVICESPECIFICCREDENTIALREQUEST_P_H

#include "iam_p.h"
#include "createservicespecificcredentialrequest.h"

namespace AWS {

namespace IAM {

class CreateServiceSpecificCredentialRequest;

class QTAWS_EXPORT CreateServiceSpecificCredentialRequestPrivate : public IAMPrivate {

public:
    CreateServiceSpecificCredentialRequestPrivate(const IAM::Action action,
                                   CreateServiceSpecificCredentialRequest * const q);
    CreateServiceSpecificCredentialRequestPrivate(const CreateServiceSpecificCredentialRequestPrivate &other,
                                   CreateServiceSpecificCredentialRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateServiceSpecificCredentialRequest)

};

} // namespace IAM
} // namespace AWS

#endif
