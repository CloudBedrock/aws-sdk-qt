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

#include "getcrawlermetricsrequest.h"
#include "getcrawlermetricsrequest_p.h"
#include "getcrawlermetricsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetCrawlerMetricsRequest
 *
 * \brief The GetCrawlerMetricsRequest class encapsulates Glue GetCrawlerMetrics requests.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getCrawlerMetrics
 */

/*!
 * @brief  Constructs a new GetCrawlerMetricsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCrawlerMetricsRequest::GetCrawlerMetricsRequest(const GetCrawlerMetricsRequest &other)
    : GlueRequest(new GetCrawlerMetricsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetCrawlerMetricsRequest object.
 */
GetCrawlerMetricsRequest::GetCrawlerMetricsRequest()
    : GlueRequest(new GetCrawlerMetricsRequestPrivate(GlueRequest::GetCrawlerMetricsAction, this))
{

}

/*!
 * \reimp
 */
bool GetCrawlerMetricsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetCrawlerMetricsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCrawlerMetricsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCrawlerMetricsRequest::response(QNetworkReply * const reply) const
{
    return new GetCrawlerMetricsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetCrawlerMetricsRequestPrivate
 *
 * @brief  Private implementation for GetCrawlerMetricsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetCrawlerMetricsRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetCrawlerMetricsRequest instance.
 */
GetCrawlerMetricsRequestPrivate::GetCrawlerMetricsRequestPrivate(
    const GlueRequest::Action action, GetCrawlerMetricsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetCrawlerMetricsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCrawlerMetricsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCrawlerMetricsRequest instance.
 */
GetCrawlerMetricsRequestPrivate::GetCrawlerMetricsRequestPrivate(
    const GetCrawlerMetricsRequestPrivate &other, GetCrawlerMetricsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
