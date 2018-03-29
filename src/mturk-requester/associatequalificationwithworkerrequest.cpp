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

#include "associatequalificationwithworkerrequest.h"
#include "associatequalificationwithworkerrequest_p.h"
#include "associatequalificationwithworkerresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/**
 * @class  AssociateQualificationWithWorkerRequest
 *
 * @brief  Implements MTurk AssociateQualificationWithWorker requests.
 *
 * @see    MTurkClient::associateQualificationWithWorker
 */

/**
 * @brief  Constructs a new AssociateQualificationWithWorkerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateQualificationWithWorkerRequest::AssociateQualificationWithWorkerRequest(const AssociateQualificationWithWorkerRequest &other)
    : MTurkRequest(new AssociateQualificationWithWorkerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociateQualificationWithWorkerRequest object.
 */
AssociateQualificationWithWorkerRequest::AssociateQualificationWithWorkerRequest()
    : MTurkRequest(new AssociateQualificationWithWorkerRequestPrivate(MTurkRequest::AssociateQualificationWithWorkerAction, this))
{

}

bool AssociateQualificationWithWorkerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociateQualificationWithWorkerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateQualificationWithWorkerResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MTurkClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateQualificationWithWorkerRequest::response(QNetworkReply * const reply) const
{
    return new AssociateQualificationWithWorkerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociateQualificationWithWorkerRequestPrivate
 *
 * @brief  Private implementation for AssociateQualificationWithWorkerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateQualificationWithWorkerRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public AssociateQualificationWithWorkerRequest instance.
 */
AssociateQualificationWithWorkerRequestPrivate::AssociateQualificationWithWorkerRequestPrivate(
    const MTurkRequest::Action action, AssociateQualificationWithWorkerRequest * const q)
    : AssociateQualificationWithWorkerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociateQualificationWithWorkerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateQualificationWithWorkerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateQualificationWithWorkerRequest instance.
 */
AssociateQualificationWithWorkerRequestPrivate::AssociateQualificationWithWorkerRequestPrivate(
    const AssociateQualificationWithWorkerRequestPrivate &other, AssociateQualificationWithWorkerRequest * const q)
    : AssociateQualificationWithWorkerPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
