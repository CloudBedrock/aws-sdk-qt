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

#include "describeseveritylevelsrequest.h"
#include "describeseveritylevelsrequest_p.h"
#include "describeseveritylevelsresponse.h"
#include "supportrequest_p.h"

namespace AWS {
namespace Support {

/**
 * @class  DescribeSeverityLevelsRequest
 *
 * @brief  Implements Support DescribeSeverityLevels requests.
 *
 * @see    SupportClient::describeSeverityLevels
 */

/**
 * @brief  Constructs a new DescribeSeverityLevelsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeSeverityLevelsResponse::DescribeSeverityLevelsResponse(

/**
 * @brief  Constructs a new DescribeSeverityLevelsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeSeverityLevelsRequest::DescribeSeverityLevelsRequest(const DescribeSeverityLevelsRequest &other)
    : SupportRequest(new DescribeSeverityLevelsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeSeverityLevelsRequest object.
 */
DescribeSeverityLevelsRequest::DescribeSeverityLevelsRequest()
    : SupportRequest(new DescribeSeverityLevelsRequestPrivate(SupportRequest::DescribeSeverityLevelsAction, this))
{

}

bool DescribeSeverityLevelsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeSeverityLevelsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeSeverityLevelsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SupportClient::send
 */
AwsAbstractResponse * DescribeSeverityLevelsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSeverityLevelsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeSeverityLevelsRequestPrivate
 *
 * @brief  Private implementation for DescribeSeverityLevelsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSeverityLevelsRequestPrivate object.
 *
 * @param  action  Support action being performed.
 * @param  q       Pointer to this object's public DescribeSeverityLevelsRequest instance.
 */
DescribeSeverityLevelsRequestPrivate::DescribeSeverityLevelsRequestPrivate(
    const SupportRequest::Action action, DescribeSeverityLevelsRequest * const q)
    : DescribeSeverityLevelsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSeverityLevelsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeSeverityLevelsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeSeverityLevelsRequest instance.
 */
DescribeSeverityLevelsRequestPrivate::DescribeSeverityLevelsRequestPrivate(
    const DescribeSeverityLevelsRequestPrivate &other, DescribeSeverityLevelsRequest * const q)
    : DescribeSeverityLevelsPrivate(other, q)
{

}

} // namespace Support
} // namespace AWS
