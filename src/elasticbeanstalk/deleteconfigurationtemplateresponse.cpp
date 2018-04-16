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

#include "deleteconfigurationtemplateresponse.h"
#include "deleteconfigurationtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticBeanstalk {

/*!
 * \class QtAws::ElasticBeanstalk::DeleteConfigurationTemplateResponse
 *
 * \brief The DeleteConfigurationTemplateResponse class encapsulates ElasticBeanstalk DeleteConfigurationTemplate responses.
 *
 * \ingroup ElasticBeanstalk
 *
 *  <fullname>AWS Elastic Beanstalk</fullname>
 * 
 *  AWS Elastic Beanstalk makes it easy for you to create, deploy, and manage scalable, fault-tolerant applications running
 *  on the Amazon Web Services
 * 
 *  cloud>
 * 
 *  For more information about this product, go to the <a href="http://aws.amazon.com/elasticbeanstalk/">AWS Elastic
 *  Beanstalk</a> details page. The location of the latest AWS Elastic Beanstalk WSDL is <a
 *  href="http://elasticbeanstalk.s3.amazonaws.com/doc/2010-12-01/AWSElasticBeanstalk.wsdl">http://elasticbeanstalk.s3.amazonaws.com/doc/2010-12-01/AWSElasticBeanstalk.wsdl</a>.
 *  To install the Software Development Kits (SDKs), Integrated Development Environment (IDE) Toolkits, and command line
 *  tools that enable you to access the API, go to <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 * 
 *  Services</a>>
 * 
 *  <b>Endpoints</b>
 * 
 *  </p
 * 
 *  For a list of region-specific endpoints that AWS Elastic Beanstalk supports, go to <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elasticbeanstalk_region">Regions and Endpoints</a> in the
 *  <i>Amazon Web Services
 *
 * \sa ElasticBeanstalkClient::deleteConfigurationTemplate
 */

/*!
 * @brief  Constructs a new DeleteConfigurationTemplateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteConfigurationTemplateResponse::DeleteConfigurationTemplateResponse(
        const DeleteConfigurationTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new DeleteConfigurationTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteConfigurationTemplateRequest(request));
    setReply(reply);
}

const DeleteConfigurationTemplateRequest * DeleteConfigurationTemplateResponse::request() const
{
    Q_D(const DeleteConfigurationTemplateResponse);
    return static_cast<const DeleteConfigurationTemplateRequest *>(d->request);
}

/*!
 * @brief  Parse a ElasticBeanstalk DeleteConfigurationTemplate response.
 *
 * @param  response  Response to parse.
 */
void DeleteConfigurationTemplateResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteConfigurationTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteConfigurationTemplateResponsePrivate
 *
 * \brief Private implementation for DeleteConfigurationTemplateResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteConfigurationTemplateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteConfigurationTemplateResponse instance.
 */
DeleteConfigurationTemplateResponsePrivate::DeleteConfigurationTemplateResponsePrivate(
    DeleteConfigurationTemplateResponse * const q) : ElasticBeanstalkResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ElasticBeanstalk DeleteConfigurationTemplateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteConfigurationTemplateResponsePrivate::parseDeleteConfigurationTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConfigurationTemplateResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace QtAws
