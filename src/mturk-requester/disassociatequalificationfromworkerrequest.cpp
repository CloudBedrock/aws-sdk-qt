/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "disassociatequalificationfromworkerrequest.h"
#include "disassociatequalificationfromworkerrequest_p.h"
#include "disassociatequalificationfromworkerresponse.h"
#include "mturkrequest_p.h"

namespace AWS {
namespace MTurk {

/**
 * @class  DisassociateQualificationFromWorkerRequest
 *
 * @brief  Implements MTurk DisassociateQualificationFromWorker requests.
 *
 * @see    MTurkClient::disassociateQualificationFromWorker
 */

/**
 * @brief  Constructs a new DisassociateQualificationFromWorkerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateQualificationFromWorkerResponse::DisassociateQualificationFromWorkerResponse(

/**
 * @brief  Constructs a new DisassociateQualificationFromWorkerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociateQualificationFromWorkerRequest::DisassociateQualificationFromWorkerRequest(const DisassociateQualificationFromWorkerRequest &other)
    : MTurkRequest(new DisassociateQualificationFromWorkerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisassociateQualificationFromWorkerRequest object.
 */
DisassociateQualificationFromWorkerRequest::DisassociateQualificationFromWorkerRequest()
    : MTurkRequest(new DisassociateQualificationFromWorkerRequestPrivate(MTurkRequest::DisassociateQualificationFromWorkerAction, this))
{

}

bool DisassociateQualificationFromWorkerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisassociateQualificationFromWorkerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociateQualificationFromWorkerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MTurkClient::send
 */
AwsAbstractResponse * DisassociateQualificationFromWorkerRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateQualificationFromWorkerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisassociateQualificationFromWorkerRequestPrivate
 *
 * @brief  Private implementation for DisassociateQualificationFromWorkerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateQualificationFromWorkerRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public DisassociateQualificationFromWorkerRequest instance.
 */
DisassociateQualificationFromWorkerRequestPrivate::DisassociateQualificationFromWorkerRequestPrivate(
    const MTurkRequest::Action action, DisassociateQualificationFromWorkerRequest * const q)
    : DisassociateQualificationFromWorkerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateQualificationFromWorkerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociateQualificationFromWorkerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociateQualificationFromWorkerRequest instance.
 */
DisassociateQualificationFromWorkerRequestPrivate::DisassociateQualificationFromWorkerRequestPrivate(
    const DisassociateQualificationFromWorkerRequestPrivate &other, DisassociateQualificationFromWorkerRequest * const q)
    : DisassociateQualificationFromWorkerPrivate(other, q)
{

}

} // namespace MTurk
} // namespace AWS
