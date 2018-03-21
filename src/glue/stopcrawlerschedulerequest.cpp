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

#include "stopcrawlerschedulerequest.h"
#include "stopcrawlerschedulerequest_p.h"
#include "stopcrawlerscheduleresponse.h"
#include "gluerequest_p.h"

namespace AWS {
namespace Glue {

/**
 * @class  StopCrawlerScheduleRequest
 *
 * @brief  Implements Glue StopCrawlerSchedule requests.
 *
 * @see    GlueClient::stopCrawlerSchedule
 */

/**
 * @brief  Constructs a new StopCrawlerScheduleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopCrawlerScheduleResponse::StopCrawlerScheduleResponse(

/**
 * @brief  Constructs a new StopCrawlerScheduleRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StopCrawlerScheduleRequest::StopCrawlerScheduleRequest(const StopCrawlerScheduleRequest &other)
    : GlueRequest(new StopCrawlerScheduleRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StopCrawlerScheduleRequest object.
 */
StopCrawlerScheduleRequest::StopCrawlerScheduleRequest()
    : GlueRequest(new StopCrawlerScheduleRequestPrivate(GlueRequest::StopCrawlerScheduleAction, this))
{

}

bool StopCrawlerScheduleRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StopCrawlerScheduleResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StopCrawlerScheduleResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GlueClient::send
 */
AwsAbstractResponse * StopCrawlerScheduleRequest::response(QNetworkReply * const reply) const
{
    return new StopCrawlerScheduleResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StopCrawlerScheduleRequestPrivate
 *
 * @brief  Private implementation for StopCrawlerScheduleRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopCrawlerScheduleRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public StopCrawlerScheduleRequest instance.
 */
StopCrawlerScheduleRequestPrivate::StopCrawlerScheduleRequestPrivate(
    const GlueRequest::Action action, StopCrawlerScheduleRequest * const q)
    : StopCrawlerSchedulePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StopCrawlerScheduleRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StopCrawlerScheduleRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StopCrawlerScheduleRequest instance.
 */
StopCrawlerScheduleRequestPrivate::StopCrawlerScheduleRequestPrivate(
    const StopCrawlerScheduleRequestPrivate &other, StopCrawlerScheduleRequest * const q)
    : StopCrawlerSchedulePrivate(other, q)
{

}

} // namespace Glue
} // namespace AWS
